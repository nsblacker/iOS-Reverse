//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class JSBadgeView, NSMutableArray;

@interface BottomBar : UIView
{
    _Bool _isHavingNewInfo;
    _Bool _isHavingNewMallInfo;
    NSMutableArray *_items;
    NSMutableArray *_backViews;
    NSMutableArray *_iconViews;
    NSMutableArray *_itemTitles;
    JSBadgeView *_infoBadgeView;
    JSBadgeView *_mallBadgeView;
    long long _selectedIndex;
}

@property(nonatomic) _Bool isHavingNewMallInfo; // @synthesize isHavingNewMallInfo=_isHavingNewMallInfo;
@property(nonatomic) _Bool isHavingNewInfo; // @synthesize isHavingNewInfo=_isHavingNewInfo;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) JSBadgeView *mallBadgeView; // @synthesize mallBadgeView=_mallBadgeView;
@property(retain, nonatomic) JSBadgeView *infoBadgeView; // @synthesize infoBadgeView=_infoBadgeView;
@property(retain, nonatomic) NSMutableArray *itemTitles; // @synthesize itemTitles=_itemTitles;
@property(retain, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property(retain, nonatomic) NSMutableArray *backViews; // @synthesize backViews=_backViews;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void)updateItemIcon:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

