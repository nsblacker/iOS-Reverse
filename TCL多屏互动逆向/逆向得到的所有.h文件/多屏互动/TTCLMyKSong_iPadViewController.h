//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLFirstBaseViewController.h"

#import "btn_iPadViewDelegate.h"

@class HotSong_iPadStyView, PhylumTyp__iPadView, SingerType_iPadView, Song_iPadView, ThemeType_iPadView;

@interface TTCLMyKSong_iPadViewController : TLFirstBaseViewController <btn_iPadViewDelegate>
{
    HotSong_iPadStyView *hotSongView;
    Song_iPadView *newSongView;
    SingerType_iPadView *singerView;
    PhylumTyp__iPadView *phylumTypView;
    ThemeType_iPadView *themeTypeView;
    id <HomeViewDelegateIPad> _homedelegate;
}

@property id <HomeViewDelegateIPad> homedelegate; // @synthesize homedelegate=_homedelegate;
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
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

