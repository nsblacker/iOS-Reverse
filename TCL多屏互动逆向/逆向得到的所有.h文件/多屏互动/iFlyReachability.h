//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface iFlyReachability : NSObject
{
    BOOL localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (int)currentReachabilityStatus;
- (BOOL)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (BOOL)startNotifier;

@end

