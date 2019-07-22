#import <Foundation/Foundation.h>
#import "PlayFabBaseModel.h"


typedef enum
{
    CloudScriptCloudScriptRevisionOptionLive,
    CloudScriptCloudScriptRevisionOptionLatest,
    CloudScriptCloudScriptRevisionOptionSpecific
} CloudScriptCloudScriptRevisionOption;

//predeclare all non-enum classes

@class CloudScriptEntityKey;

@class CloudScriptExecuteCloudScriptResult;

@class CloudScriptExecuteEntityCloudScriptRequest;

@class CloudScriptLogStatement;

@class CloudScriptScriptExecutionError;



/// <summary>
/*
/// Combined entity type and ID structure which uniquely identifies a single entity.
*/
/// </summary>
@interface CloudScriptEntityKey : PlayFabBaseModel


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


@interface CloudScriptExecuteCloudScriptResult : PlayFabBaseModel


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
@property CloudScriptScriptExecutionError* Error; 

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


/// <summary>
/*
/// Executes CloudScript with the entity profile that is defined in the request.
*/
/// </summary>
@interface CloudScriptExecuteEntityCloudScriptRequest : PlayFabBaseModel


/// <summary>
/*
/// The entity to perform this action on.
*/
/// </summary>
@property CloudScriptEntityKey* Entity; 

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
@property NSDictionary* FunctionParameter; 

/// <summary>
/*
/// Generate a 'entity_executed_cloudscript' PlayStream event containing the results of the function execution and other contextual information. This event will show up in the PlayStream debugger console for the player in Game Manager.
*/
/// </summary>
@property bool GeneratePlayStreamEvent; 

/// <summary>
/*
/// Option for which revision of the CloudScript to execute. 'Latest' executes the most recently created revision, 'Live' executes the current live, published revision, and 'Specific' executes the specified revision. The default value is 'Specific', if the SpecificRevision parameter is specified, otherwise it is 'Live'.
*/
/// </summary>
@property CloudScriptCloudScriptRevisionOption RevisionSelection; 

/// <summary>
/*
/// The specific revision to execute, when RevisionSelection is set to 'Specific'
*/
/// </summary>
@property NSNumber* SpecificRevision; 
/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface CloudScriptLogStatement : PlayFabBaseModel


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


@interface CloudScriptScriptExecutionError : PlayFabBaseModel


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

