#import <Foundation/Foundation.h>
#import "PlayFabBaseModel.h"


typedef enum
{
    MultiplayerAzureRegionAustraliaEast,
    MultiplayerAzureRegionAustraliaSoutheast,
    MultiplayerAzureRegionBrazilSouth,
    MultiplayerAzureRegionCentralUs,
    MultiplayerAzureRegionEastAsia,
    MultiplayerAzureRegionEastUs,
    MultiplayerAzureRegionEastUs2,
    MultiplayerAzureRegionJapanEast,
    MultiplayerAzureRegionJapanWest,
    MultiplayerAzureRegionNorthCentralUs,
    MultiplayerAzureRegionNorthEurope,
    MultiplayerAzureRegionSouthCentralUs,
    MultiplayerAzureRegionSoutheastAsia,
    MultiplayerAzureRegionWestEurope,
    MultiplayerAzureRegionWestUs,
    MultiplayerAzureRegionChinaEast2,
    MultiplayerAzureRegionChinaNorth2,
    MultiplayerAzureRegionSouthAfricaNorth
} MultiplayerAzureRegion;

typedef enum
{
    MultiplayerAzureVmFamilyA,
    MultiplayerAzureVmFamilyAv2,
    MultiplayerAzureVmFamilyDv2,
    MultiplayerAzureVmFamilyF,
    MultiplayerAzureVmFamilyFsv2
} MultiplayerAzureVmFamily;

typedef enum
{
    MultiplayerAzureVmSizeStandard_D1_v2,
    MultiplayerAzureVmSizeStandard_D2_v2,
    MultiplayerAzureVmSizeStandard_D3_v2,
    MultiplayerAzureVmSizeStandard_D4_v2,
    MultiplayerAzureVmSizeStandard_D5_v2,
    MultiplayerAzureVmSizeStandard_A1_v2,
    MultiplayerAzureVmSizeStandard_A2_v2,
    MultiplayerAzureVmSizeStandard_A4_v2,
    MultiplayerAzureVmSizeStandard_A8_v2,
    MultiplayerAzureVmSizeStandard_F1,
    MultiplayerAzureVmSizeStandard_F2,
    MultiplayerAzureVmSizeStandard_F4,
    MultiplayerAzureVmSizeStandard_F8,
    MultiplayerAzureVmSizeStandard_F16,
    MultiplayerAzureVmSizeStandard_F2s_v2,
    MultiplayerAzureVmSizeStandard_F4s_v2,
    MultiplayerAzureVmSizeStandard_F8s_v2,
    MultiplayerAzureVmSizeStandard_F16s_v2,
    MultiplayerAzureVmSizeStandard_A1,
    MultiplayerAzureVmSizeStandard_A2,
    MultiplayerAzureVmSizeStandard_A3,
    MultiplayerAzureVmSizeStandard_A4
} MultiplayerAzureVmSize;

typedef enum
{
    MultiplayerCancellationReasonRequested,
    MultiplayerCancellationReasonInternal,
    MultiplayerCancellationReasonTimeout
} MultiplayerCancellationReason;

typedef enum
{
    MultiplayerContainerFlavorManagedWindowsServerCore,
    MultiplayerContainerFlavorCustomLinux,
    MultiplayerContainerFlavorManagedWindowsServerCorePreview
} MultiplayerContainerFlavor;

typedef enum
{
    MultiplayerProtocolTypeTCP,
    MultiplayerProtocolTypeUDP
} MultiplayerProtocolType;

typedef enum
{
    MultiplayerTitleMultiplayerServerEnabledStatusInitializing,
    MultiplayerTitleMultiplayerServerEnabledStatusEnabled,
    MultiplayerTitleMultiplayerServerEnabledStatusDisabled
} MultiplayerTitleMultiplayerServerEnabledStatus;

//predeclare all non-enum classes

@class MultiplayerAssetReference;

@class MultiplayerAssetReferenceParams;

@class MultiplayerAssetSummary;

@class MultiplayerBuildRegion;

@class MultiplayerBuildRegionParams;

@class MultiplayerBuildSummary;

@class MultiplayerCancelAllMatchmakingTicketsForPlayerRequest;

@class MultiplayerCancelAllMatchmakingTicketsForPlayerResult;

@class MultiplayerCancelMatchmakingTicketRequest;

@class MultiplayerCancelMatchmakingTicketResult;

@class MultiplayerCertificate;

@class MultiplayerCertificateSummary;

@class MultiplayerConnectedPlayer;

@class MultiplayerContainerImageReference;

@class MultiplayerCoreCapacity;

@class MultiplayerCreateBuildWithCustomContainerRequest;

@class MultiplayerCreateBuildWithCustomContainerResponse;

@class MultiplayerCreateBuildWithManagedContainerRequest;

@class MultiplayerCreateBuildWithManagedContainerResponse;

@class MultiplayerCreateMatchmakingTicketRequest;

@class MultiplayerCreateMatchmakingTicketResult;

@class MultiplayerCreateRemoteUserRequest;

@class MultiplayerCreateRemoteUserResponse;

@class MultiplayerCreateServerMatchmakingTicketRequest;

@class MultiplayerCurrentServerStats;

@class MultiplayerDeleteAssetRequest;

@class MultiplayerDeleteBuildRequest;

@class MultiplayerDeleteCertificateRequest;

@class MultiplayerDeleteRemoteUserRequest;

@class MultiplayerEmptyResponse;

@class MultiplayerEnableMultiplayerServersForTitleRequest;

@class MultiplayerEnableMultiplayerServersForTitleResponse;

@class MultiplayerEntityKey;

@class MultiplayerGameCertificateReference;

@class MultiplayerGameCertificateReferenceParams;

@class MultiplayerGetAssetUploadUrlRequest;

@class MultiplayerGetAssetUploadUrlResponse;

@class MultiplayerGetBuildRequest;

@class MultiplayerGetBuildResponse;

@class MultiplayerGetContainerRegistryCredentialsRequest;

@class MultiplayerGetContainerRegistryCredentialsResponse;

@class MultiplayerGetMatchmakingTicketRequest;

@class MultiplayerGetMatchmakingTicketResult;

@class MultiplayerGetMatchRequest;

@class MultiplayerGetMatchResult;

@class MultiplayerGetMultiplayerServerDetailsRequest;

@class MultiplayerGetMultiplayerServerDetailsResponse;

@class MultiplayerGetQueueStatisticsRequest;

@class MultiplayerGetQueueStatisticsResult;

@class MultiplayerGetRemoteLoginEndpointRequest;

@class MultiplayerGetRemoteLoginEndpointResponse;

@class MultiplayerGetTitleEnabledForMultiplayerServersStatusRequest;

@class MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse;

@class MultiplayerGetTitleMultiplayerServersQuotasRequest;

