#include "godotplayfab.h"
#import "app_delegate.h"

#import <Foundation/Foundation.h>

#ifdef __OBJC__
#import <PlayFabSDK/PlayFabSettings.h>
#endif

GodotPlayFab::GodotPlayFab()
{
}

GodotPlayFab::~GodotPlayFab() {

}


void GodotPlayFab::init(const int instance_id, const String &title_id){
    godot_instance_id = instance_id;
    [PlayFabSettings setTitleId: [NSString stringWithCString: title_id.utf8().get_data()]];

}

void GodotPlayFab::loginWithFacebook(const String &access_token){
    NSLog(@"godotplayfab.mm::loginWithFacebook: Not yet implemented");
}

void GodotPlayFab::loginWithAndroidDeviceId(const String &android_id){
    NSLog(@"godotplayfab.mm::loginWithAndroidDeviceId: Not yet implemented");
}

bool GodotPlayFab::isLoggedIn(){
    NSLog(@"godotplayfab.mm::isLoggedIn: Not yet implemented");
}

void GodotPlayFab::setUserData(const String &key, const String &value){
    NSLog(@"godotplayfab.mm::setUserData: Not yet implemented");
}

void GodotPlayFab::deleteUserData(const String &key){
    NSLog(@"godotplayfab.mm::deleteUserData: Not yet implemented");
}

void GodotPlayFab::getUserData(const String &key, const String &playfab_id, const bool read_only){
    NSLog(@"godotplayfab.mm::getUserData: Not yet implemented");
}

String GodotPlayFab::getPlayFabID(){
    NSLog(@"godotplayfab.mm::getPlayFabID: Not yet implemented");
}

void GodotPlayFab::setPlayerStatistic(const String &name, const int value){
    NSLog(@"godotplayfab.mm::setPlayerStatistic: Not yet implemented");
}

void GodotPlayFab::getPlayerStatistic(const String &name){
    NSLog(@"godotplayfab.mm::getPlayerStatistic: Not yet implemented");
}

void GodotPlayFab::getAccountInfo(const String &playfab_iD){
    NSLog(@"godotplayfab.mm::getAccountInfo: Not yet implemented");
}

void GodotPlayFab::linkAndroidDeviceId(const String &android_id){
    NSLog(@"godotplayfab.mm::linkAndroidDeviceId: Not yet implemented");
}

void GodotPlayFab::linkFacebookAccount(const String &access_token){
    NSLog(@"godotplayfab.mm::linkFacebookAccount: Not yet implemented");
}

void GodotPlayFab::executeCloudScript(const String &function_name, const Dictionary &function_parameter, const bool generate_player_stream_event){
    NSLog(@"godotplayfab.mm::executeCloudScript: Not yet implemented");
}

void GodotPlayFab::getLeaderboard(const String &statistic, const int start_position, const int max_results_count){
    NSLog(@"godotplayfab.mm::getLeaderboard: Not yet implemented");
}

void GodotPlayFab::getFriendLeaderboard(const String &statistic, const int start_position, const int max_results_count){
    NSLog(@"godotplayfab.mm::getFriendLeaderboard: Not yet implemented");
}

void GodotPlayFab::getLeaderboardAroundPlayer(const String &playfab_iD, const String &statistic, const int start_position, const int max_results_count){
    NSLog(@"godotplayfab.mm::getLeaderboardAroundPlayer: Not yet implemented");
}

void GodotPlayFab::getFriendLeaderboardAroundPlayer(const String &playfab_iD, const String &statistic, const int max_results_count){
    NSLog(@"godotplayfab.mm::getFriendLeaderboardAroundPlayer: Not yet implemented");
}


void GodotPlayFab::_bind_methods() {
    ClassDB::bind_method("init", &GodotPlayFab::init);
    ClassDB::bind_method("loginWithFacebook", &GodotPlayFab::loginWithFacebook);
    ClassDB::bind_method("loginWithAndroidDeviceId", &GodotPlayFab::loginWithAndroidDeviceId);
    ClassDB::bind_method("isLoggedIn", &GodotPlayFab::isLoggedIn);
    ClassDB::bind_method("setUserData", &GodotPlayFab::setUserData);
    ClassDB::bind_method("deleteUserData", &GodotPlayFab::deleteUserData);
    ClassDB::bind_method("getUserData", &GodotPlayFab::getUserData);
    ClassDB::bind_method("getPlayFabID", &GodotPlayFab::getPlayFabID);
    ClassDB::bind_method("setPlayerStatistic", &GodotPlayFab::setPlayerStatistic);
    ClassDB::bind_method("getPlayerStatistic", &GodotPlayFab::getPlayerStatistic);
    ClassDB::bind_method("getAccountInfo", &GodotPlayFab::getAccountInfo);
    ClassDB::bind_method("linkAndroidDeviceId", &GodotPlayFab::linkAndroidDeviceId);
    ClassDB::bind_method("linkFacebookAccount", &GodotPlayFab::linkFacebookAccount);
    ClassDB::bind_method("executeCloudScript", &GodotPlayFab::executeCloudScript);
    ClassDB::bind_method("getLeaderboard", &GodotPlayFab::getLeaderboard);
    ClassDB::bind_method("getFriendLeaderboard", &GodotPlayFab::getFriendLeaderboard);
    ClassDB::bind_method("getLeaderboardAroundPlayer", &GodotPlayFab::getLeaderboardAroundPlayer);
    ClassDB::bind_method("getFriendLeaderboardAroundPlayer", &GodotPlayFab::getFriendLeaderboardAroundPlayer);

}
