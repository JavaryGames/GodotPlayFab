#import <Foundation/Foundation.h>

#import "PlayFabClientDataModels.h"
#import "PlayFabError.h"
#import "PlayFabSettings.h"


@interface PlayFabClientAPI : NSObject

+(NSString*) GetURL;


@property (nonatomic) NSString* mUserSessionTicket;

		
typedef void(^AcceptTradeCallback)(ClientAcceptTradeResponse* result, NSObject* userData);
		
typedef void(^AddFriendCallback)(ClientAddFriendResult* result, NSObject* userData);
		
typedef void(^AddGenericIDCallback)(ClientAddGenericIDResult* result, NSObject* userData);
		
typedef void(^AddOrUpdateContactEmailCallback)(ClientAddOrUpdateContactEmailResult* result, NSObject* userData);
		
typedef void(^AddSharedGroupMembersCallback)(ClientAddSharedGroupMembersResult* result, NSObject* userData);
		
typedef void(^AddUsernamePasswordCallback)(ClientAddUsernamePasswordResult* result, NSObject* userData);
		
typedef void(^AddUserVirtualCurrencyCallback)(ClientModifyUserVirtualCurrencyResult* result, NSObject* userData);
		
typedef void(^AndroidDevicePushNotificationRegistrationCallback)(ClientAndroidDevicePushNotificationRegistrationResult* result, NSObject* userData);
		
typedef void(^AttributeInstallCallback)(ClientAttributeInstallResult* result, NSObject* userData);
		
typedef void(^CancelTradeCallback)(ClientCancelTradeResponse* result, NSObject* userData);
		
typedef void(^ConfirmPurchaseCallback)(ClientConfirmPurchaseResult* result, NSObject* userData);
		
typedef void(^ConsumeItemCallback)(ClientConsumeItemResult* result, NSObject* userData);
		
typedef void(^ConsumePSNEntitlementsCallback)(ClientConsumePSNEntitlementsResult* result, NSObject* userData);
		
typedef void(^ConsumeXboxEntitlementsCallback)(ClientConsumeXboxEntitlementsResult* result, NSObject* userData);
		
typedef void(^CreateSharedGroupCallback)(ClientCreateSharedGroupResult* result, NSObject* userData);
		
typedef void(^ExecuteCloudScriptCallback)(ClientExecuteCloudScriptResult* result, NSObject* userData);
		
typedef void(^GetAccountInfoCallback)(ClientGetAccountInfoResult* result, NSObject* userData);
		
typedef void(^GetAllUsersCharactersCallback)(ClientListUsersCharactersResult* result, NSObject* userData);
		
typedef void(^GetCatalogItemsCallback)(ClientGetCatalogItemsResult* result, NSObject* userData);
		
typedef void(^GetCharacterDataCallback)(ClientGetCharacterDataResult* result, NSObject* userData);
		
typedef void(^GetCharacterInventoryCallback)(ClientGetCharacterInventoryResult* result, NSObject* userData);
		
typedef void(^GetCharacterLeaderboardCallback)(ClientGetCharacterLeaderboardResult* result, NSObject* userData);
		
typedef void(^GetCharacterReadOnlyDataCallback)(ClientGetCharacterDataResult* result, NSObject* userData);
		
typedef void(^GetCharacterStatisticsCallback)(ClientGetCharacterStatisticsResult* result, NSObject* userData);
		
typedef void(^GetContentDownloadUrlCallback)(ClientGetContentDownloadUrlResult* result, NSObject* userData);
		
typedef void(^GetCurrentGamesCallback)(ClientCurrentGamesResult* result, NSObject* userData);
		
typedef void(^GetFriendLeaderboardCallback)(ClientGetLeaderboardResult* result, NSObject* userData);
		
typedef void(^GetFriendLeaderboardAroundPlayerCallback)(ClientGetFriendLeaderboardAroundPlayerResult* result, NSObject* userData);
		
typedef void(^GetFriendsListCallback)(ClientGetFriendsListResult* result, NSObject* userData);
		
typedef void(^GetGameServerRegionsCallback)(ClientGameServerRegionsResult* result, NSObject* userData);
		
typedef void(^GetLeaderboardCallback)(ClientGetLeaderboardResult* result, NSObject* userData);
		
typedef void(^GetLeaderboardAroundCharacterCallback)(ClientGetLeaderboardAroundCharacterResult* result, NSObject* userData);
		
typedef void(^GetLeaderboardAroundPlayerCallback)(ClientGetLeaderboardAroundPlayerResult* result, NSObject* userData);
		
