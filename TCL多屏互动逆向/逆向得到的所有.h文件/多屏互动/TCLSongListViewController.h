//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLSecondBaseViewController.h"

@class NSMutableArray, NSString, SongView;

@interface TCLSongListViewController : TLSecondBaseViewController
{
    NSMutableArray *_songEntityList;
    SongView *tableView;
    NSString *_searchName;
    NSString *_uiFlag;
    BOOL sortSingerViewBool;
}

@property BOOL sortSingerViewBool; // @synthesize sortSingerViewBool;
@property(retain, nonatomic) NSMutableArray *songEntityList; // @synthesize songEntityList=_songEntityList;
@property(retain, nonatomic) NSString *uiFlag; // @synthesize uiFlag=_uiFlag;
@property(retain, nonatomic) NSString *searchName; // @synthesize searchName=_searchName;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)backItemClick;
- (void)viewDidLoad;
- (void)addView;
- (struct CGRect)getTableViewRect;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 withDataList:(id)arg2 withSearchName:(id)arg3 withUIFlag:(id)arg4;
- (void)viewDidUnload;
- (void)dealloc;

@end

