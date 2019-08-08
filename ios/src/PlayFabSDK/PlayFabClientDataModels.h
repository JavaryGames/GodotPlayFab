#import <Foundation/Foundation.h>
#import "PlayFabBaseModel.h"


typedef enum
{
    ClientTradeStatusInvalid,
    ClientTradeStatusOpening,
    ClientTradeStatusOpen,
    ClientTradeStatusAccepting,
    ClientTradeStatusAccepted,
    ClientTradeStatusFilled,
    ClientTradeStatusCancelled
} ClientTradeStatus;

typedef enum
{
    ClientCloudScriptRevisionOptionLive,
    ClientCloudScriptRevisionOptionLatest,
    ClientCloudScriptRevisionOptionSpecific
} ClientCloudScriptRevisionOption;

typedef enum
{
    ClientEmailVerificationStatusUnverified,
    ClientEmailVerificationStatusPending,
    ClientEmailVerificationStatusConfirmed
} ClientEmailVerificationStatus;

typedef enum
{
    ClientContinentCodeAF,
    ClientContinentCodeAN,
    ClientContinentCodeAS,
    ClientContinentCodeEU,
    ClientContinentCodeNA,
    ClientContinentCodeOC,
    ClientContinentCodeSA
} ClientContinentCode;

typedef enum
{
    ClientCountryCodeAF,
    ClientCountryCodeAX,
    ClientCountryCodeAL,
    ClientCountryCodeDZ,
    ClientCountryCodeAS,
    ClientCountryCodeAD,
    ClientCountryCodeAO,
    ClientCountryCodeAI,
    ClientCountryCodeAQ,
    ClientCountryCodeAG,
    ClientCountryCodeAR,
    ClientCountryCodeAM,
    ClientCountryCodeAW,
    ClientCountryCodeAU,
    ClientCountryCodeAT,
    ClientCountryCodeAZ,
    ClientCountryCodeBS,
    ClientCountryCodeBH,
    ClientCountryCodeBD,
    ClientCountryCodeBB,
    ClientCountryCodeBY,
    ClientCountryCodeBE,
    ClientCountryCodeBZ,
    ClientCountryCodeBJ,
    ClientCountryCodeBM,
    ClientCountryCodeBT,
    ClientCountryCodeBO,
    ClientCountryCodeBQ,
    ClientCountryCodeBA,
    ClientCountryCodeBW,
    ClientCountryCodeBV,
    ClientCountryCodeBR,
    ClientCountryCodeIO,
    ClientCountryCodeBN,
    ClientCountryCodeBG,
    ClientCountryCodeBF,
    ClientCountryCodeBI,
    ClientCountryCodeKH,
    ClientCountryCodeCM,
    ClientCountryCodeCA,
    ClientCountryCodeCV,
    ClientCountryCodeKY,
    ClientCountryCodeCF,
    ClientCountryCodeTD,
    ClientCountryCodeCL,
    ClientCountryCodeCN,
    ClientCountryCodeCX,
    ClientCountryCodeCC,
    ClientCountryCodeCO,
    ClientCountryCodeKM,
    ClientCountryCodeCG,
    ClientCountryCodeCD,
    ClientCountryCodeCK,
    ClientCountryCodeCR,
    ClientCountryCodeCI,
    ClientCountryCodeHR,
    ClientCountryCodeCU,
    ClientCountryCodeCW,
    ClientCountryCodeCY,
    ClientCountryCodeCZ,
    ClientCountryCodeDK,
    ClientCountryCodeDJ,
    ClientCountryCodeDM,
    ClientCountryCodeDO,
    ClientCountryCodeEC,
    ClientCountryCodeEG,
    ClientCountryCodeSV,
    ClientCountryCodeGQ,
    ClientCountryCodeER,
    ClientCountryCodeEE,
    ClientCountryCodeET,
    ClientCountryCodeFK,
    ClientCountryCodeFO,
    ClientCountryCodeFJ,
    ClientCountryCodeFI,
    ClientCountryCodeFR,
    ClientCountryCodeGF,
    ClientCountryCodePF,
    ClientCountryCodeTF,
    ClientCountryCodeGA,
    ClientCountryCodeGM,
    ClientCountryCodeGE,
    ClientCountryCodeDE,
    ClientCountryCodeGH,
    ClientCountryCodeGI,
    ClientCountryCodeGR,
    ClientCountryCodeGL,
    ClientCountryCodeGD,
    ClientCountryCodeGP,
    ClientCountryCodeGU,
    ClientCountryCodeGT,
    ClientCountryCodeGG,
    ClientCountryCodeGN,
    ClientCountryCodeGW,
    ClientCountryCodeGY,
    ClientCountryCodeHT,
    ClientCountryCodeHM,
    ClientCountryCodeVA,
    ClientCountryCodeHN,
    ClientCountryCodeHK,
    ClientCountryCodeHU,
    ClientCountryCodeIS,
    ClientCountryCodeIN,
    ClientCountryCodeID,
    ClientCountryCodeIR,
    ClientCountryCodeIQ,
    ClientCountryCodeIE,
    ClientCountryCodeIM,
    ClientCountryCodeIL,
    ClientCountryCodeIT,
    ClientCountryCodeJM,
    ClientCountryCodeJP,
    ClientCountryCodeJE,
    ClientCountryCodeJO,
    ClientCountryCodeKZ,
    ClientCountryCodeKE,
    ClientCountryCodeKI,
    ClientCountryCodeKP,
    ClientCountryCodeKR,
    ClientCountryCodeKW,
    ClientCountryCodeKG,
    ClientCountryCodeLA,
    ClientCountryCodeLV,
    ClientCountryCodeLB,
    ClientCountryCodeLS,
    ClientCountryCodeLR,
    ClientCountryCodeLY,
    ClientCountryCodeLI,
    ClientCountryCodeLT,
    ClientCountryCodeLU,
    ClientCountryCodeMO,
    ClientCountryCodeMK,
    ClientCountryCodeMG,
    ClientCountryCodeMW,
    ClientCountryCodeMY,
    ClientCountryCodeMV,
    ClientCountryCodeML,
    ClientCountryCodeMT,
    ClientCountryCodeMH,
    ClientCountryCodeMQ,
    ClientCountryCodeMR,
    ClientCountryCodeMU,
    ClientCountryCodeYT,
    ClientCountryCodeMX,
    ClientCountryCodeFM,
    ClientCountryCodeMD,
    ClientCountryCodeMC,
    ClientCountryCodeMN,
    ClientCountryCodeME,
    ClientCountryCodeMS,
    ClientCountryCodeMA,
    ClientCountryCodeMZ,
    ClientCountryCodeMM,
    ClientCountryCodeNA,
    ClientCountryCodeNR,
    ClientCountryCodeNP,
    ClientCountryCodeNL,
    ClientCountryCodeNC,
    ClientCountryCodeNZ,
    ClientCountryCodeNI,
    ClientCountryCodeNE,
    ClientCountryCodeNG,
    ClientCountryCodeNU,
    ClientCountryCodeNF,
    ClientCountryCodeMP,
    ClientCountryCodeNO,
    ClientCountryCodeOM,
    ClientCountryCodePK,
    ClientCountryCodePW,
    ClientCountryCodePS,
    ClientCountryCodePA,
    ClientCountryCodePG,
    ClientCountryCodePY,
    ClientCountryCodePE,
    ClientCountryCodePH,
    ClientCountryCodePN,
    ClientCountryCodePL,
    ClientCountryCodePT,
    ClientCountryCodePR,
    ClientCountryCodeQA,
    ClientCountryCodeRE,
    ClientCountryCodeRO,
    ClientCountryCodeRU,
    ClientCountryCodeRW,
    ClientCountryCodeBL,
    ClientCountryCodeSH,
    ClientCountryCodeKN,
    ClientCountryCodeLC,
    ClientCountryCodeMF,
    ClientCountryCodePM,
    ClientCountryCodeVC,
    ClientCountryCodeWS,
    ClientCountryCodeSM,
    ClientCountryCodeST,
    ClientCountryCodeSA,
    ClientCountryCodeSN,
    ClientCountryCodeRS,
    ClientCountryCodeSC,
    ClientCountryCodeSL,
    ClientCountryCodeSG,
    ClientCountryCodeSX,
    ClientCountryCodeSK,
    ClientCountryCodeSI,
    ClientCountryCodeSB,
    ClientCountryCodeSO,
    ClientCountryCodeZA,
    ClientCountryCodeGS,
    ClientCountryCodeSS,
    ClientCountryCodeES,
    ClientCountryCodeLK,
    ClientCountryCodeSD,
    ClientCountryCodeSR,
    ClientCountryCodeSJ,
    ClientCountryCodeSZ,
    ClientCountryCodeSE,
    ClientCountryCodeCH,
    ClientCountryCodeSY,
    ClientCountryCodeTW,
    ClientCountryCodeTJ,
    ClientCountryCodeTZ,
    ClientCountryCodeTH,
    ClientCountryCodeTL,
    ClientCountryCodeTG,
    ClientCountryCodeTK,
    ClientCountryCodeTO,
    ClientCountryCodeTT,
    ClientCountryCodeTN,
    ClientCountryCodeTR,
    ClientCountryCodeTM,
    ClientCountryCodeTC,
    ClientCountryCodeTV,
    ClientCountryCodeUG,
    ClientCountryCodeUA,
    ClientCountryCodeAE,
    ClientCountryCodeGB,
    ClientCountryCodeUS,
    ClientCountryCodeUM,
    ClientCountryCodeUY,
    ClientCountryCodeUZ,
    ClientCountryCodeVU,
    ClientCountryCodeVE,
    ClientCountryCodeVN,
    ClientCountryCodeVG,
    ClientCountryCodeVI,
    ClientCountryCodeWF,
    ClientCountryCodeEH,
    ClientCountryCodeYE,
    ClientCountryCodeZM,
    ClientCountryCodeZW
} ClientCountryCode;

typedef enum
{
    ClientCurrencyAED,
    ClientCurrencyAFN,
    ClientCurrencyALL,
    ClientCurrencyAMD,
    ClientCurrencyANG,
    ClientCurrencyAOA,
    ClientCurrencyARS,
    ClientCurrencyAUD,
    ClientCurrencyAWG,
    ClientCurrencyAZN,
    ClientCurrencyBAM,
    ClientCurrencyBBD,
    ClientCurrencyBDT,
    ClientCurrencyBGN,
    ClientCurrencyBHD,
    ClientCurrencyBIF,
    ClientCurrencyBMD,
    ClientCurrencyBND,
    ClientCurrencyBOB,
    ClientCurrencyBRL,
    ClientCurrencyBSD,
    ClientCurrencyBTN,
    ClientCurrencyBWP,
    ClientCurrencyBYR,
    ClientCurrencyBZD,
    ClientCurrencyCAD,
    ClientCurrencyCDF,
    ClientCurrencyCHF,
    ClientCurrencyCLP,
    ClientCurrencyCNY,
    ClientCurrencyCOP,
    ClientCurrencyCRC,
    ClientCurrencyCUC,
    ClientCurrencyCUP,
    ClientCurrencyCVE,
    ClientCurrencyCZK,
    ClientCurrencyDJF,
    ClientCurrencyDKK,
    ClientCurrencyDOP,
    ClientCurrencyDZD,
    ClientCurrencyEGP,
    ClientCurrencyERN,
    ClientCurrencyETB,
    ClientCurrencyEUR,
    ClientCurrencyFJD,
    ClientCurrencyFKP,
    ClientCurrencyGBP,
    ClientCurrencyGEL,
    ClientCurrencyGGP,
    ClientCurrencyGHS,
    ClientCurrencyGIP,
    ClientCurrencyGMD,
    ClientCurrencyGNF,
    ClientCurrencyGTQ,
    ClientCurrencyGYD,
    ClientCurrencyHKD,
    ClientCurrencyHNL,
    ClientCurrencyHRK,
    ClientCurrencyHTG,
    ClientCurrencyHUF,
    ClientCurrencyIDR,
    ClientCurrencyILS,
    ClientCurrencyIMP,
    ClientCurrencyINR,
    ClientCurrencyIQD,
    ClientCurrencyIRR,
    ClientCurrencyISK,
    ClientCurrencyJEP,
    ClientCurrencyJMD,
    ClientCurrencyJOD,
    ClientCurrencyJPY,
    ClientCurrencyKES,
    ClientCurrencyKGS,
    ClientCurrencyKHR,
    ClientCurrencyKMF,
    ClientCurrencyKPW,
    ClientCurrencyKRW,
    ClientCurrencyKWD,
    ClientCurrencyKYD,
    ClientCurrencyKZT,
    ClientCurrencyLAK,
    ClientCurrencyLBP,
    ClientCurrencyLKR,
    ClientCurrencyLRD,
    ClientCurrencyLSL,
    ClientCurrencyLYD,
    ClientCurrencyMAD,
    ClientCurrencyMDL,
    ClientCurrencyMGA,
    ClientCurrencyMKD,
    ClientCurrencyMMK,
    ClientCurrencyMNT,
    ClientCurrencyMOP,
    ClientCurrencyMRO,
    ClientCurrencyMUR,
    ClientCurrencyMVR,
    ClientCurrencyMWK,
    ClientCurrencyMXN,
    ClientCurrencyMYR,
    ClientCurrencyMZN,
    ClientCurrencyNAD,
    ClientCurrencyNGN,
    ClientCurrencyNIO,
    ClientCurrencyNOK,
    ClientCurrencyNPR,
    ClientCurrencyNZD,
    ClientCurrencyOMR,
    ClientCurrencyPAB,
    ClientCurrencyPEN,
    ClientCurrencyPGK,
    ClientCurrencyPHP,
    ClientCurrencyPKR,
    ClientCurrencyPLN,
    ClientCurrencyPYG,
    ClientCurrencyQAR,
    ClientCurrencyRON,
    ClientCurrencyRSD,
    ClientCurrencyRUB,
    ClientCurrencyRWF,
    ClientCurrencySAR,
    ClientCurrencySBD,
    ClientCurrencySCR,
    ClientCurrencySDG,
    ClientCurrencySEK,
    ClientCurrencySGD,
    ClientCurrencySHP,
    ClientCurrencySLL,
    ClientCurrencySOS,
    ClientCurrencySPL,
    ClientCurrencySRD,
    ClientCurrencySTD,
    ClientCurrencySVC,
    ClientCurrencySYP,
    ClientCurrencySZL,
    ClientCurrencyTHB,
    ClientCurrencyTJS,
    ClientCurrencyTMT,
    ClientCurrencyTND,
    ClientCurrencyTOP,
    ClientCurrencyTRY,
    ClientCurrencyTTD,
    ClientCurrencyTVD,
    ClientCurrencyTWD,
    ClientCurrencyTZS,
    ClientCurrencyUAH,
    ClientCurrencyUGX,
    ClientCurrencyUSD,
    ClientCurrencyUYU,
    ClientCurrencyUZS,
    ClientCurrencyVEF,
    ClientCurrencyVND,
    ClientCurrencyVUV,
    ClientCurrencyWST,
    ClientCurrencyXAF,
    ClientCurrencyXCD,
    ClientCurrencyXDR,
    ClientCurrencyXOF,
    ClientCurrencyXPF,
    ClientCurrencyYER,
    ClientCurrencyZAR,
    ClientCurrencyZMW,
    ClientCurrencyZWD
} ClientCurrency;

typedef enum
{
    ClientRegionUSCentral,
    ClientRegionUSEast,
    ClientRegionEUWest,
    ClientRegionSingapore,
    ClientRegionJapan,
    ClientRegionBrazil,
    ClientRegionAustralia
} ClientRegion;

typedef enum
{
    ClientGameInstanceStateOpen,
    ClientGameInstanceStateClosed
} ClientGameInstanceState;

typedef enum
{
    ClientLoginIdentityProviderUnknown,
    ClientLoginIdentityProviderPlayFab,
    ClientLoginIdentityProviderCustom,
    ClientLoginIdentityProviderGameCenter,
    ClientLoginIdentityProviderGooglePlay,
    ClientLoginIdentityProviderSteam,
    ClientLoginIdentityProviderXBoxLive,
    ClientLoginIdentityProviderPSN,
    ClientLoginIdentityProviderKongregate,
    ClientLoginIdentityProviderFacebook,
    ClientLoginIdentityProviderIOSDevice,
    ClientLoginIdentityProviderAndroidDevice,
    ClientLoginIdentityProviderTwitch,
    ClientLoginIdentityProviderWindowsHello,
    ClientLoginIdentityProviderGameServer,
    ClientLoginIdentityProviderCustomServer,
    ClientLoginIdentityProviderNintendoSwitch,
    ClientLoginIdentityProviderFacebookInstantGames,
    ClientLoginIdentityProviderOpenIdConnect
} ClientLoginIdentityProvider;

typedef enum
{
    ClientSubscriptionProviderStatusNoError,
    ClientSubscriptionProviderStatusCancelled,
    ClientSubscriptionProviderStatusUnknownError,
    ClientSubscriptionProviderStatusBillingError,
    ClientSubscriptionProviderStatusProductUnavailable,
    ClientSubscriptionProviderStatusCustomerDidNotAcceptPriceChange,
    ClientSubscriptionProviderStatusFreeTrial,
    ClientSubscriptionProviderStatusPaymentPending
} ClientSubscriptionProviderStatus;

typedef enum
{
    ClientPushNotificationPlatformApplePushNotificationService,
    ClientPushNotificationPlatformGoogleCloudMessaging
} ClientPushNotificationPlatform;

typedef enum
{
    ClientTitleActivationStatusNone,
    ClientTitleActivationStatusActivatedTitleKey,
    ClientTitleActivationStatusPendingSteam,
    ClientTitleActivationStatusActivatedSteam,
    ClientTitleActivationStatusRevokedSteam
} ClientTitleActivationStatus;

typedef enum
{
    ClientUserOriginationOrganic,
    ClientUserOriginationSteam,
    ClientUserOriginationGoogle,
    ClientUserOriginationAmazon,
    ClientUserOriginationFacebook,
    ClientUserOriginationKongregate,
    ClientUserOriginationGamersFirst,
    ClientUserOriginationUnknown,
    ClientUserOriginationIOS,
    ClientUserOriginationLoadTest,
    ClientUserOriginationAndroid,
    ClientUserOriginationPSN,
    ClientUserOriginationGameCenter,
    ClientUserOriginationCustomId,
    ClientUserOriginationXboxLive,
    ClientUserOriginationParse,
    ClientUserOriginationTwitch,
    ClientUserOriginationWindowsHello,
    ClientUserOriginationServerCustomId,
    ClientUserOriginationNintendoSwitchDeviceId,
    ClientUserOriginationFacebookInstantGamesId,
    ClientUserOriginationOpenIdConnect
} ClientUserOrigination;

typedef enum
{
    ClientUserDataPermissionPrivate,
    ClientUserDataPermissionPublic
} ClientUserDataPermission;

typedef enum
{
    ClientSourceTypeAdmin,
    ClientSourceTypeBackEnd,
    ClientSourceTypeGameClient,
    ClientSourceTypeGameServer,
    ClientSourceTypePartner,
    ClientSourceTypeCustom,
    ClientSourceTypeAPI
} ClientSourceType;

typedef enum
{
    ClientMatchmakeStatusComplete,
    ClientMatchmakeStatusWaiting,
    ClientMatchmakeStatusGameNotFound,
    ClientMatchmakeStatusNoAvailableSlots,
    ClientMatchmakeStatusSessionClosed
} ClientMatchmakeStatus;

typedef enum
{
    ClientTransactionStatusCreateCart,
    ClientTransactionStatusInit,
    ClientTransactionStatusApproved,
    ClientTransactionStatusSucceeded,
    ClientTransactionStatusFailedByProvider,
    ClientTransactionStatusDisputePending,
    ClientTransactionStatusRefundPending,
    ClientTransactionStatusRefunded,
    ClientTransactionStatusRefundFailed,
    ClientTransactionStatusChargedBack,
    ClientTransactionStatusFailedByUber,
    ClientTransactionStatusFailedByPlayFab,
    ClientTransactionStatusRevoked,
    ClientTransactionStatusTradePending,
    ClientTransactionStatusTraded,
    ClientTransactionStatusUpgraded,
    ClientTransactionStatusStackPending,
    ClientTransactionStatusStacked,
    ClientTransactionStatusOther,
    ClientTransactionStatusFailed
} ClientTransactionStatus;

//predeclare all non-enum classes

@class ClientAcceptTradeRequest;

@class ClientAcceptTradeResponse;

@class ClientAdCampaignAttributionModel;

@class ClientAddFriendRequest;

@class ClientAddFriendResult;

@class ClientAddGenericIDRequest;

@class ClientAddGenericIDResult;

@class ClientAddOrUpdateContactEmailRequest;

@class ClientAddOrUpdateContactEmailResult;

@class ClientAddSharedGroupMembersRequest;

@class ClientAddSharedGroupMembersResult;

@class ClientAddUsernamePasswordRequest;

@class ClientAddUsernamePasswordResult;

@class ClientAddUserVirtualCurrencyRequest;

@class ClientAndroidDevicePushNotificationRegistrationRequest;

@class ClientAndroidDevicePushNotificationRegistrationResult;

@class ClientAttributeInstallRequest;

@class ClientAttributeInstallResult;

@class ClientCancelTradeRequest;

@class ClientCancelTradeResponse;

@class ClientCartItem;

@class ClientCatalogItem;

@class ClientCatalogItemBundleInfo;

@class ClientCatalogItemConsumableInfo;

@class ClientCatalogItemContainerInfo;

@class ClientCharacterInventory;

@class ClientCharacterLeaderboardEntry;

@class ClientCharacterResult;

@class ClientCollectionFilter;

@class ClientConfirmPurchaseRequest;

@class ClientConfirmPurchaseResult;

@class ClientConsumeItemRequest;

@class ClientConsumeItemResult;

@class ClientConsumePSNEntitlementsRequest;

@class ClientConsumePSNEntitlementsResult;

@class ClientConsumeXboxEntitlementsRequest;

@class ClientConsumeXboxEntitlementsResult;

@class ClientContactEmailInfoModel;

@class ClientContainer_Dictionary_String_String;

@class ClientCreateSharedGroupRequest;

@class ClientCreateSharedGroupResult;

@class ClientCurrentGamesRequest;

@class ClientCurrentGamesResult;

@class ClientDeviceInfoRequest;

@class ClientEmptyResponse;

@class ClientEmptyResult;

@class ClientEntityKey;

@class ClientEntityTokenResponse;

@class ClientExecuteCloudScriptRequest;

@class ClientExecuteCloudScriptResult;

@class ClientFacebookInstantGamesPlayFabIdPair;

@class ClientFacebookPlayFabIdPair;

@class ClientFriendInfo;

@class ClientGameCenterPlayFabIdPair;

@class ClientGameInfo;

@class ClientGameServerRegionsRequest;

@class ClientGameServerRegionsResult;

@class ClientGenericPlayFabIdPair;

@class ClientGenericServiceId;

@class ClientGetAccountInfoRequest;

@class ClientGetAccountInfoResult;

@class ClientGetCatalogItemsRequest;

@class ClientGetCatalogItemsResult;

@class ClientGetCharacterDataRequest;

@class ClientGetCharacterDataResult;

@class ClientGetCharacterInventoryRequest;

@class ClientGetCharacterInventoryResult;

@class ClientGetCharacterLeaderboardRequest;

@class ClientGetCharacterLeaderboardResult;

@class ClientGetCharacterStatisticsRequest;

@class ClientGetCharacterStatisticsResult;

@class ClientGetContentDownloadUrlRequest;

@class ClientGetContentDownloadUrlResult;

@class ClientGetFriendLeaderboardAroundPlayerRequest;

@class ClientGetFriendLeaderboardAroundPlayerResult;

@class ClientGetFriendLeaderboardRequest;

@class ClientGetFriendsListRequest;

@class ClientGetFriendsListResult;

@class ClientGetLeaderboardAroundCharacterRequest;