@class MultiplayerGetTitleMultiplayerServersQuotasResponse;

@class MultiplayerJoinMatchmakingTicketRequest;

@class MultiplayerJoinMatchmakingTicketResult;

@class MultiplayerListAssetSummariesRequest;

@class MultiplayerListAssetSummariesResponse;

@class MultiplayerListBuildSummariesRequest;

@class MultiplayerListBuildSummariesResponse;

@class MultiplayerListCertificateSummariesRequest;

@class MultiplayerListCertificateSummariesResponse;

@class MultiplayerListContainerImagesRequest;

@class MultiplayerListContainerImagesResponse;

@class MultiplayerListContainerImageTagsRequest;

@class MultiplayerListContainerImageTagsResponse;

@class MultiplayerListMatchmakingTicketsForPlayerRequest;

@class MultiplayerListMatchmakingTicketsForPlayerResult;

@class MultiplayerListMultiplayerServersRequest;

@class MultiplayerListMultiplayerServersResponse;

@class MultiplayerListQosServersRequest;

@class MultiplayerListQosServersResponse;

@class MultiplayerListVirtualMachineSummariesRequest;

@class MultiplayerListVirtualMachineSummariesResponse;

@class MultiplayerMatchmakingPlayer;

@class MultiplayerMatchmakingPlayerAttributes;

@class MultiplayerMatchmakingPlayerWithTeamAssignment;

@class MultiplayerMultiplayerServerSummary;

@class MultiplayerPort;

@class MultiplayerQosServer;

@class MultiplayerRequestMultiplayerServerRequest;

@class MultiplayerRequestMultiplayerServerResponse;

@class MultiplayerRolloverContainerRegistryCredentialsRequest;

@class MultiplayerRolloverContainerRegistryCredentialsResponse;

@class MultiplayerServerDetails;

@class MultiplayerShutdownMultiplayerServerRequest;

@class MultiplayerStatistics;

@class MultiplayerTitleMultiplayerServersQuotas;

@class MultiplayerUpdateBuildRegionsRequest;

@class MultiplayerUploadCertificateRequest;

@class MultiplayerVirtualMachineSummary;



@interface MultiplayerAssetReference : PlayFabBaseModel


/// <summary>
/*
/// The asset's file name. This is a filename with the .zip, .tar, or .tar.gz extension.
*/
/// </summary>
@property NSString* FileName; 

/// <summary>
/*
/// The asset's mount path.
*/
/// </summary>
@property NSString* MountPath; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerAssetReferenceParams : PlayFabBaseModel


/// <summary>
/*
/// The asset's file name.
*/
/// </summary>
@property NSString* FileName; 

/// <summary>
/*
/// The asset's mount path.
*/
/// </summary>
@property NSString* MountPath; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerAssetSummary : PlayFabBaseModel


/// <summary>
/*
/// The asset's file name. This is a filename with the .zip, .tar, or .tar.gz extension.
*/
/// </summary>
@property NSString* FileName; 

/// <summary>
/*
/// The metadata associated with the asset.
*/
/// </summary>
@property NSDictionary* Metadata; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerBuildRegion : PlayFabBaseModel


/// <summary>
/*
/// The current multiplayer server stats for the region.
*/
/// </summary>
@property MultiplayerCurrentServerStats* pfCurrentServerStats; 

/// <summary>
/*
/// The maximum number of multiplayer servers for the region.
*/
/// </summary>
@property NSNumber* MaxServers; 

/// <summary>
/*
/// The build region.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The number of standby multiplayer servers for the region.
*/
/// </summary>
@property NSNumber* StandbyServers; 

/// <summary>
/*
/// The status of multiplayer servers in the build region. Valid values are - Unknown, Initialized, Deploying, Deployed, Unhealthy.
*/
/// </summary>
@property NSString* Status; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerBuildRegionParams : PlayFabBaseModel


/// <summary>
/*
/// The maximum number of multiplayer servers for the region.
*/
/// </summary>
@property NSNumber* MaxServers; 

/// <summary>
/*
/// The build region.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The number of standby multiplayer servers for the region.
*/
/// </summary>
@property NSNumber* StandbyServers; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerBuildSummary : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the build.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The build name.
*/
/// </summary>
@property NSString* BuildName; 

/// <summary>
/*
/// The time the build was created in UTC.
*/
/// </summary>
@property NSDate* CreationTime; 

/// <summary>
/*
/// The metadata of the build.
*/
/// </summary>
@property NSDictionary* Metadata; 

/// <summary>
/*
/// The configuration and status for each region in the build.
*/
/// </summary>
@property NSArray* RegionConfigurations; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Cancels all tickets of which the player is a member in a given queue that are not cancelled or matched. This API is useful if you lose track of what tickets the player is a member of (if the title crashes for instance) and want to "reset". The Entity field is optional if the caller is a player and defaults to that player. Players may not cancel tickets for other people. The Entity field is required if the caller is a server (authenticated as the title).
*/
/// </summary>
@interface MultiplayerCancelAllMatchmakingTicketsForPlayerRequest : PlayFabBaseModel


/// <summary>
/*
/// The entity key of the player whose tickets should be canceled.
*/
/// </summary>
@property MultiplayerEntityKey* Entity; 

/// <summary>
/*
/// The name of the queue from which a player's tickets should be canceled.
*/
/// </summary>
@property NSString* QueueName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCancelAllMatchmakingTicketsForPlayerResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Only servers and ticket members can cancel a ticket. The ticket can be in five different states when it is cancelled. 1: the ticket is waiting for members to join it, and it has not started matching. If the ticket is cancelled at this stage, it will never match. 2: the ticket is matching. If the ticket is cancelled, it will stop matching. 3: the ticket is matched. A matched ticket cannot be cancelled. 4: the ticket is already cancelled and nothing happens. 5: the ticket is waiting for a server. If the ticket is cancelled, server allocation will be stopped. A server may still be allocated due to a race condition, but that will not be reflected in the ticket. There may be race conditions between the ticket getting matched and the client making a cancellation request. The client must handle the possibility that the cancel request fails if a match is found before the cancellation request is processed. We do not allow resubmitting a cancelled ticket because players must consent to enter matchmaking again. Create a new ticket instead.
*/
/// </summary>
@interface MultiplayerCancelMatchmakingTicketRequest : PlayFabBaseModel


/// <summary>
/*
/// The name of the queue the ticket is in.
*/
/// </summary>
@property NSString* QueueName; 

/// <summary>
/*
/// The Id of the ticket to find a match for.
*/
/// </summary>
@property NSString* TicketId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCancelMatchmakingTicketResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCertificate : PlayFabBaseModel


/// <summary>
/*
/// Base64 encoded string contents of the certificate.
*/
/// </summary>
@property NSString* Base64EncodedValue; 

