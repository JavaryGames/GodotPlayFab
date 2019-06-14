package org.godotengine.godot;

import android.app.Activity;
import android.os.Build;
import android.util.Log;

import com.godot.game.BuildConfig;
import com.playfab.PlayFabErrors.*;
import com.playfab.PlayFabSettings;
import com.playfab.PlayFabClientModels.*;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.FutureTask;

import static com.playfab.PlayFabClientAPI.GetPlayerStatisticsAsync;
import static com.playfab.PlayFabClientAPI.GetUserDataAsync;
import static com.playfab.PlayFabClientAPI.LinkAndroidDeviceIDAsync;
import static com.playfab.PlayFabClientAPI.LinkFacebookAccountAsync;
import static com.playfab.PlayFabClientAPI.LoginWithAndroidDeviceIDAsync;
import static com.playfab.PlayFabClientAPI.LoginWithFacebookAsync;
import static com.playfab.PlayFabClientAPI.UpdatePlayerStatisticsAsync;
import static com.playfab.PlayFabClientAPI.UpdateUserDataAsync;

public class PlayFab extends Godot.SingletonBase {
    private static boolean _running = true;

    private Godot activity;
    private static int instanceId = 0;
    private final ExecutorService threadPool;

    static public Godot.SingletonBase initialize(Activity p_activity) {
        return new PlayFab(p_activity);
    }

    public PlayFab(Activity p_activity) {
        registerClass("PlayFab", new String[]{
                "login", "init", "setUserData", "getUserData", "getPlayerStatistic", "setPlayerStatistic",
                "linkAndroidDeviceId", "linkFacebookAccount", "loginWithFacebook", "loginWithAndroidDeviceId"
        });

        activity = (Godot) p_activity;
        threadPool = Executors.newFixedThreadPool(1);
    }

    public void init(int instanceId, String titleId) {
        PlayFab.instanceId = instanceId;
        PlayFabSettings.TitleId = titleId;
    }

    public void loginWithFacebook(String accessToken) {
        LoginWithFacebookRequest request = new LoginWithFacebookRequest();
        request.CreateAccount = true;
        request.AccessToken = accessToken;
        request.TitleId = PlayFabSettings.TitleId;

        treatResult(LoginWithFacebookAsync(request), "playfab_facebook_login_failed", new ResultRunnable<LoginResult>() {
            @Override
            public void run(LoginResult result) {
                GodotLib.calldeferred(instanceId, "playfab_facebook_login_successful", new Object[]{});
            }
        });
    }

    public void loginWithAndroidDeviceId(String androidId) {
        LoginWithAndroidDeviceIDRequest request = new LoginWithAndroidDeviceIDRequest();
        request.AndroidDeviceId = androidId;
        request.AndroidDevice = Build.MODEL;
        request.CreateAccount = true;
        request.TitleId = PlayFabSettings.TitleId;
        request.OS = Build.VERSION.RELEASE;

        treatResult(LoginWithAndroidDeviceIDAsync(request), "playfab_android_login_failed", new ResultRunnable<LoginResult>() {
            @Override
            public void run(LoginResult result) {
                GodotLib.calldeferred(instanceId, "playfab_android_login_succeeded", new Object[]{});
            }
        });
    }

    private static <RT> String CompileErrorsFromResult(PlayFabResult<RT> result) {
        if (result == null || result.Error == null)
            return null;

        String errorMessage = "";
        if (result.Error.errorMessage != null)
            errorMessage += result.Error.errorMessage;
        if (result.Error.errorDetails != null)
            for (Map.Entry<String, List<String>> pair : result.Error.errorDetails.entrySet())
                for (String msg : pair.getValue())
                    errorMessage += "\n" + pair.getKey() + ": " + msg;
        return errorMessage;
    }

    public void setUserData(final String key, final String value) {
        UpdateUserDataRequest request = new UpdateUserDataRequest();
        request.Data = new HashMap<String, String>() {{
            put(key, value);
        }};
        treatResult(UpdateUserDataAsync(request), "set_user_data_failed", new ResultRunnable<UpdateUserDataResult>() {
            @Override
            public void run(UpdateUserDataResult result) {
                GodotLib.calldeferred(instanceId, "set_user_data_succeed", new Object[]{});
            }
        });
    }

    public void getUserData(final String key) {
        GetUserDataRequest request = new GetUserDataRequest();
        request.Keys = new ArrayList<String>() {{ add(key); }};

        treatResult(GetUserDataAsync(request), "get_user_data_failed", new ResultRunnable<GetUserDataResult>() {
            @Override
            public void run(GetUserDataResult result) {
                Dictionary data = new Dictionary();
                for (Map.Entry<String, UserDataRecord> entry : result.Data.entrySet()) {
                    data.put(entry.getKey(), entry.getValue().Value);
                }
                GodotLib.calldeferred(instanceId, "get_user_data_succeed", new Object[]{data});
            }
        });
    }

