//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class MMDrawerCenterContainerView, NSString, UIColor, UIView;

@interface MMDrawerController : UIViewController <UIGestureRecognizerDelegate>
{
    double _maximumRightDrawerWidth;
    double _maximumLeftDrawerWidth;
    UIColor *_statusBarViewBackgroundColor;
    _Bool _shouldStretchDrawer;
    _Bool _showsShadow;
    _Bool _showsStatusBarBackgroundView;
    _Bool _animatingDrawer;
    UIViewController *_centerViewController;
    MMDrawerCenterContainerView *_centerContainerView;
    UIViewController *_leftDrawerViewController;
    UIViewController *_rightDrawerViewController;
    double _animationVelocity;
    long long _openSide;
    long long _drawerAllowOpenSide;
    long long _openDrawerGestureModeMask;
    long long _closeDrawerGestureModeMask;
    long long _centerHiddenInteractionMode;
    double _shadowRadius;
    double _shadowOpacity;
    UIColor *_shadowColor;
    double _bezelPanningCenterViewRange;
    double _panVelocityXAnimationThreshold;
    UIView *_childControllerContainerView;
    UIView *_dummyStatusBarView;
    CDUnknownBlockType _drawerVisualState;
    CDUnknownBlockType _gestureShouldRecognizeTouch;
    CDUnknownBlockType _gestureCompletion;
    struct CGSize _shadowOffset;
    struct CGRect _startingPanRect;
}

