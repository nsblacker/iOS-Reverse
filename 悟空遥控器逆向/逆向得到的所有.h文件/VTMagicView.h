//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"
#import "VTContentViewDataSource.h"
#import "VTMenuBarDatasource.h"
#import "VTMenuBarDelegate.h"

@class NSArray, NSString, UIColor, UIViewController<VTMagicProtocol>, VTContentView, VTMenuBar;

@interface VTMagicView : UIView <UIScrollViewDelegate, VTContentViewDataSource, VTMenuBarDatasource, VTMenuBarDelegate>
{
    _Bool _scrollEnabled;
    _Bool _menuScrollEnabled;
    _Bool _switchEnabled;
    _Bool _switchAnimated;
    _Bool _sliderHidden;
    _Bool _separatorHidden;
    _Bool _againstStatusBar;
    _Bool _headerHidden;
    _Bool _needPreloading;
    _Bool _switching;
    _Bool _bounces;
    _Bool _needExtendBottom;
    _Bool _isViewWillAppear;
    _Bool _needSkipUpdate;
    _Bool _isPanValid;
    CDStruct_68530ea8 _magicFlags;
    UIView *_navigationView;
    UIView *_separatorView;
    UIView *_headerView;
    UIView *_sliderView;
    id <VTMagicViewDataSource> _dataSource;
    id <VTMagicViewDelegate> _delegate;
    UIViewController<VTMagicProtocol> *_magicController;
    unsigned long long _switchStyle;
    unsigned long long _layoutStyle;
    unsigned long long _sliderStyle;
    unsigned long long _previewItems;
    UIView *_leftNavigatoinItem;
    UIView *_rightNavigatoinItem;
    UIColor *_navigationColor;
    double _navigationHeight;
    UIColor *_separatorColor;
    double _separatorHeight;
    UIColor *_sliderColor;
    double _sliderHeight;
    double _sliderWidth;
    double _sliderOffset;
    double _bubbleRadius;
    double _headerHeight;
    double _itemSpacing;
    double _itemScale;
    double _itemWidth;
    unsigned long long _switchEvent;
    UIView *_reviseView;
    VTMenuBar *_menuBar;
    VTContentView *_contentView;
    NSArray *_menuTitles;
    long long _nextPageIndex;
    long long _currentPage;
    long long _previousIndex;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    struct UIEdgeInsets _navigationInset;
    CDStruct_106e0edc _normalVTColor;
    CDStruct_106e0edc _selectedVTColor;
}

