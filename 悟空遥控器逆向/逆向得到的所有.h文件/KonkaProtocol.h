//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KonkaTCPWriteThread;

@interface KonkaProtocol : NSObject
{
    KonkaTCPWriteThread *mWriteThread;
}

- (void).cxx_destruct;
- (id)getKeyCodeBuffer:(int)arg1;
- (_Bool)needChange:(id)arg1;
- (void)disConncet;
- (void)sendMsg:(int)arg1;
- (void)sendKeyCode:(int)arg1;
- (_Bool)willWorkWithKey:(int)arg1;
- (void)willWorkWithDevice:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2;

@end