@class ClientGetLeaderboardAroundCharacterResult;

@class ClientGetLeaderboardAroundPlayerRequest;

@class ClientGetLeaderboardAroundPlayerResult;

@class ClientGetLeaderboardForUsersCharactersRequest;

@class ClientGetLeaderboardForUsersCharactersResult;

@class ClientGetLeaderboardRequest;

@class ClientGetLeaderboardResult;

@class ClientGetPaymentTokenRequest;

@class ClientGetPaymentTokenResult;

@class ClientGetPhotonAuthenticationTokenRequest;

@class ClientGetPhotonAuthenticationTokenResult;

@class ClientGetPlayerCombinedInfoRequest;

@class ClientGetPlayerCombinedInfoRequestParams;

@class ClientGetPlayerCombinedInfoResult;

@class ClientGetPlayerCombinedInfoResultPayload;

@class ClientGetPlayerProfileRequest;

@class ClientGetPlayerProfileResult;

@class ClientGetPlayerSegmentsRequest;

@class ClientGetPlayerSegmentsResult;

@class ClientGetPlayerStatisticsRequest;

@class ClientGetPlayerStatisticsResult;

@class ClientGetPlayerStatisticVersionsRequest;

@class ClientGetPlayerStatisticVersionsResult;

@class ClientGetPlayerTagsRequest;

@class ClientGetPlayerTagsResult;

@class ClientGetPlayerTradesRequest;

@class ClientGetPlayerTradesResponse;

@class ClientGetPlayFabIDsFromFacebookIDsRequest;

@class ClientGetPlayFabIDsFromFacebookIDsResult;

@class ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest;

@class ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult;

@class ClientGetPlayFabIDsFromGameCenterIDsRequest;

@class ClientGetPlayFabIDsFromGameCenterIDsResult;

@class ClientGetPlayFabIDsFromGenericIDsRequest;

@class ClientGetPlayFabIDsFromGenericIDsResult;

@class ClientGetPlayFabIDsFromGoogleIDsRequest;

@class ClientGetPlayFabIDsFromGoogleIDsResult;

@class ClientGetPlayFabIDsFromKongregateIDsRequest;

@class ClientGetPlayFabIDsFromKongregateIDsResult;

@class ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;

@class ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;

@class ClientGetPlayFabIDsFromPSNAccountIDsRequest;

@class ClientGetPlayFabIDsFromPSNAccountIDsResult;

@class ClientGetPlayFabIDsFromSteamIDsRequest;

@class ClientGetPlayFabIDsFromSteamIDsResult;

@class ClientGetPlayFabIDsFromTwitchIDsRequest;

@class ClientGetPlayFabIDsFromTwitchIDsResult;

@class ClientGetPlayFabIDsFromXboxLiveIDsRequest;

@class ClientGetPlayFabIDsFromXboxLiveIDsResult;

@class ClientGetPublisherDataRequest;

@class ClientGetPublisherDataResult;

@class ClientGetPurchaseRequest;

@class ClientGetPurchaseResult;

@class ClientGetSegmentResult;

@class ClientGetSharedGroupDataRequest;

@class ClientGetSharedGroupDataResult;

@class ClientGetStoreItemsRequest;

@class ClientGetStoreItemsResult;

@class ClientGetTimeRequest;

@class ClientGetTimeResult;

@class ClientGetTitleDataRequest;

@class ClientGetTitleDataResult;

@class ClientGetTitleNewsRequest;

@class ClientGetTitleNewsResult;

@class ClientGetTitlePublicKeyRequest;

@class ClientGetTitlePublicKeyResult;

@class ClientGetTradeStatusRequest;

@class ClientGetTradeStatusResponse;

@class ClientGetUserDataRequest;

@class ClientGetUserDataResult;

@class ClientGetUserInventoryRequest;

@class ClientGetUserInventoryResult;

@class ClientGetWindowsHelloChallengeRequest;

@class ClientGetWindowsHelloChallengeResponse;

@class ClientGooglePlayFabIdPair;

@class ClientGrantCharacterToUserRequest;

@class ClientGrantCharacterToUserResult;

@class ClientItemInstance;

@class ClientItemPurchaseRequest;

@class ClientKongregatePlayFabIdPair;

@class ClientLinkAndroidDeviceIDRequest;

@class ClientLinkAndroidDeviceIDResult;

@class ClientLinkCustomIDRequest;

@class ClientLinkCustomIDResult;

@class ClientLinkedPlatformAccountModel;

@class ClientLinkFacebookAccountRequest;

@class ClientLinkFacebookAccountResult;

@class ClientLinkFacebookInstantGamesIdRequest;

@class ClientLinkFacebookInstantGamesIdResult;

@class ClientLinkGameCenterAccountRequest;

@class ClientLinkGameCenterAccountResult;

@class ClientLinkGoogleAccountRequest;

@class ClientLinkGoogleAccountResult;

@class ClientLinkIOSDeviceIDRequest;

@class ClientLinkIOSDeviceIDResult;

@class ClientLinkKongregateAccountRequest;

@class ClientLinkKongregateAccountResult;

@class ClientLinkNintendoSwitchDeviceIdRequest;

@class ClientLinkNintendoSwitchDeviceIdResult;

@class ClientLinkOpenIdConnectRequest;

@class ClientLinkPSNAccountRequest;

@class ClientLinkPSNAccountResult;

@class ClientLinkSteamAccountRequest;

@class ClientLinkSteamAccountResult;

@class ClientLinkTwitchAccountRequest;

@class ClientLinkTwitchAccountResult;

@class ClientLinkWindowsHelloAccountRequest;

@class ClientLinkWindowsHelloAccountResponse;

@class ClientLinkXboxAccountRequest;

@class ClientLinkXboxAccountResult;

@class ClientListUsersCharactersRequest;

@class ClientListUsersCharactersResult;

@class ClientLocationModel;

@class ClientLoginResult;

@class ClientLoginWithAndroidDeviceIDRequest;

@class ClientLoginWithCustomIDRequest;

@class ClientLoginWithEmailAddressRequest;

@class ClientLoginWithFacebookInstantGamesIdRequest;

@class ClientLoginWithFacebookRequest;

@class ClientLoginWithGameCenterRequest;

@class ClientLoginWithGoogleAccountRequest;

@class ClientLoginWithIOSDeviceIDRequest;

@class ClientLoginWithKongregateRequest;

@class ClientLoginWithNintendoSwitchDeviceIdRequest;

@class ClientLoginWithOpenIdConnectRequest;

@class ClientLoginWithPlayFabRequest;

@class ClientLoginWithPSNRequest;

@class ClientLoginWithSteamRequest;

@class ClientLoginWithTwitchRequest;

@class ClientLoginWithWindowsHelloRequest;

@class ClientLoginWithXboxRequest;

@class ClientLogStatement;

@class ClientMatchmakeRequest;

@class ClientMatchmakeResult;

@class ClientMembershipModel;

@class ClientModifyUserVirtualCurrencyResult;

@class ClientNintendoSwitchPlayFabIdPair;

@class ClientOpenTradeRequest;

@class ClientOpenTradeResponse;

@class ClientPayForPurchaseRequest;

@class ClientPayForPurchaseResult;

@class ClientPaymentOption;

@class ClientPlayerLeaderboardEntry;

@class ClientPlayerProfileModel;

@class ClientPlayerProfileViewConstraints;

@class ClientPlayerStatisticVersion;

@class ClientPSNAccountPlayFabIdPair;

@class ClientPurchaseItemRequest;

@class ClientPurchaseItemResult;

@class ClientPushNotificationRegistrationModel;

@class ClientRedeemCouponRequest;

@class ClientRedeemCouponResult;

@class ClientRefreshPSNAuthTokenRequest;

@class ClientRegionInfo;

@class ClientRegisterForIOSPushNotificationRequest;

@class ClientRegisterForIOSPushNotificationResult;

@class ClientRegisterPlayFabUserRequest;

@class ClientRegisterPlayFabUserResult;

@class ClientRegisterWithWindowsHelloRequest;

@class ClientRemoveContactEmailRequest;

@class ClientRemoveContactEmailResult;

@class ClientRemoveFriendRequest;

@class ClientRemoveFriendResult;

@class ClientRemoveGenericIDRequest;

@class ClientRemoveGenericIDResult;

@class ClientRemoveSharedGroupMembersRequest;

@class ClientRemoveSharedGroupMembersResult;

@class ClientReportPlayerClientRequest;

@class ClientReportPlayerClientResult;

@class ClientRestoreIOSPurchasesRequest;

@class ClientRestoreIOSPurchasesResult;

@class ClientScriptExecutionError;

@class ClientSendAccountRecoveryEmailRequest;

@class ClientSendAccountRecoveryEmailResult;

@class ClientSetFriendTagsRequest;

@class ClientSetFriendTagsResult;

@class ClientSetPlayerSecretRequest;

@class ClientSetPlayerSecretResult;

@class ClientSharedGroupDataRecord;

@class ClientStartGameRequest;

@class ClientStartGameResult;

@class ClientStartPurchaseRequest;

@class ClientStartPurchaseResult;

@class ClientStatisticModel;

@class ClientStatisticNameVersion;

@class ClientStatisticUpdate;

@class ClientStatisticValue;

@class ClientSteamPlayFabIdPair;

@class ClientStoreItem;

@class ClientStoreMarketingModel;

@class ClientSubscriptionModel;

@class ClientSubtractUserVirtualCurrencyRequest;

@class ClientTagModel;

@class ClientTitleNewsItem;

@class ClientTradeInfo;

@class ClientTwitchPlayFabIdPair;

@class ClientUninkOpenIdConnectRequest;

@class ClientUnlinkAndroidDeviceIDRequest;

@class ClientUnlinkAndroidDeviceIDResult;

@class ClientUnlinkCustomIDRequest;

@class ClientUnlinkCustomIDResult;

@class ClientUnlinkFacebookAccountRequest;

@class ClientUnlinkFacebookAccountResult;

@class ClientUnlinkFacebookInstantGamesIdRequest;

@class ClientUnlinkFacebookInstantGamesIdResult;

@class ClientUnlinkGameCenterAccountRequest;

@class ClientUnlinkGameCenterAccountResult;

@class ClientUnlinkGoogleAccountRequest;

@class ClientUnlinkGoogleAccountResult;

@class ClientUnlinkIOSDeviceIDRequest;

@class ClientUnlinkIOSDeviceIDResult;

@class ClientUnlinkKongregateAccountRequest;

@class ClientUnlinkKongregateAccountResult;

@class ClientUnlinkNintendoSwitchDeviceIdRequest;

@class ClientUnlinkNintendoSwitchDeviceIdResult;

@class ClientUnlinkPSNAccountRequest;

@class ClientUnlinkPSNAccountResult;

@class ClientUnlinkSteamAccountRequest;

@class ClientUnlinkSteamAccountResult;

@class ClientUnlinkTwitchAccountRequest;

@class ClientUnlinkTwitchAccountResult;

@class ClientUnlinkWindowsHelloAccountRequest;

@class ClientUnlinkWindowsHelloAccountResponse;

@class ClientUnlinkXboxAccountRequest;

@class ClientUnlinkXboxAccountResult;

@class ClientUnlockContainerInstanceRequest;

@class ClientUnlockContainerItemRequest;

@class ClientUnlockContainerItemResult;

@class ClientUpdateAvatarUrlRequest;

@class ClientUpdateCharacterDataRequest;

@class ClientUpdateCharacterDataResult;

@class ClientUpdateCharacterStatisticsRequest;

@class ClientUpdateCharacterStatisticsResult;

@class ClientUpdatePlayerStatisticsRequest;

@class ClientUpdatePlayerStatisticsResult;

@class ClientUpdateSharedGroupDataRequest;

@class ClientUpdateSharedGroupDataResult;

@class ClientUpdateUserDataRequest;

@class ClientUpdateUserDataResult;

@class ClientUpdateUserTitleDisplayNameRequest;

@class ClientUpdateUserTitleDisplayNameResult;

@class ClientUserAccountInfo;

@class ClientUserAndroidDeviceInfo;

@class ClientUserCustomIdInfo;

@class ClientUserDataRecord;

@class ClientUserFacebookInfo;

@class ClientUserFacebookInstantGamesIdInfo;

@class ClientUserGameCenterInfo;

@class ClientUserGoogleInfo;

@class ClientUserIosDeviceInfo;

@class ClientUserKongregateInfo;

@class ClientUserNintendoSwitchDeviceIdInfo;

@class ClientUserOpenIdInfo;

@class ClientUserPrivateAccountInfo;

@class ClientUserPsnInfo;

@class ClientUserSettings;

@class ClientUserSteamInfo;

@class ClientUserTitleInfo;

@class ClientUserTwitchInfo;

@class ClientUserWindowsHelloInfo;

@class ClientUserXboxInfo;

@class ClientValidateAmazonReceiptRequest;

@class ClientValidateAmazonReceiptResult;

@class ClientValidateGooglePlayPurchaseRequest;

@class ClientValidateGooglePlayPurchaseResult;

@class ClientValidateIOSReceiptRequest;

@class ClientValidateIOSReceiptResult;

@class ClientValidateWindowsReceiptRequest;

@class ClientValidateWindowsReceiptResult;

@class ClientValueToDateModel;

@class ClientVirtualCurrencyRechargeTime;

@class ClientWriteClientCharacterEventRequest;

@class ClientWriteClientPlayerEventRequest;

@class ClientWriteEventResponse;

@class ClientWriteTitleEventRequest;

@class ClientXboxLiveAccountPlayFabIdPair;



@interface ClientAcceptTradeRequest : PlayFabBaseModel


/// <summary>
/*
/// Items from the accepting player's inventory in exchange for the offered items in the trade. In the case of a gift, this will be null.
*/
/// </summary>
@property NSArray* AcceptedInventoryInstanceIds; 

/// <summary>
/*
/// Player who opened the trade.
*/
/// </summary>
@property NSString* OfferingPlayerId; 

/// <summary>
/*
/// Trade identifier.
*/
/// </summary>
@property NSString* TradeId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAcceptTradeResponse : PlayFabBaseModel


/// <summary>
/*
/// Details about trade which was just accepted.
*/
/// </summary>
@property ClientTradeInfo* Trade; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAdCampaignAttributionModel : PlayFabBaseModel


/// <summary>
/*
/// UTC time stamp of attribution
*/
/// </summary>
@property NSDate* AttributedAt; 

/// <summary>
/*
/// Attribution campaign identifier
*/
/// </summary>
@property NSString* CampaignId; 

/// <summary>
/*
/// Attribution network name
*/
/// </summary>
@property NSString* Platform; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAddFriendRequest : PlayFabBaseModel


/// <summary>
/*
/// Email address of the user to attempt to add to the local user's friend list.
*/
/// </summary>
@property NSString* FriendEmail; 

/// <summary>
/*
/// PlayFab identifier of the user to attempt to add to the local user's friend list.
*/
/// </summary>
@property NSString* FriendPlayFabId; 

/// <summary>
/*
/// Title-specific display name of the user to attempt to add to the local user's friend list.
*/
/// </summary>
@property NSString* FriendTitleDisplayName; 

/// <summary>
/*
/// PlayFab username of the user to attempt to add to the local user's friend list.
*/
/// </summary>
@property NSString* FriendUsername; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAddFriendResult : PlayFabBaseModel


/// <summary>
/*
/// True if the friend request was processed successfully.
*/
/// </summary>
@property bool Created; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAddGenericIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Generic service identifier to add to the player account.
*/
/// </summary>
@property ClientGenericServiceId* GenericId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAddGenericIDResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API adds a contact email to the player's profile. If the player's profile already contains a contact email, it will update the contact email to the email address specified.
*/
/// </summary>
@interface ClientAddOrUpdateContactEmailRequest : PlayFabBaseModel


/// <summary>
/*
/// The new contact email to associate with the player.
*/
/// </summary>
@property NSString* EmailAddress; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAddOrUpdateContactEmailResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAddSharedGroupMembersRequest : PlayFabBaseModel


/// <summary>
/*
/// An array of unique PlayFab assigned ID of the user on whom the operation will be performed.
*/
/// </summary>
@property NSArray* PlayFabIds; 

/// <summary>
/*
/// Unique identifier for the shared group.
*/
/// </summary>
@property NSString* SharedGroupId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAddSharedGroupMembersResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAddUsernamePasswordRequest : PlayFabBaseModel


/// <summary>
/*
/// User email address attached to their account
*/
/// </summary>
@property NSString* Email; 

/// <summary>
/*
/// Password for the PlayFab account (6-100 characters)
*/
/// </summary>
@property NSString* Password; 

/// <summary>
/*
/// PlayFab username for the account (3-20 characters)
*/
/// </summary>
@property NSString* Username; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Each account must have a unique username and email address in the PlayFab service. Once created, the account may be associated with additional accounts (Steam, Facebook, Game Center, etc.), allowing for added social network lists and achievements systems. This can also be used to provide a recovery method if the user loses their original means of access.
*/
/// </summary>
@interface ClientAddUsernamePasswordResult : PlayFabBaseModel


/// <summary>
/*
/// PlayFab unique user name.
*/
/// </summary>
@property NSString* Username; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API must be enabled for use as an option in the game manager website. It is disabled by default.
*/
/// </summary>
@interface ClientAddUserVirtualCurrencyRequest : PlayFabBaseModel


/// <summary>
/*
/// Amount to be added to the user balance of the specified virtual currency.
*/
/// </summary>
@property NSNumber* Amount; 

/// <summary>
/*
/// Name of the virtual currency which is to be incremented.
*/
/// </summary>
@property NSString* VirtualCurrency; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// More information can be found on configuring your game for the Google Cloud Messaging service in the Google developer documentation, here: http://developer.android.com/google/gcm/client.html. The steps to configure and send Push Notifications is described in the PlayFab tutorials, here: https://api.playfab.com/docs/pushCrashCourse/.
*/
/// </summary>
@interface ClientAndroidDevicePushNotificationRegistrationRequest : PlayFabBaseModel


/// <summary>
/*
/// Message to display when confirming push notification.
*/
/// </summary>
@property NSString* ConfirmationMessage; 

/// <summary>
/*
/// Registration ID provided by the Google Cloud Messaging service when the title registered to receive push notifications (see the GCM documentation, here: http://developer.android.com/google/gcm/client.html).
*/
/// </summary>
@property NSString* DeviceToken; 

/// <summary>
/*
/// If true, send a test push message immediately after sucessful registration. Defaults to false.
*/
/// </summary>
@property bool SendPushNotificationConfirmation; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAndroidDevicePushNotificationRegistrationResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// If you have an ad attribution partner enabled, this will post an install to their service to track the device. It uses the given device id to match based on clicks on ads.
*/
/// </summary>
@interface ClientAttributeInstallRequest : PlayFabBaseModel


/// <summary>
/*
/// The adid for this device.
*/
/// </summary>
@property NSString* Adid; 

/// <summary>
/*
/// The IdentifierForAdvertisers for iOS Devices.
*/
/// </summary>
@property NSString* Idfa; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientAttributeInstallResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCancelTradeRequest : PlayFabBaseModel


/// <summary>
/*
/// Trade identifier.
*/
/// </summary>
@property NSString* TradeId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCancelTradeResponse : PlayFabBaseModel


/// <summary>
/*
/// Details about trade which was just canceled.
*/
/// </summary>
@property ClientTradeInfo* Trade; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCartItem : PlayFabBaseModel


/// <summary>
/*
/// Description of the catalog item.
*/
/// </summary>
@property NSString* Description; 

/// <summary>
/*
/// Display name for the catalog item.
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// Class name to which catalog item belongs.
*/
/// </summary>
@property NSString* ItemClass; 

/// <summary>
/*
/// Unique identifier for the catalog item.
*/
/// </summary>
@property NSString* ItemId; 

/// <summary>
/*
/// Unique instance identifier for this catalog item.
*/
/// </summary>
@property NSString* ItemInstanceId; 

/// <summary>
/*
/// Cost of the catalog item for each applicable real world currency.
*/
/// </summary>
@property NSDictionary* RealCurrencyPrices; 

/// <summary>
/*
/// Amount of each applicable virtual currency which will be received as a result of purchasing this catalog item.
*/
/// </summary>
@property NSDictionary* VCAmount; 

/// <summary>
/*
/// Cost of the catalog item for each applicable virtual currency.
*/
/// </summary>
@property NSDictionary* VirtualCurrencyPrices; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// A purchasable item from the item catalog
*/
/// </summary>
@interface ClientCatalogItem : PlayFabBaseModel


/// <summary>
/*
/// defines the bundle properties for the item - bundles are items which contain other items, including random drop tables and virtual currencies
*/
/// </summary>
@property ClientCatalogItemBundleInfo* Bundle; 

/// <summary>
/*
/// if true, then an item instance of this type can be used to grant a character to a user.
*/
/// </summary>
@property bool CanBecomeCharacter; 

/// <summary>
/*
/// catalog version for this item
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// defines the consumable properties (number of uses, timeout) for the item
*/
/// </summary>
@property ClientCatalogItemConsumableInfo* Consumable; 

/// <summary>
/*
/// defines the container properties for the item - what items it contains, including random drop tables and virtual currencies, and what item (if any) is required to open it via the UnlockContainerItem API
*/
/// </summary>
@property ClientCatalogItemContainerInfo* Container; 

/// <summary>
/*
/// game specific custom data
*/
/// </summary>
@property NSString* CustomData; 

/// <summary>
/*
/// text description of item, to show in-game
*/
/// </summary>
@property NSString* Description; 

/// <summary>
/*
/// text name for the item, to show in-game
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// If the item has IsLImitedEdition set to true, and this is the first time this ItemId has been defined as a limited edition item, this value determines the total number of instances to allocate for the title. Once this limit has been reached, no more instances of this ItemId can be created, and attempts to purchase or grant it will return a Result of false for that ItemId. If the item has already been defined to have a limited edition count, or if this value is less than zero, it will be ignored.
*/
/// </summary>
@property NSNumber* InitialLimitedEditionCount; 

/// <summary>
/*
/// BETA: If true, then only a fixed number can ever be granted.
*/
/// </summary>
@property bool IsLimitedEdition; 

/// <summary>
/*
/// if true, then only one item instance of this type will exist and its remaininguses will be incremented instead. RemainingUses will cap out at Int32.Max (2,147,483,647). All subsequent increases will be discarded
*/
/// </summary>
@property bool IsStackable; 

/// <summary>
/*
/// if true, then an item instance of this type can be traded between players using the trading APIs
*/
/// </summary>
@property bool IsTradable; 

/// <summary>
/*
/// class to which the item belongs
*/
/// </summary>
@property NSString* ItemClass; 

/// <summary>
/*
/// unique identifier for this item
*/
/// </summary>
@property NSString* ItemId; 

/// <summary>
/*
/// URL to the item image. For Facebook purchase to display the image on the item purchase page, this must be set to an HTTP URL.
*/
/// </summary>
@property NSString* ItemImageUrl; 

/// <summary>
/*
/// override prices for this item for specific currencies
*/
/// </summary>
@property NSDictionary* RealCurrencyPrices; 

/// <summary>
/*
/// list of item tags
*/
/// </summary>
@property NSArray* Tags; 

/// <summary>
/*
/// price of this item in virtual currencies and "RM" (the base Real Money purchase price, in USD pennies)
*/
/// </summary>
@property NSDictionary* VirtualCurrencyPrices; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCatalogItemBundleInfo : PlayFabBaseModel


/// <summary>
/*
/// unique ItemId values for all items which will be added to the player inventory when the bundle is added
*/
/// </summary>
@property NSArray* BundledItems; 

/// <summary>
/*
/// unique TableId values for all RandomResultTable objects which are part of the bundle (random tables will be resolved and add the relevant items to the player inventory when the bundle is added)
*/
/// </summary>
@property NSArray* BundledResultTables; 

/// <summary>
/*
/// virtual currency types and balances which will be added to the player inventory when the bundle is added
*/
/// </summary>
@property NSDictionary* BundledVirtualCurrencies; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCatalogItemConsumableInfo : PlayFabBaseModel


