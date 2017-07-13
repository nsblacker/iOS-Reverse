//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASICloudFilesRequest.h"

#import "NSXMLParserDelegate.h"

@class ASICloudFilesObject, NSMutableArray, NSString;

@interface ASICloudFilesObjectRequest : ASICloudFilesRequest <NSXMLParserDelegate>
{
    NSString *accountName;
    NSString *containerName;
    NSString *currentContent;
    NSString *currentElement;
    ASICloudFilesObject *currentObject;
    NSMutableArray *objects;
}

+ (id)deleteObjectRequestWithContainer:(id)arg1 objectPath:(id)arg2;
+ (id)postObjectRequestWithContainer:(id)arg1 objectPath:(id)arg2 metadata:(id)arg3;
+ (id)postObjectRequestWithContainer:(id)arg1 object:(id)arg2;
+ (id)putObjectRequestWithContainer:(id)arg1 objectPath:(id)arg2 contentType:(id)arg3 file:(id)arg4 metadata:(id)arg5 etag:(id)arg6;
+ (id)putObjectRequestWithContainer:(id)arg1 objectPath:(id)arg2 contentType:(id)arg3 objectData:(id)arg4 metadata:(id)arg5 etag:(id)arg6;
+ (id)putObjectRequestWithContainer:(id)arg1 object:(id)arg2;
+ (id)getObjectRequestWithContainer:(id)arg1 objectPath:(id)arg2;
+ (id)listRequestWithContainer:(id)arg1;
+ (id)listRequestWithContainer:(id)arg1 limit:(unsigned int)arg2 marker:(id)arg3 prefix:(id)arg4 path:(id)arg5;
+ (id)queryStringWithContainer:(id)arg1 limit:(unsigned int)arg2 marker:(id)arg3 prefix:(id)arg4 path:(id)arg5;
+ (id)objectInfoRequest:(id)arg1 objectPath:(id)arg2;
+ (id)containerInfoRequest:(id)arg1;
+ (id)storageRequestWithMethod:(id)arg1 containerName:(id)arg2 objectPath:(id)arg3;
+ (id)storageRequestWithMethod:(id)arg1 containerName:(id)arg2 queryString:(id)arg3;
+ (id)storageRequestWithMethod:(id)arg1 containerName:(id)arg2;
@property(retain) NSString *containerName; // @synthesize containerName;
@property(retain) NSString *accountName; // @synthesize accountName;
@property(retain) ASICloudFilesObject *currentObject; // @synthesize currentObject;
@property(retain) NSString *currentContent; // @synthesize currentContent;
@property(retain) NSString *currentElement; // @synthesize currentElement;
- (void)dealloc;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)object;
- (id)objects;
- (unsigned int)containerBytesUsed;
- (unsigned int)containerObjectCount;

@end

