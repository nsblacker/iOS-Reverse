//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface PingPacket : NSObject
{
    NSData *_packetData;
    struct {
        unsigned int _sessionId_offset:8;
        unsigned int _seesionId_len:8;
    } packetFlag;
}

- (void).cxx_destruct;
- (id)getPacketData;
- (int)getPacketSize;
- (id)initWithSessionID:(int)arg1;

@end