/// <summary>
/*
/// number of times this object can be used, after which it will be removed from the player inventory
*/
/// </summary>
@property NSNumber* UsageCount; 

/// <summary>
/*
/// duration in seconds for how long the item will remain in the player inventory - once elapsed, the item will be removed (recommended minimum value is 5 seconds, as lower values can cause the item to expire before operations depending on this item's details have completed)
*/
/// </summary>
@property NSNumber* UsagePeriod; 

/// <summary>
/*
/// all inventory item instances in the player inventory sharing a non-null UsagePeriodGroup have their UsagePeriod values added together, and share the result - when that period has elapsed, all the items in the group will be removed
*/
/// </summary>
@property NSString* UsagePeriodGroup; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Containers are inventory items that can hold other items defined in the catalog, as well as virtual currency, which is added to the player inventory when the container is unlocked, using the UnlockContainerItem API. The items can be anything defined in the catalog, as well as RandomResultTable objects which will be resolved when the container is unlocked. Containers and their keys should be defined as Consumable (having a limited number of uses) in their catalog defintiions, unless the intent is for the player to be able to re-use them infinitely.
*/
/// </summary>
@interface ClientCatalogItemContainerInfo : PlayFabBaseModel


/// <summary>
/*
/// unique ItemId values for all items which will be added to the player inventory, once the container has been unlocked
*/
/// </summary>
@property NSArray* ItemContents; 

/// <summary>
/*
/// ItemId for the catalog item used to unlock the container, if any (if not specified, a call to UnlockContainerItem will open the container, adding the contents to the player inventory and currency balances)
*/
/// </summary>
@property NSString* KeyItemId; 

/// <summary>
/*
/// unique TableId values for all RandomResultTable objects which are part of the container (once unlocked, random tables will be resolved and add the relevant items to the player inventory)
*/
/// </summary>
@property NSArray* ResultTableContents; 

/// <summary>
/*
/// virtual currency types and balances which will be added to the player inventory when the container is unlocked
*/
/// </summary>
@property NSDictionary* VirtualCurrencyContents; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCharacterInventory : PlayFabBaseModel


/// <summary>
/*
/// The id of this character.
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// The inventory of this character.
*/
/// </summary>
@property NSArray* Inventory; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCharacterLeaderboardEntry : PlayFabBaseModel


/// <summary>
/*
/// PlayFab unique identifier of the character that belongs to the user for this leaderboard entry.
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Title-specific display name of the character for this leaderboard entry.
*/
/// </summary>
@property NSString* CharacterName; 

/// <summary>
/*
/// Name of the character class for this entry.
*/
/// </summary>
@property NSString* CharacterType; 

/// <summary>
/*
/// Title-specific display name of the user for this leaderboard entry.
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// PlayFab unique identifier of the user for this leaderboard entry.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// User's overall position in the leaderboard.
*/
/// </summary>
@property NSNumber* Position; 

/// <summary>
/*
/// Specific value of the user's statistic.
*/
/// </summary>
@property NSNumber* StatValue; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCharacterResult : PlayFabBaseModel


/// <summary>
/*
/// The id for this character on this player.
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// The name of this character.
*/
/// </summary>
@property NSString* CharacterName; 

/// <summary>
/*
/// The type-string that was given to this character on creation.
*/
/// </summary>
@property NSString* CharacterType; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Collection filter to include and/or exclude collections with certain key-value pairs. The filter generates a collection set defined by Includes rules and then remove collections that matches the Excludes rules. A collection is considered matching a rule if the rule describes a subset of the collection. 
*/
/// </summary>
@interface ClientCollectionFilter : PlayFabBaseModel


/// <summary>
/*
/// List of Exclude rules, with any of which if a collection matches, it is excluded by the filter.
*/
/// </summary>
@property NSArray* Excludes; 

/// <summary>
/*
/// List of Include rules, with any of which if a collection matches, it is included by the filter, unless it is excluded by one of the Exclude rule
*/
/// </summary>
@property NSArray* Includes; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The final step in the purchasing process, this API finalizes the purchase with the payment provider, where applicable, adding virtual goods to the player inventory (including random drop table resolution and recursive addition of bundled items) and adjusting virtual currency balances for funds used or added. Note that this is a pull operation, and should be polled regularly when a purchase is in progress. Please note that the processing time for inventory grants and purchases increases fractionally the more items are in the inventory, and the more items are in the grant/purchase operation.
*/
/// </summary>
@interface ClientConfirmPurchaseRequest : PlayFabBaseModel


/// <summary>
/*
/// Purchase order identifier returned from StartPurchase.
*/
/// </summary>
@property NSString* OrderId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// When the FailedByPaymentProvider error is returned, it's important to check the ProviderErrorCode, ProviderErrorMessage, and ProviderErrorDetails to understand the specific reason the payment was rejected, as in some rare cases, this may mean that the provider hasn't completed some operation required to finalize the purchase.
*/
/// </summary>
@interface ClientConfirmPurchaseResult : PlayFabBaseModel


/// <summary>
/*
/// Array of items purchased.
*/
/// </summary>
@property NSArray* Items; 

/// <summary>
/*
/// Purchase order identifier.
*/
/// </summary>
@property NSString* OrderId; 

/// <summary>
/*
/// Date and time of the purchase.
*/
/// </summary>
@property NSDate* PurchaseDate; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientConsumeItemRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Number of uses to consume from the item.
*/
/// </summary>
@property NSNumber* ConsumeCount; 

/// <summary>
/*
/// Unique instance identifier of the item to be consumed.
*/
/// </summary>
@property NSString* ItemInstanceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientConsumeItemResult : PlayFabBaseModel


/// <summary>
/*
/// Unique instance identifier of the item with uses consumed.
*/
/// </summary>
@property NSString* ItemInstanceId; 

/// <summary>
/*
/// Number of uses remaining on the item.
*/
/// </summary>
@property NSNumber* RemainingUses; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientConsumePSNEntitlementsRequest : PlayFabBaseModel


/// <summary>
/*
/// Which catalog to match granted entitlements against. If null, defaults to title default catalog
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Id of the PSN service label to consume entitlements from
*/
/// </summary>
@property NSNumber* ServiceLabel; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientConsumePSNEntitlementsResult : PlayFabBaseModel


/// <summary>
/*
/// Array of items granted to the player as a result of consuming entitlements.
*/
/// </summary>
@property NSArray* ItemsGranted; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientConsumeXboxEntitlementsRequest : PlayFabBaseModel


/// <summary>
/*
/// Catalog version to use
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com", "").
*/
/// </summary>
@property NSString* XboxToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientConsumeXboxEntitlementsResult : PlayFabBaseModel


/// <summary>
/*
/// Details for the items purchased.
*/
/// </summary>
@property NSArray* Items; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientContactEmailInfoModel : PlayFabBaseModel


/// <summary>
/*
/// The email address
*/
/// </summary>
@property NSString* EmailAddress; 

/// <summary>
/*
/// The name of the email info data
*/
/// </summary>
@property NSString* Name; 

/// <summary>
/*
/// The verification status of the email
*/
/// </summary>
@property ClientEmailVerificationStatus VerificationStatus; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// A data container
*/
/// </summary>
@interface ClientContainer_Dictionary_String_String : PlayFabBaseModel


/// <summary>
/*
/// Content of data
*/
/// </summary>
@property NSDictionary* Data; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// If SharedGroupId is specified, the service will attempt to create a group with that identifier, and will return an error if it is already in use. If no SharedGroupId is specified, a random identifier will be assigned.
*/
/// </summary>
@interface ClientCreateSharedGroupRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique identifier for the shared group (a random identifier will be assigned, if one is not specified).
*/
/// </summary>
@property NSString* SharedGroupId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCreateSharedGroupResult : PlayFabBaseModel


/// <summary>
/*
/// Unique identifier for the shared group.
*/
/// </summary>
@property NSString* SharedGroupId; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCurrentGamesRequest : PlayFabBaseModel


/// <summary>
/*
/// Build to match against.
*/
/// </summary>
@property NSString* BuildVersion; 

/// <summary>
/*
/// Game mode to look for.
*/
/// </summary>
@property NSString* GameMode; 

/// <summary>
/*
/// Region to check for Game Server Instances.
*/
/// </summary>
@property ClientRegion pfRegion; 

/// <summary>
/*
/// Statistic name to find statistic-based matches.
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// Filter to include and/or exclude Game Server Instances associated with certain tags.
*/
/// </summary>
@property ClientCollectionFilter* TagFilter; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientCurrentGamesResult : PlayFabBaseModel


/// <summary>
/*
/// number of games running
*/
/// </summary>
@property NSNumber* GameCount; 

/// <summary>
/*
/// array of games found
*/
/// </summary>
@property NSArray* Games; 

/// <summary>
/*
/// total number of players across all servers
*/
/// </summary>
@property NSNumber* PlayerCount; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Any arbitrary information collected by the device
*/
/// </summary>
@interface ClientDeviceInfoRequest : PlayFabBaseModel


/// <summary>
/*
/// Information posted to the PlayStream Event. Currently arbitrary, and specific to the environment sending it.
*/
/// </summary>
@property NSDictionary* Info; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientEmptyResponse : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientEmptyResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Combined entity type and ID structure which uniquely identifies a single entity.
*/
/// </summary>
@interface ClientEntityKey : PlayFabBaseModel


/// <summary>
/*
/// Unique ID of the entity.
*/
/// </summary>
@property NSString* Id; 

/// <summary>
/*
/// Entity type. See https://api.playfab.com/docs/tutorials/entities/entitytypes
*/
/// </summary>
@property NSString* Type; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientEntityTokenResponse : PlayFabBaseModel


/// <summary>
/*
/// The entity id and type.
*/
/// </summary>
@property ClientEntityKey* Entity; 

/// <summary>
/*
/// The token used to set X-EntityToken for all entity based API calls.
*/
/// </summary>
@property NSString* EntityToken; 

/// <summary>
/*
/// The time the token will expire, if it is an expiring token, in UTC.
*/
/// </summary>
@property NSDate* TokenExpiration; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientExecuteCloudScriptRequest : PlayFabBaseModel


/// <summary>
/*
/// The name of the CloudScript function to execute
*/
/// </summary>
@property NSString* FunctionName; 

/// <summary>
/*
/// Object that is passed in to the function as the first argument
*/
/// </summary>
@property NSObject* FunctionParameter; 

/// <summary>
/*
/// Generate a 'player_executed_cloudscript' PlayStream event containing the results of the function execution and other contextual information. This event will show up in the PlayStream debugger console for the player in Game Manager.
*/
/// </summary>
@property bool GeneratePlayStreamEvent; 

/// <summary>
/*
/// Option for which revision of the CloudScript to execute. 'Latest' executes the most recently created revision, 'Live' executes the current live, published revision, and 'Specific' executes the specified revision. The default value is 'Specific', if the SpeificRevision parameter is specified, otherwise it is 'Live'.
*/
/// </summary>
@property ClientCloudScriptRevisionOption RevisionSelection; 

/// <summary>
/*
/// The specivic revision to execute, when RevisionSelection is set to 'Specific'
*/
/// </summary>
@property NSNumber* SpecificRevision; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientExecuteCloudScriptResult : PlayFabBaseModel


/// <summary>
/*
/// Number of PlayFab API requests issued by the CloudScript function
*/
/// </summary>
@property NSNumber* APIRequestsIssued; 

/// <summary>
/*
/// Information about the error, if any, that occurred during execution
*/
/// </summary>
@property ClientScriptExecutionError* Error; 

@property NSNumber* ExecutionTimeSeconds; 

/// <summary>
/*
/// The name of the function that executed
*/
/// </summary>
@property NSString* FunctionName; 

/// <summary>
/*
/// The object returned from the CloudScript function, if any
*/
/// </summary>
@property NSDictionary* FunctionResult; 

/// <summary>
/*
/// Flag indicating if the FunctionResult was too large and was subsequently dropped from this event. This only occurs if the total event size is larger than 350KB.
*/
/// </summary>
@property bool FunctionResultTooLarge; 

/// <summary>
/*
/// Number of external HTTP requests issued by the CloudScript function
*/
/// </summary>
@property NSNumber* HttpRequestsIssued; 

/// <summary>
/*
/// Entries logged during the function execution. These include both entries logged in the function code using log.info() and log.error() and error entries for API and HTTP request failures.
*/
/// </summary>
@property NSArray* Logs; 

/// <summary>
/*
/// Flag indicating if the logs were too large and were subsequently dropped from this event. This only occurs if the total event size is larger than 350KB after the FunctionResult was removed.
*/
/// </summary>
@property bool LogsTooLarge; 

@property NSNumber* MemoryConsumedBytes; 

/// <summary>
/*
/// Processor time consumed while executing the function. This does not include time spent waiting on API calls or HTTP requests.
*/
/// </summary>
@property NSNumber* ProcessorTimeSeconds; 

/// <summary>
/*
/// The revision of the CloudScript that executed
*/
/// </summary>
@property NSNumber* Revision; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientFacebookInstantGamesPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique Facebook Instant Games identifier for a user.
*/
/// </summary>
@property NSString* FacebookInstantGamesId; 

/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Facebook Instant Games identifier.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientFacebookPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique Facebook identifier for a user.
*/
/// </summary>
@property NSString* FacebookId; 

/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Facebook identifier.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientFriendInfo : PlayFabBaseModel


/// <summary>
/*
/// Available Facebook information (if the user and PlayFab friend are also connected in Facebook).
*/
/// </summary>
@property ClientUserFacebookInfo* FacebookInfo; 

/// <summary>
/*
/// PlayFab unique identifier for this friend.
*/
/// </summary>
@property NSString* FriendPlayFabId; 

/// <summary>
/*
/// Available Game Center information (if the user and PlayFab friend are also connected in Game Center).
*/
/// </summary>
@property ClientUserGameCenterInfo* GameCenterInfo; 

/// <summary>
/*
/// The profile of the user, if requested.
*/
/// </summary>
@property ClientPlayerProfileModel* Profile; 

/// <summary>
/*
/// Available PSN information, if the user and PlayFab friend are both connected to PSN.
*/
/// </summary>
@property ClientUserPsnInfo* PSNInfo; 

/// <summary>
/*
/// Available Steam information (if the user and PlayFab friend are also connected in Steam).
*/
/// </summary>
@property ClientUserSteamInfo* SteamInfo; 

/// <summary>
/*
/// Tags which have been associated with this friend.
*/
/// </summary>
@property NSArray* Tags; 

/// <summary>
/*
/// Title-specific display name for this friend.
*/
/// </summary>
@property NSString* TitleDisplayName; 

/// <summary>
/*
/// PlayFab unique username for this friend.
*/
/// </summary>
@property NSString* Username; 

/// <summary>
/*
/// Available Xbox information, if the user and PlayFab friend are both connected to Xbox Live.
*/
/// </summary>
@property ClientUserXboxInfo* XboxInfo; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGameCenterPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique Game Center identifier for a user.
*/
/// </summary>
@property NSString* GameCenterId; 

/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Game Center identifier.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGameInfo : PlayFabBaseModel


/// <summary>
/*
/// build version this server is running
*/
/// </summary>
@property NSString* BuildVersion; 

/// <summary>
/*
/// game mode this server is running
*/
/// </summary>
@property NSString* GameMode; 

/// <summary>
/*
/// game session custom data
*/
/// </summary>
@property NSString* GameServerData; 

/// <summary>
/*
/// game specific string denoting server configuration
*/
/// </summary>
@property ClientGameInstanceState GameServerStateEnum; 

/// <summary>
/*
/// last heartbeat of the game server instance, used in external game server provider mode
*/
/// </summary>
@property NSDate* LastHeartbeat; 

/// <summary>
/*
/// unique lobby identifier for this game server
*/
/// </summary>
@property NSString* LobbyID; 

/// <summary>
/*
/// maximum players this server can support
*/
/// </summary>
@property NSNumber* MaxPlayers; 

/// <summary>
/*
/// array of current player IDs on this server
*/
/// </summary>
@property NSArray* PlayerUserIds; 

/// <summary>
/*
/// region to which this server is associated
*/
/// </summary>
@property ClientRegion pfRegion; 

/// <summary>
/*
/// duration in seconds this server has been running
*/
/// </summary>
@property NSNumber* RunTime; 

/// <summary>
/*
/// IPV4 address of the server
*/
/// </summary>
@property NSString* ServerIPV4Address; 

/// <summary>
/*
/// IPV6 address of the server
*/
/// </summary>
@property NSString* ServerIPV6Address; 

/// <summary>
/*
/// port number to use for non-http communications with the server
*/
/// </summary>
@property NSNumber* ServerPort; 

/// <summary>
/*
/// Public DNS name (if any) of the server
*/
/// </summary>
@property NSString* ServerPublicDNSName; 

/// <summary>
/*
/// stastic used to match this game in player statistic matchmaking
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// game session tags
*/
/// </summary>
@property NSDictionary* Tags; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGameServerRegionsRequest : PlayFabBaseModel


/// <summary>
/*
/// version of game server for which stats are being requested
*/
/// </summary>
@property NSString* BuildVersion; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGameServerRegionsResult : PlayFabBaseModel


/// <summary>
/*
/// array of regions found matching the request parameters
*/
/// </summary>
@property NSArray* Regions; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGenericPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique generic service identifier for a user.
*/
/// </summary>
@property ClientGenericServiceId* GenericId; 

/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the given generic identifier.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGenericServiceId : PlayFabBaseModel


/// <summary>
/*
/// Name of the service for which the player has a unique identifier.
*/
/// </summary>
@property NSString* ServiceName; 

/// <summary>
/*
/// Unique identifier of the player in that service.
*/
/// </summary>
@property NSString* UserId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetAccountInfoRequest : PlayFabBaseModel


/// <summary>
/*
/// User email address for the account to find (if no Username is specified).
*/
/// </summary>
@property NSString* Email; 

/// <summary>
/*
/// Unique PlayFab identifier of the user whose info is being requested. Optional, defaults to the authenticated user if no other lookup identifier set.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Title-specific username for the account to find (if no Email is set). Note that if the non-unique Title Display Names option is enabled for the title, attempts to look up users by Title Display Name will always return AccountNotFound.
*/
/// </summary>
@property NSString* TitleDisplayName; 

/// <summary>
/*
/// PlayFab Username for the account to find (if no PlayFabId is specified).
*/
/// </summary>
@property NSString* Username; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API retrieves details regarding the player in the PlayFab service. Note that when this call is used to retrieve data about another player (not the one signed into the local client), some data, such as Personally Identifying Information (PII), will be omitted for privacy reasons or to comply with the requirements of the platform belongs to. The user account returned will be based on the identifier provided in priority order: PlayFabId, Username, Email, then TitleDisplayName. If no identifier is specified, the currently signed in user's information will be returned.
*/
/// </summary>
@interface ClientGetAccountInfoResult : PlayFabBaseModel


/// <summary>
/*
/// Account information for the local user.
*/
/// </summary>
@property ClientUserAccountInfo* AccountInfo; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetCatalogItemsRequest : PlayFabBaseModel


/// <summary>
/*
/// Which catalog is being requested. If null, uses the default catalog.
*/
/// </summary>
@property NSString* CatalogVersion; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// If CatalogVersion is not specified, only inventory items associated with the most recent version of the catalog will be returned.
*/
/// </summary>
@interface ClientGetCatalogItemsResult : PlayFabBaseModel


/// <summary>
/*
/// Array of items which can be purchased.
*/
/// </summary>
@property NSArray* Catalog; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Data is stored as JSON key-value pairs. If the Keys parameter is provided, the data object returned will only contain the data specific to the indicated Keys. Otherwise, the full set of custom character data will be returned.
*/
/// </summary>
@interface ClientGetCharacterDataRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// The version that currently exists according to the caller. The call will return the data for all of the keys if the version in the system is greater than this.
*/
/// </summary>
@property NSNumber* IfChangedFromDataVersion; 

/// <summary>
/*
/// Specific keys to search for in the custom user data.
*/
/// </summary>
@property NSArray* Keys; 

/// <summary>
/*
/// Unique PlayFab identifier of the user to load data for. Optional, defaults to yourself if not set.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetCharacterDataResult : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// User specific data for this title.
*/
/// </summary>
@property NSDictionary* Data; 

/// <summary>
/*
/// Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data.
*/
/// </summary>
@property NSNumber* DataVersion; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// All items currently in the character inventory will be returned, irrespective of how they were acquired (via purchasing, grants, coupons, etc.). Items that are expired, fully consumed, or are no longer valid are not considered to be in the user's current inventory, and so will not be not included. Also returns their virtual currency balances.
*/
/// </summary>
@interface ClientGetCharacterInventoryRequest : PlayFabBaseModel


/// <summary>
/*
/// Used to limit results to only those from a specific catalog version.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetCharacterInventoryResult : PlayFabBaseModel


/// <summary>
/*
/// Unique identifier of the character for this inventory.
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Array of inventory items belonging to the character.
*/
/// </summary>
@property NSArray* Inventory; 

/// <summary>
/*
/// Array of virtual currency balance(s) belonging to the character.
*/
/// </summary>
@property NSDictionary* VirtualCurrency; 

/// <summary>
/*
/// Array of remaining times and timestamps for virtual currencies.
*/
/// </summary>
@property NSDictionary* VirtualCurrencyRechargeTimes; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetCharacterLeaderboardRequest : PlayFabBaseModel


/// <summary>
/*
/// Optional character type on which to filter the leaderboard entries.
*/
/// </summary>
@property NSString* CharacterType; 

/// <summary>
/*
/// Maximum number of entries to retrieve. Default 10, maximum 100.
*/
/// </summary>
@property NSNumber* MaxResultsCount; 

/// <summary>
/*
/// First entry in the leaderboard to be retrieved.
*/
/// </summary>
@property NSNumber* StartPosition; 

/// <summary>
/*
/// Unique identifier for the title-specific statistic for the leaderboard.
*/
/// </summary>
@property NSString* StatisticName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Note that the Position of the character in the results is for the overall leaderboard.
*/
/// </summary>
@interface ClientGetCharacterLeaderboardResult : PlayFabBaseModel


/// <summary>
/*
/// Ordered list of leaderboard entries.
*/
/// </summary>
@property NSArray* Leaderboard; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetCharacterStatisticsRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// In addition to being available for use by the title, the statistics are used for all leaderboard operations in PlayFab.
*/
/// </summary>
@interface ClientGetCharacterStatisticsResult : PlayFabBaseModel


/// <summary>
/*
/// The requested character statistics.
*/
/// </summary>
@property NSDictionary* CharacterStatistics; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetContentDownloadUrlRequest : PlayFabBaseModel


/// <summary>
/*
/// HTTP method to fetch item - GET or HEAD. Use HEAD when only fetching metadata. Default is GET.
*/
/// </summary>
@property NSString* HttpMethod; 

/// <summary>
/*
/// Key of the content item to fetch, usually formatted as a path, e.g. images/a.png
*/
/// </summary>
@property NSString* Key; 

/// <summary>
/*
/// True to download through CDN. CDN provides higher download bandwidth and lower latency. However, if you want the latest, non-cached version of the content during development, set this to false. Default is true.
*/
/// </summary>
@property bool ThruCDN; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetContentDownloadUrlResult : PlayFabBaseModel


/// <summary>
/*
/// URL for downloading content via HTTP GET or HEAD method. The URL will expire in approximately one hour.
*/
/// </summary>
@property NSString* URL; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetFriendLeaderboardAroundPlayerRequest : PlayFabBaseModel


/// <summary>
/*
/// Indicates whether Facebook friends should be included in the response. Default is true.
*/
/// </summary>
@property bool IncludeFacebookFriends; 

/// <summary>
/*
/// Indicates whether Steam service friends should be included in the response. Default is true.
*/
/// </summary>
@property bool IncludeSteamFriends; 