/// <summary>
/*
/// A name for the certificate. This is used to reference certificates in build configurations.
*/
/// </summary>
@property NSString* Name; 

/// <summary>
/*
/// If required for your PFX certificate, use this field to provide a password that will be used to install the certificate on the container.
*/
/// </summary>
@property NSString* Password; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCertificateSummary : PlayFabBaseModel


/// <summary>
/*
/// The name of the certificate.
*/
/// </summary>
@property NSString* Name; 

/// <summary>
/*
/// The thumbprint for the certificate.
*/
/// </summary>
@property NSString* Thumbprint; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerConnectedPlayer : PlayFabBaseModel


/// <summary>
/*
/// The player ID of the player connected to the multiplayer server.
*/
/// </summary>
@property NSString* PlayerId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerContainerImageReference : PlayFabBaseModel


/// <summary>
/*
/// The container image name.
*/
/// </summary>
@property NSString* ImageName; 

/// <summary>
/*
/// The container tag.
*/
/// </summary>
@property NSString* Tag; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCoreCapacity : PlayFabBaseModel


/// <summary>
/*
/// The available core capacity for the (Region, VmFamily)
*/
/// </summary>
@property NSNumber* Available; 

/// <summary>
/*
/// The AzureRegion
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The total core capacity for the (Region, VmFamily)
*/
/// </summary>
@property NSNumber* Total; 

/// <summary>
/*
/// The AzureVmFamily
*/
/// </summary>
@property MultiplayerAzureVmFamily VmFamily; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Creates a multiplayer server build with a custom container and returns information about the build creation request.
*/
/// </summary>
@interface MultiplayerCreateBuildWithCustomContainerRequest : PlayFabBaseModel


/// <summary>
/*
/// The build name.
*/
/// </summary>
@property NSString* BuildName; 

/// <summary>
/*
/// The flavor of container to create a build from.
*/
/// </summary>
@property MultiplayerContainerFlavor pfContainerFlavor; 

/// <summary>
/*
/// The container reference, consisting of the image name and tag.
*/
/// </summary>
@property MultiplayerContainerImageReference* pfContainerImageReference; 

/// <summary>
/*
/// The container command to run when the multiplayer server has been allocated, including any arguments.
*/
/// </summary>
@property NSString* ContainerRunCommand; 

/// <summary>
/*
/// The list of game assets related to the build.
*/
/// </summary>
@property NSArray* GameAssetReferences; 

/// <summary>
/*
/// The game certificates for the build.
*/
/// </summary>
@property NSArray* GameCertificateReferences; 

/// <summary>
/*
/// Metadata to tag the build. The keys are case insensitive. The build metadata is made available to the server through Game Server SDK (GSDK).
*/
/// </summary>
@property NSDictionary* Metadata; 

/// <summary>
/*
/// The number of multiplayer servers to host on a single VM.
*/
/// </summary>
@property NSNumber* MultiplayerServerCountPerVm; 

/// <summary>
/*
/// The ports to map the build on.
*/
/// </summary>
@property NSArray* Ports; 

/// <summary>
/*
/// The region configurations for the build.
*/
/// </summary>
@property NSArray* RegionConfigurations; 

/// <summary>
/*
/// The VM size to create the build on.
*/
/// </summary>
@property MultiplayerAzureVmSize VmSize; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCreateBuildWithCustomContainerResponse : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID. Must be unique for every build.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The build name.
*/
/// </summary>
@property NSString* BuildName; 

/// <summary>
/*
/// The flavor of container of the build.
*/
/// </summary>
@property MultiplayerContainerFlavor pfContainerFlavor; 

/// <summary>
/*
/// The container command to run when the multiplayer server has been allocated, including any arguments.
*/
/// </summary>
@property NSString* ContainerRunCommand; 

/// <summary>
/*
/// The time the build was created in UTC.
*/
/// </summary>
@property NSDate* CreationTime; 

/// <summary>
/*
/// The custom game container image reference information.
*/
/// </summary>
@property MultiplayerContainerImageReference* CustomGameContainerImage; 

/// <summary>
/*
/// The game assets for the build.
*/
/// </summary>
@property NSArray* GameAssetReferences; 

/// <summary>
/*
/// The game certificates for the build.
*/
/// </summary>
@property NSArray* GameCertificateReferences; 

/// <summary>
/*
/// The metadata of the build.
*/
/// </summary>
@property NSDictionary* Metadata; 

/// <summary>
/*
/// The number of multiplayer servers to host on a single VM of the build.
*/
/// </summary>
@property NSNumber* MultiplayerServerCountPerVm; 

/// <summary>
/*
/// The ports the build is mapped on.
*/
/// </summary>
@property NSArray* Ports; 

/// <summary>
/*
/// The region configuration for the build.
*/
/// </summary>
@property NSArray* RegionConfigurations; 

/// <summary>
/*
/// The VM size the build was created on.
*/
/// </summary>
@property MultiplayerAzureVmSize VmSize; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Creates a multiplayer server build with a managed container and returns information about the build creation request.
*/
/// </summary>
@interface MultiplayerCreateBuildWithManagedContainerRequest : PlayFabBaseModel


/// <summary>
/*
/// The build name.
*/
/// </summary>
@property NSString* BuildName; 

/// <summary>
/*
/// The flavor of container to create a build from.
*/
/// </summary>
@property MultiplayerContainerFlavor pfContainerFlavor; 

/// <summary>
/*
/// The list of game assets related to the build.
*/
/// </summary>
@property NSArray* GameAssetReferences; 

/// <summary>
/*
/// The game certificates for the build.
*/
/// </summary>
@property NSArray* GameCertificateReferences; 

/// <summary>
/*
/// Metadata to tag the build. The keys are case insensitive. The build metadata is made available to the server through Game Server SDK (GSDK).
*/
/// </summary>
@property NSDictionary* Metadata; 

/// <summary>
/*
/// The number of multiplayer servers to host on a single VM.
*/
/// </summary>
@property NSNumber* MultiplayerServerCountPerVm; 

/// <summary>
/*
/// The ports to map the build on.
*/
/// </summary>
@property NSArray* Ports; 

/// <summary>
/*
/// The region configurations for the build.
*/
/// </summary>
@property NSArray* RegionConfigurations; 

/// <summary>
/*
/// The command to run when the multiplayer server is started, including any arguments.
*/
/// </summary>
@property NSString* StartMultiplayerServerCommand; 

/// <summary>
/*
/// The VM size to create the build on.
*/
/// </summary>
@property MultiplayerAzureVmSize VmSize; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCreateBuildWithManagedContainerResponse : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID. Must be unique for every build.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The build name.
*/
/// </summary>
@property NSString* BuildName; 