@property(nonatomic, getter=isAnimatingDrawer) _Bool animatingDrawer; // @synthesize animatingDrawer=_animatingDrawer;
@property(copy, nonatomic) CDUnknownBlockType gestureCompletion; // @synthesize gestureCompletion=_gestureCompletion;
@property(copy, nonatomic) CDUnknownBlockType gestureShouldRecognizeTouch; // @synthesize gestureShouldRecognizeTouch=_gestureShouldRecognizeTouch;
@property(copy, nonatomic) CDUnknownBlockType drawerVisualState; // @synthesize drawerVisualState=_drawerVisualState;
@property(nonatomic) struct CGRect startingPanRect; // @synthesize startingPanRect=_startingPanRect;
@property(retain, nonatomic) UIView *dummyStatusBarView; // @synthesize dummyStatusBarView=_dummyStatusBarView;
@property(retain, nonatomic) UIView *childControllerContainerView; // @synthesize childControllerContainerView=_childControllerContainerView;
@property(nonatomic) double panVelocityXAnimationThreshold; // @synthesize panVelocityXAnimationThreshold=_panVelocityXAnimationThreshold;
@property(nonatomic) double bezelPanningCenterViewRange; // @synthesize bezelPanningCenterViewRange=_bezelPanningCenterViewRange;
@property(nonatomic) _Bool showsStatusBarBackgroundView; // @synthesize showsStatusBarBackgroundView=_showsStatusBarBackgroundView;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(nonatomic) _Bool showsShadow; // @synthesize showsShadow=_showsShadow;
@property(nonatomic) long long centerHiddenInteractionMode; // @synthesize centerHiddenInteractionMode=_centerHiddenInteractionMode;
@property(nonatomic) long long closeDrawerGestureModeMask; // @synthesize closeDrawerGestureModeMask=_closeDrawerGestureModeMask;
@property(nonatomic) long long openDrawerGestureModeMask; // @synthesize openDrawerGestureModeMask=_openDrawerGestureModeMask;
@property(nonatomic) long long drawerAllowOpenSide; // @synthesize drawerAllowOpenSide=_drawerAllowOpenSide;
@property(nonatomic) long long openSide; // @synthesize openSide=_openSide;
@property(nonatomic) _Bool shouldStretchDrawer; // @synthesize shouldStretchDrawer=_shouldStretchDrawer;
@property(nonatomic) double animationVelocity; // @synthesize animationVelocity=_animationVelocity;
@property(retain, nonatomic) UIViewController *rightDrawerViewController; // @synthesize rightDrawerViewController=_rightDrawerViewController;
@property(retain, nonatomic) UIViewController *leftDrawerViewController; // @synthesize leftDrawerViewController=_leftDrawerViewController;
@property(retain, nonatomic) MMDrawerCenterContainerView *centerContainerView; // @synthesize centerContainerView=_centerContainerView;
@property(retain, nonatomic) UIViewController *centerViewController; // @synthesize centerViewController=_centerViewController;
- (void).cxx_destruct;
- (_Bool)isPointContainedWithinRightBezelRect:(struct CGPoint)arg1;
- (_Bool)isPointContainedWithinLeftBezelRect:(struct CGPoint)arg1;
- (_Bool)isPointContainedWithinCenterViewContentRect:(struct CGPoint)arg1;
- (_Bool)isPointContainedWithinNavigationRect:(struct CGPoint)arg1;
- (long long)possibleOpenGestureModesForGestureRecognizer:(id)arg1 withTouch:(id)arg2;
- (long long)possibleCloseGestureModesForGestureRecognizer:(id)arg1 withTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)childViewControllerForSide:(long long)arg1;
- (id)sideDrawerViewControllerForSide:(long long)arg1;
- (double)animationDurationForAnimationDistance:(double)arg1;
- (void)updateShadowForCenterView;
- (void)prepareToPresentDrawer:(long long)arg1 animated:(_Bool)arg2;
- (void)setupGestureRecognizers;
- (double)roundedOriginXForDrawerConstriants:(double)arg1;
- (void)resetDrawerVisualStateForDrawerSide:(long long)arg1;
- (void)applyOvershootScaleTransformForDrawerSide:(long long)arg1 percentVisible:(double)arg2;
- (void)updateDrawerVisualStateForDrawerSide:(long long)arg1 percentVisible:(double)arg2;
- (void)finishAnimationForPanGestureWithXVelocity:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)needsManualForwardingOfRotationEvents;
- (void)setNeedsStatusBarAppearanceUpdateIfSupported;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)panGestureCallback:(id)arg1;
- (void)tapGestureCallback:(id)arg1;
@property(retain, nonatomic) UIColor *statusBarViewBackgroundColor;
@property(readonly, nonatomic) double visibleRightDrawerWidth;
@property(readonly, nonatomic) double visibleLeftDrawerWidth;
@property(nonatomic) double maximumRightDrawerWidth;
@property(nonatomic) double maximumLeftDrawerWidth;
- (void)setDrawerViewController:(id)arg1 forSide:(long long)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)setGestureCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setGestureShouldRecognizeTouchBlock:(CDUnknownBlockType)arg1;
- (void)setDrawerVisualStateBlock:(CDUnknownBlockType)arg1;
- (void)bouncePreviewForDrawerSide:(long long)arg1 distance:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bouncePreviewForDrawerSide:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMaximumDrawerWidth:(double)arg1 forSide:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setMaximumRightDrawerWidth:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setMaximumLeftDrawerWidth:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCenterViewController:(id)arg1 withFullCloseAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCenterViewController:(id)arg1 withCloseAnimation:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCenterViewController:(id)arg1 animated:(_Bool)arg2;
- (void)openDrawerSide:(long long)arg1 animated:(_Bool)arg2 velocity:(double)arg3 animationOptions:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)openDrawerSide:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)closeDrawerAnimated:(_Bool)arg1 velocity:(double)arg2 animationOptions:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)closeDrawerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleDrawerSide:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)commonSetup;
- (id)initWithCenterViewController:(id)arg1 rightDrawerViewController:(id)arg2;
- (id)initWithCenterViewController:(id)arg1 leftDrawerViewController:(id)arg2;
- (id)initWithCenterViewController:(id)arg1 leftDrawerViewController:(id)arg2 rightDrawerViewController:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

