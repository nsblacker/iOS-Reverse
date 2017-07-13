//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WKBaseSubViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, UIAlertView, UITableView, WKNoResultView;

@interface WKMessageCenterTableViewController : WKBaseSubViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_msgArray;
    _Bool _isMerged;
    UITableView *msgTableView;
    NSString *_nextpage;
    UIAlertView *_longPressAlertView;
    NSMutableArray *_datasource;
    WKNoResultView *_noResultView;
    WKNoResultView *_networkFaildView;
}

@property(retain, nonatomic) WKNoResultView *networkFaildView; // @synthesize networkFaildView=_networkFaildView;
@property(retain, nonatomic) WKNoResultView *noResultView; // @synthesize noResultView=_noResultView;
@property(nonatomic) _Bool isMerged; // @synthesize isMerged=_isMerged;
@property(retain, nonatomic) NSMutableArray *datasource; // @synthesize datasource=_datasource;
@property(retain, nonatomic) UIAlertView *longPressAlertView; // @synthesize longPressAlertView=_longPressAlertView;
@property(copy, nonatomic) NSString *nextpage; // @synthesize nextpage=_nextpage;
@property(retain, nonatomic) UITableView *msgTableView; // @synthesize msgTableView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshNodata;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)deleteButtonClick;
- (void)mergeData;
- (void)loadDataFromNet:(_Bool)arg1;
- (void)loadMsgData;
- (void)initNavigationBarRightItem;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