typedef void(^GetLeaderboardForUserCharactersCallback)(ClientGetLeaderboardForUsersCharactersResult* result, NSObject* userData);
		
typedef void(^GetPaymentTokenCallback)(ClientGetPaymentTokenResult* result, NSObject* userData);
		
typedef void(^GetPhotonAuthenticationTokenCallback)(ClientGetPhotonAuthenticationTokenResult* result, NSObject* userData);
		
typedef void(^GetPlayerCombinedInfoCallback)(ClientGetPlayerCombinedInfoResult* result, NSObject* userData);
		
typedef void(^GetPlayerProfileCallback)(ClientGetPlayerProfileResult* result, NSObject* userData);
		
typedef void(^GetPlayerSegmentsCallback)(ClientGetPlayerSegmentsResult* result, NSObject* userData);
		
typedef void(^GetPlayerStatisticsCallback)(ClientGetPlayerStatisticsResult* result, NSObject* userData);
		
typedef void(^GetPlayerStatisticVersionsCallback)(ClientGetPlayerStatisticVersionsResult* result, NSObject* userData);
		
typedef void(^GetPlayerTagsCallback)(ClientGetPlayerTagsResult* result, NSObject* userData);
		
typedef void(^GetPlayerTradesCallback)(ClientGetPlayerTradesResponse* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromFacebookIDsCallback)(ClientGetPlayFabIDsFromFacebookIDsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromFacebookInstantGamesIdsCallback)(ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromGameCenterIDsCallback)(ClientGetPlayFabIDsFromGameCenterIDsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromGenericIDsCallback)(ClientGetPlayFabIDsFromGenericIDsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromGoogleIDsCallback)(ClientGetPlayFabIDsFromGoogleIDsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromKongregateIDsCallback)(ClientGetPlayFabIDsFromKongregateIDsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromNintendoSwitchDeviceIdsCallback)(ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromPSNAccountIDsCallback)(ClientGetPlayFabIDsFromPSNAccountIDsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromSteamIDsCallback)(ClientGetPlayFabIDsFromSteamIDsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromTwitchIDsCallback)(ClientGetPlayFabIDsFromTwitchIDsResult* result, NSObject* userData);
		
typedef void(^GetPlayFabIDsFromXboxLiveIDsCallback)(ClientGetPlayFabIDsFromXboxLiveIDsResult* result, NSObject* userData);
		
typedef void(^GetPublisherDataCallback)(ClientGetPublisherDataResult* result, NSObject* userData);
		
typedef void(^GetPurchaseCallback)(ClientGetPurchaseResult* result, NSObject* userData);
		
typedef void(^GetSharedGroupDataCallback)(ClientGetSharedGroupDataResult* result, NSObject* userData);
		
typedef void(^GetStoreItemsCallback)(ClientGetStoreItemsResult* result, NSObject* userData);
		
typedef void(^GetTimeCallback)(ClientGetTimeResult* result, NSObject* userData);
		
typedef void(^GetTitleDataCallback)(ClientGetTitleDataResult* result, NSObject* userData);
		
typedef void(^GetTitleNewsCallback)(ClientGetTitleNewsResult* result, NSObject* userData);
		
typedef void(^GetTitlePublicKeyCallback)(ClientGetTitlePublicKeyResult* result, NSObject* userData);
		
typedef void(^GetTradeStatusCallback)(ClientGetTradeStatusResponse* result, NSObject* userData);
		
typedef void(^GetUserDataCallback)(ClientGetUserDataResult* result, NSObject* userData);
		
typedef void(^GetUserInventoryCallback)(ClientGetUserInventoryResult* result, NSObject* userData);
		
typedef void(^GetUserPublisherDataCallback)(ClientGetUserDataResult* result, NSObject* userData);
		
typedef void(^GetUserPublisherReadOnlyDataCallback)(ClientGetUserDataResult* result, NSObject* userData);
		
typedef void(^GetUserReadOnlyDataCallback)(ClientGetUserDataResult* result, NSObject* userData);
		
typedef void(^GetWindowsHelloChallengeCallback)(ClientGetWindowsHelloChallengeResponse* result, NSObject* userData);
		
typedef void(^GrantCharacterToUserCallback)(ClientGrantCharacterToUserResult* result, NSObject* userData);
		
typedef void(^LinkAndroidDeviceIDCallback)(ClientLinkAndroidDeviceIDResult* result, NSObject* userData);
		
