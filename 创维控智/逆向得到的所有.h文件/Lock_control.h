//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "GKDeviceManagerDelegate.h"
#import "GKLockTableViewCellDelegate.h"
#import "LockRFTableViewCellDelegate.h"
#import "RwWaitViewDelegate.h"

@class AppDelegate, DBhelper, GKDeviceManager, MBSliderView, NSMutableArray, NSString, RwWaitView, UIImageView, UITableView;

@interface Lock_control : UITableViewController <GKLockTableViewCellDelegate, GKDeviceManagerDelegate, LockRFTableViewCellDelegate, RwWaitViewDelegate>
{
    DBhelper *helper;
    _Bool flag;
    _Bool _isCon;
    _Bool message;
    GKDeviceManager *_manager;
    NSMutableArray *_dataList;
    RwWaitView *rw;
    AppDelegate *delegate;
    _Bool _isLan;
    MBSliderView *_slider;
    UITableView *_table;
    UIImageView *_imageViewFlag;
}

@property(nonatomic) __weak UIImageView *imageViewFlag; // @synthesize imageViewFlag=_imageViewFlag;
@property(nonatomic) __weak UITableView *table; // @synthesize table=_table;
@property(nonatomic) __weak MBSliderView *slider; // @synthesize slider=_slider;
@property _Bool isLan; // @synthesize isLan=_isLan;
- (void).cxx_destruct;
- (void)Updata;
- (void)rfcodeStudy:(id)arg1;
- (void)SubUpData:(id)arg1;
- (void)MessageBack:(id)arg1;
- (void)UIUpData;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)btnLongTouchNum:(int)arg1;
- (id)getAirOrdCode:(id)arg1;
- (id)querylock:(int)arg1;
- (void)lockOpenForNum:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)lockRFStydybtnLongTouchNum:(int)arg1;
- (void)lockRFTbtnLongTouchNum:(int)arg1;
- (void)lockRFTbtnTouchUpInside:(int)arg1;
- (void)waitView:(id)arg1 GetTextString:(id)arg2;
- (void)waitView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlert:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