/// <summary>
/*
/// Maximum number of entries to retrieve. Default 10, maximum 100.
*/
/// </summary>
@property NSNumber* MaxResultsCount; 

/// <summary>
/*
/// PlayFab unique identifier of the user to center the leaderboard around. If null will center on the logged in user.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// If non-null, this determines which properties of the resulting player profiles to return. For API calls from the client, only the allowed client profile properties for the title may be requested. These allowed properties are configured in the Game Manager "Client Profile Options" tab in the "Settings" section.
*/
/// </summary>
@property ClientPlayerProfileViewConstraints* ProfileConstraints; 

/// <summary>
/*
/// Statistic used to rank players for this leaderboard.
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// The version of the leaderboard to get.
*/
/// </summary>
@property NSNumber* Version; 

/// <summary>
/*
/// Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
*/
/// </summary>
@property NSString* XboxToken;

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
 
/**/
-(NSDictionary*)getDictionary;

@end


/// <summary>
/*
/// Note: When calling 'GetLeaderboardAround...' APIs, the position of the user defaults to 0 when the user does not have the corresponding statistic.If Facebook friends are included, make sure the access token from previous LoginWithFacebook call is still valid and not expired.
*/
/// </summary>
@interface ClientGetFriendLeaderboardAroundPlayerResult : PlayFabBaseModel


/// <summary>
/*
/// Ordered listing of users and their positions in the requested leaderboard.
*/
/// </summary>
@property NSArray* Leaderboard; 

/// <summary>
/*
/// The time the next scheduled reset will occur. Null if the leaderboard does not reset on a schedule.
*/
/// </summary>
@property NSDate* NextReset; 

/// <summary>
/*
/// The version of the leaderboard returned.
*/
/// </summary>
@property NSNumber* Version; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetFriendLeaderboardRequest : PlayFabBaseModel


/// <summary>
/*
/// Indicates whether Facebook friends should be included in the response. Default is true.
*/
/// </summary>
@property bool IncludeFacebookFriends; 

/// <summary>
/*
/// Indicates whether Steam service friends should be included in the response. Default is true.
*/
/// </summary>
@property bool IncludeSteamFriends; 

/// <summary>
/*
/// Maximum number of entries to retrieve. Default 10, maximum 100.
*/
/// </summary>
@property NSNumber* MaxResultsCount; 

/// <summary>
/*
/// If non-null, this determines which properties of the resulting player profiles to return. For API calls from the client, only the allowed client profile properties for the title may be requested. These allowed properties are configured in the Game Manager "Client Profile Options" tab in the "Settings" section.
*/
/// </summary>
@property ClientPlayerProfileViewConstraints* ProfileConstraints; 

/// <summary>
/*
/// Position in the leaderboard to start this listing (defaults to the first entry).
*/
/// </summary>
@property NSNumber* StartPosition; 

/// <summary>
/*
/// Statistic used to rank friends for this leaderboard.
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// The version of the leaderboard to get.
*/
/// </summary>
@property NSNumber* Version; 

/// <summary>
/*
/// Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
*/
/// </summary>
@property NSString* XboxToken; 

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
 
/**/
-(NSDictionary*)getDictionary;

@end


@interface ClientGetFriendsListRequest : PlayFabBaseModel


/// <summary>
/*
/// Indicates whether Facebook friends should be included in the response. Default is true.
*/
/// </summary>
@property bool IncludeFacebookFriends; 

/// <summary>
/*
/// Indicates whether Steam service friends should be included in the response. Default is true.
*/
/// </summary>
@property bool IncludeSteamFriends; 

/// <summary>
/*
/// If non-null, this determines which properties of the resulting player profiles to return. For API calls from the client, only the allowed client profile properties for the title may be requested. These allowed properties are configured in the Game Manager "Client Profile Options" tab in the "Settings" section.
*/
/// </summary>
@property ClientPlayerProfileViewConstraints* ProfileConstraints; 

/// <summary>
/*
/// Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
*/
/// </summary>
@property NSString* XboxToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// If any additional services are queried for the user's friends, those friends who also have a PlayFab account registered for the title will be returned in the results. For Facebook, user has to have logged into the title's Facebook app recently, and only friends who also plays this game will be included.
*/
/// </summary>
@interface ClientGetFriendsListResult : PlayFabBaseModel


/// <summary>
/*
/// Array of friends found.
*/
/// </summary>
@property NSArray* Friends; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetLeaderboardAroundCharacterRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character on which to center the leaderboard.
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Optional character type on which to filter the leaderboard entries.
*/
/// </summary>
@property NSString* CharacterType; 

/// <summary>
/*
/// Maximum number of entries to retrieve. Default 10, maximum 100.
*/
/// </summary>
@property NSNumber* MaxResultsCount; 

/// <summary>
/*
/// Unique identifier for the title-specific statistic for the leaderboard.
*/
/// </summary>
@property NSString* StatisticName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Note: When calling 'GetLeaderboardAround...' APIs, the position of the character defaults to 0 when the character does not have the corresponding statistic.
*/
/// </summary>
@interface ClientGetLeaderboardAroundCharacterResult : PlayFabBaseModel


/// <summary>
/*
/// Ordered list of leaderboard entries.
*/
/// </summary>
@property NSArray* Leaderboard; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetLeaderboardAroundPlayerRequest : PlayFabBaseModel


/// <summary>
/*
/// Maximum number of entries to retrieve. Default 10, maximum 100.
*/
/// </summary>
@property NSNumber* MaxResultsCount; 

/// <summary>
/*
/// PlayFab unique identifier of the user to center the leaderboard around. If null will center on the logged in user.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// If non-null, this determines which properties of the resulting player profiles to return. For API calls from the client, only the allowed client profile properties for the title may be requested. These allowed properties are configured in the Game Manager "Client Profile Options" tab in the "Settings" section.
*/
/// </summary>
@property ClientPlayerProfileViewConstraints* ProfileConstraints; 

/// <summary>
/*
/// Statistic used to rank players for this leaderboard.
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// The version of the leaderboard to get.
*/
/// </summary>
@property NSNumber* Version;

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
 
/**/
-(NSDictionary*)getDictionary;

@end


/// <summary>
/*
/// Note: When calling 'GetLeaderboardAround...' APIs, the position of the user defaults to 0 when the user does not have the corresponding statistic.
*/
/// </summary>
@interface ClientGetLeaderboardAroundPlayerResult : PlayFabBaseModel


/// <summary>
/*
/// Ordered listing of users and their positions in the requested leaderboard.
*/
/// </summary>
@property NSArray* Leaderboard; 

/// <summary>
/*
/// The time the next scheduled reset will occur. Null if the leaderboard does not reset on a schedule.
*/
/// </summary>
@property NSDate* NextReset; 

/// <summary>
/*
/// The version of the leaderboard returned.
*/
/// </summary>
@property NSNumber* Version; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetLeaderboardForUsersCharactersRequest : PlayFabBaseModel


/// <summary>
/*
/// Maximum number of entries to retrieve.
*/
/// </summary>
@property NSNumber* MaxResultsCount; 

/// <summary>
/*
/// Unique identifier for the title-specific statistic for the leaderboard.
*/
/// </summary>
@property NSString* StatisticName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Note that the Position of the character in the results is for the overall leaderboard.
*/
/// </summary>
@interface ClientGetLeaderboardForUsersCharactersResult : PlayFabBaseModel


/// <summary>
/*
/// Ordered list of leaderboard entries.
*/
/// </summary>
@property NSArray* Leaderboard; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetLeaderboardRequest : PlayFabBaseModel


/// <summary>
/*
/// Maximum number of entries to retrieve. Default 10, maximum 100.
*/
/// </summary>
@property NSNumber* MaxResultsCount; 

/// <summary>
/*
/// If non-null, this determines which properties of the resulting player profiles to return. For API calls from the client, only the allowed client profile properties for the title may be requested. These allowed properties are configured in the Game Manager "Client Profile Options" tab in the "Settings" section.
*/
/// </summary>
@property ClientPlayerProfileViewConstraints* ProfileConstraints; 

/// <summary>
/*
/// Position in the leaderboard to start this listing (defaults to the first entry).
*/
/// </summary>
@property NSNumber* StartPosition; 

/// <summary>
/*
/// Statistic used to rank players for this leaderboard.
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// The version of the leaderboard to get.
*/
/// </summary>
@property NSNumber* Version; 

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
 
/**/
-(NSDictionary*)getDictionary;

@end


/// <summary>
/*
/// Note: the user's Position is relative to the overall leaderboard.
*/
/// </summary>
@interface ClientGetLeaderboardResult : PlayFabBaseModel


/// <summary>
/*
/// Ordered listing of users and their positions in the requested leaderboard.
*/
/// </summary>
@property NSArray* Leaderboard; 

/// <summary>
/*
/// The time the next scheduled reset will occur. Null if the leaderboard does not reset on a schedule.
*/
/// </summary>
@property NSDate* NextReset; 

/// <summary>
/*
/// The version of the leaderboard returned.
*/
/// </summary>
@property NSNumber* Version; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPaymentTokenRequest : PlayFabBaseModel


/// <summary>
/*
/// The name of service to provide the payment token. Allowed Values are: xsolla
*/
/// </summary>
@property NSString* TokenProvider; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPaymentTokenResult : PlayFabBaseModel


/// <summary>
/*
/// PlayFab's purchase order identifier.
*/
/// </summary>
@property NSString* OrderId; 

/// <summary>
/*
/// The token from provider.
*/
/// </summary>
@property NSString* ProviderToken; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPhotonAuthenticationTokenRequest : PlayFabBaseModel


/// <summary>
/*
/// The Photon applicationId for the game you wish to log into.
*/
/// </summary>
@property NSString* PhotonApplicationId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPhotonAuthenticationTokenResult : PlayFabBaseModel


/// <summary>
/*
/// The Photon authentication token for this game-session.
*/
/// </summary>
@property NSString* PhotonCustomAuthenticationToken; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerCombinedInfoRequest : PlayFabBaseModel


/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// PlayFabId of the user whose data will be returned. If not filled included, we return the data for the calling player. 
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerCombinedInfoRequestParams : PlayFabBaseModel


/// <summary>
/*
/// Whether to get character inventories. Defaults to false.
*/
/// </summary>
@property bool GetCharacterInventories; 

/// <summary>
/*
/// Whether to get the list of characters. Defaults to false.
*/
/// </summary>
@property bool GetCharacterList; 

/// <summary>
/*
/// Whether to get player profile. Defaults to false. Has no effect for a new player.
*/
/// </summary>
@property bool GetPlayerProfile; 

/// <summary>
/*
/// Whether to get player statistics. Defaults to false.
*/
/// </summary>
@property bool GetPlayerStatistics; 

/// <summary>
/*
/// Whether to get title data. Defaults to false.
*/
/// </summary>
@property bool GetTitleData; 

/// <summary>
/*
/// Whether to get the player's account Info. Defaults to false
*/
/// </summary>
@property bool GetUserAccountInfo; 

/// <summary>
/*
/// Whether to get the player's custom data. Defaults to false
*/
/// </summary>
@property bool GetUserData; 

/// <summary>
/*
/// Whether to get the player's inventory. Defaults to false
*/
/// </summary>
@property bool GetUserInventory; 

/// <summary>
/*
/// Whether to get the player's read only data. Defaults to false
*/
/// </summary>
@property bool GetUserReadOnlyData; 

/// <summary>
/*
/// Whether to get the player's virtual currency balances. Defaults to false
*/
/// </summary>
@property bool GetUserVirtualCurrency; 

/// <summary>
/*
/// Specific statistics to retrieve. Leave null to get all keys. Has no effect if GetPlayerStatistics is false
*/
/// </summary>
@property NSArray* PlayerStatisticNames; 

/// <summary>
/*
/// Specifies the properties to return from the player profile. Defaults to returning the player's display name.
*/
/// </summary>
@property ClientPlayerProfileViewConstraints* ProfileConstraints; 

/// <summary>
/*
/// Specific keys to search for in the custom data. Leave null to get all keys. Has no effect if GetTitleData is false
*/
/// </summary>
@property NSArray* TitleDataKeys; 

/// <summary>
/*
/// Specific keys to search for in the custom data. Leave null to get all keys. Has no effect if GetUserData is false
*/
/// </summary>
@property NSArray* UserDataKeys; 

/// <summary>
/*
/// Specific keys to search for in the custom data. Leave null to get all keys. Has no effect if GetUserReadOnlyData is false
*/
/// </summary>
@property NSArray* UserReadOnlyDataKeys; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns whatever info is requested in the response for the user. If no user is explicitly requested this defaults to the authenticated user. If the user is the same as the requester, PII (like email address, facebook id) is returned if available. Otherwise, only public information is returned. All parameters default to false.
*/
/// </summary>
@interface ClientGetPlayerCombinedInfoResult : PlayFabBaseModel


/// <summary>
/*
/// Results for requested info.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoResultPayload* InfoResultPayload; 

/// <summary>
/*
/// Unique PlayFab assigned ID of the user on whom the operation will be performed.
*/
/// </summary>
@property NSString* PlayFabId; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerCombinedInfoResultPayload : PlayFabBaseModel


/// <summary>
/*
/// Account information for the user. This is always retrieved.
*/
/// </summary>
@property ClientUserAccountInfo* AccountInfo; 

/// <summary>
/*
/// Inventories for each character for the user.
*/
/// </summary>
@property NSArray* CharacterInventories; 

/// <summary>
/*
/// List of characters for the user.
*/
/// </summary>
@property NSArray* CharacterList; 

/// <summary>
/*
/// The profile of the players. This profile is not guaranteed to be up-to-date. For a new player, this profile will not exist.
*/
/// </summary>
@property ClientPlayerProfileModel* PlayerProfile; 

/// <summary>
/*
/// List of statistics for this player.
*/
/// </summary>
@property NSArray* PlayerStatistics; 

/// <summary>
/*
/// Title data for this title.
*/
/// </summary>
@property NSDictionary* TitleData; 

/// <summary>
/*
/// User specific custom data.
*/
/// </summary>
@property NSDictionary* UserData; 

/// <summary>
/*
/// The version of the UserData that was returned.
*/
/// </summary>
@property NSNumber* UserDataVersion; 

/// <summary>
/*
/// Array of inventory items in the user's current inventory.
*/
/// </summary>
@property NSArray* UserInventory; 

/// <summary>
/*
/// User specific read-only data.
*/
/// </summary>
@property NSDictionary* UserReadOnlyData; 

/// <summary>
/*
/// The version of the Read-Only UserData that was returned.
*/
/// </summary>
@property NSNumber* UserReadOnlyDataVersion; 

/// <summary>
/*
/// Dictionary of virtual currency balance(s) belonging to the user.
*/
/// </summary>
@property NSDictionary* UserVirtualCurrency; 

/// <summary>
/*
/// Dictionary of remaining times and timestamps for virtual currencies.
*/
/// </summary>
@property NSDictionary* UserVirtualCurrencyRechargeTimes; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API allows for access to details regarding a user in the PlayFab service, usually for purposes of customer support. Note that data returned may be Personally Identifying Information (PII), such as email address, and so care should be taken in how this data is stored and managed. Since this call will always return the relevant information for users who have accessed the title, the recommendation is to not store this data locally.
*/
/// </summary>
@interface ClientGetPlayerProfileRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID of the user on whom the operation will be performed.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// If non-null, this determines which properties of the resulting player profiles to return. For API calls from the client, only the allowed client profile properties for the title may be requested. These allowed properties are configured in the Game Manager "Client Profile Options" tab in the "Settings" section.
*/
/// </summary>
@property ClientPlayerProfileViewConstraints* ProfileConstraints; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerProfileResult : PlayFabBaseModel


/// <summary>
/*
/// The profile of the player. This profile is not guaranteed to be up-to-date. For a new player, this profile will not exist.
*/
/// </summary>
@property ClientPlayerProfileModel* PlayerProfile; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerSegmentsRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerSegmentsResult : PlayFabBaseModel


/// <summary>
/*
/// Array of segments the requested player currently belongs to.
*/
/// </summary>
@property NSArray* Segments; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerStatisticsRequest : PlayFabBaseModel


/// <summary>
/*
/// statistics to return (current version will be returned for each)
*/
/// </summary>
@property NSArray* StatisticNames; 

/// <summary>
/*
/// statistics to return, if StatisticNames is not set (only statistics which have a version matching that provided will be returned)
*/
/// </summary>
@property NSArray* StatisticNameVersions; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// In addition to being available for use by the title, the statistics are used for all leaderboard operations in PlayFab.
*/
/// </summary>
@interface ClientGetPlayerStatisticsResult : PlayFabBaseModel


/// <summary>
/*
/// User statistics for the requested user.
*/
/// </summary>
@property NSArray* Statistics; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerStatisticVersionsRequest : PlayFabBaseModel


/// <summary>
/*
/// unique name of the statistic
*/
/// </summary>
@property NSString* StatisticName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerStatisticVersionsResult : PlayFabBaseModel


/// <summary>
/*
/// version change history of the statistic
*/
/// </summary>
@property NSArray* StatisticVersions; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API will return a list of canonical tags which includes both namespace and tag's name. If namespace is not provided, the result is a list of all canonical tags. TagName can be used for segmentation and Namespace is limited to 128 characters.
*/
/// </summary>
@interface ClientGetPlayerTagsRequest : PlayFabBaseModel


/// <summary>
/*
/// Optional namespace to filter results by
*/
/// </summary>
@property NSString* Namespace; 

/// <summary>
/*
/// Unique PlayFab assigned ID of the user on whom the operation will be performed.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerTagsResult : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID of the user on whom the operation will be performed.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Canonical tags (including namespace and tag's name) for the requested user
*/
/// </summary>
@property NSArray* Tags; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerTradesRequest : PlayFabBaseModel


/// <summary>
/*
/// Returns only trades with the given status. If null, returns all trades.
*/
/// </summary>
@property ClientTradeStatus StatusFilter; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayerTradesResponse : PlayFabBaseModel


/// <summary>
/*
/// History of trades which this player has accepted.
*/
/// </summary>
@property NSArray* AcceptedTrades; 