typedef void(^LinkCustomIDCallback)(ClientLinkCustomIDResult* result, NSObject* userData);
		
typedef void(^LinkFacebookAccountCallback)(ClientLinkFacebookAccountResult* result, NSObject* userData);
		
typedef void(^LinkFacebookInstantGamesIdCallback)(ClientLinkFacebookInstantGamesIdResult* result, NSObject* userData);
		
typedef void(^LinkGameCenterAccountCallback)(ClientLinkGameCenterAccountResult* result, NSObject* userData);
		
typedef void(^LinkGoogleAccountCallback)(ClientLinkGoogleAccountResult* result, NSObject* userData);
		
typedef void(^LinkIOSDeviceIDCallback)(ClientLinkIOSDeviceIDResult* result, NSObject* userData);
		
typedef void(^LinkKongregateCallback)(ClientLinkKongregateAccountResult* result, NSObject* userData);
		
typedef void(^LinkNintendoSwitchDeviceIdCallback)(ClientLinkNintendoSwitchDeviceIdResult* result, NSObject* userData);
		
typedef void(^LinkOpenIdConnectCallback)(ClientEmptyResult* result, NSObject* userData);
		
typedef void(^LinkPSNAccountCallback)(ClientLinkPSNAccountResult* result, NSObject* userData);
		
typedef void(^LinkSteamAccountCallback)(ClientLinkSteamAccountResult* result, NSObject* userData);
		
typedef void(^LinkTwitchCallback)(ClientLinkTwitchAccountResult* result, NSObject* userData);
		
typedef void(^LinkWindowsHelloCallback)(ClientLinkWindowsHelloAccountResponse* result, NSObject* userData);
		
typedef void(^LinkXboxAccountCallback)(ClientLinkXboxAccountResult* result, NSObject* userData);
		
typedef void(^LoginWithAndroidDeviceIDCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithCustomIDCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithEmailAddressCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithFacebookCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithFacebookInstantGamesIdCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithGameCenterCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithGoogleAccountCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithIOSDeviceIDCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithKongregateCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithNintendoSwitchDeviceIdCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithOpenIdConnectCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithPlayFabCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithPSNCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithSteamCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithTwitchCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithWindowsHelloCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^LoginWithXboxCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^MatchmakeCallback)(ClientMatchmakeResult* result, NSObject* userData);
		
typedef void(^OpenTradeCallback)(ClientOpenTradeResponse* result, NSObject* userData);
		
typedef void(^PayForPurchaseCallback)(ClientPayForPurchaseResult* result, NSObject* userData);
		
typedef void(^PurchaseItemCallback)(ClientPurchaseItemResult* result, NSObject* userData);
		
typedef void(^RedeemCouponCallback)(ClientRedeemCouponResult* result, NSObject* userData);
		
typedef void(^RefreshPSNAuthTokenCallback)(ClientEmptyResponse* result, NSObject* userData);
		
typedef void(^RegisterForIOSPushNotificationCallback)(ClientRegisterForIOSPushNotificationResult* result, NSObject* userData);
		
typedef void(^RegisterPlayFabUserCallback)(ClientRegisterPlayFabUserResult* result, NSObject* userData);
		
typedef void(^RegisterWithWindowsHelloCallback)(ClientLoginResult* result, NSObject* userData);
		
typedef void(^RemoveContactEmailCallback)(ClientRemoveContactEmailResult* result, NSObject* userData);
		
typedef void(^RemoveFriendCallback)(ClientRemoveFriendResult* result, NSObject* userData);
		
typedef void(^RemoveGenericIDCallback)(ClientRemoveGenericIDResult* result, NSObject* userData);
		
typedef void(^RemoveSharedGroupMembersCallback)(ClientRemoveSharedGroupMembersResult* result, NSObject* userData);
		
typedef void(^ReportDeviceInfoCallback)(ClientEmptyResponse* result, NSObject* userData);
		
typedef void(^ReportPlayerCallback)(ClientReportPlayerClientResult* result, NSObject* userData);
		
typedef void(^RestoreIOSPurchasesCallback)(ClientRestoreIOSPurchasesResult* result, NSObject* userData);
		
typedef void(^SendAccountRecoveryEmailCallback)(ClientSendAccountRecoveryEmailResult* result, NSObject* userData);
		
typedef void(^SetFriendTagsCallback)(ClientSetFriendTagsResult* result, NSObject* userData);
		
typedef void(^SetPlayerSecretCallback)(ClientSetPlayerSecretResult* result, NSObject* userData);
		
