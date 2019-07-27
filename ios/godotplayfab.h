#ifndef __GODOTPLAYFAB_H__
#define __GODOTPLAYFAB_H__

#include "core/reference.h"

class GodotPlayFab : public Reference {

    GDCLASS(GodotPlayFab, Reference);

    int instanceId;
    String playfabID;
    bool loggedIn;
    String currentFunctionName;

protected:
    static void _bind_methods();


public:

    // Place all methods headers here

    void init(const int godotId, const String &titleId);
    void loginWithFacebook(const String &accessToken);
    void loginWithAndroidDeviceId(const String &android_id);
    bool isLoggedIn();
    void setUserData(const String &key, const String &value);
    void deleteUserData(const String &key);
    void getUserData(const String &key, const String &playfabID, const bool readOnly);
    String getPlayFabID();
    void setPlayerStatistic(const String &name, const int value);
    void getPlayerStatistic(const String &name);
    void getAccountInfo(const String &playfabID);
    void linkAndroidDeviceId(const String &android_id);
    void linkFacebookAccount(const String &access_token);
    void executeCloudScript(const String &functionName, const String &functionParameter, const bool generatePlayerStreamEvent);
    void getLeaderboard(const String &statistic, const int start_position, const int max_results_count);
    void getFriendLeaderboard(const String &statistic, const int start_position, const int max_results_count);
    void getLeaderboardAroundPlayer(const String &playfabID, const String &statistic, const int start_position, const int max_results_count);
    void getFriendLeaderboardAroundPlayer(const String &playfabID, const String &statistic, const int max_results_count);


    GodotPlayFab();
    ~GodotPlayFab();


// static:
//    static public Godot.SingletonBase initialize(Activity p_activity) {
// private static <RT> String CompileErrorsFromResult(PlayFabResult<RT> result) {
// private void treatLeaderboard(const ArrayList<PlayerLeaderboardEntry> leaderboard, const String &statistic, const int leaderboardVersion, const String &successful_method) {
// private <T> void treatResult(const FutureTask<PlayFabResult<T>> task, const String &fail_method, const Object[] extraFailArgs, const ResultRunnable<T> success_treatment) {
// private static <T> T[] concat(T[] first, T[] second) {

};

#endif