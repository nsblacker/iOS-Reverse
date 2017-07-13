//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLBaseUIViewController.h"

#import "CustomIOS7AlertViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "changeRecordList.h"

@class CustomIOS7AlertView, FMDatabase, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIAlertView, UIButton, UITableView;

@interface MyListViewController : TLBaseUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, changeRecordList, CustomIOS7AlertViewDelegate>
{
    FMDatabase *db;
    UIAlertView *newListAlert;
    UIAlertView *myListPlayChoose;
    CustomIOS7AlertView *alertView;
    UIAlertView *reName;
    NSMutableDictionary *PlayListDataFromPlist;
    NSString *indexPathStr;
    NSMutableArray *AlertArr;
    BOOL editFlag;
    UIButton *menuBtn;
    UITableView *tableview;
    NSArray *aryTVList;
    NSMutableArray *myListData;
    NSMutableArray *alertArray;
    NSString *selectAlertStr;
    UITableView *alertTable;
}

@property(retain, nonatomic) UITableView *alertTable; // @synthesize alertTable;
@property(retain, nonatomic) NSString *selectAlertStr; // @synthesize selectAlertStr;
@property(retain, nonatomic) NSMutableArray *alertArray; // @synthesize alertArray;
@property(retain, nonatomic) NSMutableArray *myListData; // @synthesize myListData;
@property(retain, nonatomic) NSArray *aryTVList; // @synthesize aryTVList;
@property(retain, nonatomic) UITableView *tableview; // @synthesize tableview;
- (void)didReceiveMemoryWarning;
- (void)changeRecordList;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)IsReName:(id)arg1;
- (void)createAlert:(id)arg1 cancleBtnTitle:(id)arg2 otherBtnTitle:(id)arg3 withTitleStr:(id)arg4 withStyle:(int)arg5;
- (void)getAlertData;
- (void)showOptionsList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getSection1Image;
- (id)getSection0Imag;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (struct CGRect)getBtnIRect;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)btnClicked:(id)arg1 event:(id)arg2;
- (void)gotoMyListViewController:(id)arg1;
- (void)buildNewList;
- (struct CGRect)getBgImageRect;
- (void)getSongCountByListName;
- (void)createBtn;
- (struct CGRect)getbtnAddRect;
- (struct CGRect)gettableViewRect;
- (void)createTableView;
- (void)searchListData;
- (void)edit;
- (void)viewDidLoad;
- (id)getBgImage;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidUnload;
- (void)dealloc;

@end