/// <summary>
/*
/// The flavor of container of the build.
*/
/// </summary>
@property MultiplayerContainerFlavor pfContainerFlavor; 

/// <summary>
/*
/// The time the build was created in UTC.
*/
/// </summary>
@property NSDate* CreationTime; 

/// <summary>
/*
/// The game assets for the build.
*/
/// </summary>
@property NSArray* GameAssetReferences; 

/// <summary>
/*
/// The game certificates for the build.
*/
/// </summary>
@property NSArray* GameCertificateReferences; 

/// <summary>
/*
/// The metadata of the build.
*/
/// </summary>
@property NSDictionary* Metadata; 

/// <summary>
/*
/// The number of multiplayer servers to host on a single VM of the build.
*/
/// </summary>
@property NSNumber* MultiplayerServerCountPerVm; 

/// <summary>
/*
/// The ports the build is mapped on.
*/
/// </summary>
@property NSArray* Ports; 

/// <summary>
/*
/// The region configuration for the build.
*/
/// </summary>
@property NSArray* RegionConfigurations; 

/// <summary>
/*
/// The command to run when the multiplayer server has been allocated, including any arguments.
*/
/// </summary>
@property NSString* StartMultiplayerServerCommand; 

/// <summary>
/*
/// The VM size the build was created on.
*/
/// </summary>
@property MultiplayerAzureVmSize VmSize; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The client specifies the creator's attributes and optionally a list of other users to match with.
*/
/// </summary>
@interface MultiplayerCreateMatchmakingTicketRequest : PlayFabBaseModel


/// <summary>
/*
/// The User who created this ticket.
*/
/// </summary>
@property MultiplayerMatchmakingPlayer* Creator; 

/// <summary>
/*
/// How long to attempt matching this ticket in seconds.
*/
/// </summary>
@property NSNumber* GiveUpAfterSeconds; 

/// <summary>
/*
/// A list of Entity Keys of other users to match with.
*/
/// </summary>
@property NSArray* MembersToMatchWith; 

/// <summary>
/*
/// The Id of a match queue.
*/
/// </summary>
@property NSString* QueueName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCreateMatchmakingTicketResult : PlayFabBaseModel


/// <summary>
/*
/// The Id of the ticket to find a match for.
*/
/// </summary>
@property NSString* TicketId; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Creates a remote user to log on to a VM for a multiplayer server build in a specific region. Returns user credential information necessary to log on.
*/
/// </summary>
@interface MultiplayerCreateRemoteUserRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of to create the remote user for.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The expiration time for the remote user created. Defaults to expiring in one day if not specified.
*/
/// </summary>
@property NSDate* ExpirationTime; 

/// <summary>
/*
/// The region of virtual machine to create the remote user for.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The username to create the remote user with.
*/
/// </summary>
@property NSString* Username; 

/// <summary>
/*
/// The virtual machine ID the multiplayer server is located on.
*/
/// </summary>
@property NSString* VmId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCreateRemoteUserResponse : PlayFabBaseModel


/// <summary>
/*
/// The expiration time for the remote user created.
*/
/// </summary>
@property NSDate* ExpirationTime; 

/// <summary>
/*
/// The generated password for the remote user that was created.
*/
/// </summary>
@property NSString* Password; 

/// <summary>
/*
/// The username for the remote user that was created.
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
/// The server specifies all the members and their attributes.
*/
/// </summary>
@interface MultiplayerCreateServerMatchmakingTicketRequest : PlayFabBaseModel


/// <summary>
/*
/// How long to attempt matching this ticket in seconds.
*/
/// </summary>
@property NSNumber* GiveUpAfterSeconds; 

/// <summary>
/*
/// The users who will be part of this ticket.
*/
/// </summary>
@property NSArray* Members; 

/// <summary>
/*
/// The Id of a match queue.
*/
/// </summary>
@property NSString* QueueName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerCurrentServerStats : PlayFabBaseModel


/// <summary>
/*
/// The number of active multiplayer servers.
*/
/// </summary>
@property NSNumber* Active; 

/// <summary>
/*
/// The number of multiplayer servers still downloading game resources (such as assets).
*/
/// </summary>
@property NSNumber* Propping; 

/// <summary>
/*
/// The number of standingby multiplayer servers.
*/
/// </summary>
@property NSNumber* StandingBy; 

/// <summary>
/*
/// The total number of multiplayer servers.
*/
/// </summary>
@property NSNumber* Total; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Deletes a multiplayer server game asset for a title.
*/
/// </summary>
@interface MultiplayerDeleteAssetRequest : PlayFabBaseModel


/// <summary>
/*
/// The filename of the asset to delete.
*/
/// </summary>
@property NSString* FileName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Deletes a multiplayer server build.
*/
/// </summary>
@interface MultiplayerDeleteBuildRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the build to delete.
*/
/// </summary>
@property NSString* BuildId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Deletes a multiplayer server game certificate.
*/
/// </summary>
@interface MultiplayerDeleteCertificateRequest : PlayFabBaseModel


/// <summary>
/*
/// The name of the certificate.
*/
/// </summary>
@property NSString* Name; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Deletes a remote user to log on to a VM for a multiplayer server build in a specific region. Returns user credential information necessary to log on.
*/
/// </summary>
@interface MultiplayerDeleteRemoteUserRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the multiplayer server where the remote user is to delete.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The region of the multiplayer server where the remote user is to delete.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The username of the remote user to delete.
*/
/// </summary>
@property NSString* Username; 

/// <summary>
/*
/// The virtual machine ID the multiplayer server is located on.
*/
/// </summary>
@property NSString* VmId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerEmptyResponse : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Enables the multiplayer server feature for a title and returns the enabled status. The enabled status can be Initializing, Enabled, and Disabled. It can up to 20 minutes or more for the title to be enabled for the feature. On average, it can take up to 20 minutes for the title to be enabled for the feature.
*/
/// </summary>
@interface MultiplayerEnableMultiplayerServersForTitleRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerEnableMultiplayerServersForTitleResponse : PlayFabBaseModel


/// <summary>
/*
/// The enabled status for the multiplayer server features for the title.
*/
/// </summary>
@property MultiplayerTitleMultiplayerServerEnabledStatus Status; 
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
@interface MultiplayerEntityKey : PlayFabBaseModel


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


@interface MultiplayerGameCertificateReference : PlayFabBaseModel


/// <summary>
/*
/// An alias for the game certificate. The game server will reference this alias via GSDK config to retrieve the game certificate. This alias is used as an identifier in game server code to allow a new certificate with different Name field to be uploaded without the need to change any game server code to reference the new Name.
*/
/// </summary>
@property NSString* GsdkAlias; 

