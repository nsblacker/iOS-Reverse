//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "IFlySpeechRecognizerDelegate.h"
#import "WKVoiceRecognViewDelegate.h"

@class IFlySpeechRecognizer, NSString, WKVoiceRecognView;

@interface WKVoiceRecognitionControl : NSObject <IFlySpeechRecognizerDelegate, WKVoiceRecognViewDelegate, AVAudioPlayerDelegate>
{
    NSString *_resultFromJson;
    IFlySpeechRecognizer *_iFlySpeechRecognizer;
    WKVoiceRecognView *voiceRecognView;
}

+ (_Bool)canUseRecord;
+ (id)shareInstances;
@property(retain, nonatomic) WKVoiceRecognView *voiceRecognView; // @synthesize voiceRecognView;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)onVolumeChanged:(int)arg1;
- (void)onResults:(id)arg1 isLast:(_Bool)arg2;
- (void)recognitionEnded;
- (void)onError:(id)arg1;
- (void)onEndOfSpeech;
- (void)onBeginOfSpeech;
- (void)stopListener;
- (void)playTheOpeningSounds;
- (void)startListener;
- (void)checkAuthrize:(CDUnknownBlockType)arg1;
- (void)onVoiceRecognViewDelegateTapHidden;
- (void)initRecognizer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

