//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIActivityIndicatorView, UIScrollView;

@interface SVInfiniteScrollingView : UIView
{
    _Bool _enabled;
    _Bool _wasTriggeredByUser;
    _Bool _isObserving;
    CDUnknownBlockType infiniteScrollingHandler;
    long long activityIndicatorViewStyle;
    unsigned long long _state;
    UIScrollView *_scrollView;
    UIActivityIndicatorView *_activityIndicatorView;
    NSMutableArray *_viewForState;
    double _originalBottomInset;
}

@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) _Bool wasTriggeredByUser; // @synthesize wasTriggeredByUser=_wasTriggeredByUser;
@property(nonatomic) double originalBottomInset; // @synthesize originalBottomInset=_originalBottomInset;
@property(retain, nonatomic) NSMutableArray *viewForState; // @synthesize viewForState=_viewForState;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType infiniteScrollingHandler; // @synthesize infiniteScrollingHandler;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)triggerRefresh;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle;
- (void)setCustomView:(id)arg1 forState:(unsigned long long)arg2;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setScrollViewContentInsetForInfiniteScrolling;
- (void)resetScrollViewContentInset;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

