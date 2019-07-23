#import "PlayFabGroupsDataModels.h"


@implementation GroupsAcceptGroupApplicationRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsAcceptGroupInvitationRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsAddMembersRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    if ([properties objectForKey:@"Members"]){
    NSArray* member_list = [properties objectForKey:@"Members"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsEntityKey new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Members = [mutable_storage copy];
}

    
    self.RoleId = [properties valueForKey:@"RoleId"];
    

    return self;
}
@end
@implementation GroupsApplyToGroupRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AutoAcceptOutstandingInvite = [[properties valueForKey:@"AutoAcceptOutstandingInvite"] boolValue];
    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsApplyToGroupResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityWithLineage new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Expires = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Expires"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsBlockEntityRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsChangeMemberRoleRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DestinationRoleId = [properties valueForKey:@"DestinationRoleId"];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    if ([properties objectForKey:@"Members"]){
    NSArray* member_list = [properties objectForKey:@"Members"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsEntityKey new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Members = [mutable_storage copy];
}

    
    self.OriginRoleId = [properties valueForKey:@"OriginRoleId"];
    

    return self;
}
@end
@implementation GroupsCreateGroupRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.GroupName = [properties valueForKey:@"GroupName"];
    

    return self;
}
@end
@implementation GroupsCreateGroupResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AdminRoleId = [properties valueForKey:@"AdminRoleId"];
    
    self.Created = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Created"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.GroupName = [properties valueForKey:@"GroupName"];
    
    self.MemberRoleId = [properties valueForKey:@"MemberRoleId"];
    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    
    if ([properties objectForKey:@"Roles"]){
    NSDictionary* member_list = [properties objectForKey:@"Roles"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Roles = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsCreateGroupRoleRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.RoleId = [properties valueForKey:@"RoleId"];
    
    self.RoleName = [properties valueForKey:@"RoleName"];
    

    return self;
}
@end
@implementation GroupsCreateGroupRoleResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    
    self.RoleId = [properties valueForKey:@"RoleId"];
    
    self.RoleName = [properties valueForKey:@"RoleName"];
    

    return self;
}
@end
@implementation GroupsDeleteGroupRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsDeleteRoleRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.RoleId = [properties valueForKey:@"RoleId"];
    

    return self;
}
@end
@implementation GroupsEmptyResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation GroupsEntityKey


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
@implementation GroupsEntityMemberRole


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Members"]){
    NSArray* member_list = [properties objectForKey:@"Members"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsEntityWithLineage new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Members = [mutable_storage copy];
}

    
    self.RoleId = [properties valueForKey:@"RoleId"];
    
    self.RoleName = [properties valueForKey:@"RoleName"];
    

    return self;
}
@end
@implementation GroupsEntityWithLineage


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Key = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Key"]];
    
    if ([properties objectForKey:@"Lineage"]){
    NSDictionary* member_list = [properties objectForKey:@"Lineage"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[GroupsEntityKey new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.Lineage = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsGetGroupRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.GroupName = [properties valueForKey:@"GroupName"];
    

    return self;
}
@end
@implementation GroupsGetGroupResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AdminRoleId = [properties valueForKey:@"AdminRoleId"];
    
    self.Created = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Created"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.GroupName = [properties valueForKey:@"GroupName"];
    
    self.MemberRoleId = [properties valueForKey:@"MemberRoleId"];
    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    
    if ([properties objectForKey:@"Roles"]){
    NSDictionary* member_list = [properties objectForKey:@"Roles"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[member_list objectForKey:key] forKey:key];
    }
    self.Roles = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsGroupApplication


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityWithLineage new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Expires = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Expires"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsGroupBlock


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityWithLineage new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsGroupInvitation


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Expires = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Expires"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.InvitedByEntity = [[GroupsEntityWithLineage new] initWithDictionary:[properties objectForKey:@"InvitedByEntity"]];
    
    self.InvitedEntity = [[GroupsEntityWithLineage new] initWithDictionary:[properties objectForKey:@"InvitedEntity"]];
    
    self.RoleId = [properties valueForKey:@"RoleId"];
    

    return self;
}
@end
@implementation GroupsGroupRole


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.RoleId = [properties valueForKey:@"RoleId"];
    
    self.RoleName = [properties valueForKey:@"RoleName"];
    

    return self;
}
@end
@implementation GroupsGroupWithRoles


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.GroupName = [properties valueForKey:@"GroupName"];
    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    
    if ([properties objectForKey:@"Roles"]){
    NSArray* member_list = [properties objectForKey:@"Roles"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsGroupRole new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Roles = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsInviteToGroupRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AutoAcceptOutstandingApplication = [[properties valueForKey:@"AutoAcceptOutstandingApplication"] boolValue];
    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.RoleId = [properties valueForKey:@"RoleId"];
    

    return self;
}
@end
@implementation GroupsInviteToGroupResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Expires = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"Expires"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.InvitedByEntity = [[GroupsEntityWithLineage new] initWithDictionary:[properties objectForKey:@"InvitedByEntity"]];
    
    self.InvitedEntity = [[GroupsEntityWithLineage new] initWithDictionary:[properties objectForKey:@"InvitedEntity"]];
    
    self.RoleId = [properties valueForKey:@"RoleId"];
    

    return self;
}
@end
@implementation GroupsIsMemberRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.RoleId = [properties valueForKey:@"RoleId"];
    

    return self;
}
@end
@implementation GroupsIsMemberResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.IsMember = [[properties valueForKey:@"IsMember"] boolValue];
    

    return self;
}
@end
@implementation GroupsListGroupApplicationsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsListGroupApplicationsResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Applications"]){
    NSArray* member_list = [properties objectForKey:@"Applications"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsGroupApplication new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Applications = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsListGroupBlocksRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsListGroupBlocksResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"BlockedEntities"]){
    NSArray* member_list = [properties objectForKey:@"BlockedEntities"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsGroupBlock new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.BlockedEntities = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsListGroupInvitationsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsListGroupInvitationsResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Invitations"]){
    NSArray* member_list = [properties objectForKey:@"Invitations"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsGroupInvitation new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Invitations = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsListGroupMembersRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsListGroupMembersResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Members"]){
    NSArray* member_list = [properties objectForKey:@"Members"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsEntityMemberRole new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Members = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsListMembershipOpportunitiesRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    

    return self;
}
@end
@implementation GroupsListMembershipOpportunitiesResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Applications"]){
    NSArray* member_list = [properties objectForKey:@"Applications"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsGroupApplication new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Applications = [mutable_storage copy];
}

    
    if ([properties objectForKey:@"Invitations"]){
    NSArray* member_list = [properties objectForKey:@"Invitations"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsGroupInvitation new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Invitations = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsListMembershipRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    

    return self;
}
@end
@implementation GroupsListMembershipResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"Groups"]){
    NSArray* member_list = [properties objectForKey:@"Groups"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsGroupWithRoles new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Groups = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation GroupsRemoveGroupApplicationRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsRemoveGroupInvitationRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsRemoveMembersRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    if ([properties objectForKey:@"Members"]){
    NSArray* member_list = [properties objectForKey:@"Members"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[GroupsEntityKey new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Members = [mutable_storage copy];
}

    
    self.RoleId = [properties valueForKey:@"RoleId"];
    

    return self;
}
@end
@implementation GroupsUnblockEntityRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    

    return self;
}
@end
@implementation GroupsUpdateGroupRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.AdminRoleId = [properties valueForKey:@"AdminRoleId"];
    
    self.ExpectedProfileVersion = [properties valueForKey:@"ExpectedProfileVersion"];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.GroupName = [properties valueForKey:@"GroupName"];
    
    self.MemberRoleId = [properties valueForKey:@"MemberRoleId"];
    

    return self;
}
@end
@implementation GroupsUpdateGroupResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.OperationReason = [properties valueForKey:@"OperationReason"];
    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    
    self.SetResult = (GroupsOperationTypes)[properties valueForKey:@"GroupsSetResult"];
    

    return self;
}
@end
@implementation GroupsUpdateGroupRoleRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ExpectedProfileVersion = [properties valueForKey:@"ExpectedProfileVersion"];
    
    self.Group = [[GroupsEntityKey new] initWithDictionary:[properties objectForKey:@"Group"]];
    
    self.RoleId = [properties valueForKey:@"RoleId"];
    
    self.RoleName = [properties valueForKey:@"RoleName"];
    

    return self;
}
@end
@implementation GroupsUpdateGroupRoleResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.OperationReason = [properties valueForKey:@"OperationReason"];
    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    
    self.SetResult = (GroupsOperationTypes)[properties valueForKey:@"GroupsSetResult"];
    

    return self;
}
@end