/// <summary>
/*
/// The trades for this player which are currently available to be accepted.
*/
/// </summary>
@property NSArray* OpenedTrades; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromFacebookIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique Facebook identifiers for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* FacebookIDs; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For Facebook identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromFacebookIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of Facebook identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique Facebook Instant Games identifiers for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* FacebookInstantGamesIds; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For Facebook Instant Game identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of Facebook Instant Games identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromGameCenterIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique Game Center identifiers (the Player Identifier) for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* GameCenterIDs; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For Game Center identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromGameCenterIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of Game Center identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromGenericIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique generic service identifiers for which the title needs to get PlayFab identifiers. Currently limited to a maximum of 10 in a single request.
*/
/// </summary>
@property NSArray* GenericIDs; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For generic service identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromGenericIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of generic service identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromGoogleIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique Google identifiers (Google+ user IDs) for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* GoogleIDs; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For Google identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromGoogleIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of Google identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromKongregateIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique Kongregate identifiers (Kongregate's user_id) for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* KongregateIDs; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For Kongregate identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromKongregateIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of Kongregate identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique Nintendo Switch Device identifiers for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* NintendoSwitchDeviceIds; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For Nintendo Switch identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of Nintendo Switch Device identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromPSNAccountIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// Id of the PSN issuer environment. If null, defaults to 256 (production)
*/
/// </summary>
@property NSNumber* IssuerId; 

/// <summary>
/*
/// Array of unique PlayStation Network identifiers for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* PSNAccountIDs; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For PlayStation Network identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromPSNAccountIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of PlayStation Network identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromSteamIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique Steam identifiers (Steam profile IDs) for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* SteamStringIDs; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For Steam identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromSteamIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of Steam identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromTwitchIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// Array of unique Twitch identifiers (Twitch's _id) for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* TwitchIds; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For Twitch identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromTwitchIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of Twitch identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPlayFabIDsFromXboxLiveIDsRequest : PlayFabBaseModel


/// <summary>
/*
/// The ID of Xbox Live sandbox.
*/
/// </summary>
@property NSString* Sandbox; 

/// <summary>
/*
/// Array of unique Xbox Live account identifiers for which the title needs to get PlayFab identifiers.
*/
/// </summary>
@property NSArray* XboxLiveAccountIDs; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For XboxLive identifiers which have not been linked to PlayFab accounts, null will be returned.
*/
/// </summary>
@interface ClientGetPlayFabIDsFromXboxLiveIDsResult : PlayFabBaseModel


/// <summary>
/*
/// Mapping of PlayStation Network identifiers to PlayFab identifiers.
*/
/// </summary>
@property NSArray* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API is designed to return publisher-specific values which can be read, but not written to, by the client. This data is shared across all titles assigned to a particular publisher, and can be used for cross-game coordination. Only titles assigned to a publisher can use this API. For more information email devrel@playfab.com. Note that there may up to a minute delay in between updating title data and this API call returning the newest value.
*/
/// </summary>
@interface ClientGetPublisherDataRequest : PlayFabBaseModel


/// <summary>
/*
///  array of keys to get back data from the Publisher data blob, set by the admin tools
*/
/// </summary>
@property NSArray* Keys; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPublisherDataResult : PlayFabBaseModel


/// <summary>
/*
/// a dictionary object of key / value pairs
*/
/// </summary>
@property NSDictionary* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPurchaseRequest : PlayFabBaseModel


/// <summary>
/*
/// Purchase order identifier.
*/
/// </summary>
@property NSString* OrderId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetPurchaseResult : PlayFabBaseModel


/// <summary>
/*
/// Purchase order identifier.
*/
/// </summary>
@property NSString* OrderId; 

/// <summary>
/*
/// Payment provider used for transaction (If not VC)
*/
/// </summary>
@property NSString* PaymentProvider; 

/// <summary>
/*
/// Date and time of the purchase.
*/
/// </summary>
@property NSDate* PurchaseDate; 

/// <summary>
/*
/// Provider transaction ID (If not VC)
*/
/// </summary>
@property NSString* TransactionId; 

/// <summary>
/*
/// PlayFab transaction status
*/
/// </summary>
@property NSString* TransactionStatus; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetSegmentResult : PlayFabBaseModel


/// <summary>
/*
/// Identifier of the segments AB Test, if it is attached to one.
*/
/// </summary>
@property NSString* ABTestParent; 

/// <summary>
/*
/// Unique identifier for this segment.
*/
/// </summary>
@property NSString* Id; 

/// <summary>
/*
/// Segment name.
*/
/// </summary>
@property NSString* Name; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetSharedGroupDataRequest : PlayFabBaseModel


/// <summary>
/*
/// If true, return the list of all members of the shared group.
*/
/// </summary>
@property bool GetMembers; 

/// <summary>
/*
/// Specific keys to retrieve from the shared group (if not specified, all keys will be returned, while an empty array indicates that no keys should be returned).
*/
/// </summary>
@property NSArray* Keys; 

/// <summary>
/*
/// Unique identifier for the shared group.
*/
/// </summary>
@property NSString* SharedGroupId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetSharedGroupDataResult : PlayFabBaseModel


/// <summary>
/*
/// Data for the requested keys.
*/
/// </summary>
@property NSDictionary* Data; 

/// <summary>
/*
/// List of PlayFabId identifiers for the members of this group, if requested.
*/
/// </summary>
@property NSArray* Members; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// A store contains an array of references to items defined in one or more catalog versions of the game, along with the prices for the item, in both real world and virtual currencies. These prices act as an override to any prices defined in the catalog. In this way, the base definitions of the items may be defined in the catalog, with all associated properties, while the pricing can be set for each store, as needed. This allows for subsets of goods to be defined for different purposes (in order to simplify showing some, but not all catalog items to users, based upon different characteristics), along with unique prices. Note that all prices defined in the catalog and store definitions for the item are considered valid, and that a compromised client can be made to send a request for an item based upon any of these definitions. If no price is specified in the store for an item, the price set in the catalog should be displayed to the user.
*/
/// </summary>
@interface ClientGetStoreItemsRequest : PlayFabBaseModel


/// <summary>
/*
/// catalog version to store items from. Use default catalog version if null
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Unqiue identifier for the store which is being requested.
*/
/// </summary>
@property NSString* StoreId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetStoreItemsResult : PlayFabBaseModel


/// <summary>
/*
/// The base catalog that this store is a part of.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Additional data about the store.
*/
/// </summary>
@property ClientStoreMarketingModel* MarketingData; 

/// <summary>
/*
/// How the store was last updated (Admin or a third party).
*/
/// </summary>
@property ClientSourceType Source; 

/// <summary>
/*
/// Array of items which can be purchased from this store.
*/
/// </summary>
@property NSArray* Store; 

/// <summary>
/*
/// The ID of this store.
*/
/// </summary>
@property NSString* StoreId; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This query retrieves the current time from one of the servers in PlayFab. Please note that due to clock drift between servers, there is a potential variance of up to 5 seconds.
*/
/// </summary>
@interface ClientGetTimeRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Time is always returned as Coordinated Universal Time (UTC).
*/
/// </summary>
@interface ClientGetTimeResult : PlayFabBaseModel


/// <summary>
/*
/// Current server time when the request was received, in UTC
*/
/// </summary>
@property NSDate* Time; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API is designed to return title specific values which can be read, but not written to, by the client. For example, a developer could choose to store values which modify the user experience, such as enemy spawn rates, weapon strengths, movement speeds, etc. This allows a developer to update the title without the need to create, test, and ship a new build. Note that there may up to a minute delay in between updating title data and this API call returning the newest value.
*/
/// </summary>
@interface ClientGetTitleDataRequest : PlayFabBaseModel


/// <summary>
/*
/// Specific keys to search for in the title data (leave null to get all keys)
*/
/// </summary>
@property NSArray* Keys; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetTitleDataResult : PlayFabBaseModel


/// <summary>
/*
/// a dictionary object of key / value pairs
*/
/// </summary>
@property NSDictionary* Data; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetTitleNewsRequest : PlayFabBaseModel


/// <summary>
/*
/// Limits the results to the last n entries. Defaults to 10 if not set.
*/
/// </summary>
@property NSNumber* Count; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetTitleNewsResult : PlayFabBaseModel


/// <summary>
/*
/// Array of news items.
*/
/// </summary>
@property NSArray* News; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// An RSA CSP blob to be used to encrypt the payload of account creation requests when that API requires a signature header. For example if Client/LoginWithCustomId requires signature headers but the player does not have an account yet follow these steps: 1) Call Client/GetTitlePublicKey with one of the title's shared secrets. 2) Convert the Base64 encoded CSP blob to a byte array and create an RSA signing object. 3) Encrypt the UTF8 encoded JSON body of the registration request and place the Base64 encoded result into the EncryptedRequest and with the TitleId field, all other fields can be left empty when performing the API request. 4) Client receives authentication token as normal. Future requests to LoginWithCustomId will require the X-PlayFab-Signature header.
*/
/// </summary>
@interface ClientGetTitlePublicKeyRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 

/// <summary>
/*
/// The shared secret key for this title
*/
/// </summary>
@property NSString* TitleSharedSecret; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetTitlePublicKeyResult : PlayFabBaseModel


/// <summary>
/*
/// Base64 encoded RSA CSP byte array blob containing the title's public RSA key
*/
/// </summary>
@property NSString* RSAPublicKey; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetTradeStatusRequest : PlayFabBaseModel


/// <summary>
/*
/// Player who opened trade.
*/
/// </summary>
@property NSString* OfferingPlayerId; 

/// <summary>
/*
/// Trade identifier as returned by OpenTradeOffer.
*/
/// </summary>
@property NSString* TradeId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetTradeStatusResponse : PlayFabBaseModel


/// <summary>
/*
/// Information about the requested trade.
*/
/// </summary>
@property ClientTradeInfo* Trade; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Data is stored as JSON key-value pairs. Every time the data is updated via any source, the version counter is incremented. If the Version parameter is provided, then this call will only return data if the current version on the system is greater than the value provided. If the Keys parameter is provided, the data object returned will only contain the data specific to the indicated Keys. Otherwise, the full set of custom user data will be returned.
*/
/// </summary>
@interface ClientGetUserDataRequest : PlayFabBaseModel


/// <summary>
/*
/// The version that currently exists according to the caller. The call will return the data for all of the keys if the version in the system is greater than this.
*/
/// </summary>
@property NSNumber* IfChangedFromDataVersion; 

/// <summary>
/*
/// List of unique keys to load from.
*/
/// </summary>
@property NSArray* Keys; 

/// <summary>
/*
/// Unique PlayFab identifier of the user to load data for. Optional, defaults to yourself if not set. When specified to a PlayFab id of another player, then this will only return public keys for that account.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetUserDataResult : PlayFabBaseModel


/// <summary>
/*
/// User specific data for this title.
*/
/// </summary>
@property NSDictionary* Data; 

/// <summary>
/*
/// Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data.
*/
/// </summary>
@property NSNumber* DataVersion; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetUserInventoryRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// All items currently in the user inventory will be returned, irrespective of how they were acquired (via purchasing, grants, coupons, etc.). Items that are expired, fully consumed, or are no longer valid are not considered to be in the user's current inventory, and so will not be not included.
*/
/// </summary>
@interface ClientGetUserInventoryResult : PlayFabBaseModel


/// <summary>
/*
/// Array of inventory items belonging to the user.
*/
/// </summary>
@property NSArray* Inventory; 

/// <summary>
/*
/// Array of virtual currency balance(s) belonging to the user.
*/
/// </summary>
@property NSDictionary* VirtualCurrency; 

/// <summary>
/*
/// Array of remaining times and timestamps for virtual currencies.
*/
/// </summary>
@property NSDictionary* VirtualCurrencyRechargeTimes; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Requires the SHA256 hash of the user's public key.
*/
/// </summary>
@interface ClientGetWindowsHelloChallengeRequest : PlayFabBaseModel


/// <summary>
/*
/// SHA256 hash of the PublicKey generated by Windows Hello.
*/
/// </summary>
@property NSString* PublicKeyHint; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGetWindowsHelloChallengeResponse : PlayFabBaseModel


/// <summary>
/*
/// Server generated challenge to be signed by the user.
*/
/// </summary>
@property NSString* Challenge; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGooglePlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique Google identifier for a user.
*/
/// </summary>
@property NSString* GoogleId; 

/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Google identifier.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Grants a character to the user of the type specified by the item ID. The user must already have an instance of this item in their inventory in order to allow character creation. This item can come from a purchase or grant, which must be done before calling to create the character.
*/
/// </summary>
@interface ClientGrantCharacterToUserRequest : PlayFabBaseModel


/// <summary>
/*
/// Catalog version from which items are to be granted.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Non-unique display name of the character being granted (1-20 characters in length).
*/
/// </summary>
@property NSString* CharacterName; 

/// <summary>
/*
/// Catalog item identifier of the item in the user's inventory that corresponds to the character in the catalog to be created.
*/
/// </summary>
@property NSString* ItemId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientGrantCharacterToUserResult : PlayFabBaseModel


/// <summary>
/*
/// Unique identifier tagged to this character.
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Type of character that was created.
*/
/// </summary>
@property NSString* CharacterType; 

/// <summary>
/*
/// Indicates whether this character was created successfully.
*/
/// </summary>
@property bool Result; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// A unique instance of an item in a user's inventory. Note, to retrieve additional information for an item instance (such as Tags, Description, or Custom Data that are set on the root catalog item), a call to GetCatalogItems is required. The Item ID of the instance can then be matched to a catalog entry, which contains the additional information. Also note that Custom Data is only set here from a call to UpdateUserInventoryItemCustomData.
*/
/// </summary>
@interface ClientItemInstance : PlayFabBaseModel


/// <summary>
/*
/// Game specific comment associated with this instance when it was added to the user inventory.
*/
/// </summary>
@property NSString* Annotation; 

/// <summary>
/*
/// Array of unique items that were awarded when this catalog item was purchased.
*/
/// </summary>
@property NSArray* BundleContents; 

/// <summary>
/*
/// Unique identifier for the parent inventory item, as defined in the catalog, for object which were added from a bundle or container.
*/
/// </summary>
@property NSString* BundleParent; 

/// <summary>
/*
/// Catalog version for the inventory item, when this instance was created.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// A set of custom key-value pairs on the inventory item.
*/
/// </summary>
@property NSDictionary* CustomData; 

/// <summary>
/*
/// CatalogItem.DisplayName at the time this item was purchased.
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// Timestamp for when this instance will expire.
*/
/// </summary>
@property NSDate* Expiration; 

/// <summary>
/*
/// Class name for the inventory item, as defined in the catalog.
*/
/// </summary>
@property NSString* ItemClass; 

/// <summary>
/*
/// Unique identifier for the inventory item, as defined in the catalog.
*/
/// </summary>
@property NSString* ItemId; 

/// <summary>
/*
/// Unique item identifier for this specific instance of the item.
*/
/// </summary>
@property NSString* ItemInstanceId; 

/// <summary>
/*
/// Timestamp for when this instance was purchased.
*/
/// </summary>
@property NSDate* PurchaseDate; 

/// <summary>
/*
/// Total number of remaining uses, if this is a consumable item.
*/
/// </summary>
@property NSNumber* RemainingUses; 

/// <summary>
/*
/// Currency type for the cost of the catalog item.
*/
/// </summary>
@property NSString* UnitCurrency; 

/// <summary>
/*
/// Cost of the catalog item in the given currency.
*/
/// </summary>
@property NSNumber* UnitPrice; 

/// <summary>
/*
/// The number of uses that were added or removed to this item in this call.
*/
/// </summary>
@property NSNumber* UsesIncrementedBy; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientItemPurchaseRequest : PlayFabBaseModel


/// <summary>
/*
/// Title-specific text concerning this purchase.
*/
/// </summary>
@property NSString* Annotation; 

/// <summary>
/*
/// Unique ItemId of the item to purchase.
*/
/// </summary>
@property NSString* ItemId; 

/// <summary>
/*
/// How many of this item to purchase. Min 1, maximum 25.
*/
/// </summary>
@property NSNumber* Quantity; 

/// <summary>
/*
/// Items to be upgraded as a result of this purchase (upgraded items are hidden, as they are "replaced" by the new items).
*/
/// </summary>
@property NSArray* UpgradeFromItems; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientKongregatePlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique Kongregate identifier for a user.
*/
/// </summary>
@property NSString* KongregateId; 

/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Kongregate identifier.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkAndroidDeviceIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Specific model of the user's device.
*/
/// </summary>
@property NSString* AndroidDevice; 

/// <summary>
/*
/// Android device identifier for the user's device.
*/
/// </summary>
@property NSString* AndroidDeviceId; 

/// <summary>
/*
/// If another user is already linked to the device, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Specific Operating System version for the user's device.
*/
/// </summary>
@property NSString* OS; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkAndroidDeviceIDResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkCustomIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Custom unique identifier for the user, generated by the title.
*/
/// </summary>
@property NSString* CustomId; 

/// <summary>
/*
/// If another user is already linked to the custom ID, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkCustomIDResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkedPlatformAccountModel : PlayFabBaseModel


/// <summary>
/*
/// Linked account email of the user on the platform, if available
*/
/// </summary>
@property NSString* Email; 

/// <summary>
/*
/// Authentication platform
*/
/// </summary>
@property ClientLoginIdentityProvider Platform; 

/// <summary>
/*
/// Unique account identifier of the user on the platform
*/
/// </summary>
@property NSString* PlatformUserId; 

/// <summary>
/*
/// Linked account username of the user on the platform, if available
*/
/// </summary>
@property NSString* Username; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
/**/
-(NSDictionary*)getDictionary;
/**/
-(NSArray*) getPlatformList;
@end


/// <summary>
/*
/// Facebook sign-in is accomplished using the Facebook User Access Token. More information on the Token can be found in the Facebook developer documentation (https://developers.facebook.com/docs/facebook-login/access-tokens/). In Unity, for example, the Token is available as AccessToken in the Facebook SDK ScriptableObject FB. Note that titles should never re-use the same Facebook applications between PlayFab Title IDs, as Facebook provides unique user IDs per application and doing so can result in issues with the Facebook ID for the user in their PlayFab account information. If you must re-use an application in a new PlayFab Title ID, please be sure to first unlink all accounts from Facebook, or delete all users in the first Title ID.
*/
/// </summary>
@interface ClientLinkFacebookAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique identifier from Facebook for the user.
*/
/// </summary>
@property NSString* AccessToken; 

/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkFacebookAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkFacebookInstantGamesIdRequest : PlayFabBaseModel


/// <summary>
/*
/// Facebook Instant Games signature for the user.
*/
/// </summary>
@property NSString* FacebookInstantGamesSignature; 

/// <summary>
/*
/// If another user is already linked to the Facebook Instant Games ID, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkFacebookInstantGamesIdResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkGameCenterAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Game Center identifier for the player account to be linked.
*/
/// </summary>
@property NSString* GameCenterId; 

/// <summary>
/*
/// The URL for the public encryption key that will be used to verify the signature.
*/
/// </summary>
@property NSString* PublicKeyUrl; 

/// <summary>
/*
/// A random value used to compute the hash and keep it randomized.
*/
/// </summary>
@property NSString* Salt; 

/// <summary>
/*
/// The verification signature of the authentication payload.
*/
/// </summary>
@property NSString* Signature; 

/// <summary>
/*
/// The integer representation of date and time that the signature was created on. PlayFab will reject authentication signatures not within 10 minutes of the server's current time.
*/
/// </summary>
@property NSString* Timestamp; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkGameCenterAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Google sign-in is accomplished by obtaining a Google OAuth 2.0 credential using the Google sign-in for Android APIs on the device and passing it to this API.
*/
/// </summary>
@interface ClientLinkGoogleAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Server authentication code obtained on the client by calling getServerAuthCode() (https://developers.google.com/identity/sign-in/android/offline-access) from Google Play for the user.
*/
/// </summary>
@property NSString* ServerAuthCode; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkGoogleAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkIOSDeviceIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Vendor-specific iOS identifier for the user's device.
*/
/// </summary>
@property NSString* DeviceId; 

/// <summary>
/*
/// Specific model of the user's device.
*/
/// </summary>
@property NSString* DeviceModel; 

/// <summary>
/*
/// If another user is already linked to the device, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Specific Operating System version for the user's device.
*/
/// </summary>
@property NSString* OS; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkIOSDeviceIDResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkKongregateAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// Valid session auth ticket issued by Kongregate
*/
/// </summary>
@property NSString* AuthTicket; 

/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Numeric user ID assigned by Kongregate
*/
/// </summary>
@property NSString* KongregateId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkKongregateAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkNintendoSwitchDeviceIdRequest : PlayFabBaseModel


/// <summary>
/*
/// If another user is already linked to the Nintendo Switch Device ID, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Nintendo Switch unique identifier for the user's device.
*/
/// </summary>
@property NSString* NintendoSwitchDeviceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkNintendoSwitchDeviceIdResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkOpenIdConnectRequest : PlayFabBaseModel


/// <summary>
/*
/// A name that identifies which configured OpenID Connect provider relationship to use. Maximum 100 characters.
*/
/// </summary>
@property NSString* ConnectionId; 

/// <summary>
/*
/// If another user is already linked to a specific OpenId Connect user, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// The JSON Web token (JWT) returned by the identity provider after login. Represented as the id_token field in the identity provider's response. Used to validate the request and find the user ID (OpenID Connect subject) to link with.
*/
/// </summary>
@property NSString* IdToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkPSNAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// Authentication code provided by the PlayStation Network.
*/
/// </summary>
@property NSString* AuthCode; 

/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Id of the PSN issuer environment. If null, defaults to 256 (production)
*/
/// </summary>
@property NSNumber* IssuerId; 

/// <summary>
/*
/// Redirect URI supplied to PSN when requesting an auth code
*/
/// </summary>
@property NSString* RedirectUri; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkPSNAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Steam authentication is accomplished with the Steam Session Ticket. More information on the Ticket can be found in the Steamworks SDK, here: https://partner.steamgames.com/documentation/auth (requires sign-in). NOTE: For Steam authentication to work, the title must be configured with the Steam Application ID and Publisher Key in the PlayFab Game Manager (under Properties). Information on creating a Publisher Key (referred to as the Secret Key in PlayFab) for your title can be found here: https://partner.steamgames.com/documentation/webapi#publisherkey.
*/
/// </summary>
@interface ClientLinkSteamAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Authentication token for the user, returned as a byte array from Steam, and converted to a string (for example, the byte 0x08 should become "08").
*/
/// </summary>
@property NSString* SteamTicket; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkSteamAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkTwitchAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// Valid token issued by Twitch
*/
/// </summary>
@property NSString* AccessToken; 

/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkTwitchAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// PublicKey must be generated using the Windows Hello Passport service.
*/
/// </summary>
@interface ClientLinkWindowsHelloAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// Device name.
*/
/// </summary>
@property NSString* DeviceName; 

/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// PublicKey generated by Windows Hello.
*/
/// </summary>
@property NSString* PublicKey; 

/// <summary>
/*
/// Player's user named used by Windows Hello.
*/
/// </summary>
@property NSString* UserName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkWindowsHelloAccountResponse : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkXboxAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// If another user is already linked to the account, unlink the other user and re-link.
*/
/// </summary>
@property bool ForceLink; 

/// <summary>
/*
/// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com", "").
*/
/// </summary>
@property NSString* XboxToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLinkXboxAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of every character that currently belongs to a user.
*/
/// </summary>
@interface ClientListUsersCharactersRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID of the user on whom the operation will be performed.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientListUsersCharactersResult : PlayFabBaseModel


/// <summary>
/*
/// The requested list of characters.
*/
/// </summary>
@property NSArray* Characters; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLocationModel : PlayFabBaseModel


/// <summary>
/*
/// City name.
*/
/// </summary>
@property NSString* City; 

/// <summary>
/*
/// The two-character continent code for this location
*/
/// </summary>
@property ClientContinentCode pfContinentCode; 

/// <summary>
/*
/// The two-character ISO 3166-1 country code for the country associated with the location
*/
/// </summary>
@property ClientCountryCode pfCountryCode; 

/// <summary>
/*
/// Latitude coordinate of the geographic location.
*/
/// </summary>
@property NSNumber* Latitude; 

/// <summary>
/*
/// Longitude coordinate of the geographic location.
*/
/// </summary>
@property NSNumber* Longitude; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLoginResult : PlayFabBaseModel


/// <summary>
/*
/// If LoginTitlePlayerAccountEntity flag is set on the login request the title_player_account will also be logged in and returned.
*/
/// </summary>
@property ClientEntityTokenResponse* EntityToken; 

/// <summary>
/*
/// Results for requested info.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoResultPayload* InfoResultPayload; 

/// <summary>
/*
/// The time of this user's previous login. If there was no previous login, then it's DateTime.MinValue
*/
/// </summary>
@property NSDate* LastLoginTime; 

/// <summary>
/*
/// True if the account was newly created on this login.
*/
/// </summary>
@property bool NewlyCreated; 

/// <summary>
/*
/// Player's unique PlayFabId.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Unique token authorizing the user and game at the server level, for the current session.
*/
/// </summary>
@property NSString* SessionTicket; 

/// <summary>
/*
/// Settings specific to this user.
*/
/// </summary>
@property ClientUserSettings* SettingsForUser; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// On Android devices, the recommendation is to use the Settings.Secure.ANDROID_ID as the AndroidDeviceId, as described in this blog post (http://android-developers.blogspot.com/2011/03/identifying-app-installations.html). More information on this identifier can be found in the Android documentation (http://developer.android.com/reference/android/provider/Settings.Secure.html). If this is the first time a user has signed in with the Android device and CreateAccount is set to true, a new PlayFab account will be created and linked to the Android device ID. In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the Android device, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account. Please note that while multiple devices of this type can be linked to a single user account, only the one most recently used to login (or most recently linked) will be reflected in the user's account information. We will be updating to show all linked devices in a future release.
*/
/// </summary>
@interface ClientLoginWithAndroidDeviceIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Specific model of the user's device.
*/
/// </summary>
@property NSString* AndroidDevice; 

/// <summary>
/*
/// Android device identifier for the user's device.
*/
/// </summary>
@property NSString* AndroidDeviceId; 

/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Specific Operating System version for the user's device.
*/
/// </summary>
@property NSString* OS; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// It is highly recommended that developers ensure that it is extremely unlikely that a customer could generate an ID which is already in use by another customer. If this is the first time a user has signed in with the Custom ID and CreateAccount is set to true, a new PlayFab account will be created and linked to the Custom ID. In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the Custom ID, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account.
*/
/// </summary>
@interface ClientLoginWithCustomIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Custom unique identifier for the user, generated by the title.
*/
/// </summary>
@property NSString* CustomId; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Email address and password lengths are provided for information purposes. The server will validate that data passed in conforms to the field definition and report errors appropriately. It is recommended that developers not perform this validation locally, so that future updates do not require client updates.
*/
/// </summary>
@interface ClientLoginWithEmailAddressRequest : PlayFabBaseModel


/// <summary>
/*
/// Email address for the account.
*/
/// </summary>
@property NSString* Email; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Password for the PlayFab account (6-100 characters)
*/
/// </summary>
@property NSString* Password; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLoginWithFacebookInstantGamesIdRequest : PlayFabBaseModel


/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Facebook Instant Games signature for the user.
*/
/// </summary>
@property NSString* FacebookInstantGamesSignature; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Facebook sign-in is accomplished using the Facebook User Access Token. More information on the Token can be found in the Facebook developer documentation (https://developers.facebook.com/docs/facebook-login/access-tokens/). In Unity, for example, the Token is available as AccessToken in the Facebook SDK ScriptableObject FB. If this is the first time a user has signed in with the Facebook account and CreateAccount is set to true, a new PlayFab account will be created and linked to the provided account's Facebook ID. In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the Facebook account, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account. Note that titles should never re-use the same Facebook applications between PlayFab Title IDs, as Facebook provides unique user IDs per application and doing so can result in issues with the Facebook ID for the user in their PlayFab account information. If you must re-use an application in a new PlayFab Title ID, please be sure to first unlink all accounts from Facebook, or delete all users in the first Title ID.
*/
/// </summary>
@interface ClientLoginWithFacebookRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique identifier from Facebook for the user.
*/
/// </summary>
@property NSString* AccessToken; 

/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The Game Center player identifier (https://developer.apple.com/library/ios/documentation/Accounts/Reference/ACAccountClassRef/index.html#//apple_ref/occ/instp/ACAccount/identifier) is a generated string which is stored on the local device. As with device identifiers, care must be taken to never expose a player's Game Center identifier to end users, as that could result in a user's account being compromised. If this is the first time a user has signed in with Game Center and CreateAccount is set to true, a new PlayFab account will be created and linked to the Game Center identifier. In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the Game Center account, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account.
*/
/// </summary>
@interface ClientLoginWithGameCenterRequest : PlayFabBaseModel


/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Unique Game Center player id.
*/
/// </summary>
@property NSString* PlayerId; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// The URL for the public encryption key that will be used to verify the signature.
*/
/// </summary>
@property NSString* PublicKeyUrl; 

/// <summary>
/*
/// A random value used to compute the hash and keep it randomized.
*/
/// </summary>
@property NSString* Salt; 

/// <summary>
/*
/// The verification signature of the authentication payload.
*/
/// </summary>
@property NSString* Signature; 

/// <summary>
/*
/// The integer representation of date and time that the signature was created on. PlayFab will reject authentication signatures not within 10 minutes of the server's current time.
*/
/// </summary>
@property NSString* Timestamp; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Google sign-in is accomplished by obtaining a Google OAuth 2.0 credential using the Google sign-in for Android APIs on the device and passing it to this API. If this is the first time a user has signed in with the Google account and CreateAccount is set to true, a new PlayFab account will be created and linked to the Google account. Otherwise, if no PlayFab account is linked to the Google account, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account. The current (recommended) method for obtaining a Google account credential in an Android application is to call GoogleSignInAccount.getServerAuthCode() and send the auth code as the ServerAuthCode parameter of this API. Before doing this, you must create an OAuth 2.0 web application client ID in the Google API Console and configure its client ID and secret in the PlayFab Game Manager Google Add-on for your title. This method does not require prompting of the user for additional Google account permissions, resulting in a user experience with the least possible friction. For more information about obtaining the server auth code, see https://developers.google.com/identity/sign-in/android/offline-access. The previous (deprecated) method was to obtain an OAuth access token by calling GetAccessToken() on the client and passing it as the AccessToken parameter to this API. for the with the Google OAuth 2.0 Access Token. More information on this change can be found in the Google developer documentation (https://android-developers.googleblog.com/2016/01/play-games-permissions-are-changing-in.html).
*/
/// </summary>
@interface ClientLoginWithGoogleAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// OAuth 2.0 server authentication code obtained on the client by calling the getServerAuthCode() (https://developers.google.com/identity/sign-in/android/offline-access) Google client API.
*/
/// </summary>
@property NSString* ServerAuthCode; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// On iOS devices, the identifierForVendor (https://developer.apple.com/library/ios/documentation/UIKit/Reference/UIDevice_Class/index.html#//apple_ref/occ/instp/UIDevice/identifierForVendor) must be used as the DeviceId, as the UIDevice uniqueIdentifier has been deprecated as of iOS 5, and use of the advertisingIdentifier for this purpose will result in failure of Apple's certification process. If this is the first time a user has signed in with the iOS device and CreateAccount is set to true, a new PlayFab account will be created and linked to the vendor-specific iOS device ID. In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the iOS device, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account. Please note that while multiple devices of this type can be linked to a single user account, only the one most recently used to login (or most recently linked) will be reflected in the user's account information. We will be updating to show all linked devices in a future release.
*/
/// </summary>
@interface ClientLoginWithIOSDeviceIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Vendor-specific iOS identifier for the user's device.
*/
/// </summary>
@property NSString* DeviceId; 

/// <summary>
/*
/// Specific model of the user's device.
*/
/// </summary>
@property NSString* DeviceModel; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Specific Operating System version for the user's device.
*/
/// </summary>
@property NSString* OS; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// More details regarding Kongregate and their game authentication system can be found at http://developers.kongregate.com/docs/virtual-goods/authentication. Developers must provide the Kongregate user ID and auth token that are generated using the Kongregate client library. PlayFab will combine these identifiers with the title's unique Kongregate app ID to log the player into the Kongregate system. If CreateAccount is set to true and there is not already a user matched to this Kongregate ID, then PlayFab will create a new account for this user and link the ID. In this case, no email or username will be associated with the PlayFab account. If there is already a different PlayFab user linked with this account, then an error will be returned.
*/
/// </summary>
@interface ClientLoginWithKongregateRequest : PlayFabBaseModel


/// <summary>
/*
/// Token issued by Kongregate's client API for the user.
*/
/// </summary>
@property NSString* AuthTicket; 

/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Numeric user ID assigned by Kongregate
*/
/// </summary>
@property NSString* KongregateId; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLoginWithNintendoSwitchDeviceIdRequest : PlayFabBaseModel


/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Nintendo Switch unique identifier for the user's device.
*/
/// </summary>
@property NSString* NintendoSwitchDeviceId; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLoginWithOpenIdConnectRequest : PlayFabBaseModel


/// <summary>
/*
/// A name that identifies which configured OpenID Connect provider relationship to use. Maximum 100 characters.
*/
/// </summary>
@property NSString* ConnectionId; 

/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// The JSON Web token (JWT) returned by the identity provider after login. Represented as the id_token field in the identity provider's response.
*/
/// </summary>
@property NSString* IdToken; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Username and password lengths are provided for information purposes. The server will validate that data passed in conforms to the field definition and report errors appropriately. It is recommended that developers not perform this validation locally, so that future updates to the username or password do not require client updates.
*/
/// </summary>
@interface ClientLoginWithPlayFabRequest : PlayFabBaseModel


/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Password for the PlayFab account (6-100 characters)
*/
/// </summary>
@property NSString* Password; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 

/// <summary>
/*
/// PlayFab username for the account.
*/
/// </summary>
@property NSString* Username; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// If this is the first time a user has signed in with the PlayStation Network account and CreateAccount is set to true, a new PlayFab account will be created and linked to the PSN account. In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the PSN account, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account.
*/
/// </summary>
@interface ClientLoginWithPSNRequest : PlayFabBaseModel


/// <summary>
/*
/// Auth code provided by the PSN OAuth provider.
*/
/// </summary>
@property NSString* AuthCode; 

/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Id of the PSN issuer environment. If null, defaults to 256 (production)
*/
/// </summary>
@property NSNumber* IssuerId; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Redirect URI supplied to PSN when requesting an auth code
*/
/// </summary>
@property NSString* RedirectUri; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Steam sign-in is accomplished with the Steam Session Ticket. More information on the Ticket can be found in the Steamworks SDK, here: https://partner.steamgames.com/documentation/auth (requires sign-in). NOTE: For Steam authentication to work, the title must be configured with the Steam Application ID and Web API Key in the PlayFab Game Manager (under Steam in the Add-ons Marketplace). You can obtain a Web API Key from the Permissions page of any Group associated with your App ID in the Steamworks site. If this is the first time a user has signed in with the Steam account and CreateAccount is set to true, a new PlayFab account will be created and linked to the provided account's Steam ID. In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the Steam account, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account.
*/
/// </summary>
@interface ClientLoginWithSteamRequest : PlayFabBaseModel


/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Authentication token for the user, returned as a byte array from Steam, and converted to a string (for example, the byte 0x08 should become "08").
*/
/// </summary>
@property NSString* SteamTicket; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// More details regarding Twitch and their authentication system can be found at https://github.com/justintv/Twitch-API/blob/master/authentication.md. Developers must provide the Twitch access token that is generated using one of the Twitch authentication flows. PlayFab will use the title's unique Twitch Client ID to authenticate the token and log in to the PlayFab system. If CreateAccount is set to true and there is not already a user matched to the Twitch username that generated the token, then PlayFab will create a new account for this user and link the ID. In this case, no email or username will be associated with the PlayFab account. If there is already a different PlayFab user linked with this account, then an error will be returned.
*/
/// </summary>
@interface ClientLoginWithTwitchRequest : PlayFabBaseModel


/// <summary>
/*
/// Token issued by Twitch's API for the user.
*/
/// </summary>
@property NSString* AccessToken; 

/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Requires both the SHA256 hash of the user's public key as well as the signed response from GetWindowsHelloChallenge
*/
/// </summary>
@interface ClientLoginWithWindowsHelloRequest : PlayFabBaseModel


/// <summary>
/*
/// The signed response from the user for the Challenge.
*/
/// </summary>
@property NSString* ChallengeSignature; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// SHA256 hash of the PublicKey generated by Windows Hello.
*/
/// </summary>
@property NSString* PublicKeyHint; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// If this is the first time a user has signed in with the Xbox Live account and CreateAccount is set to true, a new PlayFab account will be created and linked to the Xbox Live account. In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the Xbox Live account, an error indicating this will be returned, so that the title can guide the user through creation of a PlayFab account.
*/
/// </summary>
@interface ClientLoginWithXboxRequest : PlayFabBaseModel


/// <summary>
/*
/// Automatically create a PlayFab account if one is not currently linked to this ID.
*/
/// </summary>
@property bool CreateAccount; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 

/// <summary>
/*
/// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com", "").
*/
/// </summary>
@property NSString* XboxToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientLogStatement : PlayFabBaseModel


/// <summary>
/*
/// Optional object accompanying the message as contextual information
*/
/// </summary>
@property NSDictionary* Data; 

/// <summary>
/*
/// 'Debug', 'Info', or 'Error'
*/
/// </summary>
@property NSString* Level; 

@property NSString* Message; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientMatchmakeRequest : PlayFabBaseModel


/// <summary>
/*
/// Build version to match against. [Note: Required if LobbyId is not specified]
*/
/// </summary>
@property NSString* BuildVersion; 

/// <summary>
/*
/// Character to use for stats based matching. Leave null to use account stats.
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Game mode to match make against. [Note: Required if LobbyId is not specified]
*/
/// </summary>
@property NSString* GameMode; 

/// <summary>
/*
/// Lobby identifier to match make against. This is used to select a specific Game Server Instance.
*/
/// </summary>
@property NSString* LobbyId; 

/// <summary>
/*
/// Region to match make against. [Note: Required if LobbyId is not specified]
*/
/// </summary>
@property ClientRegion pfRegion; 

/// <summary>
/*
/// Start a game session if one with an open slot is not found. Defaults to true.
*/
/// </summary>
@property bool StartNewIfNoneFound; 

/// <summary>
/*
/// Player statistic to use in finding a match. May be null for no stat-based matching.
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// Filter to include and/or exclude Game Server Instances associated with certain Tags
*/
/// </summary>
@property ClientCollectionFilter* TagFilter; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientMatchmakeResult : PlayFabBaseModel


/// <summary>
/*
/// timestamp for when the server will expire, if applicable
*/
/// </summary>
@property NSString* Expires; 

/// <summary>
/*
/// unique lobby identifier of the server matched
*/
/// </summary>
@property NSString* LobbyID; 

/// <summary>
/*
/// time in milliseconds the application is configured to wait on matchmaking results
*/
/// </summary>
@property NSNumber* PollWaitTimeMS; 

/// <summary>
/*
/// IPV4 address of the server
*/
/// </summary>
@property NSString* ServerIPV4Address; 

/// <summary>
/*
/// IPV6 address of the server
*/
/// </summary>
@property NSString* ServerIPV6Address; 

/// <summary>
/*
/// port number to use for non-http communications with the server
*/
/// </summary>
@property NSNumber* ServerPort; 

/// <summary>
/*
/// Public DNS name (if any) of the server
*/
/// </summary>
@property NSString* ServerPublicDNSName; 

/// <summary>
/*
/// result of match making process
*/
/// </summary>
@property ClientMatchmakeStatus Status; 

/// <summary>
/*
/// server authorization ticket (used by RedeemMatchmakerTicket to validate user insertion into the game)
*/
/// </summary>
@property NSString* Ticket; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientMembershipModel : PlayFabBaseModel


/// <summary>
/*
/// Whether this membership is active. That is, whether the MembershipExpiration time has been reached.
*/
/// </summary>
@property bool IsActive; 

/// <summary>
/*
/// The time this membership expires
*/
/// </summary>
@property NSDate* MembershipExpiration; 

/// <summary>
/*
/// The id of the membership
*/
/// </summary>
@property NSString* MembershipId; 

/// <summary>
/*
/// Membership expirations can be explicitly overridden (via game manager or the admin api). If this membership has been overridden, this will be the new expiration time.
*/
/// </summary>
@property NSDate* OverrideExpiration; 

/// <summary>
/*
/// The list of subscriptions that this player has for this membership
*/
/// </summary>
@property NSArray* Subscriptions; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientModifyUserVirtualCurrencyResult : PlayFabBaseModel


/// <summary>
/*
/// Balance of the virtual currency after modification.
*/
/// </summary>
@property NSNumber* Balance; 

/// <summary>
/*
/// Amount added or subtracted from the user's virtual currency. Maximum VC balance is Int32 (2,147,483,647). Any increase over this value will be discarded.
*/
/// </summary>
@property NSNumber* BalanceChange; 

/// <summary>
/*
/// User currency was subtracted from.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Name of the virtual currency which was modified.
*/
/// </summary>
@property NSString* VirtualCurrency; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientNintendoSwitchPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique Nintendo Switch Device identifier for a user.
*/
/// </summary>
@property NSString* NintendoSwitchDeviceId; 

/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Nintendo Switch Device identifier.
*/
/// </summary>
@property NSString* PlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientOpenTradeRequest : PlayFabBaseModel


/// <summary>
/*
/// Players who are allowed to accept the trade. If null, the trade may be accepted by any player. If empty, the trade may not be accepted by any player.
*/
/// </summary>
@property NSArray* AllowedPlayerIds; 

/// <summary>
/*
/// Player inventory items offered for trade. If not set, the trade is effectively a gift request
*/
/// </summary>
@property NSArray* OfferedInventoryInstanceIds; 

/// <summary>
/*
/// Catalog items accepted for the trade. If not set, the trade is effectively a gift.
*/
/// </summary>
@property NSArray* RequestedCatalogItemIds; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientOpenTradeResponse : PlayFabBaseModel


/// <summary>
/*
/// The information about the trade that was just opened.
*/
/// </summary>
@property ClientTradeInfo* Trade; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This is the second step in the purchasing process, initiating the purchase transaction with the payment provider (if applicable). For payment provider scenarios, the title should next present the user with the payment provider'sinterface for payment. Once the player has completed the payment with the provider, the title should call ConfirmPurchase tofinalize the process and add the appropriate items to the player inventory.
*/
/// </summary>
@interface ClientPayForPurchaseRequest : PlayFabBaseModel


/// <summary>
/*
/// Currency to use to fund the purchase.
*/
/// </summary>
@property NSString* Currency; 

/// <summary>
/*
/// Purchase order identifier returned from StartPurchase.
*/
/// </summary>
@property NSString* OrderId; 

/// <summary>
/*
/// Payment provider to use to fund the purchase.
*/
/// </summary>
@property NSString* ProviderName; 

/// <summary>
/*
/// Payment provider transaction identifier. Required for Facebook Payments.
*/
/// </summary>
@property NSString* ProviderTransactionId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// For web-based payment providers, this operation returns the URL to which the user should be directed inorder to approve the purchase. Items added to the user inventory as a result of this operation will be marked as unconfirmed.
*/
/// </summary>
@interface ClientPayForPurchaseResult : PlayFabBaseModel


/// <summary>
/*
/// Local credit applied to the transaction (provider specific).
*/
/// </summary>
@property NSNumber* CreditApplied; 

/// <summary>
/*
/// Purchase order identifier.
*/
/// </summary>
@property NSString* OrderId; 

/// <summary>
/*
/// Provider used for the transaction.
*/
/// </summary>
@property NSString* ProviderData; 

/// <summary>
/*
/// A token generated by the provider to authenticate the request (provider-specific).
*/
/// </summary>
@property NSString* ProviderToken; 

/// <summary>
/*
/// URL to the purchase provider page that details the purchase.
*/
/// </summary>
@property NSString* PurchaseConfirmationPageURL; 

/// <summary>
/*
/// Currency for the transaction, may be a virtual currency or real money.
*/
/// </summary>
@property NSString* PurchaseCurrency; 

/// <summary>
/*
/// Cost of the transaction.
*/
/// </summary>
@property NSNumber* PurchasePrice; 

/// <summary>
/*
/// Status of the transaction.
*/
/// </summary>
@property ClientTransactionStatus Status; 

/// <summary>
/*
/// Virtual currencies granted by the transaction, if any.
*/
/// </summary>
@property NSDictionary* VCAmount; 

/// <summary>
/*
/// Current virtual currency balances for the user.
*/
/// </summary>
@property NSDictionary* VirtualCurrency; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientPaymentOption : PlayFabBaseModel


/// <summary>
/*
/// Specific currency to use to fund the purchase.
*/
/// </summary>
@property NSString* Currency; 

/// <summary>
/*
/// Amount of the specified currency needed for the purchase.
*/
/// </summary>
@property NSNumber* Price; 

/// <summary>
/*
/// Name of the purchase provider for this option.
*/
/// </summary>
@property NSString* ProviderName; 

/// <summary>
/*
/// Amount of existing credit the user has with the provider.
*/
/// </summary>
@property NSNumber* StoreCredit; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientPlayerLeaderboardEntry : PlayFabBaseModel


/// <summary>
/*
/// Title-specific display name of the user for this leaderboard entry.
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// PlayFab unique identifier of the user for this leaderboard entry.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// User's overall position in the leaderboard.
*/
/// </summary>
@property NSNumber* Position; 

/// <summary>
/*
/// The profile of the user, if requested.
*/
/// </summary>
@property ClientPlayerProfileModel* Profile; 

/// <summary>
/*
/// Specific value of the user's statistic.
*/
/// </summary>
@property NSNumber* StatValue;

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
/**/
-(NSDictionary*)getDictionary;

@end


@interface ClientPlayerProfileModel : PlayFabBaseModel


/// <summary>
/*
/// List of advertising campaigns the player has been attributed to
*/
/// </summary>
@property NSArray* AdCampaignAttributions; 

/// <summary>
/*
/// URL of the player's avatar image
*/
/// </summary>
@property NSString* AvatarUrl; 

/// <summary>
/*
/// If the player is currently banned, the UTC Date when the ban expires
*/
/// </summary>
@property NSDate* BannedUntil; 

/// <summary>
/*
/// List of all contact email info associated with the player account
*/
/// </summary>
@property NSArray* ContactEmailAddresses; 

/// <summary>
/*
/// Player record created
*/
/// </summary>
@property NSDate* Created; 

/// <summary>
/*
/// Player display name
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// UTC time when the player most recently logged in to the title
*/
/// </summary>
@property NSDate* LastLogin; 

/// <summary>
/*
/// List of all authentication systems linked to this player account
*/
/// </summary>
@property NSArray* LinkedAccounts; 

/// <summary>
/*
/// List of geographic locations from which the player has logged in to the title
*/
/// </summary>
@property NSArray* Locations; 

/// <summary>
/*
/// List of memberships for the player, along with whether are expired.
*/
/// </summary>
@property NSArray* Memberships; 

/// <summary>
/*
/// Player account origination
*/
/// </summary>
@property ClientLoginIdentityProvider Origination; 

/// <summary>
/*
/// PlayFab player account unique identifier
*/
/// </summary>
@property NSString* PlayerId; 

/// <summary>
/*
/// Publisher this player belongs to
*/
/// </summary>
@property NSString* PublisherId; 

/// <summary>
/*
/// List of configured end points registered for sending the player push notifications
*/
/// </summary>
@property NSArray* PushNotificationRegistrations; 

/// <summary>
/*
/// List of leaderboard statistic values for the player
*/
/// </summary>
@property NSArray* Statistics; 

/// <summary>
/*
/// List of player's tags for segmentation
*/
/// </summary>
@property NSArray* Tags; 

/// <summary>
/*
/// Title ID this player profile applies to
*/
/// </summary>
@property NSString* TitleId; 

/// <summary>
/*
/// Sum of the player's purchases made with real-money currencies, converted to US dollars equivalent and represented as a whole number of cents (1/100 USD). For example, 999 indicates nine dollars and ninety-nine cents.
*/
/// </summary>
@property NSNumber* TotalValueToDateInUSD; 

/// <summary>
/*
/// List of the player's lifetime purchase totals, summed by real-money currency
*/
/// </summary>
@property NSArray* ValuesToDate;

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
/**/
-(NSDictionary*)getDictionary;

@end


@interface ClientPlayerProfileViewConstraints : PlayFabBaseModel


/// <summary>
/*
/// Whether to show player's avatar URL. Defaults to false
*/
/// </summary>
@property bool ShowAvatarUrl; 

/// <summary>
/*
/// Whether to show the banned until time. Defaults to false
*/
/// </summary>
@property bool ShowBannedUntil; 

/// <summary>
/*
/// Whether to show campaign attributions. Defaults to false
*/
/// </summary>
@property bool ShowCampaignAttributions; 

/// <summary>
/*
/// Whether to show contact email addresses. Defaults to false
*/
/// </summary>
@property bool ShowContactEmailAddresses; 

/// <summary>
/*
/// Whether to show the created date. Defaults to false
*/
/// </summary>
@property bool ShowCreated; 

/// <summary>
/*
/// Whether to show the display name. Defaults to false
*/
/// </summary>
@property bool ShowDisplayName; 

/// <summary>
/*
/// Whether to show the last login time. Defaults to false
*/
/// </summary>
@property bool ShowLastLogin; 

/// <summary>
/*
/// Whether to show the linked accounts. Defaults to false
*/
/// </summary>
@property bool ShowLinkedAccounts; 

/// <summary>
/*
/// Whether to show player's locations. Defaults to false
*/
/// </summary>
@property bool ShowLocations; 

/// <summary>
/*
/// Whether to show player's membership information. Defaults to false
*/
/// </summary>
@property bool ShowMemberships; 

/// <summary>
/*
/// Whether to show origination. Defaults to false
*/
/// </summary>
@property bool ShowOrigination; 

/// <summary>
/*
/// Whether to show push notification registrations. Defaults to false
*/
/// </summary>
@property bool ShowPushNotificationRegistrations; 

/// <summary>
/*
/// Reserved for future development
*/
/// </summary>
@property bool ShowStatistics; 

/// <summary>
/*
/// Whether to show tags. Defaults to false
*/
/// </summary>
@property bool ShowTags; 

/// <summary>
/*
/// Whether to show the total value to date in usd. Defaults to false
*/
/// </summary>
@property bool ShowTotalValueToDateInUsd; 

/// <summary>
/*
/// Whether to show the values to date. Defaults to false
*/
/// </summary>
@property bool ShowValuesToDate; 

/**/
-(id)initWithDictionary:(NSDictionary*)properties;

/**/
-(NSDictionary*)getDictionary;


@end


@interface ClientPlayerStatisticVersion : PlayFabBaseModel


/// <summary>
/*
/// time when the statistic version became active
*/
/// </summary>
@property NSDate* ActivationTime; 

/// <summary>
/*
/// time when the statistic version became inactive due to statistic version incrementing
*/
/// </summary>
@property NSDate* DeactivationTime; 

/// <summary>
/*
/// time at which the statistic version was scheduled to become active, based on the configured ResetInterval
*/
/// </summary>
@property NSDate* ScheduledActivationTime; 

/// <summary>
/*
/// time at which the statistic version was scheduled to become inactive, based on the configured ResetInterval
*/
/// </summary>
@property NSDate* ScheduledDeactivationTime; 

/// <summary>
/*
/// name of the statistic when the version became active
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// version of the statistic
*/
/// </summary>
@property NSNumber* Version; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientPSNAccountPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the PlayStation Network identifier.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Unique PlayStation Network identifier for a user.
*/
/// </summary>
@property NSString* PSNAccountId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Please note that the processing time for inventory grants and purchases increases fractionally the more items are in the inventory, and the more items are in the grant/purchase operation (with each item in a bundle being a distinct add).
*/
/// </summary>
@interface ClientPurchaseItemRequest : PlayFabBaseModel


/// <summary>
/*
/// Catalog version for the items to be purchased (defaults to most recent version.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Unique identifier of the item to purchase.
*/
/// </summary>
@property NSString* ItemId; 

/// <summary>
/*
/// Price the client expects to pay for the item (in case a new catalog or store was uploaded, with new prices).
*/
/// </summary>
@property NSNumber* Price; 

/// <summary>
/*
/// Store to buy this item through. If not set, prices default to those in the catalog.
*/
/// </summary>
@property NSString* StoreId; 

/// <summary>
/*
/// Virtual currency to use to purchase the item.
*/
/// </summary>
@property NSString* VirtualCurrency; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientPurchaseItemResult : PlayFabBaseModel


/// <summary>
/*
/// Details for the items purchased.
*/
/// </summary>
@property NSArray* Items; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientPushNotificationRegistrationModel : PlayFabBaseModel


/// <summary>
/*
/// Notification configured endpoint
*/
/// </summary>
@property NSString* NotificationEndpointARN; 

/// <summary>
/*
/// Push notification platform
*/
/// </summary>
@property ClientPushNotificationPlatform Platform; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Coupon codes can be created for any item, or set of items, in the catalog for the title. This operation causes the coupon to be consumed, and the specific items to be awarded to the user. Attempting to re-use an already consumed code, or a code which has not yet been created in the service, will result in an error.
*/
/// </summary>
@interface ClientRedeemCouponRequest : PlayFabBaseModel


/// <summary>
/*
/// Catalog version of the coupon. If null, uses the default catalog
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Optional identifier for the Character that should receive the item. If null, item is added to the player
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Generated coupon code to redeem.
*/
/// </summary>
@property NSString* CouponCode; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRedeemCouponResult : PlayFabBaseModel


/// <summary>
/*
/// Items granted to the player as a result of redeeming the coupon.
*/
/// </summary>
@property NSArray* GrantedItems; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRefreshPSNAuthTokenRequest : PlayFabBaseModel


/// <summary>
/*
/// Auth code returned by PSN OAuth system.
*/
/// </summary>
@property NSString* AuthCode; 

/// <summary>
/*
/// Id of the PSN issuer environment. If null, defaults to 256 (production)
*/
/// </summary>
@property NSNumber* IssuerId; 

/// <summary>
/*
/// Redirect URI supplied to PSN when requesting an auth code
*/
/// </summary>
@property NSString* RedirectUri; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRegionInfo : PlayFabBaseModel


/// <summary>
/*
/// indicates whether the server specified is available in this region
*/
/// </summary>
@property bool Available; 

/// <summary>
/*
/// name of the region
*/
/// </summary>
@property NSString* Name; 

/// <summary>
/*
/// url to ping to get roundtrip time
*/
/// </summary>
@property NSString* PingUrl; 

/// <summary>
/*
/// unique identifier for the region
*/
/// </summary>
@property ClientRegion pfRegion; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The steps to configure and send Push Notifications is described in the PlayFab tutorials, here: https://api.playfab.com/docs/pushCrashCourse/
*/
/// </summary>
@interface ClientRegisterForIOSPushNotificationRequest : PlayFabBaseModel


/// <summary>
/*
/// Message to display when confirming push notification.
*/
/// </summary>
@property NSString* ConfirmationMessage; 

/// <summary>
/*
/// Unique token generated by the Apple Push Notification service when the title registered to receive push notifications.
*/
/// </summary>
@property NSString* DeviceToken; 

/// <summary>
/*
/// If true, send a test push message immediately after sucessful registration. Defaults to false.
*/
/// </summary>
@property bool SendPushNotificationConfirmation; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRegisterForIOSPushNotificationResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRegisterPlayFabUserRequest : PlayFabBaseModel


/// <summary>
/*
/// An optional parameter for setting the display name for this title (3-25 characters).
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// User email address attached to their account
*/
/// </summary>
@property NSString* Email; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Password for the PlayFab account (6-100 characters)
*/
/// </summary>
@property NSString* Password; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// An optional parameter that specifies whether both the username and email parameters are required. If true, both parameters are required; if false, the user must supply either the username or email parameter. The default value is true.
*/
/// </summary>
@property bool RequireBothUsernameAndEmail; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 

/// <summary>
/*
/// PlayFab username for the account (3-20 characters)
*/
/// </summary>
@property NSString* Username; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Each account must have a unique email address in the PlayFab service. Once created, the account may be associated with additional accounts (Steam, Facebook, Game Center, etc.), allowing for added social network lists and achievements systems.
*/
/// </summary>
@interface ClientRegisterPlayFabUserResult : PlayFabBaseModel


/// <summary>
/*
/// If LoginTitlePlayerAccountEntity flag is set on the login request the title_player_account will also be logged in and returned.
*/
/// </summary>
@property ClientEntityTokenResponse* EntityToken; 

/// <summary>
/*
/// PlayFab unique identifier for this newly created account.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Unique token identifying the user and game at the server level, for the current session.
*/
/// </summary>
@property NSString* SessionTicket; 

/// <summary>
/*
/// Settings specific to this user.
*/
/// </summary>
@property ClientUserSettings* SettingsForUser; 

/// <summary>
/*
/// PlayFab unique user name.
*/
/// </summary>
@property NSString* Username; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// PublicKey must be generated using the Windows Hello Passport service.
*/
/// </summary>
@interface ClientRegisterWithWindowsHelloRequest : PlayFabBaseModel


/// <summary>
/*
/// Device name.
*/
/// </summary>
@property NSString* DeviceName; 

/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Flags for which pieces of info to return for the user.
*/
/// </summary>
@property ClientGetPlayerCombinedInfoRequestParams* InfoRequestParameters; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 

/// <summary>
/*
/// PublicKey generated by Windows Hello.
*/
/// </summary>
@property NSString* PublicKey; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 

/// <summary>
/*
/// Player's user name used by Windows Hello.
*/
/// </summary>
@property NSString* UserName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API removes an existing contact email from the player's profile.
*/
/// </summary>
@interface ClientRemoveContactEmailRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRemoveContactEmailResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRemoveFriendRequest : PlayFabBaseModel


/// <summary>
/*
/// PlayFab identifier of the friend account which is to be removed.
*/
/// </summary>
@property NSString* FriendPlayFabId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRemoveFriendResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRemoveGenericIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Generic service identifier to be removed from the player.
*/
/// </summary>
@property ClientGenericServiceId* GenericId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRemoveGenericIDResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRemoveSharedGroupMembersRequest : PlayFabBaseModel


/// <summary>
/*
/// An array of unique PlayFab assigned ID of the user on whom the operation will be performed.
*/
/// </summary>
@property NSArray* PlayFabIds; 

/// <summary>
/*
/// Unique identifier for the shared group.
*/
/// </summary>
@property NSString* SharedGroupId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientRemoveSharedGroupMembersResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientReportPlayerClientRequest : PlayFabBaseModel


/// <summary>
/*
/// Optional additional comment by reporting player.
*/
/// </summary>
@property NSString* Comment; 

/// <summary>
/*
/// Unique PlayFab identifier of the reported player.
*/
/// </summary>
@property NSString* ReporteeId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Players are currently limited to five reports per day. Attempts by a single user account to submit reports beyond five will result in Updated being returned as false.
*/
/// </summary>
@interface ClientReportPlayerClientResult : PlayFabBaseModel


/// <summary>
/*
/// The number of remaining reports which may be filed today.
*/
/// </summary>
@property NSNumber* SubmissionsRemaining; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The title should obtain a refresh receipt via restoreCompletedTransactions in the SKPaymentQueue of the Apple StoreKit and pass that in to this call. The resultant receipt contains new receipt instances for all non-consumable goods previously purchased by the user. This API call iterates through every purchase in the receipt and restores the items if they still exist in the catalog and can be validated.
*/
/// </summary>
@interface ClientRestoreIOSPurchasesRequest : PlayFabBaseModel


/// <summary>
/*
/// Base64 encoded receipt data, passed back by the App Store as a result of a successful purchase.
*/
/// </summary>
@property NSString* ReceiptData; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Once verified, the valid items will be restored into the user's inventory.
*/
/// </summary>
@interface ClientRestoreIOSPurchasesResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientScriptExecutionError : PlayFabBaseModel


/// <summary>
/*
/// Error code, such as CloudScriptNotFound, JavascriptException, CloudScriptFunctionArgumentSizeExceeded, CloudScriptAPIRequestCountExceeded, CloudScriptAPIRequestError, or CloudScriptHTTPRequestError
*/
/// </summary>
@property NSString* Error; 

/// <summary>
/*
/// Details about the error
*/
/// </summary>
@property NSString* Message; 

/// <summary>
/*
/// Point during the execution of the script at which the error occurred, if any
*/
/// </summary>
@property NSString* StackTrace; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// If the account in question is a "temporary" account (for example, one that was created via a call to LoginFromIOSDeviceID), thisfunction will have no effect. Only PlayFab accounts which have valid email addresses will be able to receive a password reset email using this API.
*/
/// </summary>
@interface ClientSendAccountRecoveryEmailRequest : PlayFabBaseModel


/// <summary>
/*
/// User email address attached to their account
*/
/// </summary>
@property NSString* Email; 

/// <summary>
/*
/// The email template id of the account recovery email template to send.
*/
/// </summary>
@property NSString* EmailTemplateId; 

/// <summary>
/*
/// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab developer site when a title has been selected.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientSendAccountRecoveryEmailResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This operation is not additive. It will completely replace the tag list for the specified user. Please note that only users in the PlayFab friends list can be assigned tags. Attempting to set a tag on a friend only included in the friends list from a social site integration (such as Facebook or Steam) will return the AccountNotFound error.
*/
/// </summary>
@interface ClientSetFriendTagsRequest : PlayFabBaseModel


/// <summary>
/*
/// PlayFab identifier of the friend account to which the tag(s) should be applied.
*/
/// </summary>
@property NSString* FriendPlayFabId; 

/// <summary>
/*
/// Array of tags to set on the friend account.
*/
/// </summary>
@property NSArray* Tags; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientSetFriendTagsResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// APIs that require signatures require that the player have a configured Player Secret Key that is used to sign all requests. Players that don't have a secret will be blocked from making API calls until it is configured. To create a signature header add a SHA256 hashed string containing UTF8 encoded JSON body as it will be sent to the server, the current time in UTC formatted to ISO 8601, and the players secret formatted as 'body.date.secret'. Place the resulting hash into the header X-PlayFab-Signature, along with a header X-PlayFab-Timestamp of the same UTC timestamp used in the signature.
*/
/// </summary>
@interface ClientSetPlayerSecretRequest : PlayFabBaseModel


/// <summary>
/*
/// Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise Only).
*/
/// </summary>
@property NSString* EncryptedRequest; 

/// <summary>
/*
/// Player secret that is used to verify API request signatures (Enterprise Only).
*/
/// </summary>
@property NSString* PlayerSecret; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientSetPlayerSecretResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientSharedGroupDataRecord : PlayFabBaseModel


/// <summary>
/*
/// Timestamp for when this data was last updated.
*/
/// </summary>
@property NSDate* LastUpdated; 

/// <summary>
/*
/// Unique PlayFab identifier of the user to last update this value.
*/
/// </summary>
@property NSString* LastUpdatedBy; 

/// <summary>
/*
/// Indicates whether this data can be read by all users (public) or only members of the group (private).
*/
/// </summary>
@property ClientUserDataPermission Permission; 

/// <summary>
/*
/// Data stored for the specified group data key.
*/
/// </summary>
@property NSString* Value; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API must be enabled for use as an option in the game manager website. It is disabled by default.
*/
/// </summary>
@interface ClientStartGameRequest : PlayFabBaseModel


/// <summary>
/*
/// version information for the build of the game server which is to be started
*/
/// </summary>
@property NSString* BuildVersion; 

/// <summary>
/*
/// character to use for stats based matching. Leave null to use account stats
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// custom command line argument when starting game server process
*/
/// </summary>
@property NSString* CustomCommandLineData; 

/// <summary>
/*
/// the title-defined game mode this server is to be running (defaults to 0 if there is only one mode)
*/
/// </summary>
@property NSString* GameMode; 

/// <summary>
/*
/// the region to associate this server with for match filtering
*/
/// </summary>
@property ClientRegion pfRegion; 

/// <summary>
/*
/// player statistic for others to use in finding this game. May be null for no stat-based matching
*/
/// </summary>
@property NSString* StatisticName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientStartGameResult : PlayFabBaseModel


/// <summary>
/*
/// timestamp for when the server should expire, if applicable
*/
/// </summary>
@property NSString* Expires; 

/// <summary>
/*
/// unique identifier for the lobby of the server started
*/
/// </summary>
@property NSString* LobbyID; 

/// <summary>
/*
/// password required to log into the server
*/
/// </summary>
@property NSString* Password; 

/// <summary>
/*
/// server IPV4 address
*/
/// </summary>
@property NSString* ServerIPV4Address; 

/// <summary>
/*
/// server IPV6 address
*/
/// </summary>
@property NSString* ServerIPV6Address; 

/// <summary>
/*
/// port on the server to be used for communication
*/
/// </summary>
@property NSNumber* ServerPort; 

/// <summary>
/*
/// server public DNS name
*/
/// </summary>
@property NSString* ServerPublicDNSName; 

/// <summary>
/*
/// unique identifier for the server
*/
/// </summary>
@property NSString* Ticket; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This is the first step in the purchasing process. For security purposes, once the order (or "cart") has been created, additional inventory objects may no longer be added. In addition, inventory objects will be locked to the current prices, regardless of any subsequent changes at the catalog level which may occur during the next two steps.
*/
/// </summary>
@interface ClientStartPurchaseRequest : PlayFabBaseModel


/// <summary>
/*
/// Catalog version for the items to be purchased. Defaults to most recent catalog.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Array of items to purchase.
*/
/// </summary>
@property NSArray* Items; 

/// <summary>
/*
/// Store through which to purchase items. If not set, prices will be pulled from the catalog itself.
*/
/// </summary>
@property NSString* StoreId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientStartPurchaseResult : PlayFabBaseModel


/// <summary>
/*
/// Cart items to be purchased.
*/
/// </summary>
@property NSArray* Contents; 

/// <summary>
/*
/// Purchase order identifier.
*/
/// </summary>
@property NSString* OrderId; 

/// <summary>
/*
/// Available methods by which the user can pay.
*/
/// </summary>
@property NSArray* PaymentOptions; 

/// <summary>
/*
/// Current virtual currency totals for the user.
*/
/// </summary>
@property NSDictionary* VirtualCurrencyBalances; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientStatisticModel : PlayFabBaseModel


/// <summary>
/*
/// Statistic name
*/
/// </summary>
@property NSString* Name; 

/// <summary>
/*
/// Statistic value
*/
/// </summary>
@property NSNumber* Value; 

/// <summary>
/*
/// Statistic version (0 if not a versioned statistic)
*/
/// </summary>
@property NSNumber* Version; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientStatisticNameVersion : PlayFabBaseModel


/// <summary>
/*
/// unique name of the statistic
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// the version of the statistic to be returned
*/
/// </summary>
@property NSNumber* Version; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientStatisticUpdate : PlayFabBaseModel


/// <summary>
/*
/// unique name of the statistic
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// statistic value for the player
*/
/// </summary>
@property NSNumber* Value; 

/// <summary>
/*
/// for updates to an existing statistic value for a player, the version of the statistic when it was loaded. Null when setting the statistic value for the first time.
*/
/// </summary>
@property NSNumber* Version; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientStatisticValue : PlayFabBaseModel


/// <summary>
/*
/// unique name of the statistic
*/
/// </summary>
@property NSString* StatisticName; 

/// <summary>
/*
/// statistic value for the player
*/
/// </summary>
@property NSNumber* Value; 

/// <summary>
/*
/// for updates to an existing statistic value for a player, the version of the statistic when it was loaded
*/
/// </summary>
@property NSNumber* Version; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientSteamPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Steam identifier.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Unique Steam identifier for a user.
*/
/// </summary>
@property NSString* SteamStringId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// A store entry that list a catalog item at a particular price
*/
/// </summary>
@interface ClientStoreItem : PlayFabBaseModel


/// <summary>
/*
/// Store specific custom data. The data only exists as part of this store; it is not transferred to item instances
*/
/// </summary>
@property NSDictionary* CustomData; 

/// <summary>
/*
/// Intended display position for this item. Note that 0 is the first position
*/
/// </summary>
@property NSNumber* DisplayPosition; 

/// <summary>
/*
/// Unique identifier of the item as it exists in the catalog - note that this must exactly match the ItemId from the catalog
*/
/// </summary>
@property NSString* ItemId; 

/// <summary>
/*
/// Override prices for this item for specific currencies
*/
/// </summary>
@property NSDictionary* RealCurrencyPrices; 

/// <summary>
/*
/// Override prices for this item in virtual currencies and "RM" (the base Real Money purchase price, in USD pennies)
*/
/// </summary>
@property NSDictionary* VirtualCurrencyPrices; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Marketing data about a specific store
*/
/// </summary>
@interface ClientStoreMarketingModel : PlayFabBaseModel


/// <summary>
/*
/// Tagline for a store.
*/
/// </summary>
@property NSString* Description; 

/// <summary>
/*
/// Display name of a store as it will appear to users.
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// Custom data about a store.
*/
/// </summary>
@property NSDictionary* Metadata; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientSubscriptionModel : PlayFabBaseModel


/// <summary>
/*
/// When this subscription expires.
*/
/// </summary>
@property NSDate* Expiration; 

/// <summary>
/*
/// The time the subscription was orignially purchased
*/
/// </summary>
@property NSDate* InitialSubscriptionTime; 

/// <summary>
/*
/// Whether this subscription is currently active. That is, if Expiration > now.
*/
/// </summary>
@property bool IsActive; 

/// <summary>
/*
/// The status of this subscription, according to the subscription provider.
*/
/// </summary>
@property ClientSubscriptionProviderStatus Status; 

/// <summary>
/*
/// The id for this subscription
*/
/// </summary>
@property NSString* SubscriptionId; 

/// <summary>
/*
/// The item id for this subscription from the primary catalog
*/
/// </summary>
@property NSString* SubscriptionItemId; 

/// <summary>
/*
/// The provider for this subscription. Apple or Google Play are supported today.
*/
/// </summary>
@property NSString* SubscriptionProvider; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API must be enabled for use as an option in the game manager website. It is disabled by default.
*/
/// </summary>
@interface ClientSubtractUserVirtualCurrencyRequest : PlayFabBaseModel


/// <summary>
/*
/// Amount to be subtracted from the user balance of the specified virtual currency.
*/
/// </summary>
@property NSNumber* Amount; 

/// <summary>
/*
/// Name of the virtual currency which is to be decremented.
*/
/// </summary>
@property NSString* VirtualCurrency; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientTagModel : PlayFabBaseModel


/// <summary>
/*
/// Full value of the tag, including namespace
*/
/// </summary>
@property NSString* TagValue; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientTitleNewsItem : PlayFabBaseModel


/// <summary>
/*
/// News item text.
*/
/// </summary>
@property NSString* Body; 

/// <summary>
/*
/// Unique identifier of news item.
*/
/// </summary>
@property NSString* NewsId; 

/// <summary>
/*
/// Date and time when the news item was posted.
*/
/// </summary>
@property NSDate* Timestamp; 

/// <summary>
/*
/// Title of the news item.
*/
/// </summary>
@property NSString* Title; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientTradeInfo : PlayFabBaseModel


/// <summary>
/*
/// Item instances from the accepting player that are used to fulfill the trade. If null, no one has accepted the trade.
*/
/// </summary>
@property NSArray* AcceptedInventoryInstanceIds; 

/// <summary>
/*
/// The PlayFab ID of the player who accepted the trade. If null, no one has accepted the trade.
*/
/// </summary>
@property NSString* AcceptedPlayerId; 

/// <summary>
/*
/// An optional list of players allowed to complete this trade. If null, anybody can complete the trade.
*/
/// </summary>
@property NSArray* AllowedPlayerIds; 

/// <summary>
/*
/// If set, The UTC time when this trade was canceled.
*/
/// </summary>
@property NSDate* CancelledAt; 

/// <summary>
/*
/// If set, The UTC time when this trade was fulfilled.
*/
/// </summary>
@property NSDate* FilledAt; 

/// <summary>
/*
/// If set, The UTC time when this trade was made invalid.
*/
/// </summary>
@property NSDate* InvalidatedAt; 

/// <summary>
/*
/// The catalogItem Ids of the item instances being offered.
*/
/// </summary>
@property NSArray* OfferedCatalogItemIds; 

/// <summary>
/*
/// The itemInstance Ids that are being offered.
*/
/// </summary>
@property NSArray* OfferedInventoryInstanceIds; 

/// <summary>
/*
/// The PlayFabId for the offering player.
*/
/// </summary>
@property NSString* OfferingPlayerId; 

/// <summary>
/*
/// The UTC time when this trade was created.
*/
/// </summary>
@property NSDate* OpenedAt; 

/// <summary>
/*
/// The catalogItem Ids requested in exchange.
*/
/// </summary>
@property NSArray* RequestedCatalogItemIds; 

/// <summary>
/*
/// Describes the current state of this trade.
*/
/// </summary>
@property ClientTradeStatus Status; 

/// <summary>
/*
/// The identifier for this trade.
*/
/// </summary>
@property NSString* TradeId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientTwitchPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Twitch identifier.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Unique Twitch identifier for a user.
*/
/// </summary>
@property NSString* TwitchId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUninkOpenIdConnectRequest : PlayFabBaseModel


/// <summary>
/*
/// A name that identifies which configured OpenID Connect provider relationship to use. Maximum 100 characters.
*/
/// </summary>
@property NSString* ConnectionId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkAndroidDeviceIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Android device identifier for the user's device. If not specified, the most recently signed in Android Device ID will be used.
*/
/// </summary>
@property NSString* AndroidDeviceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkAndroidDeviceIDResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkCustomIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Custom unique identifier for the user, generated by the title. If not specified, the most recently signed in Custom ID will be used.
*/
/// </summary>
@property NSString* CustomId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkCustomIDResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkFacebookAccountRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkFacebookAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkFacebookInstantGamesIdRequest : PlayFabBaseModel


/// <summary>
/*
/// Facebook Instant Games identifier for the user. If not specified, the most recently signed in ID will be used.
*/
/// </summary>
@property NSString* FacebookInstantGamesId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkFacebookInstantGamesIdResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkGameCenterAccountRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkGameCenterAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkGoogleAccountRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkGoogleAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkIOSDeviceIDRequest : PlayFabBaseModel


/// <summary>
/*
/// Vendor-specific iOS identifier for the user's device. If not specified, the most recently signed in iOS Device ID will be used.
*/
/// </summary>
@property NSString* DeviceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkIOSDeviceIDResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkKongregateAccountRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkKongregateAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkNintendoSwitchDeviceIdRequest : PlayFabBaseModel


/// <summary>
/*
/// Nintendo Switch Device identifier for the user. If not specified, the most recently signed in device ID will be used.
*/
/// </summary>
@property NSString* NintendoSwitchDeviceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkNintendoSwitchDeviceIdResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkPSNAccountRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkPSNAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkSteamAccountRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkSteamAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkTwitchAccountRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkTwitchAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Must include the Public Key Hint
*/
/// </summary>
@interface ClientUnlinkWindowsHelloAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// SHA256 hash of the PublicKey generated by Windows Hello.
*/
/// </summary>
@property NSString* PublicKeyHint; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkWindowsHelloAccountResponse : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkXboxAccountRequest : PlayFabBaseModel


/// <summary>
/*
/// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com", "").
*/
/// </summary>
@property NSString* XboxToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUnlinkXboxAccountResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Specify the container and optionally the catalogVersion for the container to open
*/
/// </summary>
@interface ClientUnlockContainerInstanceRequest : PlayFabBaseModel


/// <summary>
/*
/// Specifies the catalog version that should be used to determine container contents. If unspecified, uses catalog associated with the item instance.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// ItemInstanceId of the container to unlock.
*/
/// </summary>
@property NSString* ContainerItemInstanceId; 

/// <summary>
/*
/// ItemInstanceId of the key that will be consumed by unlocking this container. If the container requires a key, this parameter is required.
*/
/// </summary>
@property NSString* KeyItemInstanceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Specify the type of container to open and optionally the catalogVersion for the container to open
*/
/// </summary>
@interface ClientUnlockContainerItemRequest : PlayFabBaseModel


/// <summary>
/*
/// Specifies the catalog version that should be used to determine container contents. If unspecified, uses default/primary catalog.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Catalog ItemId of the container type to unlock.
*/
/// </summary>
@property NSString* ContainerItemId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The items and vc found within the container. These will be added and stacked in the appropriate inventory.
*/
/// </summary>
@interface ClientUnlockContainerItemResult : PlayFabBaseModel


/// <summary>
/*
/// Items granted to the player as a result of unlocking the container.
*/
/// </summary>
@property NSArray* GrantedItems; 

/// <summary>
/*
/// Unique instance identifier of the container unlocked.
*/
/// </summary>
@property NSString* UnlockedItemInstanceId; 

/// <summary>
/*
/// Unique instance identifier of the key used to unlock the container, if applicable.
*/
/// </summary>
@property NSString* UnlockedWithItemInstanceId; 

/// <summary>
/*
/// Virtual currency granted to the player as a result of unlocking the container.
*/
/// </summary>
@property NSDictionary* VirtualCurrency; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUpdateAvatarUrlRequest : PlayFabBaseModel


/// <summary>
/*
/// URL of the avatar image. If empty, it removes the existing avatar URL.
*/
/// </summary>
@property NSString* ImageUrl; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This function performs an additive update of the arbitrary strings containing the custom data for the character. In updating the custom data object, keys which already exist in the object will have their values overwritten, while keys with null values will be removed. New keys will be added, with the given values. No other key-value pairs will be changed apart from those specified in the call.
*/
/// </summary>
@interface ClientUpdateCharacterDataRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace, are limited in size, and may not begin with a '!' character or be null.
*/
/// </summary>
@property NSDictionary* Data; 

/// <summary>
/*
/// Optional list of Data-keys to remove from UserData. Some SDKs cannot insert null-values into Data due to language constraints. Use this to delete the keys directly.
*/
/// </summary>
@property NSArray* KeysToRemove; 

/// <summary>
/*
/// Permission to be applied to all user data keys written in this request. Defaults to "private" if not set.
*/
/// </summary>
@property ClientUserDataPermission Permission; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUpdateCharacterDataResult : PlayFabBaseModel


/// <summary>
/*
/// Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data.
*/
/// </summary>
@property NSNumber* DataVersion; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Enable this option with the 'Allow Client to Post Player Statistics' option in PlayFab GameManager for your title. However, this is not best practice, as this data will no longer be safely controlled by the server. This operation is additive. Character Statistics not currently defined will be added, while those already defined will be updated with the given values. All other user statistics will remain unchanged. Character statistics are used by the character-leaderboard apis, and accessible for custom game-logic.
*/
/// </summary>
@interface ClientUpdateCharacterStatisticsRequest : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// Statistics to be updated with the provided values, in the Key(string), Value(int) pattern.
*/
/// </summary>
@property NSDictionary* CharacterStatistics; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUpdateCharacterStatisticsResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Enable this option with the 'Allow Client to Post Player Statistics' option in PlayFab GameManager for your title. However, this is not best practice, as this data will no longer be safely controlled by the server. This operation is additive. Statistics not currently defined will be added, while those already defined will be updated with the given values. All other user statistics will remain unchanged. Note that if the statistic is intended to have a reset period, the UpdatePlayerStatisticDefinition API call can be used to define that reset period. Once a statistic has been versioned (reset), the now-previous version can still be written to for up a short, pre-defined period (currently 10 seconds), using the Version parameter in this call.
*/
/// </summary>
@interface ClientUpdatePlayerStatisticsRequest : PlayFabBaseModel


/// <summary>
/*
/// Statistics to be updated with the provided values
*/
/// </summary>
@property NSArray* Statistics; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUpdatePlayerStatisticsResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Note that in the case of multiple calls to write to the same shared group data keys, the last write received by the PlayFab service will determine the value available to subsequent read operations. For scenarios requiring coordination of data updates, it is recommended that titles make use of user data with read permission set to public, or a combination of user data and shared group data.
*/
/// </summary>
@interface ClientUpdateSharedGroupDataRequest : PlayFabBaseModel


/// <summary>
/*
/// Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace, are limited in size, and may not begin with a '!' character or be null.
*/
/// </summary>
@property NSDictionary* Data; 

/// <summary>
/*
/// Optional list of Data-keys to remove from UserData. Some SDKs cannot insert null-values into Data due to language constraints. Use this to delete the keys directly.
*/
/// </summary>
@property NSArray* KeysToRemove; 

/// <summary>
/*
/// Permission to be applied to all user data keys in this request.
*/
/// </summary>
@property ClientUserDataPermission Permission; 

/// <summary>
/*
/// Unique identifier for the shared group.
*/
/// </summary>
@property NSString* SharedGroupId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUpdateSharedGroupDataResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This function performs an additive update of the arbitrary strings containing the custom data for the user. In updating the custom data object, keys which already exist in the object will have their values overwritten, while keys with null values will be removed. New keys will be added, with the given values. No other key-value pairs will be changed apart from those specified in the call.
*/
/// </summary>
@interface ClientUpdateUserDataRequest : PlayFabBaseModel


/// <summary>
/*
/// Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace, are limited in size, and may not begin with a '!' character or be null.
*/
/// </summary>
@property NSDictionary* Data; 

/// <summary>
/*
/// Optional list of Data-keys to remove from UserData. Some SDKs cannot insert null-values into Data due to language constraints. Use this to delete the keys directly.
*/
/// </summary>
@property NSArray* KeysToRemove; 

/// <summary>
/*
/// Permission to be applied to all user data keys written in this request. Defaults to "private" if not set. This is used for requests by one player for information about another player; those requests will only return Public keys.
*/
/// </summary>
@property ClientUserDataPermission Permission; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUpdateUserDataResult : PlayFabBaseModel


/// <summary>
/*
/// Indicates the current version of the data that has been set. This is incremented with every set call for that type of data (read-only, internal, etc). This version can be provided in Get calls to find updated data.
*/
/// </summary>
@property NSNumber* DataVersion; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// In addition to the PlayFab username, titles can make use of a DisplayName which is also a unique identifier, but specific to the title. This allows for unique names which more closely match the theme or genre of a title, for example.
*/
/// </summary>
@interface ClientUpdateUserTitleDisplayNameRequest : PlayFabBaseModel


/// <summary>
/*
/// New title display name for the user - must be between 3 and 25 characters.
*/
/// </summary>
@property NSString* DisplayName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUpdateUserTitleDisplayNameResult : PlayFabBaseModel


/// <summary>
/*
/// Current title display name for the user (this will be the original display name if the rename attempt failed).
*/
/// </summary>
@property NSString* DisplayName; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserAccountInfo : PlayFabBaseModel


/// <summary>
/*
/// User Android device information, if an Android device has been linked
*/
/// </summary>
@property ClientUserAndroidDeviceInfo* AndroidDeviceInfo; 

/// <summary>
/*
/// Timestamp indicating when the user account was created
*/
/// </summary>
@property NSDate* Created; 

/// <summary>
/*
/// Custom ID information, if a custom ID has been assigned
*/
/// </summary>
@property ClientUserCustomIdInfo* CustomIdInfo; 

/// <summary>
/*
/// User Facebook information, if a Facebook account has been linked
*/
/// </summary>
@property ClientUserFacebookInfo* FacebookInfo; 

/// <summary>
/*
/// Facebook Instant Games account information, if a Facebook Instant Games account has been linked
*/
/// </summary>
@property ClientUserFacebookInstantGamesIdInfo* FacebookInstantGamesIdInfo; 

/// <summary>
/*
/// User Gamecenter information, if a Gamecenter account has been linked
*/
/// </summary>
@property ClientUserGameCenterInfo* GameCenterInfo; 

/// <summary>
/*
/// User Google account information, if a Google account has been linked
*/
/// </summary>
@property ClientUserGoogleInfo* GoogleInfo; 

/// <summary>
/*
/// User iOS device information, if an iOS device has been linked
*/
/// </summary>
@property ClientUserIosDeviceInfo* IosDeviceInfo; 

/// <summary>
/*
/// User Kongregate account information, if a Kongregate account has been linked
*/
/// </summary>
@property ClientUserKongregateInfo* KongregateInfo; 

/// <summary>
/*
/// Nintendo Switch account information, if a Nintendo Switch account has been linked
*/
/// </summary>
@property ClientUserNintendoSwitchDeviceIdInfo* NintendoSwitchDeviceIdInfo; 

/// <summary>
/*
/// OpenID Connect information, if any OpenID Connect accounts have been linked
*/
/// </summary>
@property NSArray* OpenIdInfo; 

/// <summary>
/*
/// Unique identifier for the user account
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Personal information for the user which is considered more sensitive
*/
/// </summary>
@property ClientUserPrivateAccountInfo* PrivateInfo; 

/// <summary>
/*
/// User PSN account information, if a PSN account has been linked
*/
/// </summary>
@property ClientUserPsnInfo* PsnInfo; 

/// <summary>
/*
/// User Steam information, if a Steam account has been linked
*/
/// </summary>
@property ClientUserSteamInfo* SteamInfo; 

/// <summary>
/*
/// Title-specific information for the user account
*/
/// </summary>
@property ClientUserTitleInfo* TitleInfo; 

/// <summary>
/*
/// User Twitch account information, if a Twitch account has been linked
*/
/// </summary>
@property ClientUserTwitchInfo* TwitchInfo; 

/// <summary>
/*
/// User account name in the PlayFab service
*/
/// </summary>
@property NSString* Username; 

/// <summary>
/*
/// Windows Hello account information, if a Windows Hello account has been linked
*/
/// </summary>
@property ClientUserWindowsHelloInfo* WindowsHelloInfo; 

/// <summary>
/*
/// User XBox account information, if a XBox account has been linked
*/
/// </summary>
@property ClientUserXboxInfo* XboxInfo; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserAndroidDeviceInfo : PlayFabBaseModel


/// <summary>
/*
/// Android device ID
*/
/// </summary>
@property NSString* AndroidDeviceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserCustomIdInfo : PlayFabBaseModel


/// <summary>
/*
/// Custom ID
*/
/// </summary>
@property NSString* CustomId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserDataRecord : PlayFabBaseModel


/// <summary>
/*
/// Timestamp for when this data was last updated.
*/
/// </summary>
@property NSDate* LastUpdated; 

/// <summary>
/*
/// Indicates whether this data can be read by all users (public) or only the user (private). This is used for GetUserData requests being made by one player about another player.
*/
/// </summary>
@property ClientUserDataPermission Permission; 

/// <summary>
/*
/// Data stored for the specified user data key.
*/
/// </summary>
@property NSString* Value; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserFacebookInfo : PlayFabBaseModel


/// <summary>
/*
/// Facebook identifier
*/
/// </summary>
@property NSString* FacebookId; 

/// <summary>
/*
/// Facebook full name
*/
/// </summary>
@property NSString* FullName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserFacebookInstantGamesIdInfo : PlayFabBaseModel


/// <summary>
/*
/// Facebook Instant Games ID
*/
/// </summary>
@property NSString* FacebookInstantGamesId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserGameCenterInfo : PlayFabBaseModel


/// <summary>
/*
/// Gamecenter identifier
*/
/// </summary>
@property NSString* GameCenterId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserGoogleInfo : PlayFabBaseModel


/// <summary>
/*
/// Email address of the Google account
*/
/// </summary>
@property NSString* GoogleEmail; 

/// <summary>
/*
/// Gender information of the Google account
*/
/// </summary>
@property NSString* GoogleGender; 

/// <summary>
/*
/// Google ID
*/
/// </summary>
@property NSString* GoogleId; 

/// <summary>
/*
/// Locale of the Google account
*/
/// </summary>
@property NSString* GoogleLocale; 

/// <summary>
/*
/// Name of the Google account user
*/
/// </summary>
@property NSString* GoogleName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserIosDeviceInfo : PlayFabBaseModel


/// <summary>
/*
/// iOS device ID
*/
/// </summary>
@property NSString* IosDeviceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserKongregateInfo : PlayFabBaseModel


/// <summary>
/*
/// Kongregate ID
*/
/// </summary>
@property NSString* KongregateId; 

/// <summary>
/*
/// Kongregate Username
*/
/// </summary>
@property NSString* KongregateName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserNintendoSwitchDeviceIdInfo : PlayFabBaseModel


/// <summary>
/*
/// Nintendo Switch Device ID
*/
/// </summary>
@property NSString* NintendoSwitchDeviceId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserOpenIdInfo : PlayFabBaseModel


/// <summary>
/*
/// OpenID Connection ID
*/
/// </summary>
@property NSString* ConnectionId; 

/// <summary>
/*
/// OpenID Issuer
*/
/// </summary>
@property NSString* Issuer; 

/// <summary>
/*
/// OpenID Subject
*/
/// </summary>
@property NSString* Subject; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserPrivateAccountInfo : PlayFabBaseModel


/// <summary>
/*
/// user email address
*/
/// </summary>
@property NSString* Email; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserPsnInfo : PlayFabBaseModel


/// <summary>
/*
/// PSN account ID
*/
/// </summary>
@property NSString* PsnAccountId; 

/// <summary>
/*
/// PSN online ID
*/
/// </summary>
@property NSString* PsnOnlineId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserSettings : PlayFabBaseModel


/// <summary>
/*
/// Boolean for whether this player is eligible for gathering device info.
*/
/// </summary>
@property bool GatherDeviceInfo; 

/// <summary>
/*
/// Boolean for whether this player should report OnFocus play-time tracking.
*/
/// </summary>
@property bool GatherFocusInfo; 

/// <summary>
/*
/// Boolean for whether this player is eligible for ad tracking.
*/
/// </summary>
@property bool NeedsAttribution; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserSteamInfo : PlayFabBaseModel


/// <summary>
/*
/// what stage of game ownership the user is listed as being in, from Steam
*/
/// </summary>
@property ClientTitleActivationStatus SteamActivationStatus; 

/// <summary>
/*
/// the country in which the player resides, from Steam data
*/
/// </summary>
@property NSString* SteamCountry; 

/// <summary>
/*
/// currency type set in the user Steam account
*/
/// </summary>
@property ClientCurrency SteamCurrency; 

/// <summary>
/*
/// Steam identifier
*/
/// </summary>
@property NSString* SteamId; 

/// <summary>
/*
/// Steam display name
*/
/// </summary>
@property NSString* SteamName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserTitleInfo : PlayFabBaseModel


/// <summary>
/*
/// URL to the player's avatar.
*/
/// </summary>
@property NSString* AvatarUrl; 

/// <summary>
/*
/// timestamp indicating when the user was first associated with this game (this can differ significantly from when the user first registered with PlayFab)
*/
/// </summary>
@property NSDate* Created; 

/// <summary>
/*
/// name of the user, as it is displayed in-game
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// timestamp indicating when the user first signed into this game (this can differ from the Created timestamp, as other events, such as issuing a beta key to the user, can associate the title to the user)
*/
/// </summary>
@property NSDate* FirstLogin; 

/// <summary>
/*
/// boolean indicating whether or not the user is currently banned for a title
*/
/// </summary>
@property bool isBanned; 

/// <summary>
/*
/// timestamp for the last user login for this title
*/
/// </summary>
@property NSDate* LastLogin; 

/// <summary>
/*
/// source by which the user first joined the game, if known
*/
/// </summary>
@property ClientUserOrigination Origination; 

/// <summary>
/*
/// Title player account entity for this user
*/
/// </summary>
@property ClientEntityKey* TitlePlayerAccount; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserTwitchInfo : PlayFabBaseModel


/// <summary>
/*
/// Twitch ID
*/
/// </summary>
@property NSString* TwitchId; 

/// <summary>
/*
/// Twitch Username
*/
/// </summary>
@property NSString* TwitchUserName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserWindowsHelloInfo : PlayFabBaseModel


/// <summary>
/*
/// Windows Hello Device Name
*/
/// </summary>
@property NSString* WindowsHelloDeviceName; 

/// <summary>
/*
/// Windows Hello Public Key Hash
*/
/// </summary>
@property NSString* WindowsHelloPublicKeyHash; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientUserXboxInfo : PlayFabBaseModel


/// <summary>
/*
/// XBox user ID
*/
/// </summary>
@property NSString* XboxUserId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientValidateAmazonReceiptRequest : PlayFabBaseModel


/// <summary>
/*
/// Catalog version to use when granting receipt item. If null, defaults to primary catalog.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Currency used for the purchase.
*/
/// </summary>
@property NSString* CurrencyCode; 

/// <summary>
/*
/// Amount of the stated currency paid for the object.
*/
/// </summary>
@property NSNumber* PurchasePrice; 

/// <summary>
/*
/// ReceiptId returned by the Amazon App Store in-app purchase API
*/
/// </summary>
@property NSString* ReceiptId; 

/// <summary>
/*
/// AmazonId of the user making the purchase as returned by the Amazon App Store in-app purchase API
*/
/// </summary>
@property NSString* UserId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Once verified, the catalog item matching the Amazon item name will be added to the user's inventory.
*/
/// </summary>
@interface ClientValidateAmazonReceiptResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The packageName and productId are defined in the GooglePlay store. The productId must match the ItemId of the inventory item in the PlayFab catalog for the title. This enables the PlayFab service to securely validate that the purchase is for the correct item, in order to prevent uses from passing valid receipts as being for more expensive items (passing a receipt for a 99-cent purchase as being for a $19.99 purchase, for example). Each receipt may be validated only once to avoid granting the same item over and over from a single purchase.
*/
/// </summary>
@interface ClientValidateGooglePlayPurchaseRequest : PlayFabBaseModel


/// <summary>
/*
/// Currency used for the purchase.
*/
/// </summary>
@property NSString* CurrencyCode; 

/// <summary>
/*
/// Amount of the stated currency paid for the object.
*/
/// </summary>
@property NSNumber* PurchasePrice; 

/// <summary>
/*
/// Original JSON string returned by the Google Play IAB API.
*/
/// </summary>
@property NSString* ReceiptJson; 

/// <summary>
/*
/// Signature returned by the Google Play IAB API.
*/
/// </summary>
@property NSString* Signature; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Once verified, the catalog item (ItemId) matching the GooglePlay store item (productId) will be added to the user's inventory.
*/
/// </summary>
@interface ClientValidateGooglePlayPurchaseResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The CurrencyCode and PurchasePrice must match the price which was set up for the item in the Apple store. In addition, The ItemId of the inventory in the PlayFab Catalog must match the Product ID as it was set up in the Apple store. This enables the PlayFab service to securely validate that the purchase is for the correct item, in order to prevent uses from passing valid receipts as being for more expensive items (passing a receipt for a 99-cent purchase as being for a $19.99 purchase, for example).
*/
/// </summary>
@interface ClientValidateIOSReceiptRequest : PlayFabBaseModel


/// <summary>
/*
/// Currency used for the purchase.
*/
/// </summary>
@property NSString* CurrencyCode; 

/// <summary>
/*
/// Amount of the stated currency paid for the object.
*/
/// </summary>
@property NSNumber* PurchasePrice; 

/// <summary>
/*
/// Base64 encoded receipt data, passed back by the App Store as a result of a successful purchase.
*/
/// </summary>
@property NSString* ReceiptData; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Once verified, the catalog item matching the iTunes item name will be added to the user's inventory.
*/
/// </summary>
@interface ClientValidateIOSReceiptResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientValidateWindowsReceiptRequest : PlayFabBaseModel


/// <summary>
/*
/// Catalog version to use when granting receipt item. If null, defaults to primary catalog.
*/
/// </summary>
@property NSString* CatalogVersion; 

/// <summary>
/*
/// Currency used for the purchase.
*/
/// </summary>
@property NSString* CurrencyCode; 

/// <summary>
/*
/// Amount of the stated currency paid for the object.
*/
/// </summary>
@property NSNumber* PurchasePrice; 

/// <summary>
/*
/// XML Receipt returned by the Windows App Store in-app purchase API
*/
/// </summary>
@property NSString* Receipt; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Once verified, the catalog item matching the Product name will be added to the user's inventory.
*/
/// </summary>
@interface ClientValidateWindowsReceiptResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientValueToDateModel : PlayFabBaseModel


/// <summary>
/*
/// ISO 4217 code of the currency used in the purchases
*/
/// </summary>
@property NSString* Currency; 

/// <summary>
/*
/// Total value of the purchases in a whole number of 1/100 monetary units. For example, 999 indicates nine dollars and ninety-nine cents when Currency is 'USD')
*/
/// </summary>
@property NSNumber* TotalValue; 

/// <summary>
/*
/// Total value of the purchases in a string representation of decimal monetary units. For example, '9.99' indicates nine dollars and ninety-nine cents when Currency is 'USD'.
*/
/// </summary>
@property NSString* TotalValueAsDecimal; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientVirtualCurrencyRechargeTime : PlayFabBaseModel


/// <summary>
/*
/// Maximum value to which the regenerating currency will automatically increment. Note that it can exceed this value through use of the AddUserVirtualCurrency API call. However, it will not regenerate automatically until it has fallen below this value.
*/
/// </summary>
@property NSNumber* RechargeMax; 

/// <summary>
/*
/// Server timestamp in UTC indicating the next time the virtual currency will be incremented.
*/
/// </summary>
@property NSDate* RechargeTime; 

/// <summary>
/*
/// Time remaining (in seconds) before the next recharge increment of the virtual currency.
*/
/// </summary>
@property NSNumber* SecondsToRecharge; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API is designed to write a multitude of different client-defined events into PlayStream. It supports a flexible JSON schema, which allowsfor arbitrary key-value pairs to describe any character-based event. The created event will be locked to the authenticated title and player. 
*/
/// </summary>
@interface ClientWriteClientCharacterEventRequest : PlayFabBaseModel


/// <summary>
/*
/// Custom event properties. Each property consists of a name (string) and a value (JSON object).
*/
/// </summary>
@property NSDictionary* Body; 

/// <summary>
/*
/// Unique PlayFab assigned ID for a specific character owned by a user
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// The name of the event, within the namespace scoped to the title. The naming convention is up to the caller, but it commonly follows the subject_verb_object pattern (e.g. player_logged_in).
*/
/// </summary>
@property NSString* EventName; 

/// <summary>
/*
/// The time (in UTC) associated with this event. The value dafaults to the current time.
*/
/// </summary>
@property NSDate* Timestamp; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API is designed to write a multitude of different event types into PlayStream. It supports a flexible JSON schema, which allowsfor arbitrary key-value pairs to describe any player-based event. The created event will be locked to the authenticated title and player. 
*/
/// </summary>
@interface ClientWriteClientPlayerEventRequest : PlayFabBaseModel


/// <summary>
/*
/// Custom data properties associated with the event. Each property consists of a name (string) and a value (JSON object).
*/
/// </summary>
@property NSDictionary* Body; 

/// <summary>
/*
/// The name of the event, within the namespace scoped to the title. The naming convention is up to the caller, but it commonly follows the subject_verb_object pattern (e.g. player_logged_in).
*/
/// </summary>
@property NSString* EventName; 

/// <summary>
/*
/// The time (in UTC) associated with this event. The value dafaults to the current time.
*/
/// </summary>
@property NSDate* Timestamp; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientWriteEventResponse : PlayFabBaseModel


/// <summary>
/*
/// The unique identifier of the event. The values of this identifier consist of ASCII characters and are not constrained to any particular format.
*/
/// </summary>
@property NSString* EventId; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This API is designed to write a multitude of different client-defined events into PlayStream. It supports a flexible JSON schema, which allowsfor arbitrary key-value pairs to describe any title-based event. The created event will be locked to the authenticated title. 
*/
/// </summary>
@interface ClientWriteTitleEventRequest : PlayFabBaseModel


/// <summary>
/*
/// Custom event properties. Each property consists of a name (string) and a value (JSON object).
*/
/// </summary>
@property NSDictionary* Body; 

/// <summary>
/*
/// The name of the event, within the namespace scoped to the title. The naming convention is up to the caller, but it commonly follows the subject_verb_object pattern (e.g. player_logged_in).
*/
/// </summary>
@property NSString* EventName; 

/// <summary>
/*
/// The time (in UTC) associated with this event. The value dafaults to the current time.
*/
/// </summary>
@property NSDate* Timestamp; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ClientXboxLiveAccountPlayFabIdPair : PlayFabBaseModel


/// <summary>
/*
/// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Xbox Live identifier.
*/
/// </summary>
@property NSString* PlayFabId; 

/// <summary>
/*
/// Unique Xbox Live identifier for a user.
*/
/// </summary>
@property NSString* XboxLiveAccountId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end

@interface NSDictionary (BVJSONString)
-(NSString*) convertToNSString;
@end

@interface NSArray (BVJSONString)
-(NSString*) convertToNSString;
@end
