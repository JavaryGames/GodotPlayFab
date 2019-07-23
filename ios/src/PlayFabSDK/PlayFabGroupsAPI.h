#import <Foundation/Foundation.h>

#import "PlayFabGroupsDataModels.h"
#import "PlayFabError.h"
#import "PlayFabSettings.h"
#import "PlayFabClientAPI.h"


@interface PlayFabGroupsAPI : NSObject

+(NSString*) GetURL;


		
typedef void(^AcceptGroupApplicationCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^AcceptGroupInvitationCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^AddMembersCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^ApplyToGroupCallback)(GroupsApplyToGroupResponse* result, NSObject* userData);
		
typedef void(^BlockEntityCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^ChangeMemberRoleCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^CreateGroupCallback)(GroupsCreateGroupResponse* result, NSObject* userData);
		
typedef void(^CreateRoleCallback)(GroupsCreateGroupRoleResponse* result, NSObject* userData);
		
typedef void(^DeleteGroupCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^DeleteRoleCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^GetGroupCallback)(GroupsGetGroupResponse* result, NSObject* userData);
		
typedef void(^InviteToGroupCallback)(GroupsInviteToGroupResponse* result, NSObject* userData);
		
typedef void(^IsMemberCallback)(GroupsIsMemberResponse* result, NSObject* userData);
		
typedef void(^ListGroupApplicationsCallback)(GroupsListGroupApplicationsResponse* result, NSObject* userData);
		
typedef void(^ListGroupBlocksCallback)(GroupsListGroupBlocksResponse* result, NSObject* userData);
		
typedef void(^ListGroupInvitationsCallback)(GroupsListGroupInvitationsResponse* result, NSObject* userData);
		
typedef void(^ListGroupMembersCallback)(GroupsListGroupMembersResponse* result, NSObject* userData);
		
typedef void(^ListMembershipCallback)(GroupsListMembershipResponse* result, NSObject* userData);
		
typedef void(^ListMembershipOpportunitiesCallback)(GroupsListMembershipOpportunitiesResponse* result, NSObject* userData);
		
typedef void(^RemoveGroupApplicationCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^RemoveGroupInvitationCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^RemoveMembersCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^UnblockEntityCallback)(GroupsEmptyResponse* result, NSObject* userData);
		
typedef void(^UpdateGroupCallback)(GroupsUpdateGroupResponse* result, NSObject* userData);
		
typedef void(^UpdateRoleCallback)(GroupsUpdateGroupRoleResponse* result, NSObject* userData);
		

+ (PlayFabClientAPI*) GetInstance;

		

// ------------ Generated API calls
		
-(void) AcceptGroupApplication:(GroupsAcceptGroupApplicationRequest*)request success:(AcceptGroupApplicationCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AcceptGroupInvitation:(GroupsAcceptGroupInvitationRequest*)request success:(AcceptGroupInvitationCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) AddMembers:(GroupsAddMembersRequest*)request success:(AddMembersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ApplyToGroup:(GroupsApplyToGroupRequest*)request success:(ApplyToGroupCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) BlockEntity:(GroupsBlockEntityRequest*)request success:(BlockEntityCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ChangeMemberRole:(GroupsChangeMemberRoleRequest*)request success:(ChangeMemberRoleCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CreateGroup:(GroupsCreateGroupRequest*)request success:(CreateGroupCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) CreateRole:(GroupsCreateGroupRoleRequest*)request success:(CreateRoleCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) DeleteGroup:(GroupsDeleteGroupRequest*)request success:(DeleteGroupCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) DeleteRole:(GroupsDeleteRoleRequest*)request success:(DeleteRoleCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) GetGroup:(GroupsGetGroupRequest*)request success:(GetGroupCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) InviteToGroup:(GroupsInviteToGroupRequest*)request success:(InviteToGroupCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) IsMember:(GroupsIsMemberRequest*)request success:(IsMemberCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListGroupApplications:(GroupsListGroupApplicationsRequest*)request success:(ListGroupApplicationsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListGroupBlocks:(GroupsListGroupBlocksRequest*)request success:(ListGroupBlocksCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListGroupInvitations:(GroupsListGroupInvitationsRequest*)request success:(ListGroupInvitationsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListGroupMembers:(GroupsListGroupMembersRequest*)request success:(ListGroupMembersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListMembership:(GroupsListMembershipRequest*)request success:(ListMembershipCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) ListMembershipOpportunities:(GroupsListMembershipOpportunitiesRequest*)request success:(ListMembershipOpportunitiesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RemoveGroupApplication:(GroupsRemoveGroupApplicationRequest*)request success:(RemoveGroupApplicationCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RemoveGroupInvitation:(GroupsRemoveGroupInvitationRequest*)request success:(RemoveGroupInvitationCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) RemoveMembers:(GroupsRemoveMembersRequest*)request success:(RemoveMembersCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UnblockEntity:(GroupsUnblockEntityRequest*)request success:(UnblockEntityCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateGroup:(GroupsUpdateGroupRequest*)request success:(UpdateGroupCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		
-(void) UpdateRole:(GroupsUpdateGroupRoleRequest*)request success:(UpdateRoleCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData;
		

@end
