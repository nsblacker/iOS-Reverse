//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface XGAsyncWritePacket : NSObject
{
    NSData *buffer;
    unsigned long long bytesDone;
    long long tag;
    double timeout;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long long)arg3;

@end

