//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCLSongListViewController.h"

@class NSMutableArray, NSString;

@interface TCLSongList_iPadViewController : TCLSongListViewController
{
    NSMutableArray *songEntityList;
    NSString *searchName;
    NSString *uiFlag;
}

- (void)setUiFlag:(id)arg1;
- (id)uiFlag;
- (void)setSearchName:(id)arg1;
- (id)searchName;
- (void)setSongEntityList:(id)arg1;
- (id)songEntityList;
- (void)addView;
- (void)viewDidAppear:(BOOL)arg1;
- (struct CGRect)getTableViewRect;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

