//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCDAsyncSocketDelegate.h"

@class GCDAsyncSocket;

@interface WKXiaoMiOpenSever : NSObject <GCDAsyncSocketDelegate>
{
    GCDAsyncSocket *_versionSocket;
    GCDAsyncSocket *_checkSocket;
    CDUnknownBlockType _openSeverBlock;
}

- (void).cxx_destruct;
- (id)disposeResultString:(id)arg1;
- (_Bool)disposeSocketResult:(id)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)openServerAppWithDevice:(id)arg1 withResult:(CDUnknownBlockType)arg2;

@end

