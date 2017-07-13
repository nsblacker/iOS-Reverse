//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AudioPlayerDelegate.h"

@class NSMutableArray, StreamAudioPlayer;

@interface AudioPlayerManager : NSObject <AudioPlayerDelegate>
{
    StreamAudioPlayer *_audioPlayer;
    NSMutableArray *_audioQueueArray;
    struct __sFILE *_fp;
    int _fileLength;
    id <AudioPlayerDelegate> _delegate;
    _Bool firstPlay;
    BOOL _isSubmitThreadRun;
    int _sample;
    unsigned long _hasBufferSize;
}

@property id <AudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *audioQueueArray; // @synthesize audioQueueArray=_audioQueueArray;
- (void)dealloc;
- (int)setVolume:(float)arg1;
- (int)getStatus;
- (BOOL)getPlayerThreadStatus;
- (void)stop;
- (void)resume;
- (void)pause;
- (BOOL)play;
- (void)submitAudioBuffer:(const void *)arg1 withValue:(int)arg2;
- (void)endSubmitAudio;
- (void)startSubmitAudio;
- (void)writeHead:(struct __sFILE *)arg1 size:(long)arg2;
- (id)getDirectory;
- (_Bool)rePlay;
- (void)enqueueBuffer;
- (BOOL)getPlayerFailed;
- (_Bool)appendData:(const char *)arg1 size:(unsigned long)arg2;
- (void)setSample:(int)arg1;
- (void)writeHeader;
- (_Bool)appendBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (id)init;
- (void)onFinished:(id)arg1;
- (void)onPlayError:(id)arg1 errorCode:(int)arg2;
- (void)onPaused:(id)arg1;
- (void)onPlaying:(id)arg1;
- (void)onProgress:(id)arg1 progress:(float)arg2;
- (void)onBuffering:(id)arg1;

@end

