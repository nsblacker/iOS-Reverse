//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class DBhelper, MBProgressHUD, NSString, UITextFieldEx;

@interface Host_change : UIViewController <UITextFieldDelegate>
{
    DBhelper *db;
    _Bool message;
    MBProgressHUD *HUD;
    NSString *sn_id;
    NSString *sn_pass;
    NSString *sn_name;
    NSString *email;
    UITextFieldEx *service_id;
    UITextFieldEx *service_password;
    UITextFieldEx *service_name;
    UITextFieldEx *service_email;
    NSString *number;
    NSString *_uid;
}

@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *number; // @synthesize number;
@property(retain, nonatomic) UITextFieldEx *service_email; // @synthesize service_email;
@property(retain, nonatomic) UITextFieldEx *service_name; // @synthesize service_name;
@property(retain, nonatomic) UITextFieldEx *service_password; // @synthesize service_password;
@property(retain, nonatomic) UITextFieldEx *service_id; // @synthesize service_id;
@property(retain, nonatomic) NSString *email; // @synthesize email;
@property(retain, nonatomic) NSString *sn_name; // @synthesize sn_name;
@property(retain, nonatomic) NSString *sn_pass; // @synthesize sn_pass;
@property(retain, nonatomic) NSString *sn_id; // @synthesize sn_id;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)showwarn:(id)arg1;
- (void)savemesage;
- (id)post;
- (void)login_hostId;
- (void)save:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

