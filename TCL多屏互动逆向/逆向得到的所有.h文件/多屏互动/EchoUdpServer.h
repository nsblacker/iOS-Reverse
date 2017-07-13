//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncUdpSocket;

@interface EchoUdpServer : NSObject
{
    AsyncUdpSocket *udpSocket;
    BOOL isRunning;
    int _port;
    id _deleglate;
}

@property id deleglate; // @synthesize deleglate=_deleglate;
- (void)onUdpSocket:(id)arg1 didReceiveData:(id)arg2 withTag:(long)arg3 fromHost:(id)arg4 port:(unsigned short)arg5;
- (void)sendData:(id)arg1;
- (void)close;
- (BOOL)restart;
- (BOOL)stop;
- (BOOL)start;
- (id)init:(id)arg1;

@end

