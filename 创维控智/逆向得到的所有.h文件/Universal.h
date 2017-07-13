//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "RwWaitViewDelegate.h"

@class AppDelegate, DBhelper, GKDeviceManager, NSArray, NSMutableArray, NSString, RwWaitView, UIImageView, UIScrollView, UIView;

@interface Universal : UIViewController <RwWaitViewDelegate>
{
    RwWaitView *rw;
    GKDeviceManager *_deviceManager;
    NSMutableArray *_studyData;
    int _selectNum;
    AppDelegate *delegate;
    DBhelper *helper;
    _Bool _isCon;
    _Bool _isLan;
    UIScrollView *_scrollView;
    UIImageView *_imageViewFlag;
    UIView *_mainView;
    NSArray *_btnArray;
}

@property _Bool isLan; // @synthesize isLan=_isLan;
@property(retain, nonatomic) NSArray *btnArray; // @synthesize btnArray=_btnArray;
@property(retain, nonatomic) UIView *mainView; // @synthesize mainView=_mainView;
@property(nonatomic) __weak UIImageView *imageViewFlag; // @synthesize imageViewFlag=_imageViewFlag;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)MessageBack:(id)arg1;
- (void)rfcodeStudy:(id)arg1;
- (void)btnTouchDown:(id)arg1;
- (void)btnTouchUpInside:(id)arg1;
- (void)DBinit;
- (id)btnStateUpdata;
- (void)waitView:(id)arg1 GetTextString:(id)arg2;
- (void)waitView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)btnLongTouch:(id)arg1;
- (void)btnLongTouchInitEvent;
- (void)didReceiveMemoryWarning;
- (void)UIUpData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

