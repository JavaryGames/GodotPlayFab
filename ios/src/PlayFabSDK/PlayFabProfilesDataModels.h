#import <Foundation/Foundation.h>
#import "PlayFabBaseModel.h"


typedef enum
{
    ProfilesEffectTypeAllow,
    ProfilesEffectTypeDeny
} ProfilesEffectType;

typedef enum
{
    ProfilesOperationTypesCreated,
    ProfilesOperationTypesUpdated,
    ProfilesOperationTypesDeleted,
    ProfilesOperationTypesNone
} ProfilesOperationTypes;

//predeclare all non-enum classes

@class ProfilesEntityDataObject;

@class ProfilesEntityKey;

@class ProfilesEntityLineage;

@class ProfilesEntityPermissionStatement;

@class ProfilesEntityProfileBody;

@class ProfilesEntityProfileFileMetadata;

@class ProfilesEntityStatisticChildValue;

@class ProfilesEntityStatisticValue;

@class ProfilesGetEntityProfileRequest;

@class ProfilesGetEntityProfileResponse;

@class ProfilesGetEntityProfilesRequest;

@class ProfilesGetEntityProfilesResponse;

@class ProfilesGetGlobalPolicyRequest;

@class ProfilesGetGlobalPolicyResponse;

@class ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest;

@class ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse;

@class ProfilesSetEntityProfilePolicyRequest;

@class ProfilesSetEntityProfilePolicyResponse;

@class ProfilesSetGlobalPolicyRequest;

@class ProfilesSetGlobalPolicyResponse;

@class ProfilesSetProfileLanguageRequest;

@class ProfilesSetProfileLanguageResponse;



/// <summary>
/*
/// An entity object and its associated meta data.
*/
/// </summary>
@interface ProfilesEntityDataObject : PlayFabBaseModel


/// <summary>
/*
/// Un-escaped JSON object, if DataAsObject is true.
*/
/// </summary>
@property NSDictionary* DataObject; 

/// <summary>
/*
/// Escaped string JSON body of the object, if DataAsObject is default or false.
*/
/// </summary>
@property NSString* EscapedDataObject; 

/// <summary>
/*
/// Name of this object.
*/
/// </summary>
@property NSString* ObjectName; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Combined entity type and ID structure which uniquely identifies a single entity.
*/
/// </summary>
@interface ProfilesEntityKey : PlayFabBaseModel


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


@interface ProfilesEntityLineage : PlayFabBaseModel


/// <summary>
/*
/// The Character Id of the associated entity.
*/
/// </summary>
@property NSString* CharacterId; 

/// <summary>
/*
/// The Group Id of the associated entity.
*/
/// </summary>
@property NSString* GroupId; 

/// <summary>
/*
/// The Master Player Account Id of the associated entity.
*/
/// </summary>
@property NSString* MasterPlayerAccountId; 

/// <summary>
/*
/// The Namespace Id of the associated entity.
*/
/// </summary>
@property NSString* NamespaceId; 

/// <summary>
/*
/// The Title Id of the associated entity.
*/
/// </summary>
@property NSString* TitleId; 

/// <summary>
/*
/// The Title Player Account Id of the associated entity.
*/
/// </summary>
@property NSString* TitlePlayerAccountId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesEntityPermissionStatement : PlayFabBaseModel


/// <summary>
/*
/// The action this statement effects. May be 'Read', 'Write' or '*' for both read and write.
*/
/// </summary>
@property NSString* Action; 

/// <summary>
/*
/// A comment about the statement. Intended solely for bookkeeping and debugging.
*/
/// </summary>
@property NSString* Comment; 

/// <summary>
/*
/// Additional conditions to be applied for entity resources.
*/
/// </summary>
@property NSDictionary* Condition; 

/// <summary>
/*
/// The effect this statement will have. It may be either Allow or Deny
*/
/// </summary>
@property ProfilesEffectType Effect; 

/// <summary>
/*
/// The principal this statement will effect.
*/
/// </summary>
@property NSDictionary* Principal; 

