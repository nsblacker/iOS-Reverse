//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseProtocol.h"

@class WKHiMediaProtocolWriteThread;

@interface WKHiMediaProtocol : WKBaseProtocol
{
    WKHiMediaProtocolWriteThread *mWriteThread;
}

- (void).cxx_destruct;
- (void)releaseResources;
- (void)openServerApp:(CDUnknownBlockType)arg1;
- (void)autoInstallServerApp:(CDUnknownBlockType)arg1;
- (_Bool)canAutoInstallServer;
- (_Bool)needChange:(id)arg1;
- (void)sendProtocolKey:(int)arg1;
- (_Bool)willWorkWithKey:(int)arg1;
- (void)willWorkWithDevice:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;

@end

