//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"

@class MBProgressHUD, NSString, TopBar, UIButton, UITextField;

@interface BindEmailController : UIViewController <UIAlertViewDelegate>
{
    UITextField *_field1;
    MBProgressHUD *_progressAlert;
    UIButton *_unbindButton;
    TopBar *_topBar;
}

@property(retain, nonatomic) TopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) UIButton *unbindButton; // @synthesize unbindButton=_unbindButton;
@property(retain, nonatomic) MBProgressHUD *progressAlert; // @synthesize progressAlert=_progressAlert;
@property(retain, nonatomic) UITextField *field1; // @synthesize field1=_field1;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)textFieldChanged:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSavePress;
- (void)onBackPress;
- (void)onKeyBoardDown:(id)arg1;
- (void)onUnbindEmail;
- (void)initComponent;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

