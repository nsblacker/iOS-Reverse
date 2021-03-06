//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XGTpnsTokenTagDelegate : NSObject
{
    unsigned char _flag;
    CDUnknownBlockType _tagsuccessCallback;
    CDUnknownBlockType _tagErrorCallback;
    NSString *_tag;
}

@property(nonatomic) unsigned char flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) CDUnknownBlockType tagErrorCallback; // @synthesize tagErrorCallback=_tagErrorCallback;
@property(copy, nonatomic) CDUnknownBlockType tagsuccessCallback; // @synthesize tagsuccessCallback=_tagsuccessCallback;
- (void)sendSecond:(id)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)dealloc;

@end

