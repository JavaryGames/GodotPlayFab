#import "PlayFabDataDataModels.h"


@implementation DataAbortFileUploadsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    if ([properties objectForKey:@"FileNames"]){
    NSArray* member_list = [properties objectForKey:@"FileNames"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.FileNames = [mutable_storage copy];
}

    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    

    return self;
}
@end
@implementation DataAbortFileUploadsResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    

    return self;
}
@end
@implementation DataDeleteFilesRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    if ([properties objectForKey:@"FileNames"]){
    NSArray* member_list = [properties objectForKey:@"FileNames"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.FileNames = [mutable_storage copy];
}

    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    

    return self;
}
@end
@implementation DataDeleteFilesResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    

    return self;
}
@end
@implementation DataEntityKey


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
@implementation DataFinalizeFileUploadsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    if ([properties objectForKey:@"FileNames"]){
    NSArray* member_list = [properties objectForKey:@"FileNames"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.FileNames = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation DataFinalizeFileUploadsResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    if ([properties objectForKey:@"Metadata"]){
    NSDictionary* member_list = [properties objectForKey:@"Metadata"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[DataGetFileMetadata new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.Metadata = [mutable_storage copy];
}

    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    

    return self;
}
@end
@implementation DataGetFileMetadata


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Checksum = [properties valueForKey:@"Checksum"];
    
    self.DownloadUrl = [properties valueForKey:@"DownloadUrl"];
    
    self.FileName = [properties valueForKey:@"FileName"];
    
    self.LastModified = [[PlayFabBaseModel timestampFormatter] dateFromString:[properties valueForKey:@"LastModified"]];
    
    self.Size = [properties valueForKey:@"Size"];
    

    return self;
}
@end
@implementation DataGetFilesRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    

    return self;
}
@end
@implementation DataGetFilesResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    if ([properties objectForKey:@"Metadata"]){
    NSDictionary* member_list = [properties objectForKey:@"Metadata"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[DataGetFileMetadata new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.Metadata = [mutable_storage copy];
}

    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    

    return self;
}
@end
@implementation DataGetObjectsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.EscapeObject = [[properties valueForKey:@"EscapeObject"] boolValue];
    

    return self;
}
@end
@implementation DataGetObjectsResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    if ([properties objectForKey:@"Objects"]){
    NSDictionary* member_list = [properties objectForKey:@"Objects"];
    NSMutableDictionary* mutable_storage = [NSMutableDictionary new];
    for(NSString* key in member_list){
        [mutable_storage setValue:[[DataObjectResult new] initWithDictionary:[member_list objectForKey:key]] forKey:key];
    }
    self.Objects = [mutable_storage copy];
}

    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    

    return self;
}
@end
@implementation DataInitiateFileUploadMetadata


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.FileName = [properties valueForKey:@"FileName"];
    
    self.UploadUrl = [properties valueForKey:@"UploadUrl"];
    

    return self;
}
@end
@implementation DataInitiateFileUploadsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    if ([properties objectForKey:@"FileNames"]){
    NSArray* member_list = [properties objectForKey:@"FileNames"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[member_list objectAtIndex:i]];
    }
    self.FileNames = [mutable_storage copy];
}

    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    

    return self;
}
@end
@implementation DataInitiateFileUploadsResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    
    if ([properties objectForKey:@"UploadDetails"]){
    NSArray* member_list = [properties objectForKey:@"UploadDetails"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[DataInitiateFileUploadMetadata new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.UploadDetails = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation DataObjectResult


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DataObject = [properties valueForKey:@"DataObject"];
    
    self.EscapedDataObject = [properties valueForKey:@"EscapedDataObject"];
    
    self.ObjectName = [properties valueForKey:@"ObjectName"];
    

    return self;
}
@end
@implementation DataSetObject


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.DataObject = [properties valueForKey:@"DataObject"];
    
    self.DeleteObject = [[properties valueForKey:@"DeleteObject"] boolValue];
    
    self.EscapedDataObject = [properties valueForKey:@"EscapedDataObject"];
    
    self.ObjectName = [properties valueForKey:@"ObjectName"];
    

    return self;
}
@end
@implementation DataSetObjectInfo


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ObjectName = [properties valueForKey:@"ObjectName"];
    
    self.OperationReason = [properties valueForKey:@"OperationReason"];
    
    self.SetResult = (DataOperationTypes)[properties valueForKey:@"DataSetResult"];
    

    return self;
}
@end
@implementation DataSetObjectsRequest


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.Entity = [[DataEntityKey new] initWithDictionary:[properties objectForKey:@"Entity"]];
    
    self.ExpectedProfileVersion = [properties valueForKey:@"ExpectedProfileVersion"];
    
    if ([properties objectForKey:@"Objects"]){
    NSArray* member_list = [properties objectForKey:@"Objects"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[DataSetObject new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.Objects = [mutable_storage copy];
}

    

    return self;
}
@end
@implementation DataSetObjectsResponse


-(id)initWithDictionary:(NSDictionary*)properties
{
    self = [super init];
    if (!self) {
        return nil;
    }

    
    self.ProfileVersion = [properties valueForKey:@"ProfileVersion"];
    
    if ([properties objectForKey:@"SetResults"]){
    NSArray* member_list = [properties objectForKey:@"SetResults"];
    NSMutableArray* mutable_storage = [NSMutableArray new];
    for(int i=0;i<[member_list count];i++){
        [mutable_storage addObject:[[DataSetObjectInfo new] initWithDictionary:[member_list objectAtIndex:i]]];
    }
    self.SetResults = [mutable_storage copy];
}

    

    return self;
}
@end
