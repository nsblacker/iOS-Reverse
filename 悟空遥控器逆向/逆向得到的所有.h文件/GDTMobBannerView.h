//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GDTAdMgr, GDTAdWebView, GDTAdWebViewClient, GDTBannerLifeCycleStateListener, GDTBannerService, NSString, UIViewController;

@interface GDTMobBannerView : UIView
{
    GDTAdWebView *_webView;
    GDTAdWebViewClient *_webViewClient;
    NSString *_placementId;
    NSString *_appkey;
    GDTBannerLifeCycleStateListener *_listener;
    GDTAdMgr *_adMgr;
    GDTBannerService *_bannerService;
    _Bool _isGpsOn;
    _Bool _isAnimationOn;
    _Bool _showCloseBtn;
    int _interval;
    id <GDTMobBannerViewDelegate> _delegate;
    UIViewController *_currentViewController;
}

@property(nonatomic) _Bool showCloseBtn; // @synthesize showCloseBtn=_showCloseBtn;
@property(nonatomic) _Bool isAnimationOn; // @synthesize isAnimationOn=_isAnimationOn;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id <GDTMobBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool isGpsOn; // @synthesize isGpsOn=_isGpsOn;
- (void).cxx_destruct;
- (void)cleanWebView;
- (void)resignActive;
- (void)becomeActive;
- (void)dealloc;
- (void)doViewAnimation;
- (void)didReceiveMemoryWarning;
- (void)loadAdAndShow;
- (id)getHandlers;
- (int)initBannerSizeType:(struct CGSize)arg1;
- (void)initAdConstructor;
- (void)showError:(int)arg1;
- (_Bool)checkParams;
- (void)initAdMgr;
- (id)initWithFrame:(struct CGRect)arg1 appkey:(id)arg2 placementId:(id)arg3;

@end

