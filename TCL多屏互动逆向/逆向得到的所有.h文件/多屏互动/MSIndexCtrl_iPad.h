//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSIndexCtrl.h"

@class MSCommendCtrl_iPad, MSMediaShareMainCtrl_iPad, MSSettingCtr_iPad, MSTvCtrl_iPad, MVLCMovieViewController, NSArray;

@interface MSIndexCtrl_iPad : MSIndexCtrl
{
    NSArray *_imageArray;
    MSCommendCtrl_iPad *commendCtrl;
    MSTvCtrl_iPad *tvCtrl;
    MSMediaShareMainCtrl_iPad *mediaShareCtrl;
    MSSettingCtr_iPad *tvSettingCtrl;
    MVLCMovieViewController *rePlayView;
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)alertShowMethod;
- (void)selectAppAction:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)rBtnClick;
- (void)dealloc;

@end

