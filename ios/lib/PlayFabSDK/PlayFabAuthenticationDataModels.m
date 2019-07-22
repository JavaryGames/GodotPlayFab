#import "PlayFabAuthenticationDataModels.h"


@implementation AuthenticationEntityKey


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
@implementation AuthenticationEntityLineage


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.CharacterId = [properties valueForKey:@"CharacterId"];
    
    self.GroupId = [properties valueForKey:@"GroupId"];
    
    self.MasterPlayerAccountId = [properties valueForKey:@"MasterPlayerAccountId"];
    
    self.NamespaceId = [properties valueForKey:@"NamespaceId"];
    
    self.TitleId = [properties valueForKey:@"TitleId"];
    
    self.TitlePlayerAccountId = [properties valueForKey:@"TitlePlayerAccountId"];
    

    return self;
}
@end
@implementation AuthenticationGetEntityTokenRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[AuthenticationEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    

    return self;
}
@end
@implementation AuthenticationGetEntityTokenResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[AuthenticationEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.EntityToken = [properties valueForKey:@"EntityToken"];
    
    self.TokenExpiration = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"TokenExpiration"]];
    

    return self;
}
@end
@implementation AuthenticationValidateEntityTokenRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.EntityToken = [properties valueForKey:@"EntityToken"];
    

    return self;
}
@end
@implementation AuthenticationValidateEntityTokenResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[AuthenticationEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.Lineage = [[AuthenticationEntityLineage new] initWithDictionary:[properties objectForKey:@"Lineage"]];
    

    return self;
}
@end
