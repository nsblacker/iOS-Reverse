//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class AppDelegate, GKDeviceManager, NSString, UIButton, UITextField;

@interface Add_Safe : UIViewController <UITextFieldDelegate>
{
    _Bool message;
    GKDeviceManager *_manager;
    AppDelegate *delegate;
    int deviceType;
    _Bool _isLan;
    UITextField *_name;
    UIButton *_one;
    UIButton *_two;
    UIButton *_three;
}

@property(retain, nonatomic) UIButton *three; // @synthesize three=_three;
@property(retain, nonatomic) UIButton *two; // @synthesize two=_two;
@property(retain, nonatomic) UIButton *one; // @synthesize one=_one;
@property(retain, nonatomic) UITextField *name; // @synthesize name=_name;
@property _Bool isLan; // @synthesize isLan=_isLan;
- (void).cxx_destruct;
- (void)MessageBack:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)sure:(id)arg1;
- (void)ontouch:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

