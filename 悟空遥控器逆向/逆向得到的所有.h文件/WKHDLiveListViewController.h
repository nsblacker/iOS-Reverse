//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubFirstViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WKVerticalScrollMenuDelegate.h"

@class NSArray, NSString, UITableView, WKVerticalScrollMenu;

@interface WKHDLiveListViewController : WKBaseSubFirstViewController <UITableViewDelegate, UITableViewDataSource, WKVerticalScrollMenuDelegate>
{
    _Bool _userClicked;
    _Bool _isScrollToTop;
    float _startPointX;
    NSString *_currentSrc;
    NSArray *_videoSources;
    UITableView *_listView;
    long long _preTag;
    long long _currentTag;
    WKVerticalScrollMenu *_verticalScrollMenu;
}

@property(nonatomic) _Bool isScrollToTop; // @synthesize isScrollToTop=_isScrollToTop;
@property(retain, nonatomic) WKVerticalScrollMenu *verticalScrollMenu; // @synthesize verticalScrollMenu=_verticalScrollMenu;
@property(nonatomic) long long currentTag; // @synthesize currentTag=_currentTag;
@property(nonatomic) long long preTag; // @synthesize preTag=_preTag;
@property(nonatomic) float startPointX; // @synthesize startPointX=_startPointX;
@property(nonatomic) _Bool userClicked; // @synthesize userClicked=_userClicked;
@property(retain, nonatomic) UITableView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) NSArray *videoSources; // @synthesize videoSources=_videoSources;
@property(retain, nonatomic) NSString *currentSrc; // @synthesize currentSrc=_currentSrc;
- (void).cxx_destruct;
- (void)dealloc;
- (id)checkVideoSourceEmpty:(id)arg1;
- (void)getHDLiveVideoSources;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onVerticalScrollMenuClick:(unsigned long long)arg1;
- (void)buildMenuListView;
- (void)addSearchItems;
- (void)refreshListView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)initListView;
- (void)initMenuScrollView;
- (void)changeDianboSrc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

