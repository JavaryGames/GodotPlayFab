#include "godotplayfab.h"
#import "app_delegate.h"

#ifdef __OBJC__
#import <PlayFabSDK/PlayFabSettings.h>
#import <PlayFabSDK/PlayFabClientAPI.h>
#import <PlayFabSDK/PlayFabClientDataModels.h>
#endif

NSDictionary *convertFromDictionary(const Dictionary& dict);

GodotPlayFab::GodotPlayFab() {
    loggedIn = false;
    playfabID = "";
}

GodotPlayFab::~GodotPlayFab() {}


void GodotPlayFab::init(const int godotId, const String &titleId){
    instanceId = godotId;
    [PlayFabSettings setTitleId: [NSString stringWithCString: titleId.utf8().get_data()]];
}

void GodotPlayFab::loginWithFacebook(const String &accessToken){
    NSDictionary *properties = @{
        @"CreateAccount": @true,
        @"AccessToken": [NSString stringWithCString: accessToken.utf8().get_data()],
        @"TitleId": PlayFabSettings.TitleId,
    };
    ClientLoginWithFacebookRequest *request = [[[ClientLoginWithFacebookRequest alloc] init] initWithDictionary: properties];

    [[PlayFabClientAPI GetInstance] LoginWithFacebook:request
    success: ^(ClientLoginResult* result, NSObject* userData){
        loggedIn = true;
        playfabID = [result.PlayFabId UTF8String];
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_facebook_login_succeeded"));
    }
    failure: ^(PlayFabError* error, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_facebook_login_failed"), [error.errorMessage UTF8String], -1);
    }
    withUserData: nil];
}

void GodotPlayFab::loginWithAndroidDeviceId(const String &android_id){
    NSLog(@"godotplayfab.mm::loginWithAndroidDeviceId: Not implemented");
}

bool GodotPlayFab::isLoggedIn(){
    return loggedIn;
}

void GodotPlayFab::setUserData(const String &key, const String &value){
    NSLog(@"godotplayfab.mm::setUserData: Test pending");
    NSDictionary *data = @{
        [NSString stringWithCString: key.utf8().get_data()]: [NSString stringWithCString: value.utf8().get_data()],
    };
    NSDictionary *properties = @{
        @"Data": data,
    };
    ClientUpdateUserDataRequest *request = [[[ClientUpdateUserDataRequest alloc] init] initWithDictionary: properties];

    [[PlayFabClientAPI GetInstance] UpdateUserData:request
    success: ^(ClientUpdateUserDataResult* result, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_set_user_data_succeeded"), key, [result.DataVersion UTF8String]);
    }
    failure: ^(PlayFabError* error, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_set_user_data_failed"), [error.errorMessage UTF8String]);
    }
    withUserData: nil];
}

void GodotPlayFab::deleteUserData(const String &key){
    NSLog(@"godotplayfab.mm::deleteUserData: Test pending");
    NSArray *keysToRemove = @[
        [NSString stringWithCString: key.utf8().get_data()]
    ];
    NSDictionary *properties = @{
        @"KeysToRemove": keysToRemove,
    };
    ClientUpdateUserDataRequest *request = [[[ClientUpdateUserDataRequest alloc] init] initWithDictionary: properties];

    [[PlayFabClientAPI GetInstance] UpdateUserData:request
    success: ^(ClientUpdateUserDataResult* result, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_delete_user_data_succeeded"), key, [result.DataVersion UTF8String]);
    }
    failure: ^(PlayFabError* error, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_delete_user_data_failed"), key, [error.errorMessage UTF8String], -1);
    }
    withUserData: nil];
}

void GodotPlayFab::getUserData(const String &key, const String &playfabID, const bool readOnly){
    NSArray *keys = @[
        [NSString stringWithCString: key.utf8().get_data()]
    ];
    NSDictionary *properties = @{
        @"PlayFabId": [NSString stringWithCString: playfabID.utf8().get_data()],
        @"Keys": keys,
    };
    ClientGetUserDataRequest *request = [[[ClientGetUserDataRequest alloc] init] initWithDictionary: properties];

    void (^successCallback)(ClientGetUserDataResult* result, NSObject* userData);
    void (^failureCallback)(PlayFabError* result, NSObject* userData);

    successCallback = ^(ClientGetUserDataResult* result, NSObject* userData){
        String value;
        NSString *nsKey = [NSString stringWithCString: key.utf8().get_data()];
        if ([result.Data objectForKey:nsKey]){
            value = [[result.Data objectForKey:nsKey] UTF8String];
            Object *obj = ObjectDB::get_instance(instanceId);
            obj->call_deferred(String("playfab_get_user_data_succeeded"), playfabID, key, value, [result.DataVersion UTF8String]);
        }else{
            Object *obj = ObjectDB::get_instance(instanceId);
            obj->call_deferred(String("playfab_get_user_data_failed"), playfabID, key, "Key not found", 1);
        }
    };
    failureCallback = ^(PlayFabError* error, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_get_user_data_failed"), playfabID, key, [error.errorMessage UTF8String], -1);
    };

    if (!readOnly){
        [[PlayFabClientAPI GetInstance] GetUserData:request
        success: successCallback
        failure: failureCallback
        withUserData: nil];
    }else{
        [[PlayFabClientAPI GetInstance] GetUserReadOnlyData:request
        success: successCallback
        failure: failureCallback
        withUserData: nil];
    }
}

