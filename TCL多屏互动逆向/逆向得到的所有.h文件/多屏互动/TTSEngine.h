//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTSEngine : NSObject
{
    char _szSessionID[128];
    NSString *_backgroundSound;
    NSString *_text;
    NSString *_voiceName;
    unsigned int _sampleRate;
    unsigned int _volume;
    unsigned int _speed;
    NSString *_enginType;
    float _progress;
    BOOL _isGetDataThreadRun;
    BOOL _isBackResult;
    BOOL _isInit;
    BOOL _isSession;
    BOOL _isErrorOccur;
    id <TTSEngineDelegate> _delegate;
}

+ (id)alloc;
+ (id)instance;
@property(readonly, nonatomic) BOOL isSession; // @synthesize isSession=_isSession;
@property(readonly, nonatomic) BOOL isInit; // @synthesize isInit=_isInit;
@property id <TTSEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)notifySynthesizeProgress;
- (void)audioGetLoop;
- (void)textHanderThread;
- (void)completeThread;
- (void)complete;
- (BOOL)sessionEnd;
- (int)sessionBegin;
- (id)getSessionParams;
- (void)unInitialze;
- (int)getDownflow;
- (int)getUpflow;
- (void)setSpeed:(unsigned int)arg1;
- (void)setVoiceName:(id)arg1;
- (void)setBackgroundSound:(id)arg1;
- (void)setSampleRate:(int)arg1;
- (void)setText:(id)arg1 theParams:(id)arg2;
- (int)start;
- (void)cancel;
- (int)initialize:(id)arg1;
- (id)buildConfigString:(id)arg1;
- (id)init;

@end

