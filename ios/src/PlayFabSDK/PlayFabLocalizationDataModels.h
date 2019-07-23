#import <Foundation/Foundation.h>
#import "PlayFabBaseModel.h"


//predeclare all non-enum classes

@class LocalizationGetLanguageListRequest;

@class LocalizationGetLanguageListResponse;



@interface LocalizationGetLanguageListRequest : PlayFabBaseModel

/**/
-(id)initWithDictionary:(NSDictionary*)properties;
@end


@interface LocalizationGetLanguageListResponse : PlayFabBaseModel


/// <summary>
/*
/// The list of allowed languages, in BCP47 two-letter format
*/
/// </summary>
@property NSArray* LanguageList; 
/*
@property NSObject* Request;
@property NSObject* CustomData;
*/
-(id)initWithDictionary:(NSDictionary*)properties;
@end

