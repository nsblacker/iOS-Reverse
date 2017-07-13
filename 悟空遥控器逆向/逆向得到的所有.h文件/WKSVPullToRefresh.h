//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSDateFormatter, UIActivityIndicatorView, UIColor, UIImage, UIImageView, UILabel, UIScrollView;

@interface WKSVPullToRefresh : UIView
{
    CDUnknownBlockType actionHandler;
    UIColor *arrowColor;
    UIColor *textColor;
    long long activityIndicatorViewStyle;
    NSDate *lastUpdatedDate;
    unsigned long long state;
    UIScrollView *_scrollView;
    UIImageView *arrow;
    UIImage *arrowImage;
    UIActivityIndicatorView *activityIndicatorView;
    UILabel *titleLabel;
    UILabel *dateLabel;
    NSDateFormatter *dateFormatter;
    struct UIEdgeInsets originalScrollViewContentInset;
}

@property(nonatomic) struct UIEdgeInsets originalScrollViewContentInset; // @synthesize originalScrollViewContentInset;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
@property(retain, nonatomic) UIColor *arrowColor; // @synthesize arrowColor;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler;
- (void).cxx_destruct;
- (void)rotateArrow:(float)arg1 hide:(_Bool)arg2;
- (void)stopAnimating;
- (void)triggerRefresh;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel;
@property(readonly, nonatomic) UIImage *arrowImage; // @synthesize arrowImage;
- (void)layoutSubviews;
- (id)initWithScrollView:(id)arg1;
- (void)dealloc;

@end

