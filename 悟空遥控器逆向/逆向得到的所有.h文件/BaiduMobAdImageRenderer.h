//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaiduMobAdRenderer.h"

#import "BaiduMobAdActionComposerDelegate.h"

@class NSString, UIButton, UILabel;

@interface BaiduMobAdImageRenderer : BaiduMobAdRenderer <BaiduMobAdActionComposerDelegate>
{
    _Bool _supportTimeLabel;
    _Bool _supportPause;
    _Bool _supportActImage;
    UILabel *_timeLabel;
    UIButton *_imageButton;
    long long _seconds;
    double _backgroundTimeStamp;
}

@property(nonatomic) _Bool supportActImage; // @synthesize supportActImage=_supportActImage;
@property(nonatomic) _Bool supportPause; // @synthesize supportPause=_supportPause;
@property(nonatomic) _Bool supportTimeLabel; // @synthesize supportTimeLabel=_supportTimeLabel;
@property double backgroundTimeStamp; // @synthesize backgroundTimeStamp=_backgroundTimeStamp;
@property(nonatomic) long long seconds; // @synthesize seconds=_seconds;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void)stop;
- (void)timeAnimation;
- (void)resume;
- (void)pause;
- (void)showTimerAnimation;
- (void)didFinishWithResult:(id)arg1;
- (void)adClick;
- (void)showImage:(id)arg1;
- (void)showResource:(id)arg1 withMimeType:(id)arg2;
- (void)showPureImage:(id)arg1;
- (void)load;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