/// <summary>
/*
/// The name of the game certificate. This name should match the name of a certificate that was previously uploaded to this title.
*/
/// </summary>
@property NSString* Name; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGameCertificateReferenceParams : PlayFabBaseModel


/// <summary>
/*
/// An alias for the game certificate. The game server will reference this alias via GSDK config to retrieve the game certificate. This alias is used as an identifier in game server code to allow a new certificate with different Name field to be uploaded without the need to change any game server code to reference the new Name.
*/
/// </summary>
@property NSString* GsdkAlias; 

/// <summary>
/*
/// The name of the game certificate. This name should match the name of a certificate that was previously uploaded to this title.
*/
/// </summary>
@property NSString* Name; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Gets the URL to upload assets to.
*/
/// </summary>
@interface MultiplayerGetAssetUploadUrlRequest : PlayFabBaseModel


/// <summary>
/*
/// The asset's file name to get the upload URL for.
*/
/// </summary>
@property NSString* FileName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetAssetUploadUrlResponse : PlayFabBaseModel


/// <summary>
/*
/// The asset's upload URL.
*/
/// </summary>
@property NSString* AssetUploadUrl; 

/// <summary>
/*
/// The asset's file name to get the upload URL for.
*/
/// </summary>
@property NSString* FileName; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns the details about a multiplayer server build.
*/
/// </summary>
@interface MultiplayerGetBuildRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the build to get.
*/
/// </summary>
@property NSString* BuildId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetBuildResponse : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the build.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The build name.
*/
/// </summary>
@property NSString* BuildName; 

/// <summary>
/*
/// The current build status. Valid values are - Deploying, Deployed, DeletingRegion, Unhealthy.
*/
/// </summary>
@property NSString* BuildStatus; 

/// <summary>
/*
/// The flavor of container of he build.
*/
/// </summary>
@property MultiplayerContainerFlavor pfContainerFlavor; 

/// <summary>
/*
/// The container command to run when the multiplayer server has been allocated, including any arguments. This only applies to custom builds. If the build is a managed build, this field will be null.
*/
/// </summary>
@property NSString* ContainerRunCommand; 

/// <summary>
/*
/// The time the build was created in UTC.
*/
/// </summary>
@property NSDate* CreationTime; 

/// <summary>
/*
/// The custom game container image for a custom build.
*/
/// </summary>
@property MultiplayerContainerImageReference* CustomGameContainerImage; 

/// <summary>
/*
/// The game assets for the build.
*/
/// </summary>
@property NSArray* GameAssetReferences; 

/// <summary>
/*
/// The game certificates for the build.
*/
/// </summary>
@property NSArray* GameCertificateReferences; 

/// <summary>
/*
/// Metadata of the build. The keys are case insensitive. The build metadata is made available to the server through Game Server SDK (GSDK).
*/
/// </summary>
@property NSDictionary* Metadata; 

/// <summary>
/*
/// The number of multiplayer servers to hosted on a single VM of the build.
*/
/// </summary>
@property NSNumber* MultiplayerServerCountPerVm; 

/// <summary>
/*
/// The ports the build is mapped on.
*/
/// </summary>
@property NSArray* Ports; 

/// <summary>
/*
/// The region configuration for the build.
*/
/// </summary>
@property NSArray* RegionConfigurations; 

/// <summary>
/*
/// The command to run when the multiplayer server has been allocated, including any arguments. This only applies to managed builds. If the build is a custom build, this field will be null.
*/
/// </summary>
@property NSString* StartMultiplayerServerCommand; 

/// <summary>
/*
/// The VM size the build was created on.
*/
/// </summary>
@property MultiplayerAzureVmSize VmSize; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Gets credentials to the container registry where game developers can upload custom container images to before creating a new build.
*/
/// </summary>
@interface MultiplayerGetContainerRegistryCredentialsRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetContainerRegistryCredentialsResponse : PlayFabBaseModel


/// <summary>
/*
/// The url of the container registry.
*/
/// </summary>
@property NSString* DnsName; 

/// <summary>
/*
/// The password for accessing the container registry.
*/
/// </summary>
@property NSString* Password; 

/// <summary>
/*
/// The username for accessing the container registry.
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
/// The ticket includes the invited players, their attributes if they have joined, the ticket status, the match Id when applicable, etc. Only servers, the ticket creator and the invited players can get the ticket.
*/
/// </summary>
@interface MultiplayerGetMatchmakingTicketRequest : PlayFabBaseModel


/// <summary>
/*
/// Determines whether the matchmaking attributes will be returned as an escaped JSON string or as an un-escaped JSON object.
*/
/// </summary>
@property bool EscapeObject; 

/// <summary>
/*
/// The name of the queue to find a match for.
*/
/// </summary>
@property NSString* QueueName; 

/// <summary>
/*
/// The Id of the ticket to find a match for.
*/
/// </summary>
@property NSString* TicketId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetMatchmakingTicketResult : PlayFabBaseModel


/// <summary>
/*
/// The reason why the current ticket was canceled. This field is only set if the ticket is in canceled state.
*/
/// </summary>
@property MultiplayerCancellationReason pfCancellationReason; 

/// <summary>
/*
/// The reason why the current ticket was canceled. This field is only set if the ticket is in canceled state.
*/
/// </summary>
@property NSString* CancellationReasonString; 

/// <summary>
/*
/// The server date and time at which ticket was created.
*/
/// </summary>
@property NSDate* Created; 

/// <summary>
/*
/// The Creator's entity key.
*/
/// </summary>
@property MultiplayerEntityKey* Creator; 

/// <summary>
/*
/// How long to attempt matching this ticket in seconds.
*/
/// </summary>
@property NSNumber* GiveUpAfterSeconds; 

/// <summary>
/*
/// The Id of a match.
*/
/// </summary>
@property NSString* MatchId; 

/// <summary>
/*
/// A list of Users that have joined this ticket.
*/
/// </summary>
@property NSArray* Members; 

/// <summary>
/*
/// A list of PlayFab Ids of Users to match with.
*/
/// </summary>
@property NSArray* MembersToMatchWith; 

/// <summary>
/*
/// The Id of a match queue.
*/
/// </summary>
@property NSString* QueueName; 

/// <summary>
/*
/// The current ticket status. Possible values are: WaitingForPlayers, WaitingForMatch, WaitingForServer, Canceled and Matched.
*/
/// </summary>
@property NSString* Status; 

/// <summary>
/*
/// The Id of the ticket to find a match for.
*/
/// </summary>
@property NSString* TicketId; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// When matchmaking has successfully matched together a collection of tickets, it produces a 'match' with an Id. The match contains all of the players that were matched together, and their team assigments. Only servers and ticket members can get the match.
*/
/// </summary>
@interface MultiplayerGetMatchRequest : PlayFabBaseModel


