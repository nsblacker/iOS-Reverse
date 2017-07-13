//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLFirstBaseViewController.h"

#import "btnViewDelegate.h"

@class HotSongTypView, PhylumTypView, SingerTypView, SongView, ThemeTypeView, UISegmentedControl;

@interface TCLMyKSongViewController : TLFirstBaseViewController <btnViewDelegate>
{
    UISegmentedControl *_segmentedControl;
    HotSongTypView *hotSongView;
    SongView *newSongView;
    SingerTypView *singerView;
    PhylumTypView *phylumTypView;
    ThemeTypeView *themeTypeView;
    BOOL beShowHUD;
    id <HomeViewDelegate> _homedelegate;
}

@property id <HomeViewDelegate> homedelegate; // @synthesize homedelegate=_homedelegate;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)parseThemeResultDataList:(id)arg1;
- (void)parseBangDangDataList:(id)arg1;
- (void)parsePhylumTypList:(id)arg1;
- (void)parseSingerTypList:(id)arg1;
- (void)parseKsongBangDanList:(id)arg1;
- (void)selectedBtnClickDelegate:(int)arg1;
- (void)removeLastTableView;
- (void)didReceiveMemoryWarning;
- (void)dismissModal;
- (void)titlebtnClick:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidUnload;
- (void)dealloc;

@end

