package org.godotengine.godot;

import android.app.Activity;
import android.content.Intent;
import android.util.Log;

import com.playfab.PlayFabErrors.*;
import com.playfab.PlayFabSettings;
import com.playfab.PlayFabClientModels;
import com.playfab.PlayFabClientAPI;

import com.facebook.AccessToken;
import com.facebook.CallbackManager;
import com.facebook.FacebookCallback;
import com.facebook.FacebookException;
import com.facebook.FacebookSdk;
import com.facebook.FacebookSdkNotInitializedException;
import com.facebook.login.LoginManager;
import com.facebook.login.LoginResult;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.FutureTask;

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
                "login", "facebook_login", "init", "setUserData", "getUserData"
        });

        activity = (Godot) p_activity;
        threadPool = Executors.newFixedThreadPool(1);
    }

    public void init(int instanceId, String titleId) {
        this.instanceId = instanceId;
        PlayFabSettings.TitleId = titleId;
    }

    public void facebook_login(String access_token) {
        PlayFabClientModels.LoginWithFacebookRequest request = new PlayFabClientModels.LoginWithFacebookRequest();
        request.CreateAccount = true;
        request.AccessToken = access_token;
        request.TitleId = PlayFabSettings.TitleId;

        FutureTask<PlayFabResult<com.playfab.PlayFabClientModels.LoginResult>> loginTask = PlayFabClientAPI.LoginWithFacebookAsync(request);
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

    private static void OnLoginComplete(FutureTask<PlayFabResult<com.playfab.PlayFabClientModels.LoginResult>> loginTask) {
        PlayFabResult<com.playfab.PlayFabClientModels.LoginResult> result = null;
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
        PlayFabClientModels.UpdateUserDataRequest request = new PlayFabClientModels.UpdateUserDataRequest();
        request.Data = new HashMap<String, String>() {{
            put(key, value);
        }};
        final FutureTask<PlayFabResult<PlayFabClientModels.UpdateUserDataResult>> updateTask = PlayFabClientAPI.UpdateUserDataAsync(request);

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
                PlayFabResult<PlayFabClientModels.UpdateUserDataResult> result;
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
                }
            }
        });
    }

    public void getUserData(final String key) {
        PlayFabClientModels.GetUserDataRequest request = new PlayFabClientModels.GetUserDataRequest();
        request.Keys = new ArrayList<String>() {{ add(key); }};

        final FutureTask<PlayFabResult<PlayFabClientModels.GetUserDataResult>> getTask = PlayFabClientAPI.GetUserDataAsync(request);

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
                PlayFabResult<PlayFabClientModels.GetUserDataResult> result;
                try {
                    result = getTask.get();
                } catch (Exception e) {
                    Log.d("PlayFab", "Exception in PlayFab api call: " + e); // Did you assign your PlayFabSettings.TitleId correctly?
                    GodotLib.calldeferred(instanceId, "get_user_data_failed", new Object[]{e.toString()});
                    return;
                }
                if (result != null && result.Result != null) {
                    Dictionary data = new Dictionary();
                    for(Map.Entry<String, PlayFabClientModels.UserDataRecord> entry : result.Result.Data.entrySet()) {
                        data.put(entry.getKey(), entry.getValue().Value);
                    }
                    GodotLib.calldeferred(instanceId, "get_user_data_succeed", new Object[]{data});
                } else if (result != null && result.Error != null) {
                    String error = CompileErrorsFromResult(result);
                    Log.d("PlayFab", "Error in call, here's some debug information:");
                    Log.d("PlayFab", error);
                    GodotLib.calldeferred(instanceId, "get_user_data_failed", new Object[]{error});
                }
            }
        });
    }
}
