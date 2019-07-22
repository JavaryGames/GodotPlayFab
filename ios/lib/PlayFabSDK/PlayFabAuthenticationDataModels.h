#import <Foundation/Foundation.h>
#import "PlayFabBaseModel.h"


//predeclare all non-enum classes

@class AuthenticationEntityKey;

@class AuthenticationEntityLineage;

@class AuthenticationGetEntityTokenRequest;

@class AuthenticationGetEntityTokenResponse;

@class AuthenticationValidateEntityTokenRequest;

@class AuthenticationValidateEntityTokenResponse;



/// <summary>
/*
/// Combined entity type and ID structure which uniquely identifies a single entity.
*/
/// </summary>
@interface AuthenticationEntityKey : PlayFabBaseModel


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


@interface AuthenticationEntityLineage : PlayFabBaseModel


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


/// <summary>
/*
/// This API must be called with X-SecretKey, X-Authentication or X-EntityToken headers. An optional EntityKey may be included to attempt to set the resulting EntityToken to a specific entity, however the entity must be a relation of the caller, such as the master_player_account of a character. If sending X-EntityToken the account will be marked as freshly logged in and will issue a new token. If using X-Authentication or X-EntityToken the header must still be valid and cannot be expired or revoked.
*/
/// </summary>
@interface AuthenticationGetEntityTokenRequest : PlayFabBaseModel


/// <summary>
/*
/// The entity to perform this action on.
*/
/// </summary>
@property AuthenticationEntityKey* Entity; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface AuthenticationGetEntityTokenResponse : PlayFabBaseModel


/// <summary>
/*
/// The entity id and type.
*/
/// </summary>
@property AuthenticationEntityKey* Entity; 

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


/// <summary>
/*
/// Given an entity token, validates that it hasn't exipired or been revoked and will return details of the owner.
*/
/// </summary>
@interface AuthenticationValidateEntityTokenRequest : PlayFabBaseModel


/// <summary>
/*
/// Client EntityToken
*/
/// </summary>
@property NSString* EntityToken; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface AuthenticationValidateEntityTokenResponse : PlayFabBaseModel


/// <summary>
/*
/// The entity id and type.
*/
/// </summary>
@property AuthenticationEntityKey* Entity; 

/// <summary>
/*
/// The lineage of this profile.
*/
/// </summary>
@property AuthenticationEntityLineage* Lineage; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end

