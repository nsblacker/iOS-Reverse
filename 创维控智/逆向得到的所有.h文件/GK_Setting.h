//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class AppDelegate, NSMutableArray, UITableView;

@interface GK_Setting : UITableViewController
{
    _Bool isLan;
    int row;
    NSMutableArray *_datalist;
    NSMutableArray *_dataTable;
    AppDelegate *delegate;
    UITableView *_table;
}

@property(retain, nonatomic) UITableView *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (void)saveDigitnum:(id)arg1 iconPath:(id)arg2 Name:(id)arg3 DigitClass:(int)arg4;
- (void)dataUP;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dataRoading;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