/// <summary>
/*
/// The resource this statements effects. Similar to 'pfrn:data--title![Title ID]/Profile/*'
*/
/// </summary>
@property NSString* Resource; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesEntityProfileBody : PlayFabBaseModel


/// <summary>
/*
/// Avatar URL for the entity.
*/
/// </summary>
@property NSString* AvatarUrl; 

/// <summary>
/*
/// The creation time of this profile in UTC.
*/
/// </summary>
@property NSDate* Created; 

/// <summary>
/*
/// The display name of the entity. This field may serve different purposes for different entity types. i.e.: for a title player account it could represent the display name of the player, whereas on a character it could be character's name.
*/
/// </summary>
@property NSString* DisplayName; 

/// <summary>
/*
/// The entity id and type.
*/
/// </summary>
@property ProfilesEntityKey* Entity; 

/// <summary>
/*
/// The chain of responsibility for this entity. Use Lineage.
*/
/// </summary>
@property NSString* EntityChain; 

/// <summary>
/*
/// The files on this profile.
*/
/// </summary>
@property NSDictionary* Files; 

/// <summary>
/*
/// The language on this profile.
*/
/// </summary>
@property NSString* Language; 

/// <summary>
/*
/// Leaderboard metadata for the entity.
*/
/// </summary>
@property NSString* LeaderboardMetadata; 

/// <summary>
/*
/// The lineage of this profile.
*/
/// </summary>
@property ProfilesEntityLineage* Lineage; 

/// <summary>
/*
/// The objects on this profile.
*/
/// </summary>
@property NSDictionary* Objects; 

/// <summary>
/*
/// The permissions that govern access to this entity profile and its properties. Only includes permissions set on this profile, not global statements from titles and namespaces.
*/
/// </summary>
@property NSArray* Permissions; 

/// <summary>
/*
/// The statistics on this profile.
*/
/// </summary>
@property NSDictionary* Statistics; 

/// <summary>
/*
/// The version number of the profile in persistent storage at the time of the read. Used for optional optimistic concurrency during update.
*/
/// </summary>
@property NSNumber* VersionNumber; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// An entity file's meta data. To get a download URL call File/GetFiles API.
*/
/// </summary>
@interface ProfilesEntityProfileFileMetadata : PlayFabBaseModel


/// <summary>
/*
/// Checksum value for the file
*/
/// </summary>
@property NSString* Checksum; 

/// <summary>
/*
/// Name of the file
*/
/// </summary>
@property NSString* FileName; 

/// <summary>
/*
/// Last UTC time the file was modified
*/
/// </summary>
@property NSDate* LastModified; 

/// <summary>
/*
/// Storage service's reported byte count
*/
/// </summary>
@property NSNumber* Size; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesEntityStatisticChildValue : PlayFabBaseModel


/// <summary>
/*
/// Child name value, if child statistic
*/
/// </summary>
@property NSString* ChildName; 

/// <summary>
/*
/// Child statistic metadata
*/
/// </summary>
@property NSString* Metadata; 

/// <summary>
/*
/// Child statistic value
*/
/// </summary>
@property NSNumber* Value; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesEntityStatisticValue : PlayFabBaseModel


/// <summary>
/*
/// Child statistic values
*/
/// </summary>
@property NSDictionary* ChildStatistics; 

/// <summary>
/*
/// Statistic metadata
*/
/// </summary>
@property NSString* Metadata; 

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
/// Statistic version
*/
/// </summary>
@property NSNumber* Version; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Given an entity type and entity identifier will retrieve the profile from the entity store. If the profile being retrieved is the caller's, then the read operation is consistent, if not it is an inconsistent read. An inconsistent read means that we do not guarantee all committed writes have occurred before reading the profile, allowing for a stale read. If consistency is important the Version Number on the result can be used to compare which version of the profile any reader has.
*/
/// </summary>
@interface ProfilesGetEntityProfileRequest : PlayFabBaseModel


/// <summary>
/*
/// Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON string.
*/
/// </summary>
@property bool DataAsObject; 

/// <summary>
/*
/// The entity to perform this action on.
*/
/// </summary>
@property ProfilesEntityKey* Entity; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesGetEntityProfileResponse : PlayFabBaseModel


