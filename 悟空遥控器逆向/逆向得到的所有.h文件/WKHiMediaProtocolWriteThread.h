//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSThread.h"

@class WKDeviceItem;

@interface WKHiMediaProtocolWriteThread : NSThread
{
    WKDeviceItem *mCurrentDevice;
}

- (void).cxx_destruct;
- (void)releaseResources;
- (_Bool)needChange:(id)arg1;
- (void)sendKey:(int)arg1;
- (void)willWorkWithDevice:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;

@end

