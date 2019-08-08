#import "PlayFabClientDataModels.h"


@implementation ClientAcceptTradeRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"AcceptedInventoryInstanceIds"]){
    NSArray* member_list = [properties objectForKey:@"AcceptedInventoryInstanceIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.AcceptedInventoryInstanceIds = [mutable_storage copy];
}

    
    self.OfferingPlayerId = [properties valueForKey:@"OfferingPlayerId"];
    
    self.TradeId = [properties valueForKey:@"TradeId"];
    

    return self;
}
@end
@implementation ClientAcceptTradeResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Trade = [[ClientTradeInfo new] initWithDictionary:[properties objectForKey:@"Trade"]];
    

    return self;
}
@end
@implementation ClientAdCampaignAttributionModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AttributedAt = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"AttributedAt"]];
    
    self.CampaignId = [properties valueForKey:@"CampaignId"];
    
    self.Platform = [properties valueForKey:@"Platform"];
    

    return self;
}
@end
@implementation ClientAddFriendRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FriendEmail = [properties valueForKey:@"FriendEmail"];
    
    self.FriendPlayFabId = [properties valueForKey:@"FriendPlayFabId"];
    
    self.FriendTitleDisplayName = [properties valueForKey:@"FriendTitleDisplayName"];
    
    self.FriendUsername = [properties valueForKey:@"FriendUsername"];
    

    return self;
}
@end
@implementation ClientAddFriendResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Created = [[properties valueForKey:@"Created"] boolValue];
    

    return self;
}
@end
@implementation ClientAddGenericIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GenericId = [[ClientGenericServiceId new] initWithDictionary:[properties objectForKey:@"GenericId"]];
    

    return self;
}
@end
@implementation ClientAddGenericIDResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientAddOrUpdateContactEmailRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.EmailAddress = [properties valueForKey:@"EmailAddress"];
    

    return self;
}
@end
@implementation ClientAddOrUpdateContactEmailResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientAddSharedGroupMembersRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"PlayFabIds"]){
    NSArray* member_list = [properties objectForKey:@"PlayFabIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.PlayFabIds = [mutable_storage copy];
}

    
    self.SharedGroupId = [properties valueForKey:@"SharedGroupId"];
    

    return self;
}
@end
@implementation ClientAddSharedGroupMembersResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientAddUsernamePasswordRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Email = [properties valueForKey:@"Email"];
    
    self.Password = [properties valueForKey:@"Password"];
    
    self.Username = [properties valueForKey:@"Username"];
    

    return self;
}
@end
@implementation ClientAddUsernamePasswordResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Username = [properties valueForKey:@"Username"];
    

    return self;
}
@end
@implementation ClientAddUserVirtualCurrencyRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Amount = [properties valueForKey:@"Amount"];
    
    self.VirtualCurrency = [properties valueForKey:@"VirtualCurrency"];
    

    return self;
}
@end
@implementation ClientAndroidDevicePushNotificationRegistrationRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ConfirmationMessage = [properties valueForKey:@"ConfirmationMessage"];
    
    self.DeviceToken = [properties valueForKey:@"DeviceToken"];
    
    self.SendPushNotificationConfirmation = [[properties valueForKey:@"SendPushNotificationConfirmation"] boolValue];
    

    return self;
}
@end
@implementation ClientAndroidDevicePushNotificationRegistrationResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientAttributeInstallRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Adid = [properties valueForKey:@"Adid"];
    
    self.Idfa = [properties valueForKey:@"Idfa"];
    

    return self;
}
@end
@implementation ClientAttributeInstallResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientCancelTradeRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.TradeId = [properties valueForKey:@"TradeId"];
    

    return self;
}
@end
@implementation ClientCancelTradeResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Trade = [[ClientTradeInfo new] initWithDictionary:[properties objectForKey:@"Trade"]];
    

    return self;
}
@end
@implementation ClientCartItem


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Description = [properties valueForKey:@"Description"];
    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.ItemClass = [properties valueForKey:@"ItemClass"];
    
    self.ItemId = [properties valueForKey:@"ItemId"];
    
    self.ItemInstanceId = [properties valueForKey:@"ItemInstanceId"];
    
    if ([properties objectForKey:@"RealCurrencyPrices"]){
    NSDictionary* member_list = [properties objectForKey:@"RealCurrencyPrices"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.RealCurrencyPrices = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VCAmount"]){
    NSDictionary* member_list = [properties objectForKey:@"VCAmount"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VCAmount = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrencyPrices"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrencyPrices"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrencyPrices = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientCatalogItem


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Bundle = [[ClientCatalogItemBundleInfo new] initWithDictionary:[properties objectForKey:@"Bundle"]];
    
    self.CanBecomeCharacter = [[properties valueForKey:@"CanBecomeCharacter"] boolValue];
    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.Consumable = [[ClientCatalogItemConsumableInfo new] initWithDictionary:[properties objectForKey:@"Consumable"]];
    
    self.Container = [[ClientCatalogItemContainerInfo new] initWithDictionary:[properties objectForKey:@"Container"]];
    
    self.CustomData = [properties valueForKey:@"CustomData"];
    
    self.Description = [properties valueForKey:@"Description"];
    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.InitialLimitedEditionCount = [properties valueForKey:@"InitialLimitedEditionCount"];
    
    self.IsLimitedEdition = [[properties valueForKey:@"IsLimitedEdition"] boolValue];
    
    self.IsStackable = [[properties valueForKey:@"IsStackable"] boolValue];
    
    self.IsTradable = [[properties valueForKey:@"IsTradable"] boolValue];
    
    self.ItemClass = [properties valueForKey:@"ItemClass"];
    
    self.ItemId = [properties valueForKey:@"ItemId"];
    
    self.ItemImageUrl = [properties valueForKey:@"ItemImageUrl"];
    
    if ([properties objectForKey:@"RealCurrencyPrices"]){
    NSDictionary* member_list = [properties objectForKey:@"RealCurrencyPrices"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.RealCurrencyPrices = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"Tags"]){
    NSArray* member_list = [properties objectForKey:@"Tags"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Tags = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrencyPrices"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrencyPrices"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrencyPrices = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientCatalogItemBundleInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"BundledItems"]){
    NSArray* member_list = [properties objectForKey:@"BundledItems"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.BundledItems = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"BundledResultTables"]){
    NSArray* member_list = [properties objectForKey:@"BundledResultTables"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.BundledResultTables = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"BundledVirtualCurrencies"]){
    NSDictionary* member_list = [properties objectForKey:@"BundledVirtualCurrencies"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.BundledVirtualCurrencies = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientCatalogItemConsumableInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.UsageCount = [properties valueForKey:@"UsageCount"];
    
    self.UsagePeriod = [properties valueForKey:@"UsagePeriod"];
    
    self.UsagePeriodGroup = [properties valueForKey:@"UsagePeriodGroup"];
    

    return self;
}
@end
@implementation ClientCatalogItemContainerInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"ItemContents"]){
    NSArray* member_list = [properties objectForKey:@"ItemContents"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.ItemContents = [mutable_storage copy];
}

    
    self.KeyItemId = [properties valueForKey:@"KeyItemId"];
    
    if ([properties objectForKey:@"ResultTableContents"]){
    NSArray* member_list = [properties objectForKey:@"ResultTableContents"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.ResultTableContents = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrencyContents"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrencyContents"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrencyContents = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientCharacterInventory


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    if ([properties objectForKey:@"Inventory"]){
    NSArray* member_list = [properties objectForKey:@"Inventory"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Inventory = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientCharacterLeaderboardEntry


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.CharacterName = [properties valueForKey:@"CharacterName"];
    
    self.CharacterType = [properties valueForKey:@"CharacterType"];
    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.Position = [properties valueForKey:@"Position"];
    
    self.StatValue = [properties valueForKey:@"StatValue"];
    

    return self;
}
@end
@implementation ClientCharacterResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.CharacterName = [properties valueForKey:@"CharacterName"];
    
    self.CharacterType = [properties valueForKey:@"CharacterType"];
    

    return self;
}
@end
@implementation ClientCollectionFilter


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Excludes"]){
    NSArray* member_list = [properties objectForKey:@"Excludes"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientContainer_Dictionary_String_String new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Excludes = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"Includes"]){
    NSArray* member_list = [properties objectForKey:@"Includes"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientContainer_Dictionary_String_String new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Includes = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientConfirmPurchaseRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.OrderId = [properties valueForKey:@"OrderId"];
    

    return self;
}
@end
@implementation ClientConfirmPurchaseResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Items"]){
    NSArray* member_list = [properties objectForKey:@"Items"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Items = [mutable_storage copy];
}

    
    self.OrderId = [properties valueForKey:@"OrderId"];
    
    self.PurchaseDate = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"PurchaseDate"]];
    

    return self;
}
@end
@implementation ClientConsumeItemRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.ConsumeCount = [properties valueForKey:@"ConsumeCount"];
    
    self.ItemInstanceId = [properties valueForKey:@"ItemInstanceId"];
    

    return self;
}
@end
@implementation ClientConsumeItemResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ItemInstanceId = [properties valueForKey:@"ItemInstanceId"];
    
    self.RemainingUses = [properties valueForKey:@"RemainingUses"];
    

    return self;
}
@end
@implementation ClientConsumePSNEntitlementsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.ServiceLabel = [properties valueForKey:@"ServiceLabel"];
    

    return self;
}
@end
@implementation ClientConsumePSNEntitlementsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"ItemsGranted"]){
    NSArray* member_list = [properties objectForKey:@"ItemsGranted"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.ItemsGranted = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientConsumeXboxEntitlementsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.XboxToken = [properties valueForKey:@"XboxToken"];
    

    return self;
}
@end
@implementation ClientConsumeXboxEntitlementsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Items"]){
    NSArray* member_list = [properties objectForKey:@"Items"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Items = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientContactEmailInfoModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.EmailAddress = [properties valueForKey:@"EmailAddress"];
    
    self.Name = [properties valueForKey:@"Name"];
    
    self.VerificationStatus = (ClientEmailVerificationStatus)[properties valueForKey:@"ClientVerificationStatus"];
    

    return self;
}
@end
@implementation ClientContainer_Dictionary_String_String


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientCreateSharedGroupRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.SharedGroupId = [properties valueForKey:@"SharedGroupId"];
    

    return self;
}
@end
@implementation ClientCreateSharedGroupResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.SharedGroupId = [properties valueForKey:@"SharedGroupId"];
    

    return self;
}
@end
@implementation ClientCurrentGamesRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.BuildVersion = [properties valueForKey:@"BuildVersion"];
    
    self.GameMode = [properties valueForKey:@"GameMode"];
    
    self.pfRegion = (ClientRegion)[properties valueForKey:@"ClientRegion"];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.TagFilter = [[ClientCollectionFilter new] initWithDictionary:[properties objectForKey:@"TagFilter"]];
    

    return self;
}
@end
@implementation ClientCurrentGamesResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GameCount = [properties valueForKey:@"GameCount"];
    
    if ([properties objectForKey:@"Games"]){
    NSArray* member_list = [properties objectForKey:@"Games"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientGameInfo new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Games = [mutable_storage copy];
}

    
    self.PlayerCount = [properties valueForKey:@"PlayerCount"];
    

    return self;
}
@end
@implementation ClientDeviceInfoRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Info"]){
    NSDictionary* member_list = [properties objectForKey:@"Info"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Info = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientEmptyResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientEmptyResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientEntityKey


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Id = [properties valueForKey:@"Id"];
    
    self.Type = [properties valueForKey:@"Type"];
    

    return self;
}
@end
@implementation ClientEntityTokenResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[ClientEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.EntityToken = [properties valueForKey:@"EntityToken"];
    
    self.TokenExpiration = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"TokenExpiration"]];
    

    return self;
}
@end
@implementation ClientExecuteCloudScriptRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FunctionName = [properties valueForKey:@"FunctionName"];
    
    self.FunctionParameter = [properties valueForKey:@"FunctionParameter"];
    
    self.GeneratePlayStreamEvent = [[properties valueForKey:@"GeneratePlayStreamEvent"] boolValue];
    
    self.RevisionSelection = (ClientCloudScriptRevisionOption)[properties valueForKey:@"ClientRevisionSelection"];
    
    self.SpecificRevision = [properties valueForKey:@"SpecificRevision"];
    

    return self;
}
@end
@implementation ClientExecuteCloudScriptResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.APIRequestsIssued = [properties valueForKey:@"APIRequestsIssued"];
    
    self.Error = [[ClientScriptExecutionError new] initWithDictionary:[properties objectForKey:@"Error"]];
    
    self.ExecutionTimeSeconds = [properties valueForKey:@"ExecutionTimeSeconds"];
    
    self.FunctionName = [properties valueForKey:@"FunctionName"];
    
    self.FunctionResult = [properties valueForKey:@"FunctionResult"];
    
    self.FunctionResultTooLarge = [[properties valueForKey:@"FunctionResultTooLarge"] boolValue];
    
    self.HttpRequestsIssued = [properties valueForKey:@"HttpRequestsIssued"];
    
    if ([properties objectForKey:@"Logs"]){
    NSArray* member_list = [properties objectForKey:@"Logs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientLogStatement new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Logs = [mutable_storage copy];
}

    
    self.LogsTooLarge = [[properties valueForKey:@"LogsTooLarge"] boolValue];
    
    self.MemoryConsumedBytes = [properties valueForKey:@"MemoryConsumedBytes"];
    
    self.ProcessorTimeSeconds = [properties valueForKey:@"ProcessorTimeSeconds"];
    
    self.Revision = [properties valueForKey:@"Revision"];
    

    return self;
}
@end
@implementation ClientFacebookInstantGamesPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FacebookInstantGamesId = [properties valueForKey:@"FacebookInstantGamesId"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientFacebookPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FacebookId = [properties valueForKey:@"FacebookId"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientFriendInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FacebookInfo = [[ClientUserFacebookInfo new] initWithDictionary:[properties objectForKey:@"FacebookInfo"]];
    
    self.FriendPlayFabId = [properties valueForKey:@"FriendPlayFabId"];
    
    self.GameCenterInfo = [[ClientUserGameCenterInfo new] initWithDictionary:[properties objectForKey:@"GameCenterInfo"]];
    
    self.Profile = [[ClientPlayerProfileModel new] initWithDictionary:[properties objectForKey:@"Profile"]];
    
    self.PSNInfo = [[ClientUserPsnInfo new] initWithDictionary:[properties objectForKey:@"PSNInfo"]];
    
    self.SteamInfo = [[ClientUserSteamInfo new] initWithDictionary:[properties objectForKey:@"SteamInfo"]];
    
    if ([properties objectForKey:@"Tags"]){
    NSArray* member_list = [properties objectForKey:@"Tags"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Tags = [mutable_storage copy];
}

    
    self.TitleDisplayName = [properties valueForKey:@"TitleDisplayName"];
    
    self.Username = [properties valueForKey:@"Username"];
    
    self.XboxInfo = [[ClientUserXboxInfo new] initWithDictionary:[properties objectForKey:@"XboxInfo"]];
    

    return self;
}
@end
@implementation ClientGameCenterPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GameCenterId = [properties valueForKey:@"GameCenterId"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientGameInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.BuildVersion = [properties valueForKey:@"BuildVersion"];
    
    self.GameMode = [properties valueForKey:@"GameMode"];
    
    self.GameServerData = [properties valueForKey:@"GameServerData"];
    
    self.GameServerStateEnum = (ClientGameInstanceState)[properties valueForKey:@"ClientGameServerStateEnum"];
    
    self.LastHeartbeat = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"LastHeartbeat"]];
    
    self.LobbyID = [properties valueForKey:@"LobbyID"];
    
    self.MaxPlayers = [properties valueForKey:@"MaxPlayers"];
    
    if ([properties objectForKey:@"PlayerUserIds"]){
    NSArray* member_list = [properties objectForKey:@"PlayerUserIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.PlayerUserIds = [mutable_storage copy];
}

    
    self.pfRegion = (ClientRegion)[properties valueForKey:@"ClientRegion"];
    
    self.RunTime = [properties valueForKey:@"RunTime"];
    
    self.ServerIPV4Address = [properties valueForKey:@"ServerIPV4Address"];
    
    self.ServerIPV6Address = [properties valueForKey:@"ServerIPV6Address"];
    
    self.ServerPort = [properties valueForKey:@"ServerPort"];
    
    self.ServerPublicDNSName = [properties valueForKey:@"ServerPublicDNSName"];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    if ([properties objectForKey:@"Tags"]){
    NSDictionary* member_list = [properties objectForKey:@"Tags"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Tags = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGameServerRegionsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.BuildVersion = [properties valueForKey:@"BuildVersion"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientGameServerRegionsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Regions"]){
    NSArray* member_list = [properties objectForKey:@"Regions"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientRegionInfo new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Regions = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGenericPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GenericId = [[ClientGenericServiceId new] initWithDictionary:[properties objectForKey:@"GenericId"]];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientGenericServiceId


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ServiceName = [properties valueForKey:@"ServiceName"];
    
    self.UserId = [properties valueForKey:@"UserId"];
    

    return self;
}
@end
@implementation ClientGetAccountInfoRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Email = [properties valueForKey:@"Email"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.TitleDisplayName = [properties valueForKey:@"TitleDisplayName"];
    
    self.Username = [properties valueForKey:@"Username"];
    

    return self;
}
@end
@implementation ClientGetAccountInfoResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AccountInfo = [[ClientUserAccountInfo new] initWithDictionary:[properties objectForKey:@"AccountInfo"]];
    

    return self;
}
@end
@implementation ClientGetCatalogItemsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    

    return self;
}
@end
@implementation ClientGetCatalogItemsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Catalog"]){
    NSArray* member_list = [properties objectForKey:@"Catalog"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientCatalogItem new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Catalog = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetCharacterDataRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.IfChangedFromDataVersion = [properties valueForKey:@"IfChangedFromDataVersion"];
    
    if ([properties objectForKey:@"Keys"]){
    NSArray* member_list = [properties objectForKey:@"Keys"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Keys = [mutable_storage copy];
}

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientGetCharacterDataResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[ClientUserDataRecord new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    
    self.DataVersion = [properties valueForKey:@"DataVersion"];
    

    return self;
}
@end
@implementation ClientGetCharacterInventoryRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    

    return self;
}
@end
@implementation ClientGetCharacterInventoryResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    if ([properties objectForKey:@"Inventory"]){
    NSArray* member_list = [properties objectForKey:@"Inventory"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Inventory = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrency"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrency"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrency = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrencyRechargeTimes"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrencyRechargeTimes"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[ClientVirtualCurrencyRechargeTime new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.VirtualCurrencyRechargeTimes = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetCharacterLeaderboardRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterType = [properties valueForKey:@"CharacterType"];
    
    self.MaxResultsCount = [properties valueForKey:@"MaxResultsCount"];
    
    self.StartPosition = [properties valueForKey:@"StartPosition"];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    

    return self;
}
@end
@implementation ClientGetCharacterLeaderboardResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Leaderboard"]){
    NSArray* member_list = [properties objectForKey:@"Leaderboard"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientCharacterLeaderboardEntry new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Leaderboard = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetCharacterStatisticsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    

    return self;
}
@end
@implementation ClientGetCharacterStatisticsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"CharacterStatistics"]){
    NSDictionary* member_list = [properties objectForKey:@"CharacterStatistics"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.CharacterStatistics = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetContentDownloadUrlRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.HttpMethod = [properties valueForKey:@"HttpMethod"];
    
    self.Key = [properties valueForKey:@"Key"];
    
    self.ThruCDN = [[properties valueForKey:@"ThruCDN"] boolValue];
    

    return self;
}
@end
@implementation ClientGetContentDownloadUrlResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.URL = [properties valueForKey:@"URL"];
    

    return self;
}
@end
@implementation ClientGetFriendLeaderboardAroundPlayerRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.IncludeFacebookFriends = [[properties valueForKey:@"IncludeFacebookFriends"] boolValue];
    
    self.IncludeSteamFriends = [[properties valueForKey:@"IncludeSteamFriends"] boolValue];
    
    self.MaxResultsCount = [properties valueForKey:@"MaxResultsCount"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.ProfileConstraints = [[ClientPlayerProfileViewConstraints new] initWithDictionary:[properties objectForKey:@"ProfileConstraints"]];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.Version = [properties valueForKey:@"Version"];
    
    self.XboxToken = [properties valueForKey:@"XboxToken"];
    

    return self;
}


-(NSDictionary*)getDictionary
{
    NSArray *boolToString = @[@"false", @"true"];

    NSMutableDictionary* dict = [@{
        @"MaxResultsCount": self.MaxResultsCount,
        @"ProfileConstraints": [self.ProfileConstraints getDictionary],
        @"StatisticName": self.StatisticName,
    } mutableCopy];

    if (self.PlayFabId != nil){
        [dict setObject:self.PlayFabId forKey:@"PlayFabId"];
    }
    if (self.IncludeFacebookFriends != nil){
        [dict setObject:boolToString[self.IncludeFacebookFriends] forKey:@"IncludeFacebookFriends"];
    }
    if (self.IncludeSteamFriends != nil){
        [dict setObject:boolToString[self.IncludeSteamFriends] forKey:@"IncludeSteamFriends"];
    }
    if (self.Version != nil){
        [dict setObject:self.Version forKey:@"Version"];
    }
    if (self.XboxToken != nil){
        [dict setObject:self.XboxToken forKey:@"XboxToken"];
    }
    return [[NSDictionary alloc] initWithDictionary:dict];
}

@end
@implementation ClientGetFriendLeaderboardAroundPlayerResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Leaderboard"]){
    NSArray* member_list = [properties objectForKey:@"Leaderboard"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientPlayerLeaderboardEntry new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Leaderboard = [mutable_storage copy];
}

    
    self.NextReset = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"NextReset"]];
    
    self.Version = [properties valueForKey:@"Version"];
    

    return self;
}
@end
@implementation ClientGetFriendLeaderboardRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    self.IncludeFacebookFriends = [[properties valueForKey:@"IncludeFacebookFriends"] boolValue];
    
    self.IncludeSteamFriends = [[properties valueForKey:@"IncludeSteamFriends"] boolValue];
    
    self.MaxResultsCount = [properties valueForKey:@"MaxResultsCount"];
    
    self.ProfileConstraints = [[ClientPlayerProfileViewConstraints new] initWithDictionary:[properties objectForKey:@"ProfileConstraints"]];
    
    self.StartPosition = [properties valueForKey:@"StartPosition"];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.Version = [properties valueForKey:@"Version"];
    
    self.XboxToken = [properties valueForKey:@"XboxToken"];

    return self;
}

