#ifndef __GODOTPLAYFAB_H__
#define __GODOTPLAYFAB_H__

#include "core/object.h"

class GodotPlayFab : public Object {

    GDCLASS(GodotPlayFab, Reference);


protected:
    static void _bind_methods();


// static:
//    static public Godot.SingletonBase initialize(Activity p_activity) {


public:

    // Place all methods headers here

    void init(const int instanceId, const String &titleId);
    void loginWithFacebook(const String &accessToken);
    void loginWithAndroidDeviceId(const String &androidId);
    bool isLoggedIn();
    void setUserData(const String &key, const String &value);
    void deleteUserData(const String &key);
    void getUserData(const String &key, const String &playFabId, const bool readOnly);
    String getPlayFabID();
    void setPlayerStatistic(const String &name, const int value);
    void getPlayerStatistic(const String &name);
    void getAccountInfo(const String &playfabID);
    void linkAndroidDeviceId(const String &androidId);
    void linkFacebookAccount(const String &accessToken);
    void executeCloudScript(const String &functionName, const Dictionary &functionParameter, const bool generatePlayerStreamEvent);
    void getLeaderboard(const String &statistic, const int startPosition, const int maxResultsCount);
    void getFriendLeaderboard(const String &statistic, const int startPosition, const int maxResultsCount);
    void getLeaderboardAroundPlayer(const String &playfabID, const String &statistic, const int startPosition, const int maxResultsCount);
    void getFriendLeaderboardAroundPlayer(const String &playfabID, const String &statistic, const int maxResultsCount);



    GodotPlayFab();
    ~GodotPlayFab();

// private static <RT> String CompileErrorsFromResult(PlayFabResult<RT> result) {
// private void treatLeaderboard(const ArrayList<PlayerLeaderboardEntry> leaderboard, const String &statistic, const int leaderboardVersion, const String &successful_method) {
// private <T> void treatResult(const FutureTask<PlayFabResult<T>> task, const String &fail_method, const Object[] extraFailArgs, const ResultRunnable<T> success_treatment) {
// private static <T> T[] concat(T[] first, T[] second) {
};

#endif