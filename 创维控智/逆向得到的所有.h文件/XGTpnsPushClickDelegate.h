//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XGTpnsPushClickDelegate : NSObject
{
    unsigned int _bid;
    unsigned int _ts;
    unsigned int _type;
    CDUnknownBlockType _clicksuccessCallback;
    CDUnknownBlockType _clickErrorCallback;
}

@property unsigned int type; // @synthesize type=_type;
@property unsigned int ts; // @synthesize ts=_ts;
@property unsigned int bid; // @synthesize bid=_bid;
@property(copy, nonatomic) CDUnknownBlockType clickErrorCallback; // @synthesize clickErrorCallback=_clickErrorCallback;
@property(copy, nonatomic) CDUnknownBlockType clicksuccessCallback; // @synthesize clicksuccessCallback=_clicksuccessCallback;
- (void)sendSecond:(id)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)dealloc;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;

@end

