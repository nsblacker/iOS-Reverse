//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface LoginPacket : NSObject
{
    struct LOGIN_HEADER _loginStruct;
    int _packetSize;
    NSMutableData *_packetData;
    struct {
        unsigned int _version_offset:8;
        unsigned int _version_len:8;
        unsigned int _appID_offset:8;
        unsigned int _appID_len;
        unsigned int _authorize_len_offset:8;
        unsigned int _authorize_len_len:8;
        unsigned int _authorize_str_offset:8;
        unsigned int _authorize_str_len:8;
        unsigned int _reserved_offset:8;
        unsigned int _reserved_len:8;
        unsigned int _keepLive_offset:8;
        unsigned int _keepLive_len:8;
    } _packetFlag;
    NSMutableData *_data;
    struct LOGIN_HEADER _packetStruct;
}

+ (long long)getPacketSize;
@property(readonly, nonatomic) struct LOGIN_HEADER packetStruct; // @synthesize packetStruct=_packetStruct;
@property(readonly, retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)description;
- (void)setAliveTime:(int)arg1;
- (void)setReserved:(int)arg1;
- (void)setAuthStr:(id)arg1;
- (void)setAuthLen:(int)arg1;
- (void)setAppId:(int)arg1;
- (void)setVersion:(int)arg1;
- (int)getAliveTime;
- (int)getReserved;
- (id)getAuthStr;
- (int)getAuthLen;
- (int)getAppId;
- (int)getVersion;
- (id)initWithData:(id)arg1;
- (void)printByteData:(id)arg1;
- (id)initWithVersion:(int)arg1 andAppID:(int)arg2 andAuthLen:(int)arg3 andAuthStr:(id)arg4 andReserved:(int)arg5 andKeepAlive:(int)arg6;
- (id)init;
- (void)initProtocolLayout;
- (long long)getPacketSize;
- (id)getPacketData;

@end

