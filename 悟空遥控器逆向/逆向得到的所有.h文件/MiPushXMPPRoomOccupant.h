//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MiPushXMPPJID, NSString;

@interface MiPushXMPPRoomOccupant : NSObject
{
    MiPushXMPPJID *jid;
    NSString *nick;
    NSString *role;
}

+ (id)occupantWithJID:(id)arg1 nick:(id)arg2 role:(id)arg3;
@property(readonly) NSString *role; // @dynamic role;
@property(readonly) NSString *nick; // @dynamic nick;
@property(readonly) MiPushXMPPJID *jid; // @dynamic jid;
- (void)dealloc;
- (id)initWithJID:(id)arg1 nick:(id)arg2 role:(id)arg3;

@end

