#import <Foundation/Foundation.h>

#import "PlayFabProfilesDataModels.h"
#import "PlayFabError.h"
#import "PlayFabSettings.h"
#import "PlayFabClientAPI.h"


@interface PlayFabProfilesAPI : NSObject

+(NSString*) GetURL;


		
typedef void(^GetGlobalPolicyCallback)(ProfilesGetGlobalPolicyResponse* result, NSObject* userData);
		
typedef void(^GetProfileCallback)(ProfilesGetEntityProfileResponse* result, NSObject* userData);
		
typedef void(^GetProfilesCallback)(ProfilesGetEntityProfilesResponse* result, NSObject* userData);
		
typedef void(^GetTitlePlayersFromMasterPlayerAccountIdsCallback)(ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse* result, NSObject* userData);
		
typedef void(^SetGlobalPolicyCallback)(ProfilesSetGlobalPolicyResponse* result, NSObject* userData);
		
typedef void(^SetProfileLanguageCallback)(ProfilesSetProfileLanguageResponse* result, NSObject* userData);
		
typedef void(^SetProfilePolicyCallback)(ProfilesSetEntityProfilePolicyResponse* result, NSObject* userData);
		

+ (PlayFabClientAPI*) GetInstance;

		

// ------------ Generated API calls
		
-(void) GetGlobalPolicy:(GetGlobalPolicyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) GetProfile:(ProfilesGetEntityProfileRequest*)request success:(GetProfileCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetProfiles:(ProfilesGetEntityProfilesRequest*)request success:(GetProfilesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetTitlePlayersFromMasterPlayerAccountIds:(ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest*)request success:(GetTitlePlayersFromMasterPlayerAccountIdsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) SetGlobalPolicy:(ProfilesSetGlobalPolicyRequest*)request success:(SetGlobalPolicyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) SetProfileLanguage:(ProfilesSetProfileLanguageRequest*)request success:(SetProfileLanguageCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) SetProfilePolicy:(ProfilesSetEntityProfilePolicyRequest*)request success:(SetProfilePolicyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		

@end
