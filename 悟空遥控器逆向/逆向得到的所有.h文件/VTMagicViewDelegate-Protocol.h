//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, VTMagicView;

@protocol VTMagicViewDelegate <NSObject>

@optional
- (double)magicView:(VTMagicView *)arg1 sliderWidthAtIndex:(unsigned long long)arg2;
- (double)magicView:(VTMagicView *)arg1 itemWidthAtIndex:(unsigned long long)arg2;
- (void)magicView:(VTMagicView *)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)magicView:(VTMagicView *)arg1 viewDidDisappear:(UIViewController *)arg2 atPage:(unsigned long long)arg3;
- (void)magicView:(VTMagicView *)arg1 viewDidAppear:(UIViewController *)arg2 atPage:(unsigned long long)arg3;
@end

