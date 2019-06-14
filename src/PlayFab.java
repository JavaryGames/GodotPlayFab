package org.godotengine.godot;

import android.app.Activity;
import android.util.Log;

import com.playfab.PlayFabErrors.*;
import com.playfab.PlayFabSettings;
import com.playfab.PlayFabClientModels.*;
import com.playfab.PlayFabClientAPI.*;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.FutureTask;

import static com.playfab.PlayFabClientAPI.GetPlayerStatisticsAsync;
import static com.playfab.PlayFabClientAPI.GetUserDataAsync;
import static com.playfab.PlayFabClientAPI.LoginWithFacebookAsync;
import static com.playfab.PlayFabClientAPI.UpdatePlayerStatistics;
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
                "login", "facebook_login", "init", "setUserData", "getUserData", "getPlayerStatistic", "setPlayerStatistic"
        });

        activity = (Godot) p_activity;
        threadPool = Executors.newFixedThreadPool(1);
    }

    public void init(int instanceId, String titleId) {
        this.instanceId = instanceId;
        PlayFabSettings.TitleId = titleId;
    }

    public void facebook_login(String access_token) {
        LoginWithFacebookRequest request = new LoginWithFacebookRequest();
        request.CreateAccount = true;
        request.AccessToken = access_token;
        request.TitleId = PlayFabSettings.TitleId;

        FutureTask<PlayFabResult<LoginResult>> loginTask = LoginWithFacebookAsync(request);
        loginTask.run();
        Log.d("PlayFab", "Running facebook_login " + access_token);

        while (_running) {
            if (loginTask.isDone()) {
                Log.d("PlayFab", "Login task done");
                OnLoginComplete(loginTask);
            }

            try {
                Log.d("PlayFab", "Waiting login task");
                Thread.sleep(1);
            } catch (Exception e) {
                Log.d("PlayFab", "Critical error in the example main loop: " + e);
            }
        }

        _running = true;
    }

    private static void OnLoginComplete(FutureTask<PlayFabResult<LoginResult>> loginTask) {
        PlayFabResult<LoginResult> result = null;
        try {
            result = loginTask.get();
        } catch (Exception e) {
            Log.d("PlayFab", "Exception in PlayFab api call: " + e); // Did you assign your PlayFabSettings.TitleId correctly?
        }

        if (result != null && result.Result != null) {
            GodotLib.calldeferred(instanceId, "playfab_login_successful", new Object[]{});
        } else if (result != null && result.Error != null) {
            String error = CompileErrorsFromResult(result);
            Log.d("PlayFab", "Error when logging in. Here's some debug information:");
            Log.d("PlayFab", error);
            GodotLib.calldeferred(instanceId, "playfab_login_failed", new Object[]{error});
        } else {
            GodotLib.calldeferred(instanceId, "playfab_login_failed", new Object[]{"Unkown error"});
        }

        _running = false;
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
        final FutureTask<PlayFabResult<UpdateUserDataResult>> updateTask = UpdateUserDataAsync(request);

        threadPool.submit(new Runnable() {
            @Override
            public void run() {
                updateTask.run();
                while (!updateTask.isDone()) {
                    try {
                        Thread.sleep(10);
                    } catch (InterruptedException e) {
                        Log.d("PlayFab", "Thread interrupted");
                        GodotLib.calldeferred(instanceId, "set_user_data_failed", new Object[]{e.toString()});
                        return;
                    }
                }
                PlayFabResult<UpdateUserDataResult> result;
                try {
                    result = updateTask.get();
                } catch (Exception e) {
                    Log.d("PlayFab", "Exception in PlayFab api call: " + e); // Did you assign your PlayFabSettings.TitleId correctly?
                    GodotLib.calldeferred(instanceId, "set_user_data_failed", new Object[]{e.toString()});
                    return;
                }
                if (result != null && result.Result != null) {
                    GodotLib.calldeferred(instanceId, "set_user_data_succeed", new Object[]{});
                } else if (result != null && result.Error != null) {
                    String error = CompileErrorsFromResult(result);
                    Log.d("PlayFab", "Error in call, here's some debug information:");
                    Log.d("PlayFab", error);
                    GodotLib.calldeferred(instanceId, "set_user_data_failed", new Object[]{error});
                } else {
                    GodotLib.calldeferred(instanceId, "get_user_data_failed", new Object[]{"Unknown error"});
                }
             }
        });
    }

    public void getUserData(final String key) {
        GetUserDataRequest request = new GetUserDataRequest();
        request.Keys = new ArrayList<String>() {{ add(key); }};

        final FutureTask<PlayFabResult<GetUserDataResult>> getTask = GetUserDataAsync(request);

        threadPool.submit(new Runnable() {
            @Override
            public void run() {
                getTask.run();
                while (!getTask.isDone()) {
                    try {
                        Thread.sleep(10);
                    } catch (InterruptedException e) {
                        Log.d("PlayFab", "Thread interrupted");
                        GodotLib.calldeferred(instanceId, "get_user_data_failed", new Object[]{e.toString()});
                        return;
                    }
                }
                PlayFabResult<GetUserDataResult> result;
                try {
                    result = getTask.get();
                } catch (Exception e) {
                    Log.d("PlayFab", "Exception in PlayFab api call: " + e); // Did you assign your PlayFabSettings.TitleId correctly?
                    GodotLib.calldeferred(instanceId, "get_user_data_failed", new Object[]{e.toString()});
                    return;
                }
                if (result != null && result.Result != null) {
                    Dictionary data = new Dictionary();
                    for(Map.Entry<String, UserDataRecord> entry : result.Result.Data.entrySet()) {
                        data.put(entry.getKey(), entry.getValue().Value);
                    }
                    GodotLib.calldeferred(instanceId, "get_user_data_succeed", new Object[]{data});
                } else if (result != null && result.Error != null) {
                    String error = CompileErrorsFromResult(result);
                    Log.d("PlayFab", "Error in call, here's some debug information:");
                    Log.d("PlayFab", error);
                    GodotLib.calldeferred(instanceId, "get_user_data_failed", new Object[]{error});
                } else {
                    GodotLib.calldeferred(instanceId, "get_user_data_failed", new Object[]{"Unknown error"});
                }
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

        final FutureTask<PlayFabResult<UpdatePlayerStatisticsResult>> setTask = UpdatePlayerStatisticsAsync(request);

        threadPool.submit(new Runnable() {
            @Override
            public void run() {
                setTask.run();
                while (!setTask.isDone()) {
                    try {
                        Thread.sleep(10);
                    } catch (InterruptedException e) {
                        Log.d("PlayFab", "Thread interrupted");
                        GodotLib.calldeferred(instanceId, "set_player_statistic_failed", new Object[]{e.toString()});
                        return;
                    }
                }
                PlayFabResult<UpdatePlayerStatisticsResult> result;
                try {
                    result = setTask.get();
                } catch (Exception e) {
                    Log.d("PlayFab", "Exception in PlayFab api call: " + e); // Did you assign your PlayFabSettings.TitleId correctly?
                    GodotLib.calldeferred(instanceId, "set_player_statistic_failed", new Object[]{e.toString()});
                    return;
                }
                if (result != null && result.Result != null) {
                    GodotLib.calldeferred(instanceId, "set_player_statistic_succeeded", new Object[]{});
                } else if (result != null && result.Error != null) {
                    String error = CompileErrorsFromResult(result);
                    Log.d("PlayFab", "Error in set player statistic call, here's some debug information:");
                    Log.d("PlayFab", error);
                    GodotLib.calldeferred(instanceId, "set_player_statistic_failed", new Object[]{error});
                } else {
                    GodotLib.calldeferred(instanceId, "set_player_statistic_failed", new Object[]{"Unknown error"});
                }
            }
        });
    }

    public void getPlayerStatistic(final String name) {
        GetPlayerStatisticsRequest request = new GetPlayerStatisticsRequest();
        request.StatisticNames = new ArrayList<String>() {{
            add(name);
        }};

        final FutureTask<PlayFabResult<GetPlayerStatisticsResult>> getTask = GetPlayerStatisticsAsync(request);

        threadPool.submit(new Runnable() {
            @Override
            public void run() {
                getTask.run();
                while (!getTask.isDone()) {
                    try {
                        Thread.sleep(10);
                    } catch (InterruptedException e) {
                        Log.d("PlayFab", "Thread interrupted");
                        GodotLib.calldeferred(instanceId, "get_player_statistic_failed", new Object[]{e.toString()});
                        return;
                    }
                }
                PlayFabResult<GetPlayerStatisticsResult> result;
                try {
                    result = getTask.get();
                } catch (Exception e) {
                    Log.d("PlayFab", "Exception in PlayFab api call: " + e);
                    GodotLib.calldeferred(instanceId, "get_player_statistic_failed", new Object[]{e.toString()});
                    return;
                }
                if (result != null && result.Result != null ) {
                    int value = result.Result.Statistics.get(0).Value;
                    GodotLib.calldeferred(instanceId, "get_player_statistic_succeeded", new Object[]{name, value});
                } else if (result != null && result.Error != null) {
                    String error = CompileErrorsFromResult(result);
                    Log.d("PlayFab", "Error in get player statistic call, here's some debug information:");
                    Log.d("PlayFab", error);
                    GodotLib.calldeferred(instanceId, "get_player_statistic_failed", new Object[]{error});
                } else {
                    GodotLib.calldeferred(instanceId, "get_player_statistic_failed", new Object[]{"Unknown error"});
                }
            }
        });
    }
}
