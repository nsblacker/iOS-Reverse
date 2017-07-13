//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSMutableDictionary, NSString;

@interface ASICloudFilesObject : NSObject
{
    NSString *name;
    NSString *hash;
    unsigned int bytes;
    NSString *contentType;
    NSDate *lastModified;
    NSData *data;
    NSMutableDictionary *metadata;
}

+ (id)object;
@property(retain) NSMutableDictionary *metadata; // @synthesize metadata;
@property(retain) NSData *data; // @synthesize data;
@property(retain) NSDate *lastModified; // @synthesize lastModified;
@property(retain) NSString *contentType; // @synthesize contentType;
@property unsigned int bytes; // @synthesize bytes;
@property(retain) NSString *hash; // @synthesize hash;
@property(retain) NSString *name; // @synthesize name;
- (void)dealloc;

@end

