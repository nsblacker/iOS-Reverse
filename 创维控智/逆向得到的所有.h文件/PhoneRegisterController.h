//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LoginController, MBProgressHUD, NSString, UITextField;

@interface PhoneRegisterController : UIViewController
{
    UITextField *_field1;
    UITextField *_field2;
    NSString *_phone;
    NSString *_countryCode;
    NSString *_phoneCode;
    LoginController *_loginController;
    MBProgressHUD *_progressAlert;
}

@property(retain, nonatomic) MBProgressHUD *progressAlert; // @synthesize progressAlert=_progressAlert;
@property(retain, nonatomic) LoginController *loginController; // @synthesize loginController=_loginController;
@property(retain, nonatomic) NSString *phoneCode; // @synthesize phoneCode=_phoneCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) UITextField *field2; // @synthesize field2=_field2;
@property(retain, nonatomic) UITextField *field1; // @synthesize field1=_field1;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNextPress;
- (void)onBackPress;
- (void)onKeyBoardDown:(id)arg1;
- (void)initComponent;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

