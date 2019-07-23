#import <Foundation/Foundation.h>

#import "PlayFabCloudScriptDataModels.h"
#import "PlayFabError.h"
#import "PlayFabSettings.h"
#import "PlayFabClientAPI.h"


@interface PlayFabCloudScriptAPI : NSObject

+(NSString*) GetURL;


		
typedef void(^ExecuteEntityCloudScriptCallback)(CloudScriptExecuteCloudScriptResult* result, NSObject* userData);
		

+ (PlayFabClientAPI*) GetInstance;

		

// ------------ Generated API calls
		
-(void) ExecuteEntityCloudScript:(CloudScriptExecuteEntityCloudScriptRequest*)request success:(ExecuteEntityCloudScriptCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		

@end
