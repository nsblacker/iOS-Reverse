//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface AsyncSendPacket : NSObject
{
    NSData *buffer;
    NSData *address;
    double timeout;
    long long tag;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 address:(id)arg2 timeout:(double)arg3 tag:(long long)arg4;

@end

