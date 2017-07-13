//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFlyRecognizerImpDelegate.h"

@class IFlyRecognizerImp;

@interface IFlyRecognizer : NSObject <IFlyRecognizerImpDelegate>
{
    IFlyRecognizerImp *_iFlyRecognizerImp;
    id <IFlyRecognizerDelegate> _delegate;
}

@property id <IFlyRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)reSpeak;
- (void)reGetData;
- (void)stopPrevRecord;
- (void)resumePrevRecord;
- (void)pausePrevRecord;
- (void)playPrevRecord;
- (int)getDownflow;
- (int)getUpflow;
- (float)getPower;
- (void)stop;
- (void)cancel;
- (BOOL)start;
- (void)setSampleRate:(int)arg1;
- (void)setEngine:(id)arg1 theEngineParam:(id)arg2 theGrammarID:(id)arg3;
- (id)initWithParam:(id)arg1;
- (void)onIFlyGetPower:(float)arg1;
- (void)onIFlyRecognizerImpProgress:(float)arg1;
- (void)onIFlyRecognizerImpResult:(id)arg1;
- (void)onIFlyRecognizerImpISREndState:(int)arg1;
- (void)onIFlyRecognizerImpState:(int)arg1;

@end

