#import <Foundation/Foundation.h>

#import "PlayFabMultiplayerDataModels.h"
#import "PlayFabError.h"
#import "PlayFabSettings.h"
#import "PlayFabClientAPI.h"


@interface PlayFabMultiplayerAPI : NSObject

+(NSString*) GetURL;


		
typedef void(^CancelAllMatchmakingTicketsForPlayerCallback)(MultiplayerCancelAllMatchmakingTicketsForPlayerResult* result, NSObject* userData);
		
typedef void(^CancelMatchmakingTicketCallback)(MultiplayerCancelMatchmakingTicketResult* result, NSObject* userData);
		
typedef void(^CreateBuildWithCustomContainerCallback)(MultiplayerCreateBuildWithCustomContainerResponse* result, NSObject* userData);
		
typedef void(^CreateBuildWithManagedContainerCallback)(MultiplayerCreateBuildWithManagedContainerResponse* result, NSObject* userData);
		
typedef void(^CreateMatchmakingTicketCallback)(MultiplayerCreateMatchmakingTicketResult* result, NSObject* userData);
		
typedef void(^CreateRemoteUserCallback)(MultiplayerCreateRemoteUserResponse* result, NSObject* userData);
		
typedef void(^CreateServerMatchmakingTicketCallback)(MultiplayerCreateMatchmakingTicketResult* result, NSObject* userData);
		
typedef void(^DeleteAssetCallback)(MultiplayerEmptyResponse* result, NSObject* userData);
		
typedef void(^DeleteBuildCallback)(MultiplayerEmptyResponse* result, NSObject* userData);
		
typedef void(^DeleteCertificateCallback)(MultiplayerEmptyResponse* result, NSObject* userData);
		
typedef void(^DeleteRemoteUserCallback)(MultiplayerEmptyResponse* result, NSObject* userData);
		
typedef void(^EnableMultiplayerServersForTitleCallback)(MultiplayerEnableMultiplayerServersForTitleResponse* result, NSObject* userData);
		
typedef void(^GetAssetUploadUrlCallback)(MultiplayerGetAssetUploadUrlResponse* result, NSObject* userData);
		
typedef void(^GetBuildCallback)(MultiplayerGetBuildResponse* result, NSObject* userData);
		
typedef void(^GetContainerRegistryCredentialsCallback)(MultiplayerGetContainerRegistryCredentialsResponse* result, NSObject* userData);
		
typedef void(^GetMatchCallback)(MultiplayerGetMatchResult* result, NSObject* userData);
		
typedef void(^GetMatchmakingTicketCallback)(MultiplayerGetMatchmakingTicketResult* result, NSObject* userData);
		
typedef void(^GetMultiplayerServerDetailsCallback)(MultiplayerGetMultiplayerServerDetailsResponse* result, NSObject* userData);
		
typedef void(^GetQueueStatisticsCallback)(MultiplayerGetQueueStatisticsResult* result, NSObject* userData);
		
typedef void(^GetRemoteLoginEndpointCallback)(MultiplayerGetRemoteLoginEndpointResponse* result, NSObject* userData);
		
typedef void(^GetTitleEnabledForMultiplayerServersStatusCallback)(MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse* result, NSObject* userData);
		
typedef void(^GetTitleMultiplayerServersQuotasCallback)(MultiplayerGetTitleMultiplayerServersQuotasResponse* result, NSObject* userData);
		
typedef void(^JoinMatchmakingTicketCallback)(MultiplayerJoinMatchmakingTicketResult* result, NSObject* userData);
		
typedef void(^ListArchivedMultiplayerServersCallback)(MultiplayerListMultiplayerServersResponse* result, NSObject* userData);
		
typedef void(^ListAssetSummariesCallback)(MultiplayerListAssetSummariesResponse* result, NSObject* userData);
		
typedef void(^ListBuildSummariesCallback)(MultiplayerListBuildSummariesResponse* result, NSObject* userData);
		
typedef void(^ListCertificateSummariesCallback)(MultiplayerListCertificateSummariesResponse* result, NSObject* userData);
		
typedef void(^ListContainerImagesCallback)(MultiplayerListContainerImagesResponse* result, NSObject* userData);
		
typedef void(^ListContainerImageTagsCallback)(MultiplayerListContainerImageTagsResponse* result, NSObject* userData);
		
typedef void(^ListMatchmakingTicketsForPlayerCallback)(MultiplayerListMatchmakingTicketsForPlayerResult* result, NSObject* userData);
		
typedef void(^ListMultiplayerServersCallback)(MultiplayerListMultiplayerServersResponse* result, NSObject* userData);
		
typedef void(^ListQosServersCallback)(MultiplayerListQosServersResponse* result, NSObject* userData);
		
typedef void(^ListVirtualMachineSummariesCallback)(MultiplayerListVirtualMachineSummariesResponse* result, NSObject* userData);
		
typedef void(^RequestMultiplayerServerCallback)(MultiplayerRequestMultiplayerServerResponse* result, NSObject* userData);
		
typedef void(^RolloverContainerRegistryCredentialsCallback)(MultiplayerRolloverContainerRegistryCredentialsResponse* result, NSObject* userData);
		