String GodotPlayFab::getPlayFabID(){
    return playfabID;
}

void GodotPlayFab::setPlayerStatistic(const String &name, const int value){
    NSLog(@"godotplayfab.mm::setPlayerStatistic: Test pending");

    NSDictionary *stat = @{
        @"StatisticName": [NSString stringWithCString: name.utf8().get_data()],
        @"Value": [NSNumber numberWithInt:value],
    };
    NSArray *statistic = @[
        stat
    ];
    NSDictionary *properties = @{
        @"Statistics": statistic,
    };
    ClientUpdatePlayerStatisticsRequest *request = [[[ClientUpdatePlayerStatisticsRequest alloc] init] initWithDictionary: properties];

    [[PlayFabClientAPI GetInstance] UpdatePlayerStatistics:request
    success: ^(ClientUpdatePlayerStatisticsResult* result, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_set_player_statistic_succeeded"));
    }
    failure: ^(PlayFabError* error, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_set_player_statistic_failed"), [error.errorMessage UTF8String]);
    }
    withUserData: nil];
}

void GodotPlayFab::getPlayerStatistic(const String &name){
    NSLog(@"godotplayfab.mm::getPlayerStatistic: Test pending");

    NSArray *statisticNames = @[
        [NSString stringWithCString: name.utf8().get_data()]
    ];
    NSDictionary *properties = @{
        @"StatisticNames": statisticNames,
    };
    ClientGetPlayerStatisticsRequest *request = [[[ClientGetPlayerStatisticsRequest alloc] init] initWithDictionary: properties];

    [[PlayFabClientAPI GetInstance] GetPlayerStatistics:request
    success: ^(ClientGetPlayerStatisticsResult* result, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        NSNumber value = [result.Statistics objectAtIndex:0].Value;
        obj->call_deferred(String("playfab_get_player_statistic_succeeded"), name, [value floatValue]);
    }
    failure: ^(PlayFabError* error, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_get_player_statistic_failed"), [error.errorMessage UTF8String]);
    }
    withUserData: nil];
}

void GodotPlayFab::getAccountInfo(const String &playfabID){

    NSDictionary *properties = @{
        @"PlayFabId": [NSString stringWithCString: playfabID.utf8().get_data()],
    };
    ClientGetAccountInfoRequest *request = [[[ClientGetAccountInfoRequest alloc] init] initWithDictionary: properties];

    [[PlayFabClientAPI GetInstance] GetAccountInfo:request
    success: ^(ClientGetAccountInfoResult* result, NSObject* userData){
        Dictionary info = Dictionary();
        if (result.AccountInfo.FacebookInfo != nil){
            Dictionary facebookInfo = Dictionary();
            facebookInfo["FacebookId"] = [result.AccountInfo.FacebookInfo.FacebookId UTF8String];
            facebookInfo["FullName"] = [result.AccountInfo.FacebookInfo.FullName UTF8String];
            info["FacebookInfo"] = facebookInfo;
        }
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_get_account_info_succeeded"), info);
    }
    failure: ^(PlayFabError* error, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_get_account_info_failed"), [error.errorMessage UTF8String], -1);
    }
    withUserData: nil];
}

void GodotPlayFab::linkAndroidDeviceId(const String &android_id){
    NSLog(@"godotplayfab.mm::linkAndroidDeviceId: Not yet implemented");
}

void GodotPlayFab::linkFacebookAccount(const String &access_token){
    NSLog(@"godotplayfab.mm::linkFacebookAccount: Not yet implemented");
}

