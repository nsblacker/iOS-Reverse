//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFlySynthesizerImpDelegate.h"

@class IFlySynthesizerImp;

@interface IFlySynthesizer : NSObject <IFlySynthesizerImpDelegate>
{
    IFlySynthesizerImp *_iFlySynthesizerImp;
    id <IFlySynthesizerDelegate> _delegate;
}

@property id <IFlySynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (int)getDownflow;
- (int)getUpflow;
- (void)cancel;
- (BOOL)start;
- (void)setVolume:(unsigned int)arg1;
- (void)setSpeed:(unsigned int)arg1;
- (void)setVoiceName:(id)arg1;
- (void)setBackgroundSound:(id)arg1;
- (void)setSampleRate:(int)arg1;
- (void)setText:(id)arg1 theParams:(id)arg2;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)rePlay;
- (id)initWithParam:(id)arg1;
- (void)onIFlySynthesizerImpPlayProgress:(float)arg1;
- (void)onIFlySynthesizerImpBufferProgress:(float)arg1;
- (void)onIFlySynthesizerImpTTSEndState:(int)arg1;
- (void)onIFlySynthesizerImpState:(int)arg1;

@end