/// <summary>
/*
/// Determines whether the matchmaking attributes will be returned as an escaped JSON string or as an un-escaped JSON object.
*/
/// </summary>
@property bool EscapeObject; 

/// <summary>
/*
/// The Id of a match.
*/
/// </summary>
@property NSString* MatchId; 

/// <summary>
/*
/// The name of the queue to join.
*/
/// </summary>
@property NSString* QueueName; 

/// <summary>
/*
/// Determines whether the matchmaking attributes for each user should be returned in the response for match request.
*/
/// </summary>
@property bool ReturnMemberAttributes; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetMatchResult : PlayFabBaseModel


/// <summary>
/*
/// The Id of a match.
*/
/// </summary>
@property NSString* MatchId; 

/// <summary>
/*
/// A list of Users that are matched together, along with their team assignments.
*/
/// </summary>
@property NSArray* Members; 

/// <summary>
/*
/// A list of regions that the match could be played in sorted by preference. This value is only set if the queue has a region selection rule.
*/
/// </summary>
@property NSArray* RegionPreferences; 

/// <summary>
/*
/// The details of the server that the match has been allocated to.
*/
/// </summary>
@property MultiplayerServerDetails* pfServerDetails; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Gets multiplayer server session details for a build in a specific region.
*/
/// </summary>
@interface MultiplayerGetMultiplayerServerDetailsRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the multiplayer server to get details for.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The region the multiplayer server is located in to get details for.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The title generated guid string session ID of the multiplayer server to get details for. This is to keep track of multiplayer server sessions.
*/
/// </summary>
@property NSString* SessionId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetMultiplayerServerDetailsResponse : PlayFabBaseModel


/// <summary>
/*
/// The connected players in the multiplayer server.
*/
/// </summary>
@property NSArray* ConnectedPlayers; 

/// <summary>
/*
/// The fully qualified domain name of the virtual machine that is hosting this multiplayer server.
*/
/// </summary>
@property NSString* FQDN; 

/// <summary>
/*
/// The IPv4 address of the virtual machine that is hosting this multiplayer server.
*/
/// </summary>
@property NSString* IPV4Address; 

/// <summary>
/*
/// The time (UTC) at which a change in the multiplayer server state was observed.
*/
/// </summary>
@property NSDate* LastStateTransitionTime; 

/// <summary>
/*
/// The ports the multiplayer server uses.
*/
/// </summary>
@property NSArray* Ports; 

/// <summary>
/*
/// The region the multiplayer server is located in.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The string server ID of the multiplayer server generated by PlayFab.
*/
/// </summary>
@property NSString* ServerId; 

/// <summary>
/*
/// The guid string session ID of the multiplayer server.
*/
/// </summary>
@property NSString* SessionId; 

/// <summary>
/*
/// The state of the multiplayer server.
*/
/// </summary>
@property NSString* State; 

/// <summary>
/*
/// The virtual machine ID that the multiplayer server is located on.
*/
/// </summary>
@property NSString* VmId; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns the matchmaking statistics for a queue. These include the number of players matching and the statistics related to the time to match statistics in seconds (average and percentiles). Statistics are refreshed once every 5 minutes. Servers can access all statistics no matter what the ClientStatisticsVisibility is configured to. Clients can access statistics according to the ClientStatisticsVisibility. Client requests are forbidden if all visibility fields are false.
*/
/// </summary>
@interface MultiplayerGetQueueStatisticsRequest : PlayFabBaseModel


/// <summary>
/*
/// The name of the queue.
*/
/// </summary>
@property NSString* QueueName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetQueueStatisticsResult : PlayFabBaseModel


/// <summary>
/*
/// The current number of players in the matchmaking queue, who are waiting to be matched.
*/
/// </summary>
@property NSNumber* NumberOfPlayersMatching; 

/// <summary>
/*
/// Statistics representing the time (in seconds) it takes for tickets to find a match.
*/
/// </summary>
@property MultiplayerStatistics* TimeToMatchStatisticsInSeconds; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Gets a remote login endpoint to a VM that is hosting a multiplayer server build in a specific region.
*/
/// </summary>
@interface MultiplayerGetRemoteLoginEndpointRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the multiplayer server to get remote login information for.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The region of the multiplayer server to get remote login information for.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The virtual machine ID the multiplayer server is located on.
*/
/// </summary>
@property NSString* VmId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetRemoteLoginEndpointResponse : PlayFabBaseModel


/// <summary>
/*
/// The remote login IPV4 address of multiplayer server.
*/
/// </summary>
@property NSString* IPV4Address; 

/// <summary>
/*
/// The remote login port of multiplayer server.
*/
/// </summary>
@property NSNumber* Port; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Gets the status of whether a title is enabled for the multiplayer server feature. The enabled status can be Initializing, Enabled, and Disabled.
*/
/// </summary>
@interface MultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : PlayFabBaseModel


/// <summary>
/*
/// The enabled status for the multiplayer server features for the title.
*/
/// </summary>
@property MultiplayerTitleMultiplayerServerEnabledStatus Status; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Gets the quotas for a title in relation to multiplayer servers.
*/
/// </summary>
@interface MultiplayerGetTitleMultiplayerServersQuotasRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerGetTitleMultiplayerServersQuotasResponse : PlayFabBaseModel


/// <summary>
/*
/// The various quotas for multiplayer servers for the title.
*/
/// </summary>
@property MultiplayerTitleMultiplayerServersQuotas* Quotas; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Add the player to a matchmaking ticket and specify all of its matchmaking attributes. Players can join a ticket if and only if their EntityKeys are already listed in the ticket's Members list. The matchmaking service automatically starts matching the ticket against other matchmaking tickets once all players have joined the ticket. It is not possible to join a ticket once it has started matching.
*/
/// </summary>
@interface MultiplayerJoinMatchmakingTicketRequest : PlayFabBaseModel


/// <summary>
/*
/// The User who wants to join the ticket. Their Id must be listed in PlayFabIdsToMatchWith.
*/
/// </summary>
@property MultiplayerMatchmakingPlayer* Member; 

/// <summary>
/*
/// The name of the queue to join.
*/
/// </summary>
@property NSString* QueueName; 

/// <summary>
/*
/// The Id of the ticket to find a match for.
*/
/// </summary>
@property NSString* TicketId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerJoinMatchmakingTicketResult : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of multiplayer server game asset summaries for a title.
*/
/// </summary>
@interface MultiplayerListAssetSummariesRequest : PlayFabBaseModel


/// <summary>
/*
/// The page size for the request.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged request.
*/
/// </summary>
@property NSString* SkipToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListAssetSummariesResponse : PlayFabBaseModel


/// <summary>
/*
/// The list of asset summaries.
*/
/// </summary>
@property NSArray* AssetSummaries; 

