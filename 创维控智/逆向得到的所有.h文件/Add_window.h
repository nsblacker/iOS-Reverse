//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AppDelegate, GKDeviceManager, GKSubDevice, NSMutableArray, UIButton, UITextFieldEx;

@interface Add_window : UIViewController
{
    GKSubDevice *sub;
    AppDelegate *delegate;
    _Bool message;
    GKDeviceManager *_manager;
    NSMutableArray *_dataList;
    int deviceType;
    _Bool _isLan;
    UITextFieldEx *_light_name;
    UIButton *_one;
    UIButton *_two;
    UIButton *_three;
    UIButton *_curtain_1;
    UIButton *_curtain_2;
    UIButton *_curtain_3;
}

@property(retain, nonatomic) UIButton *curtain_3; // @synthesize curtain_3=_curtain_3;
@property(retain, nonatomic) UIButton *curtain_2; // @synthesize curtain_2=_curtain_2;
@property(retain, nonatomic) UIButton *curtain_1; // @synthesize curtain_1=_curtain_1;
@property(retain, nonatomic) UIButton *three; // @synthesize three=_three;
@property(retain, nonatomic) UIButton *two; // @synthesize two=_two;
@property(retain, nonatomic) UIButton *one; // @synthesize one=_one;
@property(retain, nonatomic) UITextFieldEx *light_name; // @synthesize light_name=_light_name;
@property _Bool isLan; // @synthesize isLan=_isLan;
- (void).cxx_destruct;
- (void)MessageBack:(id)arg1;
- (void)add;
- (void)typetouch:(id)arg1;
- (void)ontouch:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