typedef void(^StartGameCallback)(ClientStartGameResult* result, NSObject* userData);
		
typedef void(^StartPurchaseCallback)(ClientStartPurchaseResult* result, NSObject* userData);
		
typedef void(^SubtractUserVirtualCurrencyCallback)(ClientModifyUserVirtualCurrencyResult* result, NSObject* userData);
		
typedef void(^UnlinkAndroidDeviceIDCallback)(ClientUnlinkAndroidDeviceIDResult* result, NSObject* userData);
		
typedef void(^UnlinkCustomIDCallback)(ClientUnlinkCustomIDResult* result, NSObject* userData);
		
typedef void(^UnlinkFacebookAccountCallback)(ClientUnlinkFacebookAccountResult* result, NSObject* userData);
		
typedef void(^UnlinkFacebookInstantGamesIdCallback)(ClientUnlinkFacebookInstantGamesIdResult* result, NSObject* userData);
		
typedef void(^UnlinkGameCenterAccountCallback)(ClientUnlinkGameCenterAccountResult* result, NSObject* userData);
		
typedef void(^UnlinkGoogleAccountCallback)(ClientUnlinkGoogleAccountResult* result, NSObject* userData);
		
typedef void(^UnlinkIOSDeviceIDCallback)(ClientUnlinkIOSDeviceIDResult* result, NSObject* userData);
		
typedef void(^UnlinkKongregateCallback)(ClientUnlinkKongregateAccountResult* result, NSObject* userData);
		
typedef void(^UnlinkNintendoSwitchDeviceIdCallback)(ClientUnlinkNintendoSwitchDeviceIdResult* result, NSObject* userData);
		
typedef void(^UnlinkOpenIdConnectCallback)(ClientEmptyResponse* result, NSObject* userData);
		
typedef void(^UnlinkPSNAccountCallback)(ClientUnlinkPSNAccountResult* result, NSObject* userData);
		
typedef void(^UnlinkSteamAccountCallback)(ClientUnlinkSteamAccountResult* result, NSObject* userData);
		
typedef void(^UnlinkTwitchCallback)(ClientUnlinkTwitchAccountResult* result, NSObject* userData);
		
typedef void(^UnlinkWindowsHelloCallback)(ClientUnlinkWindowsHelloAccountResponse* result, NSObject* userData);
		
typedef void(^UnlinkXboxAccountCallback)(ClientUnlinkXboxAccountResult* result, NSObject* userData);
		
typedef void(^UnlockContainerInstanceCallback)(ClientUnlockContainerItemResult* result, NSObject* userData);
		
typedef void(^UnlockContainerItemCallback)(ClientUnlockContainerItemResult* result, NSObject* userData);
		
typedef void(^UpdateAvatarUrlCallback)(ClientEmptyResponse* result, NSObject* userData);
		
typedef void(^UpdateCharacterDataCallback)(ClientUpdateCharacterDataResult* result, NSObject* userData);
		
typedef void(^UpdateCharacterStatisticsCallback)(ClientUpdateCharacterStatisticsResult* result, NSObject* userData);
		
typedef void(^UpdatePlayerStatisticsCallback)(ClientUpdatePlayerStatisticsResult* result, NSObject* userData);
		
typedef void(^UpdateSharedGroupDataCallback)(ClientUpdateSharedGroupDataResult* result, NSObject* userData);
		
typedef void(^UpdateUserDataCallback)(ClientUpdateUserDataResult* result, NSObject* userData);
		
typedef void(^UpdateUserPublisherDataCallback)(ClientUpdateUserDataResult* result, NSObject* userData);
		
typedef void(^UpdateUserTitleDisplayNameCallback)(ClientUpdateUserTitleDisplayNameResult* result, NSObject* userData);
		
typedef void(^ValidateAmazonIAPReceiptCallback)(ClientValidateAmazonReceiptResult* result, NSObject* userData);
		
typedef void(^ValidateGooglePlayPurchaseCallback)(ClientValidateGooglePlayPurchaseResult* result, NSObject* userData);
		
typedef void(^ValidateIOSReceiptCallback)(ClientValidateIOSReceiptResult* result, NSObject* userData);
		
typedef void(^ValidateWindowsStoreReceiptCallback)(ClientValidateWindowsReceiptResult* result, NSObject* userData);
		
typedef void(^WriteCharacterEventCallback)(ClientWriteEventResponse* result, NSObject* userData);
		
typedef void(^WritePlayerEventCallback)(ClientWriteEventResponse* result, NSObject* userData);
		