/// <summary>
/*
/// Entity profile
*/
/// </summary>
@property ProfilesEntityProfileBody* Profile; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Given a set of entity types and entity identifiers will retrieve all readable profiles properties for the caller. Profiles that the caller is not allowed to read will silently not be included in the results.
*/
/// </summary>
@interface ProfilesGetEntityProfilesRequest : PlayFabBaseModel


/// <summary>
/*
/// Determines whether the objects will be returned as an escaped JSON string or as a un-escaped JSON object. Default is JSON string.
*/
/// </summary>
@property bool DataAsObject; 

/// <summary>
/*
/// Entity keys of the profiles to load. Must be between 1 and 25
*/
/// </summary>
@property NSArray* Entities; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesGetEntityProfilesResponse : PlayFabBaseModel


/// <summary>
/*
/// Entity profiles
*/
/// </summary>
@property NSArray* Profiles; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Retrieves the title access policy that is used before the profile's policy is inspected during a request. If never customized this will return the default starter policy built by PlayFab.
*/
/// </summary>
@interface ProfilesGetGlobalPolicyRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesGetGlobalPolicyResponse : PlayFabBaseModel


/// <summary>
/*
/// The permissions that govern access to all entities under this title or namespace.
*/
/// </summary>
@property NSArray* Permissions; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Given a master player account id (PlayFab ID), returns all title player accounts associated with it.
*/
/// </summary>
@interface ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : PlayFabBaseModel


/// <summary>
/*
/// Master player account ids.
*/
/// </summary>
@property NSArray* MasterPlayerAccountIds; 

/// <summary>
/*
/// Id of title to get players from.
*/
/// </summary>
@property NSString* TitleId; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : PlayFabBaseModel


/// <summary>
/*
/// Dictionary of master player ids mapped to title player entity keys and id pairs
*/
/// </summary>
@property NSDictionary* TitlePlayerAccounts; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// This will set the access policy statements on the given entity profile. This is not additive, any existing statements will be replaced with the statements in this request.
*/
/// </summary>
@interface ProfilesSetEntityProfilePolicyRequest : PlayFabBaseModel


/// <summary>
/*
/// The entity to perform this action on.
*/
/// </summary>
@property ProfilesEntityKey* Entity; 

/// <summary>
/*
/// The statements to include in the access policy.
*/
/// </summary>
@property NSArray* Statements; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesSetEntityProfilePolicyResponse : PlayFabBaseModel


/// <summary>
/*
/// The permissions that govern access to this entity profile and its properties. Only includes permissions set on this profile, not global statements from titles and namespaces.
*/
/// </summary>
@property NSArray* Permissions; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Updates the title access policy that is used before the profile's policy is inspected during a request. Policies are compiled and cached for several minutes so an update here may not be reflected in behavior for a short time.
*/
/// </summary>
@interface ProfilesSetGlobalPolicyRequest : PlayFabBaseModel


/// <summary>
/*
/// The permissions that govern access to all entities under this title or namespace.
*/
/// </summary>
@property NSArray* Permissions; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesSetGlobalPolicyResponse : PlayFabBaseModel

/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


/// <summary>
/*
/// Given an entity profile, will update its language to the one passed in if the profile's version is equal to the one passed in.
*/
/// </summary>
@interface ProfilesSetProfileLanguageRequest : PlayFabBaseModel


/// <summary>
/*
/// The entity to perform this action on.
*/
/// </summary>
@property ProfilesEntityKey* Entity; 

/// <summary>
/*
/// The expected version of a profile to perform this update on
*/
/// </summary>
@property NSNumber* ExpectedVersion; 

/// <summary>
/*
/// The language to set on the given entity. Deletes the profile's language if passed in a null string.
*/
/// </summary>
@property NSString* Language; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface ProfilesSetProfileLanguageResponse : PlayFabBaseModel


/// <summary>
/*
/// The type of operation that occured on the profile's language
*/
/// </summary>
@property ProfilesOperationTypes OperationResult; 

/// <summary>
/*
/// The updated version of the profile after the language update
*/
/// </summary>
@property NSNumber* VersionNumber; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end

