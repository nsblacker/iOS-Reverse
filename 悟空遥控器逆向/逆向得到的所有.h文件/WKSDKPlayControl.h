//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBasePlayControl.h"

@interface WKSDKPlayControl : WKBasePlayControl
{
}

+ (void)checkControlUsable:(CDUnknownBlockType)arg1;
+ (id)defaultSDKPlayControl;
- (id)converToPlayControlEpisodeModel:(id)arg1;
- (void)getVideoInfo:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)videoInfoUrl:(id)arg1;
- (void)pushVideoControl:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)pushVideoControl:(int)arg1 param:(int)arg2 handler:(CDUnknownBlockType)arg3;
- (void)releaseSources;
- (void)changeVideoEpisode:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)changeVideoDefinition:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setVideoVolume:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)seekProgress:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)pauseVideo:(CDUnknownBlockType)arg1;
- (void)playVideo:(CDUnknownBlockType)arg1;
- (void)setVideoDataSource:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

