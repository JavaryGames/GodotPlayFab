#import "PlayFabLocalizationDataModels.h"


@implementation LocalizationGetLanguageListRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    

    return self;
}
@end
@implementation LocalizationGetLanguageListResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    if ([properties objectForKey:@"LanguageList"]){
    NSArray* member_list = [properties objectForKey:@"LanguageList"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.LanguageList = [mutable_storage copy];
}

    

    return self;
}
@end