    public void setPlayerStatistic(final String name, final int value) {
        UpdatePlayerStatisticsRequest request = new UpdatePlayerStatisticsRequest();
        request.Statistics = new ArrayList<StatisticUpdate>() {{
            StatisticUpdate stat = new StatisticUpdate();
            stat.StatisticName = name;
            stat.Value = value;
            add(stat);
        }};

        treatResult(UpdatePlayerStatisticsAsync(request), "set_player_statistic_failed", new ResultRunnable<UpdatePlayerStatisticsResult>() {
            @Override
            public void run(UpdatePlayerStatisticsResult result) {
                GodotLib.calldeferred(instanceId, "set_player_statistic_succeeded", new Object[]{});
            }
        });
    }

    public void getPlayerStatistic(final String name) {
        GetPlayerStatisticsRequest request = new GetPlayerStatisticsRequest();
        request.StatisticNames = new ArrayList<String>() {{
            add(name);
        }};

        final FutureTask<PlayFabResult<GetPlayerStatisticsResult>> getTask = GetPlayerStatisticsAsync(request);

        treatResult(getTask, "get_player_statistic_failed", new ResultRunnable<GetPlayerStatisticsResult>() {
            @Override
            public void run(GetPlayerStatisticsResult result) {
                int value = result.Statistics.get(0).Value;
                GodotLib.calldeferred(instanceId, "get_player_statistic_succeeded", new Object[]{name, value});
            }
        });
    }

    public void linkAndroidDeviceId(final String androidId) {
        LinkAndroidDeviceIDRequest request = new LinkAndroidDeviceIDRequest();
        request.AndroidDeviceId = androidId;
        request.AndroidDevice = Build.MODEL;
        request.OS = Build.VERSION.RELEASE;
        request.ForceLink = true;

        treatResult(LinkAndroidDeviceIDAsync(request), "link_android_device_id_failed", new ResultRunnable<LinkAndroidDeviceIDResult>() {
            @Override
            public void run(LinkAndroidDeviceIDResult result) {
                GodotLib.calldeferred(instanceId, "link_android_device_id_succeeded", new Object[]{});
            }
        });
    }

    public void linkFacebookAccount(final String accessToken) {
        LinkFacebookAccountRequest request = new LinkFacebookAccountRequest();
        request.AccessToken = accessToken;
        request.ForceLink = true;

        treatResult(LinkFacebookAccountAsync(request), "link_facebook_account_failed", new ResultRunnable<LinkFacebookAccountResult>() {
            @Override
            public void run(LinkFacebookAccountResult result) {
                GodotLib.calldeferred(instanceId, "link_facebook_account_succeeded", new Object[]{});
            }
        });
    }

    private <T> void treatResult(final FutureTask<PlayFabResult<T>> task, final String fail_method, final ResultRunnable<T> success_treatment) {
        threadPool.submit(new Runnable() {
            @Override
            public void run() {
                task.run();
                Log.d("PlayFab", "running task " + fail_method);
                while (!task.isDone()) {
                    try {
                        Thread.sleep(10);
                        Log.d("PlayFab", "running task " + fail_method + ", sleeping thread");
                        task.run();
                    } catch (InterruptedException e) {
                        Log.d("PlayFab", "Thread interrupted");
                        GodotLib.calldeferred(instanceId, fail_method, new Object[]{e.toString()});
                        return;
                    }
                }
                PlayFabResult<T> result;
                try {
                    result = task.get();
                } catch (Exception e) {
                    Log.d("PlayFab", "Exception in PlayFab api call: " + e);
                    GodotLib.calldeferred(instanceId, fail_method, new Object[]{e.toString()});
                    return;
                }
                if (result != null && result.Result != null ) {
                    success_treatment.run(result.Result);
                } else if (result != null && result.Error != null) {
                    String error = CompileErrorsFromResult(result);
                    Log.d("PlayFab", "Error in " + fail_method + " call, here's some debug information:");
                    Log.d("PlayFab", error);
                    GodotLib.calldeferred(instanceId, fail_method, new Object[]{error});
                } else {
                    GodotLib.calldeferred(instanceId, fail_method, new Object[]{"Unknown error"});
                }
            }
        });
    }

    abstract class ResultRunnable<T> {
        public abstract void run(T result);
    }

}
