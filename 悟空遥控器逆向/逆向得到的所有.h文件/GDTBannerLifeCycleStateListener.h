//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTAdLifeEventListener.h"

@class GDTMobBannerView, NSString;

@interface GDTBannerLifeCycleStateListener : NSObject <GDTAdLifeEventListener>
{
    _Bool isFirstPlay;
    id <GDTMobBannerViewDelegate> _delegate;
    GDTMobBannerView *_bannerView;
}

@property(nonatomic) __weak GDTMobBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <GDTMobBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showError:(int)arg1;
- (void)handleAdLoadFailEvent:(id)arg1;
- (void)onEvent:(id)arg1;
- (id)initWithBannerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

