//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseProtocol.h"

#import "GCDAsyncSocketDelegate.h"
#import "GCDAsyncUdpSocketDelegate.h"

@class GCDAsyncSocket, GCDAsyncUdpSocket, NSString;

@interface WKLeShiProtocol : WKBaseProtocol <GCDAsyncUdpSocketDelegate, GCDAsyncSocketDelegate>
{
    CDUnknownBlockType _successBlock;
    GCDAsyncUdpSocket *sendKeySocket;
    GCDAsyncSocket *willWorkSocket;
    NSString *_actionPort;
}

@property(copy, nonatomic) NSString *actionPort; // @synthesize actionPort=_actionPort;
@property(retain, nonatomic) GCDAsyncSocket *willWorkSocket; // @synthesize willWorkSocket;
@property(retain, nonatomic) GCDAsyncUdpSocket *sendKeySocket; // @synthesize sendKeySocket;
- (void).cxx_destruct;
- (void)udpWillWork;
- (id)getLeshiDiscovery;
- (void)releaseResources;
- (void)openServerApp:(CDUnknownBlockType)arg1;
- (void)autoInstallServerApp:(CDUnknownBlockType)arg1;
- (_Bool)canAutoInstallServer;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (id)getLeShiKeyCodeStr:(long long)arg1;
- (void)sendLeshiKeycode:(id)arg1;
- (_Bool)needChange:(id)arg1;
- (void)sendProtocolKey:(int)arg1;
- (_Bool)willWorkWithKey:(int)arg1;
- (void)willWorkWithDevice:(id)arg1 WithSuccessBlock:(CDUnknownBlockType)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;

@end

