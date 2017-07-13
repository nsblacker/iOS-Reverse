//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<PPMediaControllerDelegate>;

@interface PPMediaController : NSObject
{
    struct PP_MediaController *mediaController;
    NSObject<PPMediaControllerDelegate> *delegate;
}

+ (id)sharedMediaController;
@property(retain, nonatomic) NSObject<PPMediaControllerDelegate> *delegate; // @synthesize delegate;
- (BOOL)updateVolumeForSpeaker:(id)arg1;
- (BOOL)seekTarget:(id)arg1 onSpeaker:(id)arg2;
- (BOOL)setVolume:(unsigned int)arg1 onSpeaker:(id)arg2;
- (BOOL)updateMutedForSpeaker:(id)arg1;
- (BOOL)setMuted:(BOOL)arg1 onSpeaker:(id)arg2;
- (id)getMediaItemBestUrlwithMediaItem:(id)arg1;
- (id)getMediaItemBestUrlForDevice:(id)arg1 withMediaItem:(id)arg2;
- (BOOL)setCurrentSong:(id)arg1 onSpeaker:(id)arg2;
- (BOOL)stopSpeaker:(id)arg1;
- (BOOL)playSpeaker:(id)arg1;
- (BOOL)pauseSpeaker:(id)arg1;
- (BOOL)updateTransportInfoForSpeaker:(id)arg1;
- (BOOL)updatePositionInfoForSpeaker:(id)arg1;
- (BOOL)updateMediaInfoForSpeaker:(id)arg1;
- (BOOL)browseMetadataOfItem:(id)arg1 onServer:(id)arg2 userData:(id)arg3;
- (BOOL)browseContentsOfFolder:(id)arg1 onServer:(id)arg2 fromIndex:(unsigned int)arg3 forNumber:(unsigned int)arg4 userData:(id)arg5;
- (void)dealloc;
- (struct PP_MediaController *)getPPMediaController;
- (id)initWithUPnP:(id)arg1;
- (void)clearWithoutDevice:(id)arg1;
- (void)clearAllDevice;

@end

