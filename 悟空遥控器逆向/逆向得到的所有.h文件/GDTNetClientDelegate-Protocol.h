//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GDTNetCallback, GDTNetRequest;

@protocol GDTNetClientDelegate <NSObject>
- (void)execute:(GDTNetRequest *)arg1 callback:(GDTNetCallback *)arg2 priority:(long long)arg3 retryTimes:(int)arg4;
- (void)execute:(GDTNetRequest *)arg1 callback:(GDTNetCallback *)arg2 priority:(long long)arg3;
- (void)execute:(GDTNetRequest *)arg1 callback:(GDTNetCallback *)arg2;
@end

