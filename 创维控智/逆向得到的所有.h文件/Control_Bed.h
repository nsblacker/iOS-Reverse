//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class DeviceEntity, MBProgressHUD, NSMutableArray, NSNumber, UIButton;

@interface Control_Bed : UIViewController
{
    MBProgressHUD *HUD;
    UIButton *_sleep;
    UIButton *_dinner;
    UIButton *_lei;
    UIButton *_stop;
    DeviceEntity *_device;
    NSNumber *_pwd;
    NSMutableArray *_dataPoints;
}

@property(retain, nonatomic) NSMutableArray *dataPoints; // @synthesize dataPoints=_dataPoints;
@property(retain, nonatomic) NSNumber *pwd; // @synthesize pwd=_pwd;
@property(retain, nonatomic) DeviceEntity *device; // @synthesize device=_device;
@property(retain, nonatomic) UIButton *stop; // @synthesize stop=_stop;
@property(retain, nonatomic) UIButton *lei; // @synthesize lei=_lei;
@property(retain, nonatomic) UIButton *dinner; // @synthesize dinner=_dinner;
@property(retain, nonatomic) UIButton *sleep; // @synthesize sleep=_sleep;
- (void).cxx_destruct;
- (void)showText:(id)arg1;
- (void)dismiss;
- (void)onDataPointUpdate:(id)arg1;
- (void)onDeviceStateChanged:(id)arg1;
- (void)notifyRecvData:(id)arg1 from:(id)arg2;
- (void)onRecvPipeData:(id)arg1;
- (void)onRecvSyncPipeData:(id)arg1;
- (void)onRecvLocalPipeData:(id)arg1;
- (void)notifySendPipeResult:(id)arg1;
- (void)onSendLocalPipeData:(id)arg1;
- (void)onSendPipeData:(id)arg1;
- (id)hexToData:(id)arg1;
- (void)sendHexCode:(id)arg1;
- (void)control:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateStatus;
- (void)dealloc;
- (void)initView;
- (void)viewDidLoad;

@end

