//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CustomIOS7AlertViewDelegate.h"
#import "GoToController.h"
#import "MVLCMovieViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "changeRecordList.h"

@class CustomIOS7AlertView, FMDatabase, NSMutableArray, NSMutableString, NSString, PlayList, TextFlowView, UIAlertView, UITableView;

@interface PlayListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, GoToController, MVLCMovieViewDelegate, changeRecordList, CustomIOS7AlertViewDelegate>
{
    NSMutableArray *list;
    int topPlay;
    PlayList *topPlaySong;
    NSString *rcvData;
    BOOL is_editor;
    BOOL is_Paoma;
    BOOL isShareToPhone;
    int selectRow;
    NSMutableArray *tmp;
    UIAlertView *alertFun;
    CustomIOS7AlertView *customAlert;
    NSMutableString *strTmp;
    TextFlowView *a;
    FMDatabase *db;
    PlayList *song;
    UIAlertView *DeteltAlert;
    UITableView *mainTableView;
    NSMutableArray *alertArray;
    int _currentPlay;
    int _rowNum;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int rowNum; // @synthesize rowNum=_rowNum;
@property(nonatomic) int currentPlay; // @synthesize currentPlay=_currentPlay;
@property(retain, nonatomic) NSMutableArray *alertArray; // @synthesize alertArray;
@property(copy, nonatomic) NSString *rcvData; // @synthesize rcvData;
@property(retain, nonatomic) PlayList *topPlaySong; // @synthesize topPlaySong;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list;
@property(nonatomic) int topPlay; // @synthesize topPlay;
@property(retain, nonatomic) UITableView *mainTableView; // @synthesize mainTableView;
- (void)didReceiveMemoryWarning;
- (void)navReturn;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)menuDisplay:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)goToController;
- (void)LocalPlay:(id)arg1;
- (void)currentSongListID:(int)arg1;
- (void)parseSongURL:(id)arg1;
- (void)goToTV:(id)arg1;
- (void)ShareToTvPlay;
- (void)shareTo_TV_Play:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)PlayTopPapmao:(int)arg1;
- (void)paoMa;
- (struct CGRect)getPaoMaRect;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableViewReloadData;
- (struct CGRect)getCellBtnRect;
- (struct CGRect)getCellLabRect;
- (void)navDelete;
- (void)changeRecordList;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)popView;
- (id)getBGImage;
- (struct CGRect)getBGimageRect;
- (struct CGRect)getTableViewRect;
- (void)searchListType;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidUnload;
- (void)dealloc;

@end