/// <summary>
/*
/// The page size on the response.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged response.
*/
/// </summary>
@property NSString* SkipToken; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of summarized details of all multiplayer server builds for a title.
*/
/// </summary>
@interface MultiplayerListBuildSummariesRequest : PlayFabBaseModel


/// <summary>
/*
/// The page size for the request.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged request.
*/
/// </summary>
@property NSString* SkipToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListBuildSummariesResponse : PlayFabBaseModel


/// <summary>
/*
/// The list of build summaries for a title.
*/
/// </summary>
@property NSArray* BuildSummaries; 

/// <summary>
/*
/// The page size on the response.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged response.
*/
/// </summary>
@property NSString* SkipToken; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of multiplayer server game certificates for a title.
*/
/// </summary>
@interface MultiplayerListCertificateSummariesRequest : PlayFabBaseModel


/// <summary>
/*
/// The page size for the request.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged request.
*/
/// </summary>
@property NSString* SkipToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListCertificateSummariesResponse : PlayFabBaseModel


/// <summary>
/*
/// The list of game certificates.
*/
/// </summary>
@property NSArray* CertificateSummaries; 

/// <summary>
/*
/// The page size on the response.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged response.
*/
/// </summary>
@property NSString* SkipToken; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of the container images that have been uploaded to the container registry for a title.
*/
/// </summary>
@interface MultiplayerListContainerImagesRequest : PlayFabBaseModel


/// <summary>
/*
/// The page size for the request.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged request.
*/
/// </summary>
@property NSString* SkipToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListContainerImagesResponse : PlayFabBaseModel


/// <summary>
/*
/// The list of container images.
*/
/// </summary>
@property NSArray* Images; 

/// <summary>
/*
/// The page size on the response.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged response.
*/
/// </summary>
@property NSString* SkipToken; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of the tags for a particular container image that exists in the container registry for a title.
*/
/// </summary>
@interface MultiplayerListContainerImageTagsRequest : PlayFabBaseModel


/// <summary>
/*
/// The container images we want to list tags for.
*/
/// </summary>
@property NSString* ImageName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListContainerImageTagsResponse : PlayFabBaseModel


/// <summary>
/*
/// The list of tags for a particular container image.
*/
/// </summary>
@property NSArray* Tags; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// If the caller is a title, the EntityKey in the request is required. If the caller is a player, then it is optional. If it is provided it must match the caller's entity.
*/
/// </summary>
@interface MultiplayerListMatchmakingTicketsForPlayerRequest : PlayFabBaseModel


/// <summary>
/*
/// The entity key for which to find the ticket Ids.
*/
/// </summary>
@property MultiplayerEntityKey* Entity; 

/// <summary>
/*
/// The name of the queue to find a match for.
*/
/// </summary>
@property NSString* QueueName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListMatchmakingTicketsForPlayerResult : PlayFabBaseModel


/// <summary>
/*
/// The list of ticket Ids the user is a member of.
*/
/// </summary>
@property NSArray* TicketIds; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of multiplayer servers for a build in a specific region.
*/
/// </summary>
@interface MultiplayerListMultiplayerServersRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the multiplayer servers to list.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The page size for the request.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The region the multiplayer servers to list.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The skip token for the paged request.
*/
/// </summary>
@property NSString* SkipToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListMultiplayerServersResponse : PlayFabBaseModel


/// <summary>
/*
/// The list of multiplayer server summary details.
*/
/// </summary>
@property NSArray* MultiplayerServerSummaries; 

/// <summary>
/*
/// The page size on the response.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged response.
*/
/// </summary>
@property NSString* SkipToken; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of quality of service servers.
*/
/// </summary>
@interface MultiplayerListQosServersRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListQosServersResponse : PlayFabBaseModel


/// <summary>
/*
/// The page size on the response.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The list of QoS servers.
*/
/// </summary>
@property NSArray* QosServers; 

/// <summary>
/*
/// The skip token for the paged response.
*/
/// </summary>
@property NSString* SkipToken; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Returns a list of virtual machines for a title.
*/
/// </summary>
@interface MultiplayerListVirtualMachineSummariesRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the virtual machines to list.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The page size for the request.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The region of the virtual machines to list.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The skip token for the paged request.
*/
/// </summary>
@property NSString* SkipToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerListVirtualMachineSummariesResponse : PlayFabBaseModel


/// <summary>
/*
/// The page size on the response.
*/
/// </summary>
@property NSNumber* PageSize; 

/// <summary>
/*
/// The skip token for the paged response.
*/
/// </summary>
@property NSString* SkipToken; 

/// <summary>
/*
/// The list of virtual machine summaries.
*/
/// </summary>
@property NSArray* VirtualMachines; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// A user in a matchmaking ticket.
*/
/// </summary>
@interface MultiplayerMatchmakingPlayer : PlayFabBaseModel


/// <summary>
/*
/// The user's attributes custom to the title.
*/
/// </summary>
@property MultiplayerMatchmakingPlayerAttributes* Attributes; 

/// <summary>
/*
/// The entity key of the matchmaking user.
*/
/// </summary>
@property MultiplayerEntityKey* Entity; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// The matchmaking attributes for a user.
*/
/// </summary>
@interface MultiplayerMatchmakingPlayerAttributes : PlayFabBaseModel


/// <summary>
/*
/// A data object representing a user's attributes.
*/
/// </summary>
@property NSDictionary* DataObject; 

/// <summary>
/*
/// An escaped data object representing a user's attributes.
*/
/// </summary>
@property NSString* EscapedDataObject; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// A player in a created matchmaking match with a team assignment.
*/
/// </summary>
@interface MultiplayerMatchmakingPlayerWithTeamAssignment : PlayFabBaseModel


/// <summary>
/*
/// The user's attributes custom to the title. These attributes will be null unless the request has ReturnMemberAttributes flag set to true.
*/
/// </summary>
@property MultiplayerMatchmakingPlayerAttributes* Attributes; 

/// <summary>
/*
/// The entity key of the matchmaking user.
*/
/// </summary>
@property MultiplayerEntityKey* Entity; 

/// <summary>
/*
/// The Id of the team the User is assigned to.
*/
/// </summary>
@property NSString* TeamId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerMultiplayerServerSummary : PlayFabBaseModel


/// <summary>
/*
/// The connected players in the multiplayer server.
*/
/// </summary>
@property NSArray* ConnectedPlayers; 

/// <summary>
/*
/// The time (UTC) at which a change in the multiplayer server state was observed.
*/
/// </summary>
@property NSDate* LastStateTransitionTime; 

/// <summary>
/*
/// The region the multiplayer server is located in.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The string server ID of the multiplayer server generated by PlayFab.
*/
/// </summary>
@property NSString* ServerId; 

