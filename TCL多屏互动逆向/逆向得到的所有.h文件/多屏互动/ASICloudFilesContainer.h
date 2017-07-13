//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ASICloudFilesContainer : NSObject
{
    NSString *name;
    unsigned int count;
    unsigned int bytes;
    BOOL cdnEnabled;
    unsigned int ttl;
    NSString *cdnURL;
    BOOL logRetention;
    NSString *referrerACL;
    NSString *useragentACL;
}

+ (id)container;
@property(retain) NSString *useragentACL; // @synthesize useragentACL;
@property(retain) NSString *referrerACL; // @synthesize referrerACL;
@property BOOL logRetention; // @synthesize logRetention;
@property(retain) NSString *cdnURL; // @synthesize cdnURL;
@property unsigned int ttl; // @synthesize ttl;
@property BOOL cdnEnabled; // @synthesize cdnEnabled;
@property unsigned int bytes; // @synthesize bytes;
@property unsigned int count; // @synthesize count;
@property(retain) NSString *name; // @synthesize name;
- (void)dealloc;

@end