-(NSDictionary*)getDictionary
{

    NSArray *boolToString = @[@"false", @"true"];

    NSMutableDictionary* dict = [@{
        @"MaxResultsCount": self.MaxResultsCount,
        @"ProfileConstraints": [self.ProfileConstraints getDictionary],
        @"StartPosition": self.StartPosition,
        @"StatisticName": self.StatisticName,
    } mutableCopy];

    if (self.IncludeFacebookFriends != nil){
        [dict setObject:boolToString[self.IncludeFacebookFriends] forKey:@"IncludeFacebookFriends"];
    }
    if (self.IncludeSteamFriends != nil){
        [dict setObject:boolToString[self.IncludeSteamFriends] forKey:@"IncludeSteamFriends"];
    }
    if (self.Version != nil){
        [dict setObject:self.Version forKey:@"Version"];
    }
    if (self.XboxToken != nil){
        [dict setObject:self.XboxToken forKey:@"XboxToken"];
    }

    return [[NSDictionary alloc] initWithDictionary:dict];
}

@end
@implementation ClientGetFriendsListRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.IncludeFacebookFriends = [[properties valueForKey:@"IncludeFacebookFriends"] boolValue];
    
    self.IncludeSteamFriends = [[properties valueForKey:@"IncludeSteamFriends"] boolValue];
    
    self.ProfileConstraints = [[ClientPlayerProfileViewConstraints new] initWithDictionary:[properties objectForKey:@"ProfileConstraints"]];
    
    self.XboxToken = [properties valueForKey:@"XboxToken"];
    

    return self;
}
@end
@implementation ClientGetFriendsListResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Friends"]){
    NSArray* member_list = [properties objectForKey:@"Friends"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientFriendInfo new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Friends = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetLeaderboardAroundCharacterRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.CharacterType = [properties valueForKey:@"CharacterType"];
    
    self.MaxResultsCount = [properties valueForKey:@"MaxResultsCount"];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    

    return self;
}
@end
@implementation ClientGetLeaderboardAroundCharacterResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Leaderboard"]){
    NSArray* member_list = [properties objectForKey:@"Leaderboard"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientCharacterLeaderboardEntry new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Leaderboard = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetLeaderboardAroundPlayerRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.MaxResultsCount = [properties valueForKey:@"MaxResultsCount"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.ProfileConstraints = [[ClientPlayerProfileViewConstraints new] initWithDictionary:[properties objectForKey:@"ProfileConstraints"]];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.Version = [properties valueForKey:@"Version"];
    
    return self;
}

-(NSDictionary*)getDictionary
{

    NSMutableDictionary* dict = [@{
        @"MaxResultsCount": self.MaxResultsCount,
        @"ProfileConstraints": [self.ProfileConstraints getDictionary],
        @"StatisticName": self.StatisticName,
    } mutableCopy];

    if (self.Version != nil){
        [dict setObject:self.Version forKey:@"Version"];
    }
    if (self.PlayFabId != nil){
        [dict setObject:self.PlayFabId forKey:@"PlayFabId"];
    }

    return [[NSDictionary alloc] initWithDictionary:dict];
}

@end
@implementation ClientGetLeaderboardAroundPlayerResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Leaderboard"]){
        NSArray* member_list = [properties objectForKey:@"Leaderboard"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientPlayerLeaderboardEntry new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.Leaderboard = [mutable_storage copy];
    }

    self.NextReset = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"NextReset"]];
    
    self.Version = [properties valueForKey:@"Version"];

    return self;
}
@end
@implementation ClientGetLeaderboardForUsersCharactersRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.MaxResultsCount = [properties valueForKey:@"MaxResultsCount"];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    

    return self;
}
@end
@implementation ClientGetLeaderboardForUsersCharactersResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Leaderboard"]){
    NSArray* member_list = [properties objectForKey:@"Leaderboard"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientCharacterLeaderboardEntry new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Leaderboard = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetLeaderboardRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    self.MaxResultsCount = [properties valueForKey:@"MaxResultsCount"];
    
    self.ProfileConstraints = [[ClientPlayerProfileViewConstraints new] initWithDictionary:[properties objectForKey:@"ProfileConstraints"]];
    
    self.StartPosition = [properties valueForKey:@"StartPosition"];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.Version = [properties valueForKey:@"Version"];

    return self;
}