@property(nonatomic) _Bool isPanValid; // @synthesize isPanValid=_isPanValid;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) CDStruct_106e0edc selectedVTColor; // @synthesize selectedVTColor=_selectedVTColor;
@property(nonatomic) CDStruct_106e0edc normalVTColor; // @synthesize normalVTColor=_normalVTColor;
@property(nonatomic) CDStruct_68530ea8 magicFlags; // @synthesize magicFlags=_magicFlags;
@property(nonatomic) _Bool needSkipUpdate; // @synthesize needSkipUpdate=_needSkipUpdate;
@property(nonatomic) _Bool isViewWillAppear; // @synthesize isViewWillAppear=_isViewWillAppear;
@property(nonatomic) long long previousIndex; // @synthesize previousIndex=_previousIndex;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long nextPageIndex; // @synthesize nextPageIndex=_nextPageIndex;
@property(retain, nonatomic) NSArray *menuTitles; // @synthesize menuTitles=_menuTitles;
@property(retain, nonatomic) VTContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) VTMenuBar *menuBar; // @synthesize menuBar=_menuBar;
@property(retain, nonatomic) UIView *reviseView; // @synthesize reviseView=_reviseView;
@property(readonly, nonatomic) unsigned long long switchEvent; // @synthesize switchEvent=_switchEvent;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) double itemScale; // @synthesize itemScale=_itemScale;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) double bubbleRadius; // @synthesize bubbleRadius=_bubbleRadius;
@property(nonatomic) double sliderOffset; // @synthesize sliderOffset=_sliderOffset;
@property(nonatomic) double sliderWidth; // @synthesize sliderWidth=_sliderWidth;
@property(nonatomic) double sliderHeight; // @synthesize sliderHeight=_sliderHeight;
@property(retain, nonatomic) UIColor *sliderColor; // @synthesize sliderColor=_sliderColor;
@property(nonatomic) double separatorHeight; // @synthesize separatorHeight=_separatorHeight;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) double navigationHeight; // @synthesize navigationHeight=_navigationHeight;
@property(retain, nonatomic) UIColor *navigationColor; // @synthesize navigationColor=_navigationColor;
@property(nonatomic) struct UIEdgeInsets navigationInset; // @synthesize navigationInset=_navigationInset;
@property(nonatomic) _Bool needExtendBottom; // @synthesize needExtendBottom=_needExtendBottom;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(readonly, nonatomic, getter=isSwitching) _Bool switching; // @synthesize switching=_switching;
@property(nonatomic) _Bool needPreloading; // @synthesize needPreloading=_needPreloading;
@property(nonatomic, getter=isHeaderHidden) _Bool headerHidden; // @synthesize headerHidden=_headerHidden;
@property(nonatomic, getter=isAgainstStatusBar) _Bool againstStatusBar; // @synthesize againstStatusBar=_againstStatusBar;
@property(nonatomic, getter=isSeparatorHidden) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(nonatomic, getter=isSliderHidden) _Bool sliderHidden; // @synthesize sliderHidden=_sliderHidden;
@property(nonatomic, getter=isSwitchAnimated) _Bool switchAnimated; // @synthesize switchAnimated=_switchAnimated;
@property(nonatomic, getter=isSwitchEnabled) _Bool switchEnabled; // @synthesize switchEnabled=_switchEnabled;
@property(nonatomic, getter=isMenuScrollEnabled) _Bool menuScrollEnabled; // @synthesize menuScrollEnabled=_menuScrollEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(retain, nonatomic) UIView *rightNavigatoinItem; // @synthesize rightNavigatoinItem=_rightNavigatoinItem;
@property(retain, nonatomic) UIView *leftNavigatoinItem; // @synthesize leftNavigatoinItem=_leftNavigatoinItem;
@property(nonatomic) unsigned long long previewItems; // @synthesize previewItems=_previewItems;
@property(nonatomic) unsigned long long sliderStyle; // @synthesize sliderStyle=_sliderStyle;
@property(nonatomic) unsigned long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) unsigned long long switchStyle; // @synthesize switchStyle=_switchStyle;
@property(nonatomic) __weak UIViewController<VTMagicProtocol> *magicController; // @synthesize magicController=_magicController;
@property(nonatomic) __weak id <VTMagicViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VTMagicViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets bubbleInset;
@property(nonatomic) double sliderExtension;
- (void)setHeaderHidden:(_Bool)arg1 duration:(double)arg2;
@property(readonly, nonatomic, getter=isDeselected) _Bool deselected;
@property(readonly, nonatomic) NSArray *viewControllers;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *sliderView; // @synthesize sliderView=_sliderView;
@property(readonly, nonatomic) UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (_Bool)shouldForwardAppearanceMethods;
- (void)viewControllerDidDisappear:(unsigned long long)arg1;
- (void)viewControllerWillDisappear:(unsigned long long)arg1;
- (void)viewControllerDidAppear:(unsigned long long)arg1;
- (void)viewControllerWillAppear:(unsigned long long)arg1;
- (void)subviewWillAppearAtPage:(long long)arg1;
- (void)updateItemStateForDefaultStyle;
- (void)updateMenuBarWhenSwitchEnd;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resetCurrentViewController:(id)arg1;
- (id)contentView:(id)arg1 viewControllerAtPage:(unsigned long long)arg2;
- (double)menuBar:(id)arg1 sliderWidthAtIndex:(unsigned long long)arg2;
- (double)menuBar:(id)arg1 itemWidthAtIndex:(unsigned long long)arg2;
- (void)menuBar:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (id)menuBar:(id)arg1 menuItemAtIndex:(unsigned long long)arg2;
- (void)resetMenuItemColor;
- (void)graduallyChangeColor;
- (id)autoCreateViewControllAtPage:(long long)arg1;
- (void)displayPageHasChanged:(long long)arg1 disIndex:(long long)arg2;
- (void)reviseAnimation;
- (void)autoSwitchToNextPage:(_Bool)arg1;
- (void)handlePanGestureEnd:(id)arg1;
- (void)handlePanGestureMove:(id)arg1;
- (void)handlePanGestureBegin:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)updateMenuBarState;
- (void)switchAnimation:(unsigned long long)arg1;
- (void)switchWithoutAnimation:(unsigned long long)arg1;
- (void)switchToPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)clearMemoryCache;
- (void)reselectMenuItem;
- (void)deselectMenuItem;
- (id)menuItemAtIndex:(unsigned long long)arg1;
- (id)viewControllerAtPage:(unsigned long long)arg1;
- (long long)pageIndexForViewController:(id)arg1;
- (id)dequeueReusablePageWithIdentifier:(id)arg1;
- (id)dequeueReusableItemWithIdentifier:(id)arg1;
- (void)reloadMenuTitles;
- (void)reloadDataWithDisIndex:(long long)arg1;
- (void)reloadDataToPage:(unsigned long long)arg1;
- (void)reloadData;
- (void)reviseLayout;
- (void)statusBarOrientationChange:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)updateFrameForRightNavigationItem;
- (void)updateFrameForLeftNavigationItem;
- (void)updateFrameForSubviews;
- (void)layoutSubviews;
- (void)dealloc;
- (void)configDefaultValues;
- (void)addMagicSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

