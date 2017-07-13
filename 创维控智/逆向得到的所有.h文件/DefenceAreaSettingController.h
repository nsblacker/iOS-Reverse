//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIDefenceCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Contact, MBProgressHUD, NSMutableArray, NSString, UITableView;

@interface DefenceAreaSettingController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIDefenceCellDelegate>
{
    _Bool _isLoadDefenceArea;
    _Bool _isLoadDefenceSwitch;
    _Bool _isNotSurportDefenceSwitch;
    _Bool _isNotRightPWD;
    _Bool _isSetting;
    UITableView *_tableView;
    Contact *_contact;
    long long _selectedIndex;
    NSMutableArray *_dataArray;
    NSMutableArray *_statusData;
    NSMutableArray *_switchStatusData;
    MBProgressHUD *_progressAlert;
    long long _lastSetGroup;
    long long _lastSetItem;
    long long _lastSetType;
    long long _lastSetSwitchGroup;
    long long _lastSetSwitchItem;
    long long _lastSetSwitchType;
}

@property _Bool isSetting; // @synthesize isSetting=_isSetting;
@property long long lastSetSwitchType; // @synthesize lastSetSwitchType=_lastSetSwitchType;
@property long long lastSetSwitchItem; // @synthesize lastSetSwitchItem=_lastSetSwitchItem;
@property long long lastSetSwitchGroup; // @synthesize lastSetSwitchGroup=_lastSetSwitchGroup;
@property long long lastSetType; // @synthesize lastSetType=_lastSetType;
@property long long lastSetItem; // @synthesize lastSetItem=_lastSetItem;
@property long long lastSetGroup; // @synthesize lastSetGroup=_lastSetGroup;
@property(retain, nonatomic) MBProgressHUD *progressAlert; // @synthesize progressAlert=_progressAlert;
@property(nonatomic) _Bool isNotRightPWD; // @synthesize isNotRightPWD=_isNotRightPWD;
@property _Bool isNotSurportDefenceSwitch; // @synthesize isNotSurportDefenceSwitch=_isNotSurportDefenceSwitch;
@property _Bool isLoadDefenceSwitch; // @synthesize isLoadDefenceSwitch=_isLoadDefenceSwitch;
@property _Bool isLoadDefenceArea; // @synthesize isLoadDefenceArea=_isLoadDefenceArea;
@property(retain, nonatomic) NSMutableArray *switchStatusData; // @synthesize switchStatusData=_switchStatusData;
@property(retain, nonatomic) NSMutableArray *statusData; // @synthesize statusData=_statusData;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)defenceCell:(id)arg1 section:(long long)arg2 row:(long long)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)onHeadClicked:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)onBackPress;
- (void)initComponent;
- (void)initDataSource;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)getDefenceGroupNameWithIndex:(long long)arg1;
- (void)ack_receiveRemoteMessage:(id)arg1;
- (void)receiveRemoteMessage:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