typedef void(^WriteTitleEventCallback)(ClientWriteEventResponse* result, NSObject* userData);
		

+ (PlayFabClientAPI*) GetInstance;

		+(bool) IsClientLoggedIn;

// ------------ Generated API calls
		
-(void) AcceptTrade:(ClientAcceptTradeRequest*)request success:(AcceptTradeCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AddFriend:(ClientAddFriendRequest*)request success:(AddFriendCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AddGenericID:(ClientAddGenericIDRequest*)request success:(AddGenericIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AddOrUpdateContactEmail:(ClientAddOrUpdateContactEmailRequest*)request success:(AddOrUpdateContactEmailCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AddSharedGroupMembers:(ClientAddSharedGroupMembersRequest*)request success:(AddSharedGroupMembersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AddUsernamePassword:(ClientAddUsernamePasswordRequest*)request success:(AddUsernamePasswordCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AddUserVirtualCurrency:(ClientAddUserVirtualCurrencyRequest*)request success:(AddUserVirtualCurrencyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AndroidDevicePushNotificationRegistration:(ClientAndroidDevicePushNotificationRegistrationRequest*)request success:(AndroidDevicePushNotificationRegistrationCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AttributeInstall:(ClientAttributeInstallRequest*)request success:(AttributeInstallCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CancelTrade:(ClientCancelTradeRequest*)request success:(CancelTradeCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ConfirmPurchase:(ClientConfirmPurchaseRequest*)request success:(ConfirmPurchaseCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ConsumeItem:(ClientConsumeItemRequest*)request success:(ConsumeItemCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ConsumePSNEntitlements:(ClientConsumePSNEntitlementsRequest*)request success:(ConsumePSNEntitlementsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ConsumeXboxEntitlements:(ClientConsumeXboxEntitlementsRequest*)request success:(ConsumeXboxEntitlementsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CreateSharedGroup:(ClientCreateSharedGroupRequest*)request success:(CreateSharedGroupCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ExecuteCloudScript:(ClientExecuteCloudScriptRequest*)request success:(ExecuteCloudScriptCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetAccountInfo:(ClientGetAccountInfoRequest*)request success:(GetAccountInfoCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetAllUsersCharacters:(ClientListUsersCharactersRequest*)request success:(GetAllUsersCharactersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetCatalogItems:(ClientGetCatalogItemsRequest*)request success:(GetCatalogItemsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetCharacterData:(ClientGetCharacterDataRequest*)request success:(GetCharacterDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetCharacterInventory:(ClientGetCharacterInventoryRequest*)request success:(GetCharacterInventoryCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetCharacterLeaderboard:(ClientGetCharacterLeaderboardRequest*)request success:(GetCharacterLeaderboardCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetCharacterReadOnlyData:(ClientGetCharacterDataRequest*)request success:(GetCharacterReadOnlyDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetCharacterStatistics:(ClientGetCharacterStatisticsRequest*)request success:(GetCharacterStatisticsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetContentDownloadUrl:(ClientGetContentDownloadUrlRequest*)request success:(GetContentDownloadUrlCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetCurrentGames:(ClientCurrentGamesRequest*)request success:(GetCurrentGamesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetFriendLeaderboard:(ClientGetFriendLeaderboardRequest*)request success:(GetFriendLeaderboardCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetFriendLeaderboardAroundPlayer:(ClientGetFriendLeaderboardAroundPlayerRequest*)request success:(GetFriendLeaderboardAroundPlayerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetFriendsList:(ClientGetFriendsListRequest*)request success:(GetFriendsListCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetGameServerRegions:(ClientGameServerRegionsRequest*)request success:(GetGameServerRegionsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetLeaderboard:(ClientGetLeaderboardRequest*)request success:(GetLeaderboardCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetLeaderboardAroundCharacter:(ClientGetLeaderboardAroundCharacterRequest*)request success:(GetLeaderboardAroundCharacterCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetLeaderboardAroundPlayer:(ClientGetLeaderboardAroundPlayerRequest*)request success:(GetLeaderboardAroundPlayerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetLeaderboardForUserCharacters:(ClientGetLeaderboardForUsersCharactersRequest*)request success:(GetLeaderboardForUserCharactersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPaymentToken:(ClientGetPaymentTokenRequest*)request success:(GetPaymentTokenCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPhotonAuthenticationToken:(ClientGetPhotonAuthenticationTokenRequest*)request success:(GetPhotonAuthenticationTokenCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayerCombinedInfo:(ClientGetPlayerCombinedInfoRequest*)request success:(GetPlayerCombinedInfoCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayerProfile:(ClientGetPlayerProfileRequest*)request success:(GetPlayerProfileCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayerSegments:(GetPlayerSegmentsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) GetPlayerStatistics:(ClientGetPlayerStatisticsRequest*)request success:(GetPlayerStatisticsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayerStatisticVersions:(ClientGetPlayerStatisticVersionsRequest*)request success:(GetPlayerStatisticVersionsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayerTags:(ClientGetPlayerTagsRequest*)request success:(GetPlayerTagsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayerTrades:(ClientGetPlayerTradesRequest*)request success:(GetPlayerTradesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromFacebookIDs:(ClientGetPlayFabIDsFromFacebookIDsRequest*)request success:(GetPlayFabIDsFromFacebookIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromFacebookInstantGamesIds:(ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest*)request success:(GetPlayFabIDsFromFacebookInstantGamesIdsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromGameCenterIDs:(ClientGetPlayFabIDsFromGameCenterIDsRequest*)request success:(GetPlayFabIDsFromGameCenterIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromGenericIDs:(ClientGetPlayFabIDsFromGenericIDsRequest*)request success:(GetPlayFabIDsFromGenericIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromGoogleIDs:(ClientGetPlayFabIDsFromGoogleIDsRequest*)request success:(GetPlayFabIDsFromGoogleIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromKongregateIDs:(ClientGetPlayFabIDsFromKongregateIDsRequest*)request success:(GetPlayFabIDsFromKongregateIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromNintendoSwitchDeviceIds:(ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest*)request success:(GetPlayFabIDsFromNintendoSwitchDeviceIdsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromPSNAccountIDs:(ClientGetPlayFabIDsFromPSNAccountIDsRequest*)request success:(GetPlayFabIDsFromPSNAccountIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromSteamIDs:(ClientGetPlayFabIDsFromSteamIDsRequest*)request success:(GetPlayFabIDsFromSteamIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromTwitchIDs:(ClientGetPlayFabIDsFromTwitchIDsRequest*)request success:(GetPlayFabIDsFromTwitchIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPlayFabIDsFromXboxLiveIDs:(ClientGetPlayFabIDsFromXboxLiveIDsRequest*)request success:(GetPlayFabIDsFromXboxLiveIDsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPublisherData:(ClientGetPublisherDataRequest*)request success:(GetPublisherDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetPurchase:(ClientGetPurchaseRequest*)request success:(GetPurchaseCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetSharedGroupData:(ClientGetSharedGroupDataRequest*)request success:(GetSharedGroupDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetStoreItems:(ClientGetStoreItemsRequest*)request success:(GetStoreItemsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetTime:(GetTimeCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) GetTitleData:(ClientGetTitleDataRequest*)request success:(GetTitleDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetTitleNews:(ClientGetTitleNewsRequest*)request success:(GetTitleNewsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetTitlePublicKey:(ClientGetTitlePublicKeyRequest*)request success:(GetTitlePublicKeyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetTradeStatus:(ClientGetTradeStatusRequest*)request success:(GetTradeStatusCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetUserData:(ClientGetUserDataRequest*)request success:(GetUserDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetUserInventory:(GetUserInventoryCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) GetUserPublisherData:(ClientGetUserDataRequest*)request success:(GetUserPublisherDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetUserPublisherReadOnlyData:(ClientGetUserDataRequest*)request success:(GetUserPublisherReadOnlyDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetUserReadOnlyData:(ClientGetUserDataRequest*)request success:(GetUserReadOnlyDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetWindowsHelloChallenge:(ClientGetWindowsHelloChallengeRequest*)request success:(GetWindowsHelloChallengeCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GrantCharacterToUser:(ClientGrantCharacterToUserRequest*)request success:(GrantCharacterToUserCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkAndroidDeviceID:(ClientLinkAndroidDeviceIDRequest*)request success:(LinkAndroidDeviceIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkCustomID:(ClientLinkCustomIDRequest*)request success:(LinkCustomIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkFacebookAccount:(ClientLinkFacebookAccountRequest*)request success:(LinkFacebookAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkFacebookInstantGamesId:(ClientLinkFacebookInstantGamesIdRequest*)request success:(LinkFacebookInstantGamesIdCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkGameCenterAccount:(ClientLinkGameCenterAccountRequest*)request success:(LinkGameCenterAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkGoogleAccount:(ClientLinkGoogleAccountRequest*)request success:(LinkGoogleAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkIOSDeviceID:(ClientLinkIOSDeviceIDRequest*)request success:(LinkIOSDeviceIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkKongregate:(ClientLinkKongregateAccountRequest*)request success:(LinkKongregateCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkNintendoSwitchDeviceId:(ClientLinkNintendoSwitchDeviceIdRequest*)request success:(LinkNintendoSwitchDeviceIdCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkOpenIdConnect:(ClientLinkOpenIdConnectRequest*)request success:(LinkOpenIdConnectCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkPSNAccount:(ClientLinkPSNAccountRequest*)request success:(LinkPSNAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkSteamAccount:(ClientLinkSteamAccountRequest*)request success:(LinkSteamAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkTwitch:(ClientLinkTwitchAccountRequest*)request success:(LinkTwitchCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkWindowsHello:(ClientLinkWindowsHelloAccountRequest*)request success:(LinkWindowsHelloCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LinkXboxAccount:(ClientLinkXboxAccountRequest*)request success:(LinkXboxAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithAndroidDeviceID:(ClientLoginWithAndroidDeviceIDRequest*)request success:(LoginWithAndroidDeviceIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithCustomID:(ClientLoginWithCustomIDRequest*)request success:(LoginWithCustomIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithEmailAddress:(ClientLoginWithEmailAddressRequest*)request success:(LoginWithEmailAddressCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithFacebook:(ClientLoginWithFacebookRequest*)request success:(LoginWithFacebookCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithFacebookInstantGamesId:(ClientLoginWithFacebookInstantGamesIdRequest*)request success:(LoginWithFacebookInstantGamesIdCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithGameCenter:(ClientLoginWithGameCenterRequest*)request success:(LoginWithGameCenterCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithGoogleAccount:(ClientLoginWithGoogleAccountRequest*)request success:(LoginWithGoogleAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithIOSDeviceID:(ClientLoginWithIOSDeviceIDRequest*)request success:(LoginWithIOSDeviceIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithKongregate:(ClientLoginWithKongregateRequest*)request success:(LoginWithKongregateCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithNintendoSwitchDeviceId:(ClientLoginWithNintendoSwitchDeviceIdRequest*)request success:(LoginWithNintendoSwitchDeviceIdCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithOpenIdConnect:(ClientLoginWithOpenIdConnectRequest*)request success:(LoginWithOpenIdConnectCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithPlayFab:(ClientLoginWithPlayFabRequest*)request success:(LoginWithPlayFabCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithPSN:(ClientLoginWithPSNRequest*)request success:(LoginWithPSNCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithSteam:(ClientLoginWithSteamRequest*)request success:(LoginWithSteamCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithTwitch:(ClientLoginWithTwitchRequest*)request success:(LoginWithTwitchCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithWindowsHello:(ClientLoginWithWindowsHelloRequest*)request success:(LoginWithWindowsHelloCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) LoginWithXbox:(ClientLoginWithXboxRequest*)request success:(LoginWithXboxCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) Matchmake:(ClientMatchmakeRequest*)request success:(MatchmakeCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) OpenTrade:(ClientOpenTradeRequest*)request success:(OpenTradeCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) PayForPurchase:(ClientPayForPurchaseRequest*)request success:(PayForPurchaseCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) PurchaseItem:(ClientPurchaseItemRequest*)request success:(PurchaseItemCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RedeemCoupon:(ClientRedeemCouponRequest*)request success:(RedeemCouponCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RefreshPSNAuthToken:(ClientRefreshPSNAuthTokenRequest*)request success:(RefreshPSNAuthTokenCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RegisterForIOSPushNotification:(ClientRegisterForIOSPushNotificationRequest*)request success:(RegisterForIOSPushNotificationCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RegisterPlayFabUser:(ClientRegisterPlayFabUserRequest*)request success:(RegisterPlayFabUserCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RegisterWithWindowsHello:(ClientRegisterWithWindowsHelloRequest*)request success:(RegisterWithWindowsHelloCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RemoveContactEmail:(RemoveContactEmailCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) RemoveFriend:(ClientRemoveFriendRequest*)request success:(RemoveFriendCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RemoveGenericID:(ClientRemoveGenericIDRequest*)request success:(RemoveGenericIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RemoveSharedGroupMembers:(ClientRemoveSharedGroupMembersRequest*)request success:(RemoveSharedGroupMembersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ReportDeviceInfo:(ClientDeviceInfoRequest*)request success:(ReportDeviceInfoCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ReportPlayer:(ClientReportPlayerClientRequest*)request success:(ReportPlayerCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RestoreIOSPurchases:(ClientRestoreIOSPurchasesRequest*)request success:(RestoreIOSPurchasesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) SendAccountRecoveryEmail:(ClientSendAccountRecoveryEmailRequest*)request success:(SendAccountRecoveryEmailCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) SetFriendTags:(ClientSetFriendTagsRequest*)request success:(SetFriendTagsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) SetPlayerSecret:(ClientSetPlayerSecretRequest*)request success:(SetPlayerSecretCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) StartGame:(ClientStartGameRequest*)request success:(StartGameCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) StartPurchase:(ClientStartPurchaseRequest*)request success:(StartPurchaseCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) SubtractUserVirtualCurrency:(ClientSubtractUserVirtualCurrencyRequest*)request success:(SubtractUserVirtualCurrencyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlinkAndroidDeviceID:(ClientUnlinkAndroidDeviceIDRequest*)request success:(UnlinkAndroidDeviceIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlinkCustomID:(ClientUnlinkCustomIDRequest*)request success:(UnlinkCustomIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlinkFacebookAccount:(UnlinkFacebookAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) UnlinkFacebookInstantGamesId:(ClientUnlinkFacebookInstantGamesIdRequest*)request success:(UnlinkFacebookInstantGamesIdCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlinkGameCenterAccount:(UnlinkGameCenterAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) UnlinkGoogleAccount:(UnlinkGoogleAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) UnlinkIOSDeviceID:(ClientUnlinkIOSDeviceIDRequest*)request success:(UnlinkIOSDeviceIDCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlinkKongregate:(UnlinkKongregateCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) UnlinkNintendoSwitchDeviceId:(ClientUnlinkNintendoSwitchDeviceIdRequest*)request success:(UnlinkNintendoSwitchDeviceIdCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlinkOpenIdConnect:(ClientUninkOpenIdConnectRequest*)request success:(UnlinkOpenIdConnectCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlinkPSNAccount:(UnlinkPSNAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) UnlinkSteamAccount:(UnlinkSteamAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) UnlinkTwitch:(UnlinkTwitchCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData;
		
-(void) UnlinkWindowsHello:(ClientUnlinkWindowsHelloAccountRequest*)request success:(UnlinkWindowsHelloCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlinkXboxAccount:(ClientUnlinkXboxAccountRequest*)request success:(UnlinkXboxAccountCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlockContainerInstance:(ClientUnlockContainerInstanceRequest*)request success:(UnlockContainerInstanceCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnlockContainerItem:(ClientUnlockContainerItemRequest*)request success:(UnlockContainerItemCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateAvatarUrl:(ClientUpdateAvatarUrlRequest*)request success:(UpdateAvatarUrlCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateCharacterData:(ClientUpdateCharacterDataRequest*)request success:(UpdateCharacterDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateCharacterStatistics:(ClientUpdateCharacterStatisticsRequest*)request success:(UpdateCharacterStatisticsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdatePlayerStatistics:(ClientUpdatePlayerStatisticsRequest*)request success:(UpdatePlayerStatisticsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateSharedGroupData:(ClientUpdateSharedGroupDataRequest*)request success:(UpdateSharedGroupDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateUserData:(ClientUpdateUserDataRequest*)request success:(UpdateUserDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateUserPublisherData:(ClientUpdateUserDataRequest*)request success:(UpdateUserPublisherDataCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateUserTitleDisplayName:(ClientUpdateUserTitleDisplayNameRequest*)request success:(UpdateUserTitleDisplayNameCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ValidateAmazonIAPReceipt:(ClientValidateAmazonReceiptRequest*)request success:(ValidateAmazonIAPReceiptCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ValidateGooglePlayPurchase:(ClientValidateGooglePlayPurchaseRequest*)request success:(ValidateGooglePlayPurchaseCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ValidateIOSReceipt:(ClientValidateIOSReceiptRequest*)request success:(ValidateIOSReceiptCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ValidateWindowsStoreReceipt:(ClientValidateWindowsReceiptRequest*)request success:(ValidateWindowsStoreReceiptCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) WriteCharacterEvent:(ClientWriteClientCharacterEventRequest*)request success:(WriteCharacterEventCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) WritePlayerEvent:(ClientWriteClientPlayerEventRequest*)request success:(WritePlayerEventCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) WriteTitleEvent:(ClientWriteTitleEventRequest*)request success:(WriteTitleEventCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		

@end
