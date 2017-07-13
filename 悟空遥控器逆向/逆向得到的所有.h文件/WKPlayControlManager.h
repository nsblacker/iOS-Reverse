//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WKBasePlayControl;

@interface WKPlayControlManager : NSObject
{
    WKBasePlayControl *_currentPlayControl;
    long long _currentPlayControlMode;
}

+ (id)defaultManager;
@property(nonatomic) long long currentPlayControlMode; // @synthesize currentPlayControlMode=_currentPlayControlMode;
- (void).cxx_destruct;
- (void)getVideoInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)videoInfoUrl:(id)arg1;
- (void)changeVideoEpisode:(int)arg1 playModel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)changeVideoSource:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)changeVideoDefinition:(int)arg1 playModel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setVideoVolume:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)seekProgress:(int)arg1 withPlayModel:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)forwardVideo:(CDUnknownBlockType)arg1;
- (void)rewindVideo:(CDUnknownBlockType)arg1;
- (void)pauseVideo:(CDUnknownBlockType)arg1;
- (void)playVideo:(CDUnknownBlockType)arg1;
- (void)setVideoDataSource:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)checkControlUsable:(CDUnknownBlockType)arg1;
- (void)setCurrentPlayControl:(int)arg1;

@end

