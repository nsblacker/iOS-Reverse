//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PushAudioCtrl.h"

@class UIBarButtonItem, UIButton;

@interface PushAudioCtrl_iPhone : PushAudioCtrl
{
    UIButton *rightBut;
    UIBarButtonItem *circulationBut;
}

- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)changeUI;
- (void)playButtonUI;
- (void)changeCirculationUI;
- (void)circulationMethod;
- (void)showMusicPlayAnimation;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)disConnectedRightBtn;
- (void)deviceConnected;
- (void)viewDidLoad;

@end

