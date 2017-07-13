//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSString;

@interface STSimplePing : NSObject
{
    _Bool _nextSequenceNumberHasWrapped;
    unsigned short _identifier;
    unsigned short _nextSequenceNumber;
    NSString *_hostName;
    id <STSimplePingDelegate> _delegate;
    long long _addressStyle;
    NSData *_hostAddress;
    NSString *_IPAddress;
    long long _packetLength;
    struct __CFHost *_host;
    struct __CFSocket *_socket;
    NSDate *_pingStartDate;
}

+ (unsigned long long)icmpHeaderOffsetInIPv4Packet:(id)arg1 timeToLive:(long long *)arg2;
@property(retain, nonatomic) NSDate *pingStartDate; // @synthesize pingStartDate=_pingStartDate;
@property(retain, nonatomic) struct __CFSocket *socket; // @synthesize socket=_socket;
@property(retain, nonatomic) struct __CFHost *host; // @synthesize host=_host;
@property(nonatomic) _Bool nextSequenceNumberHasWrapped; // @synthesize nextSequenceNumberHasWrapped=_nextSequenceNumberHasWrapped;
@property(nonatomic) unsigned short nextSequenceNumber; // @synthesize nextSequenceNumber=_nextSequenceNumber;
@property(readonly, nonatomic) unsigned short identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long packetLength; // @synthesize packetLength=_packetLength;
@property(copy, nonatomic) NSString *IPAddress; // @synthesize IPAddress=_IPAddress;
@property(copy, nonatomic) NSData *hostAddress; // @synthesize hostAddress=_hostAddress;
@property(nonatomic) long long addressStyle; // @synthesize addressStyle=_addressStyle;
@property(nonatomic) __weak id <STSimplePingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (void).cxx_destruct;
- (void)stop;
- (void)stopSocket;
- (void)stopHostResolution;
- (void)start;
- (void)hostResolutionDone;
- (void)startWithHostAddress;
- (void)readData;
- (_Bool)validatePingResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2 timeToLive:(long long *)arg3;
- (_Bool)validatePing6ResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2;
- (_Bool)validatePing4ResponsePacket:(id)arg1 sequenceNumber:(unsigned short *)arg2 timeToLive:(long long *)arg3;
- (_Bool)validateSequenceNumber:(unsigned short)arg1;
- (void)sendPacket:(id)arg1;
- (id)packetWithPingData:(id)arg1;
- (id)pingPacketWithType:(unsigned char)arg1 payload:(id)arg2 requiresChecksum:(_Bool)arg3;
- (void)didFailWithHostStreamError:(CDStruct_87dc826d)arg1;
- (void)didFailWithError:(id)arg1;
@property(readonly, nonatomic) unsigned char hostAddressFamily;
- (void)dealloc;
- (id)initWithHostName:(id)arg1;

@end