/// <summary>
/*
/// The title generated guid string session ID of the multiplayer server.
*/
/// </summary>
@property NSString* SessionId; 

/// <summary>
/*
/// The state of the multiplayer server.
*/
/// </summary>
@property NSString* State; 

/// <summary>
/*
/// The virtual machine ID that the multiplayer server is located on.
*/
/// </summary>
@property NSString* VmId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerPort : PlayFabBaseModel


/// <summary>
/*
/// The name for the port.
*/
/// </summary>
@property NSString* Name; 

/// <summary>
/*
/// The number for the port.
*/
/// </summary>
@property NSNumber* Num; 

/// <summary>
/*
/// The protocol for the port.
*/
/// </summary>
@property MultiplayerProtocolType Protocol; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerQosServer : PlayFabBaseModel


/// <summary>
/*
/// The region the QoS server is located in.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The QoS server URL.
*/
/// </summary>
@property NSString* ServerUrl; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Requests a multiplayer server session from a particular build in any of the given preferred regions.
*/
/// </summary>
@interface MultiplayerRequestMultiplayerServerRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the multiplayer server to request.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// Initial list of players (potentially matchmade) allowed to connect to the game. This list is passed to the game server when requested (via GSDK) and can be used to validate players connecting to it.
*/
/// </summary>
@property NSArray* InitialPlayers; 

/// <summary>
/*
/// The preferred regions to request a multiplayer server from. The Multiplayer Service will iterate through the regions in the specified order and allocate a server from the first one that has servers available.
*/
/// </summary>
@property NSArray* PreferredRegions; 

/// <summary>
/*
/// Data encoded as a string that is passed to the game server when requested. This can be used to to communicate information such as game mode or map through the request flow.
*/
/// </summary>
@property NSString* SessionCookie; 

/// <summary>
/*
/// A guid string session ID created track the multiplayer server session over its life.
*/
/// </summary>
@property NSString* SessionId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerRequestMultiplayerServerResponse : PlayFabBaseModel


/// <summary>
/*
/// The connected players in the multiplayer server.
*/
/// </summary>
@property NSArray* ConnectedPlayers; 

/// <summary>
/*
/// The fully qualified domain name of the virtual machine that is hosting this multiplayer server.
*/
/// </summary>
@property NSString* FQDN; 

/// <summary>
/*
/// The IPv4 address of the virtual machine that is hosting this multiplayer server.
*/
/// </summary>
@property NSString* IPV4Address; 

/// <summary>
/*
/// The time (UTC) at which a change in the multiplayer server state was observed.
*/
/// </summary>
@property NSDate* LastStateTransitionTime; 

/// <summary>
/*
/// The ports the multiplayer server uses.
*/
/// </summary>
@property NSArray* Ports; 

/// <summary>
/*
/// The region the multiplayer server is located in.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// The string server ID of the multiplayer server generated by PlayFab.
*/
/// </summary>
@property NSString* ServerId; 

/// <summary>
/*
/// The guid string session ID of the multiplayer server.
*/
/// </summary>
@property NSString* SessionId; 

/// <summary>
/*
/// The state of the multiplayer server.
*/
/// </summary>
@property NSString* State; 

/// <summary>
/*
/// The virtual machine ID that the multiplayer server is located on.
*/
/// </summary>
@property NSString* VmId; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Gets new credentials to the container registry where game developers can upload custom container images to before creating a new build.
*/
/// </summary>
@interface MultiplayerRolloverContainerRegistryCredentialsRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerRolloverContainerRegistryCredentialsResponse : PlayFabBaseModel


/// <summary>
/*
/// The url of the container registry.
*/
/// </summary>
@property NSString* DnsName; 

/// <summary>
/*
/// The password for accessing the container registry.
*/
/// </summary>
@property NSString* Password; 

/// <summary>
/*
/// The username for accessing the container registry.
*/
/// </summary>
@property NSString* Username; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerServerDetails : PlayFabBaseModel


/// <summary>
/*
/// The IPv4 address of the virtual machine that is hosting this multiplayer server.
*/
/// </summary>
@property NSString* IPV4Address; 

/// <summary>
/*
/// The ports the multiplayer server uses.
*/
/// </summary>
@property NSArray* Ports; 

/// <summary>
/*
/// The server's region.
*/
/// </summary>
@property NSString* Region; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Executes the shutdown callback from the GSDK and terminates the multiplayer server session. The callback in the GSDK will allow for graceful shutdown with a 15 minute timeoutIf graceful shutdown has not been completed before 15 minutes have elapsed, the multiplayer server session will be forcefully terminated on it's own.
*/
/// </summary>
@interface MultiplayerShutdownMultiplayerServerRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string build ID of the multiplayer server to delete.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The region of the multiplayer server to shut down.
*/
/// </summary>
@property MultiplayerAzureRegion Region; 

/// <summary>
/*
/// A guid string session ID of the multiplayer server to shut down.
*/
/// </summary>
@property NSString* SessionId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerStatistics : PlayFabBaseModel


/// <summary>
/*
/// The average.
*/
/// </summary>
@property NSNumber* Average; 

/// <summary>
/*
/// The 50th percentile.
*/
/// </summary>
@property NSNumber* Percentile50; 

/// <summary>
/*
/// The 90th percentile.
*/
/// </summary>
@property NSNumber* Percentile90; 

/// <summary>
/*
/// The 99th percentile.
*/
/// </summary>
@property NSNumber* Percentile99; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerTitleMultiplayerServersQuotas : PlayFabBaseModel


/// <summary>
/*
/// The core capacity for the various regions and VM Family
*/
/// </summary>
@property NSArray* CoreCapacities; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Updates a multiplayer server build's regions.
*/
/// </summary>
@interface MultiplayerUpdateBuildRegionsRequest : PlayFabBaseModel


/// <summary>
/*
/// The guid string ID of the build we want to update regions for.
*/
/// </summary>
@property NSString* BuildId; 

/// <summary>
/*
/// The updated region configuration that should be applied to the specified build.
*/
/// </summary>
@property NSArray* BuildRegions; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Uploads a multiplayer server game certificate.
*/
/// </summary>
@interface MultiplayerUploadCertificateRequest : PlayFabBaseModel


/// <summary>
/*
/// The game certificate to upload.
*/
/// </summary>
@property MultiplayerCertificate* GameCertificate; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface MultiplayerVirtualMachineSummary : PlayFabBaseModel


/// <summary>
/*
/// The virtual machine health status.
*/
/// </summary>
@property NSString* HealthStatus; 

/// <summary>
/*
/// The virtual machine state.
*/
/// </summary>
@property NSString* State; 

/// <summary>
/*
/// The virtual machine ID.
*/
/// </summary>
@property NSString* VmId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end

