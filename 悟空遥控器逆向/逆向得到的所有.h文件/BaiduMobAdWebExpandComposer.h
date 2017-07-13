//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BaiduMobAdWebExpandController, UIButton, UIWindow;

@interface BaiduMobAdWebExpandComposer : NSObject
{
    BaiduMobAdWebExpandController *_controller;
    id <BaiduMobAdWebExpandComposerDelegate> _delegate;
    UIButton *_closeButton;
    UIWindow *_innerADWindow;
    UIWindow *_userCurrentWindow;
}

@property(retain, nonatomic) UIWindow *userCurrentWindow; // @synthesize userCurrentWindow=_userCurrentWindow;
@property(retain, nonatomic) UIWindow *innerADWindow; // @synthesize innerADWindow=_innerADWindow;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) id <BaiduMobAdWebExpandComposerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BaiduMobAdWebExpandController *controller; // @synthesize controller=_controller;
- (void)dealloc;
- (void)close;
- (void)closeButtonClick:(id)arg1;
- (void)expand:(_Bool)arg1;
- (id)initWithHTMLRender:(id)arg1;

@end

