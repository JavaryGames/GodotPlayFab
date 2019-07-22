#import "PlayFabProfilesAPI.h"
#import "PlayFabConnection.h"

#import <UIKit/UIKit.h>
#include <sys/sysctl.h>

#import "JAGPropertyConverter.h"


@implementation PlayFabProfilesAPI

+(NSString*) GetURL {
return [NSString stringWithFormat:@"https://%@%@", [PlayFabSettings.VerticalName length] != 0 ? PlayFabSettings.VerticalName : PlayFabSettings.TitleId, PlayFabSettings.ProductionEnvironmentURL];
}

static PlayFabClientAPI* PlayFabInstance;

+ (PlayFabClientAPI*) GetInstance {
if(PlayFabInstance == NULL) {
PlayFabInstance = [PlayFabClientAPI new];
}
return PlayFabInstance;
}

+ (NSString *)getModel {
size_t size;
sysctlbyname("hw.machine", NULL, &size, NULL, 0);
char *model = malloc(size);
sysctlbyname("hw.machine", model, &size, NULL, 0);
NSString *deviceModel = [NSString stringWithCString:model encoding:NSUTF8StringEncoding];
free(model);
return deviceModel;
}

-(void) GetGlobalPolicy:(GetGlobalPolicyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData
{
    
    
    NSString *jsonString = @"{}";
    
    PlayFabConnection * connection = [PlayFabConnection new];//[[MyConnection alloc]initWithRequest:req];
    [connection setCompletionBlock:^(id obj, NSError *err) {
        NSData * data = obj;
        if (!err) {
            //NSLog(@"connection success response: %@",(NSString*)data);
            NSError *e = nil;
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options:0 error: &e];

            NSString* playfab_error = [JSON valueForKey:@"error"];
            if (playfab_error != nil) {
                //if there was an "error" object in the JSON:
                PlayFabError *playfab_error_object = [[PlayFabError new] initWithDictionary:JSON];
                errorCallback (playfab_error_object, userData);
            } else {
                NSDictionary *class_data = [JSON valueForKey:@"data"];
                ProfilesGetGlobalPolicyResponse *model = [[ProfilesGetGlobalPolicyResponse new] initWithDictionary:class_data];
                
                callback (model, userData);
            }
        } else { //Connection Error:
            NSError *e = nil;
            NSLog(@"connection error response: %@",data);
            PlayFabError *model;
            if (data != nil) {
                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options: NSJSONReadingMutableContainers error: &e];
                JAGPropertyConverter *converter = [JAGPropertyConverter new];
                model = [converter composeModelFromObject:JSON];
            } else {
                model = [PlayFabError new];
                model.error = @"unknown, data empty.";
            }
        errorCallback (model, userData);
        }
    }];

    [connection postURL:[NSString stringWithFormat:@"%@%@",[PlayFabClientAPI GetURL],@"/Profile/GetGlobalPolicy"] body:jsonString authType:nil authKey:nil];
}
-(void) GetProfile:(ProfilesGetEntityProfileRequest*)request success:(GetProfileCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData
{
    
    
    NSString *jsonString = [request JSONStringWithClass:[ProfilesGetEntityProfileRequest class]];
    
    PlayFabConnection * connection = [PlayFabConnection new];//[[MyConnection alloc]initWithRequest:req];
    [connection setCompletionBlock:^(id obj, NSError *err) {
        NSData * data = obj;
        if (!err) {
            //NSLog(@"connection success response: %@",(NSString*)data);
            NSError *e = nil;
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options:0 error: &e];

            NSString* playfab_error = [JSON valueForKey:@"error"];
            if (playfab_error != nil) {
                //if there was an "error" object in the JSON:
                PlayFabError *playfab_error_object = [[PlayFabError new] initWithDictionary:JSON];
                errorCallback (playfab_error_object, userData);
            } else {
                NSDictionary *class_data = [JSON valueForKey:@"data"];
                ProfilesGetEntityProfileResponse *model = [[ProfilesGetEntityProfileResponse new] initWithDictionary:class_data];
                
                callback (model, userData);
            }
        } else { //Connection Error:
            NSError *e = nil;
            NSLog(@"connection error response: %@",data);
            PlayFabError *model;
            if (data != nil) {
                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options: NSJSONReadingMutableContainers error: &e];
                JAGPropertyConverter *converter = [JAGPropertyConverter new];
                model = [converter composeModelFromObject:JSON];
            } else {
                model = [PlayFabError new];
                model.error = @"unknown, data empty.";
            }
        errorCallback (model, userData);
        }
    }];

    [connection postURL:[NSString stringWithFormat:@"%@%@",[PlayFabClientAPI GetURL],@"/Profile/GetProfile"] body:jsonString authType:nil authKey:nil];
}
-(void) GetProfiles:(ProfilesGetEntityProfilesRequest*)request success:(GetProfilesCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData
{
    
    
    NSString *jsonString = [request JSONStringWithClass:[ProfilesGetEntityProfilesRequest class]];
    
    PlayFabConnection * connection = [PlayFabConnection new];//[[MyConnection alloc]initWithRequest:req];
    [connection setCompletionBlock:^(id obj, NSError *err) {
        NSData * data = obj;
        if (!err) {
            //NSLog(@"connection success response: %@",(NSString*)data);
            NSError *e = nil;
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options:0 error: &e];

            NSString* playfab_error = [JSON valueForKey:@"error"];
            if (playfab_error != nil) {
                //if there was an "error" object in the JSON:
                PlayFabError *playfab_error_object = [[PlayFabError new] initWithDictionary:JSON];
                errorCallback (playfab_error_object, userData);
            } else {
                NSDictionary *class_data = [JSON valueForKey:@"data"];
                ProfilesGetEntityProfilesResponse *model = [[ProfilesGetEntityProfilesResponse new] initWithDictionary:class_data];
                
                callback (model, userData);
            }
        } else { //Connection Error:
            NSError *e = nil;
            NSLog(@"connection error response: %@",data);
            PlayFabError *model;
            if (data != nil) {
                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options: NSJSONReadingMutableContainers error: &e];
                JAGPropertyConverter *converter = [JAGPropertyConverter new];
                model = [converter composeModelFromObject:JSON];
            } else {
                model = [PlayFabError new];
                model.error = @"unknown, data empty.";
            }
        errorCallback (model, userData);
        }
    }];

    [connection postURL:[NSString stringWithFormat:@"%@%@",[PlayFabClientAPI GetURL],@"/Profile/GetProfiles"] body:jsonString authType:nil authKey:nil];
}
-(void) GetTitlePlayersFromMasterPlayerAccountIds:(ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest*)request success:(GetTitlePlayersFromMasterPlayerAccountIdsCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData
{
    
    
    NSString *jsonString = [request JSONStringWithClass:[ProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest class]];
    
    PlayFabConnection * connection = [PlayFabConnection new];//[[MyConnection alloc]initWithRequest:req];
    [connection setCompletionBlock:^(id obj, NSError *err) {
        NSData * data = obj;
        if (!err) {
            //NSLog(@"connection success response: %@",(NSString*)data);
            NSError *e = nil;
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options:0 error: &e];

            NSString* playfab_error = [JSON valueForKey:@"error"];
            if (playfab_error != nil) {
                //if there was an "error" object in the JSON:
                PlayFabError *playfab_error_object = [[PlayFabError new] initWithDictionary:JSON];
                errorCallback (playfab_error_object, userData);
            } else {
                NSDictionary *class_data = [JSON valueForKey:@"data"];
                ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse *model = [[ProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse new] initWithDictionary:class_data];
                
                callback (model, userData);
            }
        } else { //Connection Error:
            NSError *e = nil;
            NSLog(@"connection error response: %@",data);
            PlayFabError *model;
            if (data != nil) {
                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options: NSJSONReadingMutableContainers error: &e];
                JAGPropertyConverter *converter = [JAGPropertyConverter new];
                model = [converter composeModelFromObject:JSON];
            } else {
                model = [PlayFabError new];
                model.error = @"unknown, data empty.";
            }
        errorCallback (model, userData);
        }
    }];

    [connection postURL:[NSString stringWithFormat:@"%@%@",[PlayFabClientAPI GetURL],@"/Profile/GetTitlePlayersFromMasterPlayerAccountIds"] body:jsonString authType:nil authKey:nil];
}
-(void) SetGlobalPolicy:(ProfilesSetGlobalPolicyRequest*)request success:(SetGlobalPolicyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData
{
    
    
    NSString *jsonString = [request JSONStringWithClass:[ProfilesSetGlobalPolicyRequest class]];
    
    PlayFabConnection * connection = [PlayFabConnection new];//[[MyConnection alloc]initWithRequest:req];
    [connection setCompletionBlock:^(id obj, NSError *err) {
        NSData * data = obj;
        if (!err) {
            //NSLog(@"connection success response: %@",(NSString*)data);
            NSError *e = nil;
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options:0 error: &e];

            NSString* playfab_error = [JSON valueForKey:@"error"];
            if (playfab_error != nil) {
                //if there was an "error" object in the JSON:
                PlayFabError *playfab_error_object = [[PlayFabError new] initWithDictionary:JSON];
                errorCallback (playfab_error_object, userData);
            } else {
                NSDictionary *class_data = [JSON valueForKey:@"data"];
                ProfilesSetGlobalPolicyResponse *model = [[ProfilesSetGlobalPolicyResponse new] initWithDictionary:class_data];
                
                callback (model, userData);
            }
        } else { //Connection Error:
            NSError *e = nil;
            NSLog(@"connection error response: %@",data);
            PlayFabError *model;
            if (data != nil) {
                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options: NSJSONReadingMutableContainers error: &e];
                JAGPropertyConverter *converter = [JAGPropertyConverter new];
                model = [converter composeModelFromObject:JSON];
            } else {
                model = [PlayFabError new];
                model.error = @"unknown, data empty.";
            }
        errorCallback (model, userData);
        }
    }];

    [connection postURL:[NSString stringWithFormat:@"%@%@",[PlayFabClientAPI GetURL],@"/Profile/SetGlobalPolicy"] body:jsonString authType:nil authKey:nil];
}
-(void) SetProfileLanguage:(ProfilesSetProfileLanguageRequest*)request success:(SetProfileLanguageCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData
{
    
    
    NSString *jsonString = [request JSONStringWithClass:[ProfilesSetProfileLanguageRequest class]];
    
    PlayFabConnection * connection = [PlayFabConnection new];//[[MyConnection alloc]initWithRequest:req];
    [connection setCompletionBlock:^(id obj, NSError *err) {
        NSData * data = obj;
        if (!err) {
            //NSLog(@"connection success response: %@",(NSString*)data);
            NSError *e = nil;
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options:0 error: &e];

            NSString* playfab_error = [JSON valueForKey:@"error"];
            if (playfab_error != nil) {
                //if there was an "error" object in the JSON:
                PlayFabError *playfab_error_object = [[PlayFabError new] initWithDictionary:JSON];
                errorCallback (playfab_error_object, userData);
            } else {
                NSDictionary *class_data = [JSON valueForKey:@"data"];
                ProfilesSetProfileLanguageResponse *model = [[ProfilesSetProfileLanguageResponse new] initWithDictionary:class_data];
                
                callback (model, userData);
            }
        } else { //Connection Error:
            NSError *e = nil;
            NSLog(@"connection error response: %@",data);
            PlayFabError *model;
            if (data != nil) {
                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options: NSJSONReadingMutableContainers error: &e];
                JAGPropertyConverter *converter = [JAGPropertyConverter new];
                model = [converter composeModelFromObject:JSON];
            } else {
                model = [PlayFabError new];
                model.error = @"unknown, data empty.";
            }
        errorCallback (model, userData);
        }
    }];

    [connection postURL:[NSString stringWithFormat:@"%@%@",[PlayFabClientAPI GetURL],@"/Profile/SetProfileLanguage"] body:jsonString authType:nil authKey:nil];
}
-(void) SetProfilePolicy:(ProfilesSetEntityProfilePolicyRequest*)request success:(SetProfilePolicyCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*)userData
{
    
    
    NSString *jsonString = [request JSONStringWithClass:[ProfilesSetEntityProfilePolicyRequest class]];
    
    PlayFabConnection * connection = [PlayFabConnection new];//[[MyConnection alloc]initWithRequest:req];
    [connection setCompletionBlock:^(id obj, NSError *err) {
        NSData * data = obj;
        if (!err) {
            //NSLog(@"connection success response: %@",(NSString*)data);
            NSError *e = nil;
            NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options:0 error: &e];

            NSString* playfab_error = [JSON valueForKey:@"error"];
            if (playfab_error != nil) {
                //if there was an "error" object in the JSON:
                PlayFabError *playfab_error_object = [[PlayFabError new] initWithDictionary:JSON];
                errorCallback (playfab_error_object, userData);
            } else {
                NSDictionary *class_data = [JSON valueForKey:@"data"];
                ProfilesSetEntityProfilePolicyResponse *model = [[ProfilesSetEntityProfilePolicyResponse new] initWithDictionary:class_data];
                
                callback (model, userData);
            }
        } else { //Connection Error:
            NSError *e = nil;
            NSLog(@"connection error response: %@",data);
            PlayFabError *model;
            if (data != nil) {
                NSDictionary *JSON = [NSJSONSerialization JSONObjectWithData:data options: NSJSONReadingMutableContainers error: &e];
                JAGPropertyConverter *converter = [JAGPropertyConverter new];
                model = [converter composeModelFromObject:JSON];
            } else {
                model = [PlayFabError new];
                model.error = @"unknown, data empty.";
            }
        errorCallback (model, userData);
        }
    }];

    [connection postURL:[NSString stringWithFormat:@"%@%@",[PlayFabClientAPI GetURL],@"/Profile/SetProfilePolicy"] body:jsonString authType:nil authKey:nil];
}

@end
