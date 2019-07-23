#import <Foundation/Foundation.h>

#import "PlayFabAuthenticationDataModels.h"
#import "PlayFabError.h"
#import "PlayFabSettings.h"
#import "PlayFabClientAPI.h"


@interface PlayFabAuthenticationAPI : NSObject

+(NSString*) GetURL;


		
typedef void(^GetEntityTokenCallback)(AuthenticationGetEntityTokenResponse* result, NSObject* userData);
		
typedef void(^ValidateEntityTokenCallback)(AuthenticationValidateEntityTokenResponse* result, NSObject* userData);
		

+ (PlayFabClientAPI*) GetInstance;

		

// ------------ Generated API calls
		
-(void) GetEntityToken:(AuthenticationGetEntityTokenRequest*)request success:(GetEntityTokenCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ValidateEntityToken:(AuthenticationValidateEntityTokenRequest*)request success:(ValidateEntityTokenCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		

@end
