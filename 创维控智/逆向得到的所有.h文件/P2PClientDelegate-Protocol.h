//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol P2PClientDelegate <NSObject>

@optional
- (void)P2PClientReady:(NSDictionary *)arg1;
- (void)P2PClientAccept:(NSDictionary *)arg1;
- (void)P2PClientReject:(NSDictionary *)arg1;
- (void)P2PClientCalling:(NSDictionary *)arg1;
@end

