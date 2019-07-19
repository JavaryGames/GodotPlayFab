#include "godotplayfab.h"
#import "app_delegate.h"


#import <Foundation/Foundation.h>


GodotPlayFab::GodotPlayFab()
{
}

GodotPlayFab::~GodotPlayFab()
{
}



void GodotFirebase::_bind_methods() {
    CLASS_DB::bind_method("init", &GodotPlayFab::init);
    CLASS_DB::bind_method("loginWithFacebook", &GodotPlayFab::loginWithFacebook);
    CLASS_DB::bind_method("loginWithAndroidDeviceId", &GodotPlayFab::loginWithAndroidDeviceId);
    CLASS_DB::bind_method("isLoggedIn", &GodotPlayFab::isLoggedIn);
    CLASS_DB::bind_method("setUserData", &GodotPlayFab::setUserData);
    CLASS_DB::bind_method("deleteUserData", &GodotPlayFab::deleteUserData);
    CLASS_DB::bind_method("getUserData", &GodotPlayFab::getUserData);
    CLASS_DB::bind_method("getPlayFabID", &GodotPlayFab::getPlayFabID);
    CLASS_DB::bind_method("setPlayerStatistic", &GodotPlayFab::setPlayerStatistic);
    CLASS_DB::bind_method("getPlayerStatistic", &GodotPlayFab::getPlayerStatistic);
    CLASS_DB::bind_method("getAccountInfo", &GodotPlayFab::getAccountInfo);
    CLASS_DB::bind_method("linkAndroidDeviceId", &GodotPlayFab::linkAndroidDeviceId);
    CLASS_DB::bind_method("linkFacebookAccount", &GodotPlayFab::linkFacebookAccount);
    CLASS_DB::bind_method("executeCloudScript", &GodotPlayFab::executeCloudScript);
    CLASS_DB::bind_method("getLeaderboard", &GodotPlayFab::getLeaderboard);
    CLASS_DB::bind_method("getFriendLeaderboard", &GodotPlayFab::getFriendLeaderboard);
    CLASS_DB::bind_method("getLeaderboardAroundPlayer", &GodotPlayFab::getLeaderboardAroundPlayer);
    CLASS_DB::bind_method("getFriendLeaderboardAroundPlayer", &GodotPlayFab::getFriendLeaderboardAroundPlayer);

}