typedef void(^ShutdownMultiplayerServerCallback)(MultiplayerEmptyResponse* result, NSObject* userData);
		
typedef void(^UpdateBuildRegionsCallback)(MultiplayerEmptyResponse* result, NSObject* userData);
		
typedef void(^UploadCertificateCallback)(MultiplayerEmptyResponse* result, NSObject* userData);
		

+ (PlayFabClientAPI*) GetInstance;

		

// ------------ Generated API calls
		
-(void) CancelAllMatchmakingTicketsForPlayer:(MultiplayerCancelAllMatchmakingTicketsForPlayerRequest*)request success:(CancelAllMatchmakingTicketsForPlayerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CancelMatchmakingTicket:(MultiplayerCancelMatchmakingTicketRequest*)request success:(CancelMatchmakingTicketCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CreateBuildWithCustomContainer:(MultiplayerCreateBuildWithCustomContainerRequest*)request success:(CreateBuildWithCustomContainerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CreateBuildWithManagedContainer:(MultiplayerCreateBuildWithManagedContainerRequest*)request success:(CreateBuildWithManagedContainerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CreateMatchmakingTicket:(MultiplayerCreateMatchmakingTicketRequest*)request success:(CreateMatchmakingTicketCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CreateRemoteUser:(MultiplayerCreateRemoteUserRequest*)request success:(CreateRemoteUserCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CreateServerMatchmakingTicket:(MultiplayerCreateServerMatchmakingTicketRequest*)request success:(CreateServerMatchmakingTicketCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) DeleteAsset:(MultiplayerDeleteAssetRequest*)request success:(DeleteAssetCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) DeleteBuild:(MultiplayerDeleteBuildRequest*)request success:(DeleteBuildCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) DeleteCertificate:(MultiplayerDeleteCertificateRequest*)request success:(DeleteCertificateCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) DeleteRemoteUser:(MultiplayerDeleteRemoteUserRequest*)request success:(DeleteRemoteUserCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) EnableMultiplayerServersForTitle:(EnableMultiplayerServersForTitleCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) GetAssetUploadUrl:(MultiplayerGetAssetUploadUrlRequest*)request success:(GetAssetUploadUrlCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetBuild:(MultiplayerGetBuildRequest*)request success:(GetBuildCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetContainerRegistryCredentials:(GetContainerRegistryCredentialsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) GetMatch:(MultiplayerGetMatchRequest*)request success:(GetMatchCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetMatchmakingTicket:(MultiplayerGetMatchmakingTicketRequest*)request success:(GetMatchmakingTicketCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetMultiplayerServerDetails:(MultiplayerGetMultiplayerServerDetailsRequest*)request success:(GetMultiplayerServerDetailsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetQueueStatistics:(MultiplayerGetQueueStatisticsRequest*)request success:(GetQueueStatisticsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetRemoteLoginEndpoint:(MultiplayerGetRemoteLoginEndpointRequest*)request success:(GetRemoteLoginEndpointCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetTitleEnabledForMultiplayerServersStatus:(GetTitleEnabledForMultiplayerServersStatusCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) GetTitleMultiplayerServersQuotas:(GetTitleMultiplayerServersQuotasCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) JoinMatchmakingTicket:(MultiplayerJoinMatchmakingTicketRequest*)request success:(JoinMatchmakingTicketCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListArchivedMultiplayerServers:(MultiplayerListMultiplayerServersRequest*)request success:(ListArchivedMultiplayerServersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListAssetSummaries:(MultiplayerListAssetSummariesRequest*)request success:(ListAssetSummariesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListBuildSummaries:(MultiplayerListBuildSummariesRequest*)request success:(ListBuildSummariesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListCertificateSummaries:(MultiplayerListCertificateSummariesRequest*)request success:(ListCertificateSummariesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListContainerImages:(MultiplayerListContainerImagesRequest*)request success:(ListContainerImagesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListContainerImageTags:(MultiplayerListContainerImageTagsRequest*)request success:(ListContainerImageTagsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListMatchmakingTicketsForPlayer:(MultiplayerListMatchmakingTicketsForPlayerRequest*)request success:(ListMatchmakingTicketsForPlayerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListMultiplayerServers:(MultiplayerListMultiplayerServersRequest*)request success:(ListMultiplayerServersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListQosServers:(ListQosServersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) ListVirtualMachineSummaries:(MultiplayerListVirtualMachineSummariesRequest*)request success:(ListVirtualMachineSummariesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RequestMultiplayerServer:(MultiplayerRequestMultiplayerServerRequest*)request success:(RequestMultiplayerServerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RolloverContainerRegistryCredentials:(RolloverContainerRegistryCredentialsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) ShutdownMultiplayerServer:(MultiplayerShutdownMultiplayerServerRequest*)request success:(ShutdownMultiplayerServerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateBuildRegions:(MultiplayerUpdateBuildRegionsRequest*)request success:(UpdateBuildRegionsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UploadCertificate:(MultiplayerUploadCertificateRequest*)request success:(UploadCertificateCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		

@end
