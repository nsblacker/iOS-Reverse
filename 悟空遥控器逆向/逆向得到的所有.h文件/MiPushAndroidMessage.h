//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MiPushMessage.h"

@class NSNumber, NSString;

@interface MiPushAndroidMessage : MiPushMessage
{
    NSString *collapseKey;
    NSString *payload;
    NSString *restrictedPackageName;
    NSNumber *notifyType;
    NSNumber *passThrough;
    NSNumber *notifyId;
}

- (void).cxx_destruct;
- (id)getMessage;
- (void)setNotifyId:(int)arg1;
- (void)setRestrictedPackage:(id)arg1;
- (void)setNotifyType:(int)arg1;
- (void)setPassThrough:(int)arg1;
- (void)setPayload:(id)arg1;
- (void)setCollapseKey:(id)arg1;
- (void)dealloc;

@end

