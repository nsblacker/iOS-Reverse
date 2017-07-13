//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GKDeviceManagerDelegate.h"
#import "GKTVStudyViewControllerDelegate.h"
#import "RwWaitViewDelegate.h"

@class AppDelegate, DBhelper, GKDeviceManager, NSMutableArray, NSString, RwWaitView, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface Tv_Control : UIViewController <GKDeviceManagerDelegate, GKTVStudyViewControllerDelegate, RwWaitViewDelegate>
{
    DBhelper *helper;
    NSMutableArray *array;
    _Bool message;
    _Bool _isCon;
    GKDeviceManager *_deviceManager;
    RwWaitView *rw;
    AppDelegate *delegate;
    _Bool _isLan;
    UIScrollView *_scrollView;
    UIImageView *_imageViewFlag;
    UIView *_midView;
    UILabel *_lblTVName;
    UILabel *_lblzdy1;
    UILabel *_lblzdy2;
    UILabel *_lblzdy3;
    UIButton *_btnZdy3;
    UIButton *_btnZdy2;
    UIButton *_btnZdy1;
}

@property(nonatomic) __weak UIButton *btnZdy1; // @synthesize btnZdy1=_btnZdy1;
@property(nonatomic) __weak UIButton *btnZdy2; // @synthesize btnZdy2=_btnZdy2;
@property(nonatomic) __weak UIButton *btnZdy3; // @synthesize btnZdy3=_btnZdy3;
@property(nonatomic) __weak UILabel *lblzdy3; // @synthesize lblzdy3=_lblzdy3;
@property(nonatomic) __weak UILabel *lblzdy2; // @synthesize lblzdy2=_lblzdy2;
@property(nonatomic) __weak UILabel *lblzdy1; // @synthesize lblzdy1=_lblzdy1;
@property(nonatomic) __weak UILabel *lblTVName; // @synthesize lblTVName=_lblTVName;
@property(retain, nonatomic) UIView *midView; // @synthesize midView=_midView;
@property(nonatomic) __weak UIImageView *imageViewFlag; // @synthesize imageViewFlag=_imageViewFlag;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property _Bool isLan; // @synthesize isLan=_isLan;
- (void).cxx_destruct;
- (void)DBinit;
- (id)getData;
- (void)waitView:(id)arg1 GetTextString:(id)arg2;
- (void)waitView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)GKTVUpdata;
- (void)SubUpData:(id)arg1;
- (void)UIConnectState:(id)arg1;
- (void)MessageBack:(id)arg1;
- (void)UIUpData;
- (void)btnStudyTouchUpInside:(id)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)btnPinpaiPickTouchUpInside:(id)arg1;
- (void)btnTouchUpInside:(id)arg1;
- (void)Updata;
- (void)didReceiveMemoryWarning;
- (void)rfcodeStudy:(id)arg1;
- (void)btnLong3:(id)arg1;
- (void)btnLong2:(id)arg1;
- (void)btnLong1:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

