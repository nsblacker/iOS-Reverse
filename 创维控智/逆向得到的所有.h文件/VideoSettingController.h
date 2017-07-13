//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SwitchCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Contact, NSString, RadioButton, UISwitch, UITableView;

@interface VideoSettingController : UIViewController <UITableViewDataSource, UITableViewDelegate, SwitchCellDelegate>
{
    _Bool _isInitNpcSettings;
    _Bool _isVideoFormatLoading;
    _Bool _isVideoVolumeLoading;
    _Bool _isLoadingImageInversion;
    _Bool _isSupportImageInversion;
    UITableView *_tableView;
    Contact *_contact;
    RadioButton *_radio1;
    RadioButton *_radio2;
    long long _videoType;
    long long _lastSetVideoType;
    long long _lastSetVideoVolume;
    long long _videoVolume;
    UISwitch *_imageInversionSwitch;
    long long _imageInversionState;
    long long _lastImageInversionState;
}

@property(nonatomic) _Bool isSupportImageInversion; // @synthesize isSupportImageInversion=_isSupportImageInversion;
@property long long lastImageInversionState; // @synthesize lastImageInversionState=_lastImageInversionState;
@property long long imageInversionState; // @synthesize imageInversionState=_imageInversionState;
@property(nonatomic) _Bool isLoadingImageInversion; // @synthesize isLoadingImageInversion=_isLoadingImageInversion;
@property(retain, nonatomic) UISwitch *imageInversionSwitch; // @synthesize imageInversionSwitch=_imageInversionSwitch;
@property _Bool isVideoVolumeLoading; // @synthesize isVideoVolumeLoading=_isVideoVolumeLoading;
@property _Bool isVideoFormatLoading; // @synthesize isVideoFormatLoading=_isVideoFormatLoading;
@property long long videoVolume; // @synthesize videoVolume=_videoVolume;
@property long long lastSetVideoVolume; // @synthesize lastSetVideoVolume=_lastSetVideoVolume;
@property long long lastSetVideoType; // @synthesize lastSetVideoType=_lastSetVideoType;
@property long long videoType; // @synthesize videoType=_videoType;
@property _Bool isInitNpcSettings; // @synthesize isInitNpcSettings=_isInitNpcSettings;
@property(retain, nonatomic) RadioButton *radio2; // @synthesize radio2=_radio2;
@property(retain, nonatomic) RadioButton *radio1; // @synthesize radio1=_radio1;
@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)onSliderEnd:(id)arg1;
- (void)onSlider:(id)arg1;
- (void)onRadio2Press;
- (void)onRadio1Press;
- (void)onSwitchValueChange:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onBackPress;
- (void)initComponent;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)ack_receiveRemoteMessage:(id)arg1;
- (void)receiveRemoteMessage:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

