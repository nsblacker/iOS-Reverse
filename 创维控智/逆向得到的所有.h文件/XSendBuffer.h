//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DeviceEntity, NSData;

@interface XSendBuffer : NSObject
{
    int _msgId;
    NSData *_payload;
    int _type;
    DeviceEntity *_deviceEntity;
}

@property(retain, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(nonatomic) int msgId; // @synthesize msgId=_msgId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) DeviceEntity *deviceEntity; // @synthesize deviceEntity=_deviceEntity;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1 andMsgId:(int)arg2 andPayload:(id)arg3 toDevice:(id)arg4;

@end

