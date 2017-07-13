//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface SetCloudDataPointReturnPacket : NSObject
{
    NSMutableData *_packetData;
    int _packetSize;
    struct {
        unsigned int deviceID_offset:8;
        unsigned int deviceID_len:8;
        unsigned int messageID_offset:8;
        unsigned int messageID_len:8;
        unsigned int code_offset:8;
        unsigned int code_len:8;
    } _packetFlag;
}

+ (int)getPacketSize;
- (void).cxx_destruct;
- (int)getCode;
- (int)getMessageID;
- (int)getDeviceID;
- (int)getPacketSize;
- (id)initWithData:(id)arg1;
- (void)initProtocolLayout;

@end

