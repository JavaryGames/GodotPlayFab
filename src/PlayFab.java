package org.godotengine.godot;

import android.app.Activity;
import android.os.Build;
import android.util.Log;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;
import com.playfab.PlayFabErrors.*;
import com.playfab.PlayFabSettings;
import com.playfab.PlayFabClientModels.*;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.FutureTask;

import static com.playfab.PlayFabClientAPI.ExecuteCloudScriptAsync;
import static com.playfab.PlayFabClientAPI.GetAccountInfoAsync;
import static com.playfab.PlayFabClientAPI.GetFriendLeaderboardAroundPlayerAsync;
import static com.playfab.PlayFabClientAPI.GetFriendLeaderboardAsync;
import static com.playfab.PlayFabClientAPI.GetLeaderboardAroundPlayerAsync;
import static com.playfab.PlayFabClientAPI.GetLeaderboardAsync;
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
    private boolean isLoggedIn = false;
    private String playfabID = null;

    static public Godot.SingletonBase initialize(Activity p_activity) {
        return new PlayFab(p_activity);
    }

    public PlayFab(Activity p_activity) {
        registerClass("PlayFab", new String[]{
                "login", "init", "setUserData", "getUserData", "getPlayerStatistic", "setPlayerStatistic",
                "linkAndroidDeviceId", "linkFacebookAccount", "loginWithFacebook", "loginWithAndroidDeviceId", "isLoggedIn",
                "executeCloudScript", "getPlayFabID", "getAccountInfo",
                "getLeaderboard", "getFriendLeaderboard", "getLeaderboardAroundPlayer", "getFriendLeaderboardAroundPlayer",
        });

        activity = (Godot) p_activity;
        threadPool = Executors.newFixedThreadPool(5);
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

        treatResult(LoginWithFacebookAsync(request), "playfab_facebook_login_failed", new Object[]{}, new ResultRunnable<LoginResult>() {
            @Override
            public void run(LoginResult result) {
                isLoggedIn = true;
                GodotLib.calldeferred(instanceId, "playfab_facebook_login_succeeded", new Object[]{});
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

        treatResult(LoginWithAndroidDeviceIDAsync(request), "playfab_android_login_failed", new Object[]{}, new ResultRunnable<LoginResult>() {
            @Override
            public void run(LoginResult result) {
                isLoggedIn = true;
                playfabID = result.PlayFabId;
                GodotLib.calldeferred(instanceId, "playfab_android_login_succeeded", new Object[]{});
            }
        });
    }

    public boolean isLoggedIn() {
        return isLoggedIn;
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
        treatResult(UpdateUserDataAsync(request), "playfab_set_user_data_failed", new Object[]{}, new ResultRunnable<UpdateUserDataResult>() {
            @Override
            public void run(UpdateUserDataResult result) {
                GodotLib.calldeferred(instanceId, "playfab_set_user_data_succeeded", new Object[]{result.DataVersion});
            }

        });
    }

    public void getUserData(final String key, final String playFabId) {
        final GetUserDataRequest request = new GetUserDataRequest();
        request.PlayFabId = playFabId;
        request.Keys = new ArrayList<String>() {{ add(key); }};

        Log.d("PlayFab", "Requesting user data: " + key);

        treatResult(GetUserDataAsync(request), "playfab_get_user_data_failed", new Object[]{key}, new ResultRunnable<GetUserDataResult>() {
            @Override
            public void run(GetUserDataResult result) {
                Log.d("PlayFab", "Got data result: ");
                String value;
                try {
                    value = result.Data.get(key).Value;
                    GodotLib.calldeferred(instanceId, "playfab_get_user_data_succeeded", new Object[]{key, value, result.DataVersion});
                } catch (NullPointerException e){
                    GodotLib.calldeferred(instanceId, "playfab_get_user_data_failed", new Object[]{key, "Key not found", 1});
                }
            }
        });
    }

    public String getPlayFabID() {
        return playfabID;
    }

    public void setPlayerStatistic(final String name, final int value) {
        UpdatePlayerStatisticsRequest request = new UpdatePlayerStatisticsRequest();
        request.Statistics = new ArrayList<StatisticUpdate>() {{
            StatisticUpdate stat = new StatisticUpdate();
            stat.StatisticName = name;
            stat.Value = value;
            add(stat);
        }};

        treatResult(UpdatePlayerStatisticsAsync(request), "playfab_set_player_statistic_failed", new Object[]{}, new ResultRunnable<UpdatePlayerStatisticsResult>() {
            @Override
            public void run(UpdatePlayerStatisticsResult result) {
                GodotLib.calldeferred(instanceId, "playfab_set_player_statistic_succeeded", new Object[]{});
            }
        });
    }

    public void getPlayerStatistic(final String name) {
        GetPlayerStatisticsRequest request = new GetPlayerStatisticsRequest();
        request.StatisticNames = new ArrayList<String>() {{
            add(name);
        }};

        final FutureTask<PlayFabResult<GetPlayerStatisticsResult>> getTask = GetPlayerStatisticsAsync(request);

        treatResult(getTask, "playfab_get_player_statistic_failed", new Object[]{}, new ResultRunnable<GetPlayerStatisticsResult>() {
            @Override
            public void run(GetPlayerStatisticsResult result) {
                int value = result.Statistics.get(0).Value;
                GodotLib.calldeferred(instanceId, "playfab_get_player_statistic_succeeded", new Object[]{name, value});
            }
        });
    }

    public void getAccountInfo(final String playfabID) {
        final GetAccountInfoRequest request = new GetAccountInfoRequest();

        request.PlayFabId = playfabID;

        final FutureTask<PlayFabResult<GetAccountInfoResult>> getTask = GetAccountInfoAsync(request);

        treatResult(getTask, "playfab_get_account_info_failed", new Object[]{}, new ResultRunnable<GetAccountInfoResult>() {
            @Override
            public void run(GetAccountInfoResult result) {
                Dictionary info = new Dictionary();
                if (result.AccountInfo.FacebookInfo != null) {
                    Dictionary facebookInfo = new Dictionary();
                    facebookInfo.put("FacebookId", result.AccountInfo.FacebookInfo.FacebookId);
                    facebookInfo.put("FullName", result.AccountInfo.FacebookInfo.FullName);
                    info.put("FacebookInfo", facebookInfo);
                }
                GodotLib.calldeferred(instanceId, "playfab_get_account_info_succeeded", new Object[]{info});
            }
        });
    }

    public void linkAndroidDeviceId(final String androidId) {
        LinkAndroidDeviceIDRequest request = new LinkAndroidDeviceIDRequest();
        request.AndroidDeviceId = androidId;
        request.AndroidDevice = Build.MODEL;
        request.OS = Build.VERSION.RELEASE;
        request.ForceLink = true;

        treatResult(LinkAndroidDeviceIDAsync(request), "playfab_link_android_device_id_failed", new Object[]{}, new ResultRunnable<LinkAndroidDeviceIDResult>() {
            @Override
            public void run(LinkAndroidDeviceIDResult result) {
                GodotLib.calldeferred(instanceId, "playfab_link_android_device_id_succeeded", new Object[]{});
            }
        });
    }

    public void linkFacebookAccount(final String accessToken) {
        LinkFacebookAccountRequest request = new LinkFacebookAccountRequest();
        request.AccessToken = accessToken;
        request.ForceLink = false;

        treatResult(LinkFacebookAccountAsync(request), "playfab_link_facebook_account_failed", new Object[]{}, new ResultRunnable<LinkFacebookAccountResult>() {
            @Override
            public void run(LinkFacebookAccountResult result) {
                GodotLib.calldeferred(instanceId, "playfab_link_facebook_account_succeeded", new Object[]{});
            }
        });
    }

    public void executeCloudScript(final String functionName, final Dictionary functionParameter, final boolean generatePlayerStreamEvent) {
        ExecuteCloudScriptRequest request = new ExecuteCloudScriptRequest();

        request.FunctionName = functionName;
        request.FunctionParameter = functionParameter;
        request.GeneratePlayStreamEvent = generatePlayerStreamEvent;
        request.RevisionSelection = CloudScriptRevisionOption.Live;

        treatResult(ExecuteCloudScriptAsync(request), "playfab_execute_cloud_script_failed", new Object[]{functionName}, new ResultRunnable<ExecuteCloudScriptResult>() {
            @Override
            public void run(ExecuteCloudScriptResult result) {
                Dictionary response = new Dictionary();
                response.put("APIRequestsIssued", result.APIRequestsIssued);
                response.put("ExecutionTimeSeconds", result.ExecutionTimeSeconds);
                response.put("HttpRequestsIssued", result.HttpRequestsIssued);
                response.put("FunctionName", result.FunctionName);
                if (result.FunctionResult != null) {
                    Gson gson = new GsonBuilder().create();
                    response.put("FunctionResult", gson.toJson(result.FunctionResult));
                }
                response.put("FunctionResultTooLarge", result.FunctionResultTooLarge);
                response.put("LogsTooLarge", result.LogsTooLarge);
                response.put("MemoryConsumedBytes", result.MemoryConsumedBytes);
                response.put("ProcessorTimeSeconds", result.ProcessorTimeSeconds);
                response.put("Revision", result.Revision);
                if (result.Error != null) {
                    response.put("ErrorMessage", result.Error.Message);
                    response.put("Error", result.Error.Error);
                    response.put("ErrorStackTrace", result.Error.StackTrace);
                }

                if (result.Logs != null) {
                    ArrayList<String> logs = new ArrayList<>();
                    for (LogStatement log : result.Logs) {
                        if (log != null) {
                            logs.add(log.Message);
                        }
                    }
                    response.put("Logs", logs.toArray());
                }

                Log.d("PlayFab", "CloudScript completed");

                GodotLib.calldeferred(instanceId, "playfab_execute_cloud_script_succeeded", new Object[]{functionName, response});
            }
        });
    }

    public void getLeaderboard(final String statistic, final int startPosition, final int maxResultsCount) {
        GetLeaderboardRequest request = new GetLeaderboardRequest();
        request.StatisticName = statistic;
        request.StartPosition = startPosition;
        request.MaxResultsCount = maxResultsCount;

        treatResult(GetLeaderboardAsync(request), "playfab_get_leaderboard_failed", new Object[]{}, new ResultRunnable<GetLeaderboardResult>() {
            @Override
            public void run(GetLeaderboardResult result) {
                treatLeaderboard(result.Leaderboard, result.Version, "playfab_get_leaderboard_succeeded");
            }
        });
    }

    public void getFriendLeaderboard(final String statistic, final int startPosition, final int maxResultsCount) {
        GetFriendLeaderboardRequest request = new GetFriendLeaderboardRequest ();
        request.StatisticName = statistic;
        request.StartPosition = startPosition;
        request.MaxResultsCount = maxResultsCount;

        treatResult(GetFriendLeaderboardAsync(request), "playfab_get_friend_leaderboard_failed", new Object[]{}, new ResultRunnable<GetLeaderboardResult>() {
            @Override
            public void run(GetLeaderboardResult result) {
                treatLeaderboard(result.Leaderboard, result.Version, "playfab_get_friend_leaderboard_succeeded");
            }
        });
    }

    public void getLeaderboardAroundPlayer(final String playfabID, final String statistic, final int startPosition, final int maxResultsCount) {
        GetLeaderboardAroundPlayerRequest request = new GetLeaderboardAroundPlayerRequest();
        request.PlayFabId = playfabID;
        request.StatisticName = statistic;
        request.MaxResultsCount = maxResultsCount;

        treatResult(GetLeaderboardAroundPlayerAsync(request), "playfab_get_leaderboard_around_player_failed", new Object[]{}, new ResultRunnable<GetLeaderboardAroundPlayerResult>() {
            @Override
            public void run(GetLeaderboardAroundPlayerResult result) {
                treatLeaderboard(result.Leaderboard, result.Version, "playfab_get_leaderboard_around_player_succeeded");
            }
        });
    }

    public void getFriendLeaderboardAroundPlayer(final String playfabID, final String statistic, final int maxResultsCount) {
        GetFriendLeaderboardAroundPlayerRequest request = new GetFriendLeaderboardAroundPlayerRequest();
        request.PlayFabId = playfabID;
        request.StatisticName = statistic;
        request.MaxResultsCount = maxResultsCount;

        treatResult(GetFriendLeaderboardAroundPlayerAsync(request), "playfab_get_friend_leaderboard_around_player_failed", new Object[]{}, new ResultRunnable<GetFriendLeaderboardAroundPlayerResult>() {
            @Override
            public void run(GetFriendLeaderboardAroundPlayerResult result) {
                treatLeaderboard(result.Leaderboard, result.Version, "playfab_friend_get_leaderboard_around_player_succeeded");
            }
        });
    }

    private void treatLeaderboard(final ArrayList<PlayerLeaderboardEntry> leaderboard, final int leaderboardVersion, final String successful_method) {
        Dictionary result = new Dictionary();

        result.put("Version", leaderboardVersion);
        ArrayList<Dictionary> playerList = new ArrayList<>();

        for (PlayerLeaderboardEntry entry : leaderboard) {
            Dictionary playerStat = new Dictionary();
            playerStat.put("DisplayName", entry.DisplayName);
            playerStat.put("PlayFabId", entry.PlayFabId);
            playerStat.put("Position", entry.Position);
            playerStat.put("StatValue", entry.StatValue);
            playerList.add(playerStat);
        }

        result.put("Leaderboard", playerList);

        GodotLib.calldeferred(instanceId, successful_method, new Object[]{result});
    }

    private <T> void treatResult(final FutureTask<PlayFabResult<T>> task, final String fail_method, final Object[] extraFailArgs, final ResultRunnable<T> success_treatment) {
        threadPool.submit(new Runnable() {
            @Override
            public void run() {
                task.run();
                while (!task.isDone()) {
                    try {
                        Log.d("PlayFab", "Task running... " + fail_method);
                        Thread.sleep(50);
                        task.run();
                    } catch (InterruptedException e) {
                        Log.d("PlayFab", "Thread interrupted");
                        GodotLib.calldeferred(instanceId, fail_method, concat(extraFailArgs, new Object[]{e.toString(), -1}));
                        return;
                    }
                }
                PlayFabResult<T> result;
                Log.d("PlayFab", "Task done, getting result, " + fail_method);
                try {
                    result = task.get();
                } catch (Exception e) {
                    Log.d("PlayFab", "Exception in PlayFab api call: " + e);
                    GodotLib.calldeferred(instanceId, fail_method, concat(extraFailArgs, new Object[]{e.toString(), -1}));
                    return;
                }
                if (result != null && result.Result != null ) {
                    Log.d("PlayFab", "Task successful");
                    success_treatment.run(result.Result);
                } else if (result != null && result.Error != null) {
                    String error = CompileErrorsFromResult(result);
                    Log.d("PlayFab", "Error in " + fail_method + " call, here's some debug information:");
                    Log.d("PlayFab", error);
                    GodotLib.calldeferred(instanceId, fail_method, concat(extraFailArgs, new Object[]{error, result.Error.pfErrorCode.id}));
                } else {
                    Log.d("PlayFab", "Unknown error");
                    GodotLib.calldeferred(instanceId, fail_method, concat(extraFailArgs, new Object[]{"Unknown error", -1}));
                }
            }
        });
    }

    private static <T> T[] concat(T[] first, T[] second) {
        T[] result = Arrays.copyOf(first, first.length + second.length);
        System.arraycopy(second, 0, result, first.length, second.length);
        return result;
    }

    abstract class ResultRunnable<T> {
        public abstract void run(T result);
    }

}
