//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCDAsyncSocket, NSObject<OS_dispatch_queue>, WKDeviceItem;

@interface ChangHongProtocol : NSObject
{
    _Bool mStopByUser;
    WKDeviceItem *currentDevice;
    GCDAsyncSocket *mSocket;
    NSObject<OS_dispatch_queue> *socketQueue;
}

- (void).cxx_destruct;
- (void)releaseSource;
- (_Bool)needChange:(id)arg1;
- (id)getChangHongKeyString:(int)arg1;
- (_Bool)willWorkWithKey:(int)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)sendKeyCode:(int)arg1;
- (_Bool)isWork:(id)arg1;
- (void)disConnected;
- (_Bool)reConnect;
- (_Bool)conncetHost:(id)arg1;

@end

