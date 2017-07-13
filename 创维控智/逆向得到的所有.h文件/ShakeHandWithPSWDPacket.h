//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface ShakeHandWithPSWDPacket : NSObject
{
    BOOL _version;
    unsigned char _port;
    BOOL _flag;
    short _messageID;
    unsigned short _keepAliveTime;
    NSData *_accessKeyMD5;
}

@property(nonatomic) unsigned short keepAliveTime; // @synthesize keepAliveTime=_keepAliveTime;
@property(nonatomic) BOOL flag; // @synthesize flag=_flag;
@property(nonatomic) unsigned char port; // @synthesize port=_port;
@property(retain, nonatomic) NSData *accessKeyMD5; // @synthesize accessKeyMD5=_accessKeyMD5;
@property(nonatomic) short messageID; // @synthesize messageID=_messageID;
@property(nonatomic) BOOL version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)getPacketData;
- (id)initWithVersion:(int)arg1 andMessageID:(short)arg2 andAuthKey:(id)arg3 andListenPort:(int)arg4 andFlag:(int)arg5 andKeepAlive:(int)arg6;

@end