void GodotPlayFab::executeCloudScript(const String &functionName, const String &functionParameter, const bool generatePlayerStreamEvent){

    NSDictionary *properties = @{
        @"FunctionName": [NSString stringWithCString: functionName.utf8().get_data()],
        @"FunctionParameter": [NSString stringWithCString: functionParameter.utf8().get_data()],
        @"GeneratePlayStreamEvent": [NSNumber numberWithBool:generatePlayerStreamEvent],
        @"ClientRevisionSelection": [NSNumber numberWithInt:ClientCloudScriptRevisionOptionLive],
    };
    ClientExecuteCloudScriptRequest *request = [[[ClientExecuteCloudScriptRequest alloc] init] initWithDictionary: properties];
    // Bypassing strange conversion inside initWithDictionary that messes with RevisionSelection value
    request.RevisionSelection = ClientCloudScriptRevisionOptionLive;

    [[PlayFabClientAPI GetInstance] ExecuteCloudScript:request
    success: ^(ClientExecuteCloudScriptResult* result, NSObject* userData){
        Dictionary response = Dictionary();
        response["APIRequestsIssued"] = [result.APIRequestsIssued intValue];
        response["ExecutionTimeSeconds"] = [result.ExecutionTimeSeconds floatValue];
        response["HttpRequestsIssued"] = [result.HttpRequestsIssued intValue];
        response["FunctionName"] = [result.FunctionName UTF8String];
        if (result.FunctionResult != nil) {
            NSError *err;
            NSData *jsonData = [NSJSONSerialization dataWithJSONObject:result.FunctionResult options:0 error:&err]; 
            NSString *jsonString = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
            response["FunctionResult"] = [jsonString UTF8String];
        }
        response["FunctionResultTooLarge"] = result.FunctionResultTooLarge;
        response["LogsTooLarge"] = result.LogsTooLarge;
        response["MemoryConsumedBytes"] = [result.MemoryConsumedBytes intValue];
        response["ProcessorTimeSeconds"] = [result.ProcessorTimeSeconds floatValue];
        response["Revision"] = [result.Revision intValue];
        if (result.Error != nil) {
            response["ErrorMessage"] = [result.Error.Message UTF8String];
            response["Error"] = [result.Error.Error UTF8String];
            response["ErrorStackTrace"] = [result.Error.StackTrace UTF8String];
        }
        if (result.Logs != nil) {
            Array logs = Array();
            for (ClientLogStatement *log in result.Logs){
                if (log != nil){
                    logs.push_back([log.Message UTF8String]);
                }
            }
            response["Logs"] = logs;
        }

        NSLog(@"[PlayFab] CloudScript completed");
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_execute_cloud_script_succeeded"), currentFunctionName, response);
    }
    failure: ^(PlayFabError* error, NSObject* userData){
        Object *obj = ObjectDB::get_instance(instanceId);
        obj->call_deferred(String("playfab_execute_cloud_script_failed"), currentFunctionName, [error.errorMessage UTF8String], -1);
    }
    withUserData: nil];
}

void GodotPlayFab::getLeaderboard(const String &statistic, const int start_position, const int max_results_count){
    NSLog(@"godotplayfab.mm::getLeaderboard: Not yet implemented");
}

void GodotPlayFab::getFriendLeaderboard(const String &statistic, const int start_position, const int max_results_count){
    NSLog(@"godotplayfab.mm::getFriendLeaderboard: Not yet implemented");
}

void GodotPlayFab::getLeaderboardAroundPlayer(const String &playfabID, const String &statistic, const int start_position, const int max_results_count){
    NSLog(@"godotplayfab.mm::getLeaderboardAroundPlayer: Not yet implemented");
}

void GodotPlayFab::getFriendLeaderboardAroundPlayer(const String &playfabID, const String &statistic, const int max_results_count){
    NSLog(@"godotplayfab.mm::getFriendLeaderboardAroundPlayer: Not yet implemented");
}


NSDictionary *convertFromDictionary(const Dictionary& dict)
{
    NSMutableDictionary *result = [NSMutableDictionary new];
    for(int i=0; i<dict.size(); i++) {
        Variant key = dict.get_key_at_index(i);
        Variant val = dict.get_value_at_index(i);
        if(key.get_type() == Variant::STRING) {
            NSString *strKey = [NSString stringWithUTF8String:((String)key).utf8().get_data()];
            if(val.get_type() == Variant::INT) {
                int i = (int)val;
                result[strKey] = @(i);
            } else if(val.get_type() == Variant::REAL) {
                double d = (double)val;
                result[strKey] = @(d);
            } else if(val.get_type() == Variant::STRING) {
                NSString *s = [NSString stringWithUTF8String:((String)val).utf8().get_data()];
                result[strKey] = s;
            } else if(val.get_type() == Variant::BOOL) {
                BOOL b = (bool)val;
                result[strKey] = @(b);
            } else if(val.get_type() == Variant::DICTIONARY) {
                NSDictionary *d = convertFromDictionary((Dictionary)val);
                result[strKey] = d;
            } else {
                ERR_PRINT("Unexpected type as dictionary value");
            }
        } else {
            ERR_PRINT("Non string key in Dictionary");
        }
    }
    return result;
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
