#import <Foundation/Foundation.h>

#import "PlayFabDataDataModels.h"
#import "PlayFabError.h"
#import "PlayFabSettings.h"
#import "PlayFabClientAPI.h"


@interface PlayFabDataAPI : NSObject

+(NSString*) GetURL;


		
typedef void(^AbortFileUploadsCallback)(DataAbortFileUploadsResponse* result, NSObject* userData);
		
typedef void(^DeleteFilesCallback)(DataDeleteFilesResponse* result, NSObject* userData);
		
typedef void(^FinalizeFileUploadsCallback)(DataFinalizeFileUploadsResponse* result, NSObject* userData);
		
typedef void(^GetFilesCallback)(DataGetFilesResponse* result, NSObject* userData);
		
typedef void(^GetObjectsCallback)(DataGetObjectsResponse* result, NSObject* userData);
		
typedef void(^InitiateFileUploadsCallback)(DataInitiateFileUploadsResponse* result, NSObject* userData);
		
typedef void(^SetObjectsCallback)(DataSetObjectsResponse* result, NSObject* userData);
		

+ (PlayFabClientAPI*) GetInstance;

		

// ------------ Generated API calls
		
-(void) AbortFileUploads:(DataAbortFileUploadsRequest*)request success:(AbortFileUploadsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) DeleteFiles:(DataDeleteFilesRequest*)request success:(DeleteFilesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) FinalizeFileUploads:(DataFinalizeFileUploadsRequest*)request success:(FinalizeFileUploadsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetFiles:(DataGetFilesRequest*)request success:(GetFilesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetObjects:(DataGetObjectsRequest*)request success:(GetObjectsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) InitiateFileUploads:(DataInitiateFileUploadsRequest*)request success:(InitiateFileUploadsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) SetObjects:(DataSetObjectsRequest*)request success:(SetObjectsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		

@end
