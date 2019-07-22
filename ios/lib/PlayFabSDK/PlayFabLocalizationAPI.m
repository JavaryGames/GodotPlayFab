#import "PlayFabLocalizationAPI.h"
#import "PlayFabConnection.h"

#import <UIKit/UIKit.h>
#include <sys/sysctl.h>

#import "JAGPropertyConverter.h"


@implementation PlayFabLocalizationAPI

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

-(void) GetLanguageList:(GetLanguageListCallback)callback failure:(ErrorCallback)errorCallback withUserData:(NSObject*) userData
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
                LocalizationGetLanguageListResponse *model = [[LocalizationGetLanguageListResponse new] initWithDictionary:class_data];
                
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

    [connection postURL:[NSString stringWithFormat:@"%@%@",[PlayFabClientAPI GetURL],@"/Locale/GetLanguageList"] body:jsonString authType:nil authKey:nil];
}

@end
