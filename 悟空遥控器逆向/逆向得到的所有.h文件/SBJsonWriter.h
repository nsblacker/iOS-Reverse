//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBJsonWriter : NSObject
{
    _Bool sortKeys;
    _Bool humanReadable;
    NSString *error;
    unsigned long long maxDepth;
    CDUnknownBlockType sortKeysComparator;
}

@property(copy) CDUnknownBlockType sortKeysComparator; // @synthesize sortKeysComparator;
@property unsigned long long maxDepth; // @synthesize maxDepth;
@property(copy) NSString *error; // @synthesize error;
@property _Bool humanReadable; // @synthesize humanReadable;
@property _Bool sortKeys; // @synthesize sortKeys;
- (void).cxx_destruct;
- (id)dataWithObject:(id)arg1;
- (id)stringWithObject:(id)arg1 error:(id *)arg2;
- (id)stringWithObject:(id)arg1;
- (id)init;

@end