-(NSDictionary*)getDictionary
{

    NSMutableDictionary* dict = [@{
        @"MaxResultsCount": self.MaxResultsCount,
        @"ProfileConstraints": [self.ProfileConstraints getDictionary],
        @"StartPosition": self.StartPosition,
        @"StatisticName": self.StatisticName,
    } mutableCopy];

    if (self.Version != nil){
        [dict setObject:self.Version forKey:@"Version"];
    }

    return [[NSDictionary alloc] initWithDictionary:dict];
}

@end
@implementation ClientGetLeaderboardResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Leaderboard"]){
    NSArray* member_list = [properties objectForKey:@"Leaderboard"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientPlayerLeaderboardEntry new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Leaderboard = [mutable_storage copy];
}

    
    self.NextReset = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"NextReset"]];
    
    self.Version = [properties valueForKey:@"Version"];
    

    return self;
}
@end
@implementation ClientGetPaymentTokenRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.TokenProvider = [properties valueForKey:@"TokenProvider"];
    

    return self;
}
@end
@implementation ClientGetPaymentTokenResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.OrderId = [properties valueForKey:@"OrderId"];
    
    self.ProviderToken = [properties valueForKey:@"ProviderToken"];
    

    return self;
}
@end
@implementation ClientGetPhotonAuthenticationTokenRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PhotonApplicationId = [properties valueForKey:@"PhotonApplicationId"];
    

    return self;
}
@end
@implementation ClientGetPhotonAuthenticationTokenResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PhotonCustomAuthenticationToken = [properties valueForKey:@"PhotonCustomAuthenticationToken"];
    

    return self;
}
@end
@implementation ClientGetPlayerCombinedInfoRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientGetPlayerCombinedInfoRequestParams


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GetCharacterInventories = [[properties valueForKey:@"GetCharacterInventories"] boolValue];
    
    self.GetCharacterList = [[properties valueForKey:@"GetCharacterList"] boolValue];
    
    self.GetPlayerProfile = [[properties valueForKey:@"GetPlayerProfile"] boolValue];
    
    self.GetPlayerStatistics = [[properties valueForKey:@"GetPlayerStatistics"] boolValue];
    
    self.GetTitleData = [[properties valueForKey:@"GetTitleData"] boolValue];
    
    self.GetUserAccountInfo = [[properties valueForKey:@"GetUserAccountInfo"] boolValue];
    
    self.GetUserData = [[properties valueForKey:@"GetUserData"] boolValue];
    
    self.GetUserInventory = [[properties valueForKey:@"GetUserInventory"] boolValue];
    
    self.GetUserReadOnlyData = [[properties valueForKey:@"GetUserReadOnlyData"] boolValue];
    
    self.GetUserVirtualCurrency = [[properties valueForKey:@"GetUserVirtualCurrency"] boolValue];
    
    if ([properties objectForKey:@"PlayerStatisticNames"]){
    NSArray* member_list = [properties objectForKey:@"PlayerStatisticNames"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.PlayerStatisticNames = [mutable_storage copy];
}

    
    self.ProfileConstraints = [[ClientPlayerProfileViewConstraints new] initWithDictionary:[properties objectForKey:@"ProfileConstraints"]];
    
    if ([properties objectForKey:@"TitleDataKeys"]){
    NSArray* member_list = [properties objectForKey:@"TitleDataKeys"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.TitleDataKeys = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"UserDataKeys"]){
    NSArray* member_list = [properties objectForKey:@"UserDataKeys"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.UserDataKeys = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"UserReadOnlyDataKeys"]){
    NSArray* member_list = [properties objectForKey:@"UserReadOnlyDataKeys"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.UserReadOnlyDataKeys = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayerCombinedInfoResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.InfoResultPayload = [[ClientGetPlayerCombinedInfoResultPayload new] initWithDictionary:[properties objectForKey:@"InfoResultPayload"]];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientGetPlayerCombinedInfoResultPayload


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AccountInfo = [[ClientUserAccountInfo new] initWithDictionary:[properties objectForKey:@"AccountInfo"]];
    
    if ([properties objectForKey:@"CharacterInventories"]){
    NSArray* member_list = [properties objectForKey:@"CharacterInventories"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientCharacterInventory new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.CharacterInventories = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"CharacterList"]){
    NSArray* member_list = [properties objectForKey:@"CharacterList"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientCharacterResult new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.CharacterList = [mutable_storage copy];
}

    
    self.PlayerProfile = [[ClientPlayerProfileModel new] initWithDictionary:[properties objectForKey:@"PlayerProfile"]];
    
    if ([properties objectForKey:@"PlayerStatistics"]){
    NSArray* member_list = [properties objectForKey:@"PlayerStatistics"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientStatisticValue new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.PlayerStatistics = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"TitleData"]){
    NSDictionary* member_list = [properties objectForKey:@"TitleData"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.TitleData = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"UserData"]){
    NSDictionary* member_list = [properties objectForKey:@"UserData"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[ClientUserDataRecord new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.UserData = [mutable_storage copy];
}

    
    self.UserDataVersion = [properties valueForKey:@"UserDataVersion"];
    
    if ([properties objectForKey:@"UserInventory"]){
    NSArray* member_list = [properties objectForKey:@"UserInventory"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.UserInventory = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"UserReadOnlyData"]){
    NSDictionary* member_list = [properties objectForKey:@"UserReadOnlyData"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[ClientUserDataRecord new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.UserReadOnlyData = [mutable_storage copy];
}

    
    self.UserReadOnlyDataVersion = [properties valueForKey:@"UserReadOnlyDataVersion"];
    
    if ([properties objectForKey:@"UserVirtualCurrency"]){
    NSDictionary* member_list = [properties objectForKey:@"UserVirtualCurrency"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.UserVirtualCurrency = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"UserVirtualCurrencyRechargeTimes"]){
    NSDictionary* member_list = [properties objectForKey:@"UserVirtualCurrencyRechargeTimes"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[ClientVirtualCurrencyRechargeTime new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.UserVirtualCurrencyRechargeTimes = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayerProfileRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.ProfileConstraints = [[ClientPlayerProfileViewConstraints new] initWithDictionary:[properties objectForKey:@"ProfileConstraints"]];
    

    return self;
}
@end
@implementation ClientGetPlayerProfileResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PlayerProfile = [[ClientPlayerProfileModel new] initWithDictionary:[properties objectForKey:@"PlayerProfile"]];
    

    return self;
}
@end
@implementation ClientGetPlayerSegmentsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientGetPlayerSegmentsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Segments"]){
    NSArray* member_list = [properties objectForKey:@"Segments"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientGetSegmentResult new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Segments = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayerStatisticsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"StatisticNames"]){
    NSArray* member_list = [properties objectForKey:@"StatisticNames"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.StatisticNames = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"StatisticNameVersions"]){
    NSArray* member_list = [properties objectForKey:@"StatisticNameVersions"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientStatisticNameVersion new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.StatisticNameVersions = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayerStatisticsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Statistics"]){
    NSArray* member_list = [properties objectForKey:@"Statistics"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientStatisticValue new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Statistics = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayerStatisticVersionsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    

    return self;
}
@end
@implementation ClientGetPlayerStatisticVersionsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"StatisticVersions"]){
    NSArray* member_list = [properties objectForKey:@"StatisticVersions"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientPlayerStatisticVersion new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.StatisticVersions = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayerTagsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Namespace = [properties valueForKey:@"Namespace"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientGetPlayerTagsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    if ([properties objectForKey:@"Tags"]){
    NSArray* member_list = [properties objectForKey:@"Tags"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Tags = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayerTradesRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.StatusFilter = (ClientTradeStatus)[properties valueForKey:@"ClientStatusFilter"];
    

    return self;
}
@end
@implementation ClientGetPlayerTradesResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"AcceptedTrades"]){
    NSArray* member_list = [properties objectForKey:@"AcceptedTrades"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientTradeInfo new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.AcceptedTrades = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"OpenedTrades"]){
    NSArray* member_list = [properties objectForKey:@"OpenedTrades"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientTradeInfo new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.OpenedTrades = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromFacebookIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"FacebookIDs"]){
    NSArray* member_list = [properties objectForKey:@"FacebookIDs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.FacebookIDs = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromFacebookIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientFacebookPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"FacebookInstantGamesIds"]){
    NSArray* member_list = [properties objectForKey:@"FacebookInstantGamesIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.FacebookInstantGamesIds = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromFacebookInstantGamesIdsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientFacebookInstantGamesPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromGameCenterIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"GameCenterIDs"]){
    NSArray* member_list = [properties objectForKey:@"GameCenterIDs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.GameCenterIDs = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromGameCenterIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientGameCenterPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromGenericIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"GenericIDs"]){
    NSArray* member_list = [properties objectForKey:@"GenericIDs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientGenericServiceId new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.GenericIDs = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromGenericIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientGenericPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromGoogleIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"GoogleIDs"]){
    NSArray* member_list = [properties objectForKey:@"GoogleIDs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.GoogleIDs = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromGoogleIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientGooglePlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromKongregateIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"KongregateIDs"]){
    NSArray* member_list = [properties objectForKey:@"KongregateIDs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.KongregateIDs = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromKongregateIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientKongregatePlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"NintendoSwitchDeviceIds"]){
    NSArray* member_list = [properties objectForKey:@"NintendoSwitchDeviceIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.NintendoSwitchDeviceIds = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientNintendoSwitchPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromPSNAccountIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.IssuerId = [properties valueForKey:@"IssuerId"];
    
    if ([properties objectForKey:@"PSNAccountIDs"]){
    NSArray* member_list = [properties objectForKey:@"PSNAccountIDs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.PSNAccountIDs = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromPSNAccountIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientPSNAccountPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromSteamIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"SteamStringIDs"]){
    NSArray* member_list = [properties objectForKey:@"SteamStringIDs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.SteamStringIDs = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromSteamIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientSteamPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromTwitchIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"TwitchIds"]){
    NSArray* member_list = [properties objectForKey:@"TwitchIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.TwitchIds = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromTwitchIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientTwitchPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromXboxLiveIDsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Sandbox = [properties valueForKey:@"Sandbox"];
    
    if ([properties objectForKey:@"XboxLiveAccountIDs"]){
    NSArray* member_list = [properties objectForKey:@"XboxLiveAccountIDs"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.XboxLiveAccountIDs = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPlayFabIDsFromXboxLiveIDsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSArray* member_list = [properties objectForKey:@"Data"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientXboxLiveAccountPlayFabIdPair new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPublisherDataRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Keys"]){
    NSArray* member_list = [properties objectForKey:@"Keys"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Keys = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPublisherDataResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetPurchaseRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.OrderId = [properties valueForKey:@"OrderId"];
    

    return self;
}
@end
@implementation ClientGetPurchaseResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.OrderId = [properties valueForKey:@"OrderId"];
    
    self.PaymentProvider = [properties valueForKey:@"PaymentProvider"];
    
    self.PurchaseDate = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"PurchaseDate"]];
    
    self.TransactionId = [properties valueForKey:@"TransactionId"];
    
    self.TransactionStatus = [properties valueForKey:@"TransactionStatus"];
    

    return self;
}
@end
@implementation ClientGetSegmentResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ABTestParent = [properties valueForKey:@"ABTestParent"];
    
    self.Id = [properties valueForKey:@"Id"];
    
    self.Name = [properties valueForKey:@"Name"];
    

    return self;
}
@end
@implementation ClientGetSharedGroupDataRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GetMembers = [[properties valueForKey:@"GetMembers"] boolValue];
    
    if ([properties objectForKey:@"Keys"]){
    NSArray* member_list = [properties objectForKey:@"Keys"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Keys = [mutable_storage copy];
}

    
    self.SharedGroupId = [properties valueForKey:@"SharedGroupId"];
    

    return self;
}
@end
@implementation ClientGetSharedGroupDataResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[ClientSharedGroupDataRecord new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"Members"]){
    NSArray* member_list = [properties objectForKey:@"Members"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Members = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetStoreItemsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.StoreId = [properties valueForKey:@"StoreId"];
    

    return self;
}
@end
@implementation ClientGetStoreItemsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.MarketingData = [[ClientStoreMarketingModel new] initWithDictionary:[properties objectForKey:@"MarketingData"]];
    
    self.Source = (ClientSourceType)[properties valueForKey:@"ClientSource"];
    
    if ([properties objectForKey:@"Store"]){
    NSArray* member_list = [properties objectForKey:@"Store"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientStoreItem new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Store = [mutable_storage copy];
}

    
    self.StoreId = [properties valueForKey:@"StoreId"];
    

    return self;
}
@end
@implementation ClientGetTimeRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientGetTimeResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Time = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Time"]];
    

    return self;
}
@end
@implementation ClientGetTitleDataRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Keys"]){
    NSArray* member_list = [properties objectForKey:@"Keys"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Keys = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetTitleDataResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetTitleNewsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Count = [properties valueForKey:@"Count"];
    

    return self;
}
@end
@implementation ClientGetTitleNewsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"News"]){
    NSArray* member_list = [properties objectForKey:@"News"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientTitleNewsItem new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.News = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetTitlePublicKeyRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.TitleId = [properties valueForKey:@"TitleId"];
    
    self.TitleSharedSecret = [properties valueForKey:@"TitleSharedSecret"];
    

    return self;
}
@end
@implementation ClientGetTitlePublicKeyResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.RSAPublicKey = [properties valueForKey:@"RSAPublicKey"];
    

    return self;
}
@end
@implementation ClientGetTradeStatusRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.OfferingPlayerId = [properties valueForKey:@"OfferingPlayerId"];
    
    self.TradeId = [properties valueForKey:@"TradeId"];
    

    return self;
}
@end
@implementation ClientGetTradeStatusResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Trade = [[ClientTradeInfo new] initWithDictionary:[properties objectForKey:@"Trade"]];
    

    return self;
}
@end
@implementation ClientGetUserDataRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.IfChangedFromDataVersion = [properties valueForKey:@"IfChangedFromDataVersion"];
    
    if ([properties objectForKey:@"Keys"]){
    NSArray* member_list = [properties objectForKey:@"Keys"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Keys = [mutable_storage copy];
}

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientGetUserDataResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[ClientUserDataRecord new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    
    self.DataVersion = [properties valueForKey:@"DataVersion"];
    

    return self;
}
@end
@implementation ClientGetUserInventoryRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientGetUserInventoryResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Inventory"]){
    NSArray* member_list = [properties objectForKey:@"Inventory"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Inventory = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrency"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrency"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrency = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrencyRechargeTimes"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrencyRechargeTimes"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[ClientVirtualCurrencyRechargeTime new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.VirtualCurrencyRechargeTimes = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientGetWindowsHelloChallengeRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PublicKeyHint = [properties valueForKey:@"PublicKeyHint"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientGetWindowsHelloChallengeResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Challenge = [properties valueForKey:@"Challenge"];
    

    return self;
}
@end
@implementation ClientGooglePlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GoogleId = [properties valueForKey:@"GoogleId"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientGrantCharacterToUserRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.CharacterName = [properties valueForKey:@"CharacterName"];
    
    self.ItemId = [properties valueForKey:@"ItemId"];
    

    return self;
}
@end
@implementation ClientGrantCharacterToUserResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.CharacterType = [properties valueForKey:@"CharacterType"];
    
    self.Result = [[properties valueForKey:@"Result"] boolValue];
    

    return self;
}
@end
@implementation ClientItemInstance


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Annotation = [properties valueForKey:@"Annotation"];
    
    if ([properties objectForKey:@"BundleContents"]){
    NSArray* member_list = [properties objectForKey:@"BundleContents"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.BundleContents = [mutable_storage copy];
}

    
    self.BundleParent = [properties valueForKey:@"BundleParent"];
    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    if ([properties objectForKey:@"CustomData"]){
    NSDictionary* member_list = [properties objectForKey:@"CustomData"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.CustomData = [mutable_storage copy];
}

    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.Expiration = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Expiration"]];
    
    self.ItemClass = [properties valueForKey:@"ItemClass"];
    
    self.ItemId = [properties valueForKey:@"ItemId"];
    
    self.ItemInstanceId = [properties valueForKey:@"ItemInstanceId"];
    
    self.PurchaseDate = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"PurchaseDate"]];
    
    self.RemainingUses = [properties valueForKey:@"RemainingUses"];
    
    self.UnitCurrency = [properties valueForKey:@"UnitCurrency"];
    
    self.UnitPrice = [properties valueForKey:@"UnitPrice"];
    
    self.UsesIncrementedBy = [properties valueForKey:@"UsesIncrementedBy"];
    

    return self;
}
@end
@implementation ClientItemPurchaseRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Annotation = [properties valueForKey:@"Annotation"];
    
    self.ItemId = [properties valueForKey:@"ItemId"];
    
    self.Quantity = [properties valueForKey:@"Quantity"];
    
    if ([properties objectForKey:@"UpgradeFromItems"]){
    NSArray* member_list = [properties objectForKey:@"UpgradeFromItems"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.UpgradeFromItems = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientKongregatePlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.KongregateId = [properties valueForKey:@"KongregateId"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientLinkAndroidDeviceIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AndroidDevice = [properties valueForKey:@"AndroidDevice"];
    
    self.AndroidDeviceId = [properties valueForKey:@"AndroidDeviceId"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.OS = [properties valueForKey:@"OS"];
    

    return self;
}
@end
@implementation ClientLinkAndroidDeviceIDResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkCustomIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CustomId = [properties valueForKey:@"CustomId"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    

    return self;
}
@end
@implementation ClientLinkCustomIDResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkedPlatformAccountModel

-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    NSArray* platformString = [self getPlatformList];
    
    self.Email = [properties valueForKey:@"Email"];

    self.Platform = [platformString indexOfObject:[properties valueForKey:@"Platform"]];
    
    self.PlatformUserId = [properties valueForKey:@"PlatformUserId"];
    
    self.Username = [properties valueForKey:@"Username"];
    
    return self;
}

-(NSDictionary*)getDictionary
{
    NSArray* platformString = [self getPlatformList];

    NSMutableDictionary* dict = [@{
        @"Platform": [platformString objectAtIndex:self.Platform],
        @"PlatformUserId": self.PlatformUserId,
    } mutableCopy];

    if(self.Username != nil){
        [dict setObject:self.Username forKey:@"Username"];
    }
    if(self.Email != nil){
        [dict setObject:self.Email forKey:@"Email"];
    }

    return [[NSDictionary alloc] initWithDictionary:dict];
}

-(NSArray*) getPlatformList{
    return @[
        @"Unknown",
        @"PlayFab",
        @"Custom",
        @"GameCenter",
        @"GooglePlay",
        @"Steam",
        @"XBoxLive",
        @"PSN",
        @"Kongregate",
        @"Facebook",
        @"IOSDevice",
        @"AndroidDevice",
        @"Twitch",
        @"WindowsHello",
        @"GameServer",
        @"CustomServer",
        @"NintendoSwitch",
        @"FacebookInstantGames",
        @"OpenIdConnect",
    ];
}
@end
@implementation ClientLinkFacebookAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AccessToken = [properties valueForKey:@"AccessToken"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    

    return self;
}
@end
@implementation ClientLinkFacebookAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkFacebookInstantGamesIdRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FacebookInstantGamesSignature = [properties valueForKey:@"FacebookInstantGamesSignature"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    

    return self;
}
@end
@implementation ClientLinkFacebookInstantGamesIdResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkGameCenterAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.GameCenterId = [properties valueForKey:@"GameCenterId"];
    
    self.PublicKeyUrl = [properties valueForKey:@"PublicKeyUrl"];
    
    self.Salt = [properties valueForKey:@"Salt"];
    
    self.Signature = [properties valueForKey:@"Signature"];
    
    self.Timestamp = [properties valueForKey:@"Timestamp"];
    

    return self;
}
@end
@implementation ClientLinkGameCenterAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkGoogleAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.ServerAuthCode = [properties valueForKey:@"ServerAuthCode"];
    

    return self;
}
@end
@implementation ClientLinkGoogleAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkIOSDeviceIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DeviceId = [properties valueForKey:@"DeviceId"];
    
    self.DeviceModel = [properties valueForKey:@"DeviceModel"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.OS = [properties valueForKey:@"OS"];
    

    return self;
}
@end
@implementation ClientLinkIOSDeviceIDResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkKongregateAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AuthTicket = [properties valueForKey:@"AuthTicket"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.KongregateId = [properties valueForKey:@"KongregateId"];
    

    return self;
}
@end
@implementation ClientLinkKongregateAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkNintendoSwitchDeviceIdRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.NintendoSwitchDeviceId = [properties valueForKey:@"NintendoSwitchDeviceId"];
    

    return self;
}
@end
@implementation ClientLinkNintendoSwitchDeviceIdResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkOpenIdConnectRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ConnectionId = [properties valueForKey:@"ConnectionId"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.IdToken = [properties valueForKey:@"IdToken"];
    

    return self;
}
@end
@implementation ClientLinkPSNAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AuthCode = [properties valueForKey:@"AuthCode"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.IssuerId = [properties valueForKey:@"IssuerId"];
    
    self.RedirectUri = [properties valueForKey:@"RedirectUri"];
    

    return self;
}
@end
@implementation ClientLinkPSNAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkSteamAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.SteamTicket = [properties valueForKey:@"SteamTicket"];
    

    return self;
}
@end
@implementation ClientLinkSteamAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkTwitchAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AccessToken = [properties valueForKey:@"AccessToken"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    

    return self;
}
@end
@implementation ClientLinkTwitchAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkWindowsHelloAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DeviceName = [properties valueForKey:@"DeviceName"];
    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.PublicKey = [properties valueForKey:@"PublicKey"];
    
    self.UserName = [properties valueForKey:@"UserName"];
    

    return self;
}
@end
@implementation ClientLinkWindowsHelloAccountResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientLinkXboxAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ForceLink = [[properties valueForKey:@"ForceLink"] boolValue];
    
    self.XboxToken = [properties valueForKey:@"XboxToken"];
    

    return self;
}
@end
@implementation ClientLinkXboxAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientListUsersCharactersRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientListUsersCharactersResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Characters"]){
    NSArray* member_list = [properties objectForKey:@"Characters"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientCharacterResult new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Characters = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientLocationModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.City = [properties valueForKey:@"City"];
    
    self.pfContinentCode = (ClientContinentCode)[properties valueForKey:@"ClientContinentCode"];
    
    self.pfCountryCode = (ClientCountryCode)[properties valueForKey:@"ClientCountryCode"];
    
    self.Latitude = [properties valueForKey:@"Latitude"];
    
    self.Longitude = [properties valueForKey:@"Longitude"];
    

    return self;
}
@end
@implementation ClientLoginResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.EntityToken = [[ClientEntityTokenResponse new] initWithDictionary:[properties objectForKey:@"EntityToken"]];
    
    self.InfoResultPayload = [[ClientGetPlayerCombinedInfoResultPayload new] initWithDictionary:[properties objectForKey:@"InfoResultPayload"]];
    
    self.LastLoginTime = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"LastLoginTime"]];
    
    self.NewlyCreated = [[properties valueForKey:@"NewlyCreated"] boolValue];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.SessionTicket = [properties valueForKey:@"SessionTicket"];
    
    self.SettingsForUser = [[ClientUserSettings new] initWithDictionary:[properties objectForKey:@"SettingsForUser"]];
    

    return self;
}
@end
@implementation ClientLoginWithAndroidDeviceIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AndroidDevice = [properties valueForKey:@"AndroidDevice"];
    
    self.AndroidDeviceId = [properties valueForKey:@"AndroidDeviceId"];
    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.OS = [properties valueForKey:@"OS"];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithCustomIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.CustomId = [properties valueForKey:@"CustomId"];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithEmailAddressRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Email = [properties valueForKey:@"Email"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.Password = [properties valueForKey:@"Password"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithFacebookInstantGamesIdRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.FacebookInstantGamesSignature = [properties valueForKey:@"FacebookInstantGamesSignature"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithFacebookRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AccessToken = [properties valueForKey:@"AccessToken"];
    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithGameCenterRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerId = [properties valueForKey:@"PlayerId"];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.PublicKeyUrl = [properties valueForKey:@"PublicKeyUrl"];
    
    self.Salt = [properties valueForKey:@"Salt"];
    
    self.Signature = [properties valueForKey:@"Signature"];
    
    self.Timestamp = [properties valueForKey:@"Timestamp"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithGoogleAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.ServerAuthCode = [properties valueForKey:@"ServerAuthCode"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithIOSDeviceIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.DeviceId = [properties valueForKey:@"DeviceId"];
    
    self.DeviceModel = [properties valueForKey:@"DeviceModel"];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.OS = [properties valueForKey:@"OS"];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithKongregateRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AuthTicket = [properties valueForKey:@"AuthTicket"];
    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.KongregateId = [properties valueForKey:@"KongregateId"];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithNintendoSwitchDeviceIdRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.NintendoSwitchDeviceId = [properties valueForKey:@"NintendoSwitchDeviceId"];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithOpenIdConnectRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ConnectionId = [properties valueForKey:@"ConnectionId"];
    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.IdToken = [properties valueForKey:@"IdToken"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithPlayFabRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.Password = [properties valueForKey:@"Password"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    
    self.Username = [properties valueForKey:@"Username"];
    

    return self;
}
@end
@implementation ClientLoginWithPSNRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AuthCode = [properties valueForKey:@"AuthCode"];
    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.IssuerId = [properties valueForKey:@"IssuerId"];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.RedirectUri = [properties valueForKey:@"RedirectUri"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithSteamRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.SteamTicket = [properties valueForKey:@"SteamTicket"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithTwitchRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AccessToken = [properties valueForKey:@"AccessToken"];
    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithWindowsHelloRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ChallengeSignature = [properties valueForKey:@"ChallengeSignature"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PublicKeyHint = [properties valueForKey:@"PublicKeyHint"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientLoginWithXboxRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreateAccount = [[properties valueForKey:@"CreateAccount"] boolValue];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    
    self.XboxToken = [properties valueForKey:@"XboxToken"];
    

    return self;
}
@end
@implementation ClientLogStatement


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Data = [properties valueForKey:@"Data"];
    
    self.Level = [properties valueForKey:@"Level"];
    
    self.Message = [properties valueForKey:@"Message"];
    

    return self;
}
@end
@implementation ClientMatchmakeRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.BuildVersion = [properties valueForKey:@"BuildVersion"];
    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.GameMode = [properties valueForKey:@"GameMode"];
    
    self.LobbyId = [properties valueForKey:@"LobbyId"];
    
    self.pfRegion = (ClientRegion)[properties valueForKey:@"ClientRegion"];
    
    self.StartNewIfNoneFound = [[properties valueForKey:@"StartNewIfNoneFound"] boolValue];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.TagFilter = [[ClientCollectionFilter new] initWithDictionary:[properties objectForKey:@"TagFilter"]];
    

    return self;
}
@end
@implementation ClientMatchmakeResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Expires = [properties valueForKey:@"Expires"];
    
    self.LobbyID = [properties valueForKey:@"LobbyID"];
    
    self.PollWaitTimeMS = [properties valueForKey:@"PollWaitTimeMS"];
    
    self.ServerIPV4Address = [properties valueForKey:@"ServerIPV4Address"];
    
    self.ServerIPV6Address = [properties valueForKey:@"ServerIPV6Address"];
    
    self.ServerPort = [properties valueForKey:@"ServerPort"];
    
    self.ServerPublicDNSName = [properties valueForKey:@"ServerPublicDNSName"];
    
    self.Status = (ClientMatchmakeStatus)[properties valueForKey:@"ClientStatus"];
    
    self.Ticket = [properties valueForKey:@"Ticket"];
    

    return self;
}
@end
@implementation ClientMembershipModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.IsActive = [[properties valueForKey:@"IsActive"] boolValue];
    
    self.MembershipExpiration = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"MembershipExpiration"]];
    
    self.MembershipId = [properties valueForKey:@"MembershipId"];
    
    self.OverrideExpiration = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"OverrideExpiration"]];
    
    if ([properties objectForKey:@"Subscriptions"]){
    NSArray* member_list = [properties objectForKey:@"Subscriptions"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientSubscriptionModel new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Subscriptions = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientModifyUserVirtualCurrencyResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Balance = [properties valueForKey:@"Balance"];
    
    self.BalanceChange = [properties valueForKey:@"BalanceChange"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.VirtualCurrency = [properties valueForKey:@"VirtualCurrency"];
    

    return self;
}
@end
@implementation ClientNintendoSwitchPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.NintendoSwitchDeviceId = [properties valueForKey:@"NintendoSwitchDeviceId"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    

    return self;
}
@end
@implementation ClientOpenTradeRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"AllowedPlayerIds"]){
    NSArray* member_list = [properties objectForKey:@"AllowedPlayerIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.AllowedPlayerIds = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"OfferedInventoryInstanceIds"]){
    NSArray* member_list = [properties objectForKey:@"OfferedInventoryInstanceIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.OfferedInventoryInstanceIds = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"RequestedCatalogItemIds"]){
    NSArray* member_list = [properties objectForKey:@"RequestedCatalogItemIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.RequestedCatalogItemIds = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientOpenTradeResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Trade = [[ClientTradeInfo new] initWithDictionary:[properties objectForKey:@"Trade"]];
    

    return self;
}
@end
@implementation ClientPayForPurchaseRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Currency = [properties valueForKey:@"Currency"];
    
    self.OrderId = [properties valueForKey:@"OrderId"];
    
    self.ProviderName = [properties valueForKey:@"ProviderName"];
    
    self.ProviderTransactionId = [properties valueForKey:@"ProviderTransactionId"];
    

    return self;
}
@end
@implementation ClientPayForPurchaseResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CreditApplied = [properties valueForKey:@"CreditApplied"];
    
    self.OrderId = [properties valueForKey:@"OrderId"];
    
    self.ProviderData = [properties valueForKey:@"ProviderData"];
    
    self.ProviderToken = [properties valueForKey:@"ProviderToken"];
    
    self.PurchaseConfirmationPageURL = [properties valueForKey:@"PurchaseConfirmationPageURL"];
    
    self.PurchaseCurrency = [properties valueForKey:@"PurchaseCurrency"];
    
    self.PurchasePrice = [properties valueForKey:@"PurchasePrice"];
    
    self.Status = (ClientTransactionStatus)[properties valueForKey:@"ClientStatus"];
    
    if ([properties objectForKey:@"VCAmount"]){
    NSDictionary* member_list = [properties objectForKey:@"VCAmount"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VCAmount = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrency"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrency"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrency = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientPaymentOption


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Currency = [properties valueForKey:@"Currency"];
    
    self.Price = [properties valueForKey:@"Price"];
    
    self.ProviderName = [properties valueForKey:@"ProviderName"];
    
    self.StoreCredit = [properties valueForKey:@"StoreCredit"];
    

    return self;
}
@end
@implementation ClientPlayerLeaderboardEntry


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.Position = [properties valueForKey:@"Position"];
    
    self.Profile = [[ClientPlayerProfileModel new] initWithDictionary:[properties objectForKey:@"Profile"]];
    
    self.StatValue = [properties valueForKey:@"StatValue"];
    
    return self;
}

-(NSDictionary*)getDictionary
{
    NSMutableDictionary* dict = [@{
        @"PlayFabId": self.PlayFabId,
        @"Position": self.Position,
        @"Profile": [self.Profile getDictionary],
        @"StatValue": self.StatValue,
    } mutableCopy];

    if(self.DisplayName != nil){
        [dict setObject:self.DisplayName forKey:@"DisplayName"];
    }

    return [[NSDictionary alloc] initWithDictionary:dict];
}
@end
@implementation ClientPlayerProfileModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"AdCampaignAttributions"]){
        NSArray* member_list = [properties objectForKey:@"AdCampaignAttributions"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientAdCampaignAttributionModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.AdCampaignAttributions = [mutable_storage copy];
    }

    
    self.AvatarUrl = [properties valueForKey:@"AvatarUrl"];
    
    self.BannedUntil = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"BannedUntil"]];
    
    if ([properties objectForKey:@"ContactEmailAddresses"]){
        NSArray* member_list = [properties objectForKey:@"ContactEmailAddresses"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientContactEmailInfoModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.ContactEmailAddresses = [mutable_storage copy];
    }

    
    self.Created = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Created"]];
    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.LastLogin = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"LastLogin"]];
    
    if ([properties objectForKey:@"LinkedAccounts"]){
        NSArray* member_list = [properties objectForKey:@"LinkedAccounts"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientLinkedPlatformAccountModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.LinkedAccounts = [mutable_storage copy];
    }

    
    if ([properties objectForKey:@"Locations"]){
        NSArray* member_list = [properties objectForKey:@"Locations"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientLocationModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.Locations = [mutable_storage copy];
    }

    
    if ([properties objectForKey:@"Memberships"]){
        NSArray* member_list = [properties objectForKey:@"Memberships"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientMembershipModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.Memberships = [mutable_storage copy];
    }

    
    self.Origination = (ClientLoginIdentityProvider)[properties valueForKey:@"ClientOrigination"];
    
    self.PlayerId = [properties valueForKey:@"PlayerId"];
    
    self.PublisherId = [properties valueForKey:@"PublisherId"];
    
    if ([properties objectForKey:@"PushNotificationRegistrations"]){
        NSArray* member_list = [properties objectForKey:@"PushNotificationRegistrations"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientPushNotificationRegistrationModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.PushNotificationRegistrations = [mutable_storage copy];
    }

    
    if ([properties objectForKey:@"Statistics"]){
        NSArray* member_list = [properties objectForKey:@"Statistics"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientStatisticModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.Statistics = [mutable_storage copy];
    }

    
    if ([properties objectForKey:@"Tags"]){
        NSArray* member_list = [properties objectForKey:@"Tags"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientTagModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.Tags = [mutable_storage copy];
    }

    
    self.TitleId = [properties valueForKey:@"TitleId"];
    
    self.TotalValueToDateInUSD = [properties valueForKey:@"TotalValueToDateInUSD"];
    
    if ([properties objectForKey:@"ValuesToDate"]){
        NSArray* member_list = [properties objectForKey:@"ValuesToDate"];
        NSMutableArray* mutable_storage = [NSMutableArray new];
        for(int i=0;i<[member_list count];i++){
            [mutable_storage addObject:[[ClientValueToDateModel new] initWithDictionary:[member_list objectAtIndex:i]]];
        }
        self.ValuesToDate = [mutable_storage copy];
    }

    return self;
}

-(NSDictionary*)getDictionary
{

    NSArray *boolToString = @[@"false", @"true"];

    NSMutableDictionary* dict = [@{
        @"PlayerId": self.PlayerId,
        @"PublisherId": self.PublisherId,
        @"TitleId": self.TitleId,
    } mutableCopy];

    if(self.AvatarUrl != nil){
        [dict setObject:self.AvatarUrl forKey:@"AvatarUrl"];
    }
    if(self.BannedUntil != nil){
        [dict setObject:self.BannedUntil forKey:@"BannedUntil"];
    }
    if(self.Created != nil){
        [dict setObject:self.Created forKey:@"Created"];
    }
    if(self.DisplayName != nil){
        [dict setObject:self.DisplayName forKey:@"DisplayName"];
    }
    if(self.LastLogin != nil){
        [dict setObject:self.LastLogin forKey:@"LastLogin"];
    }
    if(self.Origination != nil){
        [dict setObject:[NSNumber numberWithInt:self.Origination] forKey:@"Origination"];
    }
    if(self.TotalValueToDateInUSD != nil){
        [dict setObject:self.TotalValueToDateInUSD forKey:@"TotalValueToDateInUSD"];
    }
    if(self.AdCampaignAttributions != nil){
        [dict setObject:[self.AdCampaignAttributions convertToNSString] forKey:@"AdCampaignAttributions"];
    }
    if(self.ContactEmailAddresses != nil){
        [dict setObject:[self.ContactEmailAddresses convertToNSString] forKey:@"ContactEmailAddresses"];
    }
    if(self.LinkedAccounts != nil){
        NSMutableArray* linkedAccountsDicts = [[NSMutableArray alloc] init];
        for (ClientLinkedPlatformAccountModel* linkedAccount in self.LinkedAccounts){
            [linkedAccountsDicts addObject:[linkedAccount getDictionary]];
        }
        [dict setObject:[[NSArray alloc] initWithArray: linkedAccountsDicts] forKey:@"LinkedAccounts"];
    }
    if(self.Locations != nil){
        [dict setObject:[self.Locations convertToNSString] forKey:@"Locations"];
    }
    if(self.Memberships != nil){
        [dict setObject:[self.Memberships convertToNSString] forKey:@"Memberships"];
    }
    if(self.PushNotificationRegistrations != nil){
        [dict setObject:[self.PushNotificationRegistrations convertToNSString] forKey:@"PushNotificationRegistrations"];
    }
    if(self.Statistics != nil){
        [dict setObject:[self.Statistics convertToNSString] forKey:@"Statistics"];
    }
    if(self.Tags != nil){
        [dict setObject:[self.Tags convertToNSString] forKey:@"Tags"];
    }
    if(self.ValuesToDate != nil){
        [dict setObject:[self.ValuesToDate convertToNSString] forKey:@"ValuesToDate"];
    }


    return [[NSDictionary alloc] initWithDictionary:dict];
}
@end
@implementation ClientPlayerProfileViewConstraints


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ShowAvatarUrl = [[properties valueForKey:@"ShowAvatarUrl"] boolValue];
    
    self.ShowBannedUntil = [[properties valueForKey:@"ShowBannedUntil"] boolValue];
    
    self.ShowCampaignAttributions = [[properties valueForKey:@"ShowCampaignAttributions"] boolValue];
    
    self.ShowContactEmailAddresses = [[properties valueForKey:@"ShowContactEmailAddresses"] boolValue];
    
    self.ShowCreated = [[properties valueForKey:@"ShowCreated"] boolValue];
    
    self.ShowDisplayName = [[properties valueForKey:@"ShowDisplayName"] boolValue];
    
    self.ShowLastLogin = [[properties valueForKey:@"ShowLastLogin"] boolValue];
    
    self.ShowLinkedAccounts = [[properties valueForKey:@"ShowLinkedAccounts"] boolValue];
    
    self.ShowLocations = [[properties valueForKey:@"ShowLocations"] boolValue];
    
    self.ShowMemberships = [[properties valueForKey:@"ShowMemberships"] boolValue];
    
    self.ShowOrigination = [[properties valueForKey:@"ShowOrigination"] boolValue];
    
    self.ShowPushNotificationRegistrations = [[properties valueForKey:@"ShowPushNotificationRegistrations"] boolValue];
    
    self.ShowStatistics = [[properties valueForKey:@"ShowStatistics"] boolValue];
    
    self.ShowTags = [[properties valueForKey:@"ShowTags"] boolValue];
    
    self.ShowTotalValueToDateInUsd = [[properties valueForKey:@"ShowTotalValueToDateInUsd"] boolValue];
    
    self.ShowValuesToDate = [[properties valueForKey:@"ShowValuesToDate"] boolValue];

    return self;
}


-(NSDictionary*)getDictionary
{


    NSArray *boolToString = @[@"false", @"true"];

    NSDictionary* dict = @{
        @"ShowAvatarUrl": boolToString[self.ShowAvatarUrl],
        @"ShowBannedUntil": boolToString[self.ShowBannedUntil],
        @"ShowCampaignAttributions": boolToString[self.ShowCampaignAttributions],
        @"ShowContactEmailAddresses": boolToString[self.ShowContactEmailAddresses],
        @"ShowCreated": boolToString[self.ShowCreated],
        @"ShowDisplayName": boolToString[self.ShowDisplayName],
        @"ShowLastLogin": boolToString[self.ShowLastLogin],
        @"ShowLinkedAccounts": boolToString[self.ShowLinkedAccounts],
        @"ShowLocations": boolToString[self.ShowLocations],
        @"ShowMemberships": boolToString[self.ShowMemberships],
        @"ShowOrigination": boolToString[self.ShowOrigination],
        @"ShowPushNotificationRegistrations": boolToString[self.ShowPushNotificationRegistrations],
        @"ShowStatistics": boolToString[self.ShowStatistics],
        @"ShowTags": boolToString[self.ShowTags],
        @"ShowTotalValueToDateInUsd": boolToString[self.ShowTotalValueToDateInUsd],
        @"ShowValuesToDate": boolToString[self.ShowValuesToDate],
    };


    return dict;
}

@end
@implementation ClientPlayerStatisticVersion


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ActivationTime = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"ActivationTime"]];
    
    self.DeactivationTime = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"DeactivationTime"]];
    
    self.ScheduledActivationTime = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"ScheduledActivationTime"]];
    
    self.ScheduledDeactivationTime = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"ScheduledDeactivationTime"]];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.Version = [properties valueForKey:@"Version"];
    

    return self;
}
@end
@implementation ClientPSNAccountPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.PSNAccountId = [properties valueForKey:@"PSNAccountId"];
    

    return self;
}
@end
@implementation ClientPurchaseItemRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.ItemId = [properties valueForKey:@"ItemId"];
    
    self.Price = [properties valueForKey:@"Price"];
    
    self.StoreId = [properties valueForKey:@"StoreId"];
    
    self.VirtualCurrency = [properties valueForKey:@"VirtualCurrency"];
    

    return self;
}
@end
@implementation ClientPurchaseItemResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Items"]){
    NSArray* member_list = [properties objectForKey:@"Items"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Items = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientPushNotificationRegistrationModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.NotificationEndpointARN = [properties valueForKey:@"NotificationEndpointARN"];
    
    self.Platform = (ClientPushNotificationPlatform)[properties valueForKey:@"ClientPlatform"];
    

    return self;
}
@end
@implementation ClientRedeemCouponRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.CouponCode = [properties valueForKey:@"CouponCode"];
    

    return self;
}
@end
@implementation ClientRedeemCouponResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"GrantedItems"]){
    NSArray* member_list = [properties objectForKey:@"GrantedItems"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.GrantedItems = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientRefreshPSNAuthTokenRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AuthCode = [properties valueForKey:@"AuthCode"];
    
    self.IssuerId = [properties valueForKey:@"IssuerId"];
    
    self.RedirectUri = [properties valueForKey:@"RedirectUri"];
    

    return self;
}
@end
@implementation ClientRegionInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Available = [[properties valueForKey:@"Available"] boolValue];
    
    self.Name = [properties valueForKey:@"Name"];
    
    self.PingUrl = [properties valueForKey:@"PingUrl"];
    
    self.pfRegion = (ClientRegion)[properties valueForKey:@"ClientRegion"];
    

    return self;
}
@end
@implementation ClientRegisterForIOSPushNotificationRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ConfirmationMessage = [properties valueForKey:@"ConfirmationMessage"];
    
    self.DeviceToken = [properties valueForKey:@"DeviceToken"];
    
    self.SendPushNotificationConfirmation = [[properties valueForKey:@"SendPushNotificationConfirmation"] boolValue];
    

    return self;
}
@end
@implementation ClientRegisterForIOSPushNotificationResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientRegisterPlayFabUserRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.Email = [properties valueForKey:@"Email"];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.Password = [properties valueForKey:@"Password"];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.RequireBothUsernameAndEmail = [[properties valueForKey:@"RequireBothUsernameAndEmail"] boolValue];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    
    self.Username = [properties valueForKey:@"Username"];
    

    return self;
}
@end
@implementation ClientRegisterPlayFabUserResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.EntityToken = [[ClientEntityTokenResponse new] initWithDictionary:[properties objectForKey:@"EntityToken"]];
    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.SessionTicket = [properties valueForKey:@"SessionTicket"];
    
    self.SettingsForUser = [[ClientUserSettings new] initWithDictionary:[properties objectForKey:@"SettingsForUser"]];
    
    self.Username = [properties valueForKey:@"Username"];
    

    return self;
}
@end
@implementation ClientRegisterWithWindowsHelloRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DeviceName = [properties valueForKey:@"DeviceName"];
    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.InfoRequestParameters = [[ClientGetPlayerCombinedInfoRequestParams new] initWithDictionary:[properties objectForKey:@"InfoRequestParameters"]];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    
    self.PublicKey = [properties valueForKey:@"PublicKey"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    
    self.UserName = [properties valueForKey:@"UserName"];
    

    return self;
}
@end
@implementation ClientRemoveContactEmailRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientRemoveContactEmailResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientRemoveFriendRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FriendPlayFabId = [properties valueForKey:@"FriendPlayFabId"];
    

    return self;
}
@end
@implementation ClientRemoveFriendResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientRemoveGenericIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GenericId = [[ClientGenericServiceId new] initWithDictionary:[properties objectForKey:@"GenericId"]];
    

    return self;
}
@end
@implementation ClientRemoveGenericIDResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientRemoveSharedGroupMembersRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"PlayFabIds"]){
    NSArray* member_list = [properties objectForKey:@"PlayFabIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.PlayFabIds = [mutable_storage copy];
}

    
    self.SharedGroupId = [properties valueForKey:@"SharedGroupId"];
    

    return self;
}
@end
@implementation ClientRemoveSharedGroupMembersResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientReportPlayerClientRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Comment = [properties valueForKey:@"Comment"];
    
    self.ReporteeId = [properties valueForKey:@"ReporteeId"];
    

    return self;
}
@end
@implementation ClientReportPlayerClientResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.SubmissionsRemaining = [properties valueForKey:@"SubmissionsRemaining"];
    

    return self;
}
@end
@implementation ClientRestoreIOSPurchasesRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ReceiptData = [properties valueForKey:@"ReceiptData"];
    

    return self;
}
@end
@implementation ClientRestoreIOSPurchasesResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientScriptExecutionError


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Error = [properties valueForKey:@"Error"];
    
    self.Message = [properties valueForKey:@"Message"];
    
    self.StackTrace = [properties valueForKey:@"StackTrace"];
    

    return self;
}
@end
@implementation ClientSendAccountRecoveryEmailRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Email = [properties valueForKey:@"Email"];
    
    self.EmailTemplateId = [properties valueForKey:@"EmailTemplateId"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    

    return self;
}
@end
@implementation ClientSendAccountRecoveryEmailResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientSetFriendTagsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FriendPlayFabId = [properties valueForKey:@"FriendPlayFabId"];
    
    if ([properties objectForKey:@"Tags"]){
    NSArray* member_list = [properties objectForKey:@"Tags"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.Tags = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientSetFriendTagsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientSetPlayerSecretRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.EncryptedRequest = [properties valueForKey:@"EncryptedRequest"];
    
    self.PlayerSecret = [properties valueForKey:@"PlayerSecret"];
    

    return self;
}
@end
@implementation ClientSetPlayerSecretResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientSharedGroupDataRecord


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.LastUpdated = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"LastUpdated"]];
    
    self.LastUpdatedBy = [properties valueForKey:@"LastUpdatedBy"];
    
    self.Permission = (ClientUserDataPermission)[properties valueForKey:@"ClientPermission"];
    
    self.Value = [properties valueForKey:@"Value"];
    

    return self;
}
@end
@implementation ClientStartGameRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.BuildVersion = [properties valueForKey:@"BuildVersion"];
    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.CustomCommandLineData = [properties valueForKey:@"CustomCommandLineData"];
    
    self.GameMode = [properties valueForKey:@"GameMode"];
    
    self.pfRegion = (ClientRegion)[properties valueForKey:@"ClientRegion"];
    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    

    return self;
}
@end
@implementation ClientStartGameResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Expires = [properties valueForKey:@"Expires"];
    
    self.LobbyID = [properties valueForKey:@"LobbyID"];
    
    self.Password = [properties valueForKey:@"Password"];
    
    self.ServerIPV4Address = [properties valueForKey:@"ServerIPV4Address"];
    
    self.ServerIPV6Address = [properties valueForKey:@"ServerIPV6Address"];
    
    self.ServerPort = [properties valueForKey:@"ServerPort"];
    
    self.ServerPublicDNSName = [properties valueForKey:@"ServerPublicDNSName"];
    
    self.Ticket = [properties valueForKey:@"Ticket"];
    

    return self;
}
@end
@implementation ClientStartPurchaseRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    if ([properties objectForKey:@"Items"]){
    NSArray* member_list = [properties objectForKey:@"Items"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemPurchaseRequest new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Items = [mutable_storage copy];
}

    
    self.StoreId = [properties valueForKey:@"StoreId"];
    

    return self;
}
@end
@implementation ClientStartPurchaseResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Contents"]){
    NSArray* member_list = [properties objectForKey:@"Contents"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientCartItem new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Contents = [mutable_storage copy];
}

    
    self.OrderId = [properties valueForKey:@"OrderId"];
    
    if ([properties objectForKey:@"PaymentOptions"]){
    NSArray* member_list = [properties objectForKey:@"PaymentOptions"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientPaymentOption new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.PaymentOptions = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrencyBalances"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrencyBalances"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrencyBalances = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientStatisticModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Name = [properties valueForKey:@"Name"];
    
    self.Value = [properties valueForKey:@"Value"];
    
    self.Version = [properties valueForKey:@"Version"];
    

    return self;
}
@end
@implementation ClientStatisticNameVersion


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.Version = [properties valueForKey:@"Version"];
    

    return self;
}
@end
@implementation ClientStatisticUpdate


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.Value = [properties valueForKey:@"Value"];
    
    self.Version = [properties valueForKey:@"Version"];
    

    return self;
}
@end
@implementation ClientStatisticValue


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.StatisticName = [properties valueForKey:@"StatisticName"];
    
    self.Value = [properties valueForKey:@"Value"];
    
    self.Version = [properties valueForKey:@"Version"];
    

    return self;
}
@end
@implementation ClientSteamPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.SteamStringId = [properties valueForKey:@"SteamStringId"];
    

    return self;
}
@end
@implementation ClientStoreItem


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CustomData = [properties valueForKey:@"CustomData"];
    
    self.DisplayPosition = [properties valueForKey:@"DisplayPosition"];
    
    self.ItemId = [properties valueForKey:@"ItemId"];
    
    if ([properties objectForKey:@"RealCurrencyPrices"]){
    NSDictionary* member_list = [properties objectForKey:@"RealCurrencyPrices"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.RealCurrencyPrices = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"VirtualCurrencyPrices"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrencyPrices"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrencyPrices = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientStoreMarketingModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Description = [properties valueForKey:@"Description"];
    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.Metadata = [properties valueForKey:@"Metadata"];
    

    return self;
}
@end
@implementation ClientSubscriptionModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Expiration = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Expiration"]];
    
    self.InitialSubscriptionTime = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"InitialSubscriptionTime"]];
    
    self.IsActive = [[properties valueForKey:@"IsActive"] boolValue];
    
    self.Status = (ClientSubscriptionProviderStatus)[properties valueForKey:@"ClientStatus"];
    
    self.SubscriptionId = [properties valueForKey:@"SubscriptionId"];
    
    self.SubscriptionItemId = [properties valueForKey:@"SubscriptionItemId"];
    
    self.SubscriptionProvider = [properties valueForKey:@"SubscriptionProvider"];
    

    return self;
}
@end
@implementation ClientSubtractUserVirtualCurrencyRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Amount = [properties valueForKey:@"Amount"];
    
    self.VirtualCurrency = [properties valueForKey:@"VirtualCurrency"];
    

    return self;
}
@end
@implementation ClientTagModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.TagValue = [properties valueForKey:@"TagValue"];
    

    return self;
}
@end
@implementation ClientTitleNewsItem


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Body = [properties valueForKey:@"Body"];
    
    self.NewsId = [properties valueForKey:@"NewsId"];
    
    self.Timestamp = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Timestamp"]];
    
    self.Title = [properties valueForKey:@"Title"];
    

    return self;
}
@end
@implementation ClientTradeInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"AcceptedInventoryInstanceIds"]){
    NSArray* member_list = [properties objectForKey:@"AcceptedInventoryInstanceIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.AcceptedInventoryInstanceIds = [mutable_storage copy];
}

    
    self.AcceptedPlayerId = [properties valueForKey:@"AcceptedPlayerId"];
    
    if ([properties objectForKey:@"AllowedPlayerIds"]){
    NSArray* member_list = [properties objectForKey:@"AllowedPlayerIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.AllowedPlayerIds = [mutable_storage copy];
}

    
    self.CancelledAt = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"CancelledAt"]];
    
    self.FilledAt = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"FilledAt"]];
    
    self.InvalidatedAt = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"InvalidatedAt"]];
    
    if ([properties objectForKey:@"OfferedCatalogItemIds"]){
    NSArray* member_list = [properties objectForKey:@"OfferedCatalogItemIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.OfferedCatalogItemIds = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"OfferedInventoryInstanceIds"]){
    NSArray* member_list = [properties objectForKey:@"OfferedInventoryInstanceIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.OfferedInventoryInstanceIds = [mutable_storage copy];
}

    
    self.OfferingPlayerId = [properties valueForKey:@"OfferingPlayerId"];
    
    self.OpenedAt = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"OpenedAt"]];
    
    if ([properties objectForKey:@"RequestedCatalogItemIds"]){
    NSArray* member_list = [properties objectForKey:@"RequestedCatalogItemIds"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.RequestedCatalogItemIds = [mutable_storage copy];
}

    
    self.Status = (ClientTradeStatus)[properties valueForKey:@"ClientStatus"];
    
    self.TradeId = [properties valueForKey:@"TradeId"];
    

    return self;
}
@end
@implementation ClientTwitchPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.TwitchId = [properties valueForKey:@"TwitchId"];
    

    return self;
}
@end
@implementation ClientUninkOpenIdConnectRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ConnectionId = [properties valueForKey:@"ConnectionId"];
    

    return self;
}
@end
@implementation ClientUnlinkAndroidDeviceIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AndroidDeviceId = [properties valueForKey:@"AndroidDeviceId"];
    

    return self;
}
@end
@implementation ClientUnlinkAndroidDeviceIDResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkCustomIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CustomId = [properties valueForKey:@"CustomId"];
    

    return self;
}
@end
@implementation ClientUnlinkCustomIDResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkFacebookAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkFacebookAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkFacebookInstantGamesIdRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FacebookInstantGamesId = [properties valueForKey:@"FacebookInstantGamesId"];
    

    return self;
}
@end
@implementation ClientUnlinkFacebookInstantGamesIdResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkGameCenterAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkGameCenterAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkGoogleAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkGoogleAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkIOSDeviceIDRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DeviceId = [properties valueForKey:@"DeviceId"];
    

    return self;
}
@end
@implementation ClientUnlinkIOSDeviceIDResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkKongregateAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkKongregateAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkNintendoSwitchDeviceIdRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.NintendoSwitchDeviceId = [properties valueForKey:@"NintendoSwitchDeviceId"];
    

    return self;
}
@end
@implementation ClientUnlinkNintendoSwitchDeviceIdResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkPSNAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkPSNAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkSteamAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkSteamAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkTwitchAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkTwitchAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkWindowsHelloAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PublicKeyHint = [properties valueForKey:@"PublicKeyHint"];
    

    return self;
}
@end
@implementation ClientUnlinkWindowsHelloAccountResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlinkXboxAccountRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.XboxToken = [properties valueForKey:@"XboxToken"];
    

    return self;
}
@end
@implementation ClientUnlinkXboxAccountResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUnlockContainerInstanceRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.ContainerItemInstanceId = [properties valueForKey:@"ContainerItemInstanceId"];
    
    self.KeyItemInstanceId = [properties valueForKey:@"KeyItemInstanceId"];
    

    return self;
}
@end
@implementation ClientUnlockContainerItemRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.ContainerItemId = [properties valueForKey:@"ContainerItemId"];
    

    return self;
}
@end
@implementation ClientUnlockContainerItemResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"GrantedItems"]){
    NSArray* member_list = [properties objectForKey:@"GrantedItems"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientItemInstance new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.GrantedItems = [mutable_storage copy];
}

    
    self.UnlockedItemInstanceId = [properties valueForKey:@"UnlockedItemInstanceId"];
    
    self.UnlockedWithItemInstanceId = [properties valueForKey:@"UnlockedWithItemInstanceId"];
    
    if ([properties objectForKey:@"VirtualCurrency"]){
    NSDictionary* member_list = [properties objectForKey:@"VirtualCurrency"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.VirtualCurrency = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientUpdateAvatarUrlRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ImageUrl = [properties valueForKey:@"ImageUrl"];
    

    return self;
}
@end
@implementation ClientUpdateCharacterDataRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"KeysToRemove"]){
    NSArray* member_list = [properties objectForKey:@"KeysToRemove"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.KeysToRemove = [mutable_storage copy];
}

    
    self.Permission = (ClientUserDataPermission)[properties valueForKey:@"ClientPermission"];
    

    return self;
}
@end
@implementation ClientUpdateCharacterDataResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DataVersion = [properties valueForKey:@"DataVersion"];
    

    return self;
}
@end
@implementation ClientUpdateCharacterStatisticsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    if ([properties objectForKey:@"CharacterStatistics"]){
    NSDictionary* member_list = [properties objectForKey:@"CharacterStatistics"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.CharacterStatistics = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientUpdateCharacterStatisticsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUpdatePlayerStatisticsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Statistics"]){
    NSArray* member_list = [properties objectForKey:@"Statistics"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientStatisticUpdate new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Statistics = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation ClientUpdatePlayerStatisticsResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUpdateSharedGroupDataRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"KeysToRemove"]){
    NSArray* member_list = [properties objectForKey:@"KeysToRemove"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.KeysToRemove = [mutable_storage copy];
}

    
    self.Permission = (ClientUserDataPermission)[properties valueForKey:@"ClientPermission"];
    
    self.SharedGroupId = [properties valueForKey:@"SharedGroupId"];
    

    return self;
}
@end
@implementation ClientUpdateSharedGroupDataResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientUpdateUserDataRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Data"]){
    NSDictionary* member_list = [properties objectForKey:@"Data"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Data = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"KeysToRemove"]){
    NSArray* member_list = [properties objectForKey:@"KeysToRemove"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.KeysToRemove = [mutable_storage copy];
}

    
    self.Permission = (ClientUserDataPermission)[properties valueForKey:@"ClientPermission"];
    

    return self;
}
@end
@implementation ClientUpdateUserDataResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DataVersion = [properties valueForKey:@"DataVersion"];
    

    return self;
}
@end
@implementation ClientUpdateUserTitleDisplayNameRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    

    return self;
}
@end
@implementation ClientUpdateUserTitleDisplayNameResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    

    return self;
}
@end
@implementation ClientUserAccountInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AndroidDeviceInfo = [[ClientUserAndroidDeviceInfo new] initWithDictionary:[properties objectForKey:@"AndroidDeviceInfo"]];
    
    self.Created = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Created"]];
    
    self.CustomIdInfo = [[ClientUserCustomIdInfo new] initWithDictionary:[properties objectForKey:@"CustomIdInfo"]];
    
    self.FacebookInfo = [[ClientUserFacebookInfo new] initWithDictionary:[properties objectForKey:@"FacebookInfo"]];
    
    self.FacebookInstantGamesIdInfo = [[ClientUserFacebookInstantGamesIdInfo new] initWithDictionary:[properties objectForKey:@"FacebookInstantGamesIdInfo"]];
    
    self.GameCenterInfo = [[ClientUserGameCenterInfo new] initWithDictionary:[properties objectForKey:@"GameCenterInfo"]];
    
    self.GoogleInfo = [[ClientUserGoogleInfo new] initWithDictionary:[properties objectForKey:@"GoogleInfo"]];
    
    self.IosDeviceInfo = [[ClientUserIosDeviceInfo new] initWithDictionary:[properties objectForKey:@"IosDeviceInfo"]];
    
    self.KongregateInfo = [[ClientUserKongregateInfo new] initWithDictionary:[properties objectForKey:@"KongregateInfo"]];
    
    self.NintendoSwitchDeviceIdInfo = [[ClientUserNintendoSwitchDeviceIdInfo new] initWithDictionary:[properties objectForKey:@"NintendoSwitchDeviceIdInfo"]];
    
    if ([properties objectForKey:@"OpenIdInfo"]){
    NSArray* member_list = [properties objectForKey:@"OpenIdInfo"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[ClientUserOpenIdInfo new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.OpenIdInfo = [mutable_storage copy];
}

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.PrivateInfo = [[ClientUserPrivateAccountInfo new] initWithDictionary:[properties objectForKey:@"PrivateInfo"]];
    
    self.PsnInfo = [[ClientUserPsnInfo new] initWithDictionary:[properties objectForKey:@"PsnInfo"]];
    
    self.SteamInfo = [[ClientUserSteamInfo new] initWithDictionary:[properties objectForKey:@"SteamInfo"]];
    
    self.TitleInfo = [[ClientUserTitleInfo new] initWithDictionary:[properties objectForKey:@"TitleInfo"]];
    
    self.TwitchInfo = [[ClientUserTwitchInfo new] initWithDictionary:[properties objectForKey:@"TwitchInfo"]];
    
    self.Username = [properties valueForKey:@"Username"];
    
    self.WindowsHelloInfo = [[ClientUserWindowsHelloInfo new] initWithDictionary:[properties objectForKey:@"WindowsHelloInfo"]];
    
    self.XboxInfo = [[ClientUserXboxInfo new] initWithDictionary:[properties objectForKey:@"XboxInfo"]];
    

    return self;
}
@end
@implementation ClientUserAndroidDeviceInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AndroidDeviceId = [properties valueForKey:@"AndroidDeviceId"];
    

    return self;
}
@end
@implementation ClientUserCustomIdInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CustomId = [properties valueForKey:@"CustomId"];
    

    return self;
}
@end
@implementation ClientUserDataRecord


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.LastUpdated = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"LastUpdated"]];
    
    self.Permission = (ClientUserDataPermission)[properties valueForKey:@"ClientPermission"];
    
    self.Value = [properties valueForKey:@"Value"];
    

    return self;
}
@end
@implementation ClientUserFacebookInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FacebookId = [properties valueForKey:@"FacebookId"];
    
    self.FullName = [properties valueForKey:@"FullName"];
    

    return self;
}
@end
@implementation ClientUserFacebookInstantGamesIdInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FacebookInstantGamesId = [properties valueForKey:@"FacebookInstantGamesId"];
    

    return self;
}
@end
@implementation ClientUserGameCenterInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GameCenterId = [properties valueForKey:@"GameCenterId"];
    

    return self;
}
@end
@implementation ClientUserGoogleInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GoogleEmail = [properties valueForKey:@"GoogleEmail"];
    
    self.GoogleGender = [properties valueForKey:@"GoogleGender"];
    
    self.GoogleId = [properties valueForKey:@"GoogleId"];
    
    self.GoogleLocale = [properties valueForKey:@"GoogleLocale"];
    
    self.GoogleName = [properties valueForKey:@"GoogleName"];
    

    return self;
}
@end
@implementation ClientUserIosDeviceInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.IosDeviceId = [properties valueForKey:@"IosDeviceId"];
    

    return self;
}
@end
@implementation ClientUserKongregateInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.KongregateId = [properties valueForKey:@"KongregateId"];
    
    self.KongregateName = [properties valueForKey:@"KongregateName"];
    

    return self;
}
@end
@implementation ClientUserNintendoSwitchDeviceIdInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.NintendoSwitchDeviceId = [properties valueForKey:@"NintendoSwitchDeviceId"];
    

    return self;
}
@end
@implementation ClientUserOpenIdInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ConnectionId = [properties valueForKey:@"ConnectionId"];
    
    self.Issuer = [properties valueForKey:@"Issuer"];
    
    self.Subject = [properties valueForKey:@"Subject"];
    

    return self;
}
@end
@implementation ClientUserPrivateAccountInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Email = [properties valueForKey:@"Email"];
    

    return self;
}
@end
@implementation ClientUserPsnInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PsnAccountId = [properties valueForKey:@"PsnAccountId"];
    
    self.PsnOnlineId = [properties valueForKey:@"PsnOnlineId"];
    

    return self;
}
@end
@implementation ClientUserSettings


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.GatherDeviceInfo = [[properties valueForKey:@"GatherDeviceInfo"] boolValue];
    
    self.GatherFocusInfo = [[properties valueForKey:@"GatherFocusInfo"] boolValue];
    
    self.NeedsAttribution = [[properties valueForKey:@"NeedsAttribution"] boolValue];
    

    return self;
}
@end
@implementation ClientUserSteamInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.SteamActivationStatus = (ClientTitleActivationStatus)[properties valueForKey:@"ClientSteamActivationStatus"];
    
    self.SteamCountry = [properties valueForKey:@"SteamCountry"];
    
    self.SteamCurrency = (ClientCurrency)[properties valueForKey:@"ClientSteamCurrency"];
    
    self.SteamId = [properties valueForKey:@"SteamId"];
    
    self.SteamName = [properties valueForKey:@"SteamName"];
    

    return self;
}
@end
@implementation ClientUserTitleInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AvatarUrl = [properties valueForKey:@"AvatarUrl"];
    
    self.Created = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Created"]];
    
    self.DisplayName = [properties valueForKey:@"DisplayName"];
    
    self.FirstLogin = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"FirstLogin"]];
    
    self.isBanned = [[properties valueForKey:@"isBanned"] boolValue];
    
    self.LastLogin = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"LastLogin"]];
    
    self.Origination = (ClientUserOrigination)[properties valueForKey:@"ClientOrigination"];
    
    self.TitlePlayerAccount = [[ClientEntityKey new] initWithDictionary:[properties objectForKey:@"TitlePlayerAccount"]];
    

    return self;
}
@end
@implementation ClientUserTwitchInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.TwitchId = [properties valueForKey:@"TwitchId"];
    
    self.TwitchUserName = [properties valueForKey:@"TwitchUserName"];
    

    return self;
}
@end
@implementation ClientUserWindowsHelloInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.WindowsHelloDeviceName = [properties valueForKey:@"WindowsHelloDeviceName"];
    
    self.WindowsHelloPublicKeyHash = [properties valueForKey:@"WindowsHelloPublicKeyHash"];
    

    return self;
}
@end
@implementation ClientUserXboxInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.XboxUserId = [properties valueForKey:@"XboxUserId"];
    

    return self;
}
@end
@implementation ClientValidateAmazonReceiptRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.CurrencyCode = [properties valueForKey:@"CurrencyCode"];
    
    self.PurchasePrice = [properties valueForKey:@"PurchasePrice"];
    
    self.ReceiptId = [properties valueForKey:@"ReceiptId"];
    
    self.UserId = [properties valueForKey:@"UserId"];
    

    return self;
}
@end
@implementation ClientValidateAmazonReceiptResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientValidateGooglePlayPurchaseRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CurrencyCode = [properties valueForKey:@"CurrencyCode"];
    
    self.PurchasePrice = [properties valueForKey:@"PurchasePrice"];
    
    self.ReceiptJson = [properties valueForKey:@"ReceiptJson"];
    
    self.Signature = [properties valueForKey:@"Signature"];
    

    return self;
}
@end
@implementation ClientValidateGooglePlayPurchaseResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientValidateIOSReceiptRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CurrencyCode = [properties valueForKey:@"CurrencyCode"];
    
    self.PurchasePrice = [properties valueForKey:@"PurchasePrice"];
    
    self.ReceiptData = [properties valueForKey:@"ReceiptData"];
    

    return self;
}
@end
@implementation ClientValidateIOSReceiptResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientValidateWindowsReceiptRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CatalogVersion = [properties valueForKey:@"CatalogVersion"];
    
    self.CurrencyCode = [properties valueForKey:@"CurrencyCode"];
    
    self.PurchasePrice = [properties valueForKey:@"PurchasePrice"];
    
    self.Receipt = [properties valueForKey:@"Receipt"];
    

    return self;
}
@end
@implementation ClientValidateWindowsReceiptResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation ClientValueToDateModel


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Currency = [properties valueForKey:@"Currency"];
    
    self.TotalValue = [properties valueForKey:@"TotalValue"];
    
    self.TotalValueAsDecimal = [properties valueForKey:@"TotalValueAsDecimal"];
    

    return self;
}
@end
@implementation ClientVirtualCurrencyRechargeTime


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.RechargeMax = [properties valueForKey:@"RechargeMax"];
    
    self.RechargeTime = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"RechargeTime"]];
    
    self.SecondsToRecharge = [properties valueForKey:@"SecondsToRecharge"];
    

    return self;
}
@end
@implementation ClientWriteClientCharacterEventRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Body"]){
    NSDictionary* member_list = [properties objectForKey:@"Body"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Body = [mutable_storage copy];
}

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.EventName = [properties valueForKey:@"EventName"];
    
    self.Timestamp = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Timestamp"]];
    

    return self;
}
@end
@implementation ClientWriteClientPlayerEventRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Body"]){
    NSDictionary* member_list = [properties objectForKey:@"Body"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Body = [mutable_storage copy];
}

    
    self.EventName = [properties valueForKey:@"EventName"];
    
    self.Timestamp = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Timestamp"]];
    

    return self;
}
@end
@implementation ClientWriteEventResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.EventId = [properties valueForKey:@"EventId"];
    

    return self;
}
@end
@implementation ClientWriteTitleEventRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Body"]){
    NSDictionary* member_list = [properties objectForKey:@"Body"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Body = [mutable_storage copy];
}

    
    self.EventName = [properties valueForKey:@"EventName"];
    
    self.Timestamp = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Timestamp"]];
    

    return self;
}
@end
@implementation ClientXboxLiveAccountPlayFabIdPair


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.PlayFabId = [properties valueForKey:@"PlayFabId"];
    
    self.XboxLiveAccountId = [properties valueForKey:@"XboxLiveAccountId"];
    

    return self;
}
@end

@implementation NSDictionary (BVJSONString)

-(NSString*) convertToNSString{

    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self
    options:kNilOptions
    error:&error];

    if (! jsonData) {
        NSLog(@"%s: error: %@", __func__, error.localizedDescription);
        return @"{}";
    } else {
        return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    } 
}

@end

@implementation NSArray (BVJSONString)

-(NSString*) convertToNSString{

    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self
    options:kNilOptions
    error:&error];

    if (! jsonData) {
        NSLog(@"%s: error: %@", __func__, error.localizedDescription);
        return @"{}";
    } else {
        return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    } 
}

@end
