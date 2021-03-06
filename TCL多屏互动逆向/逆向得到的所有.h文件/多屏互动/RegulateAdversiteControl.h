//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IFlyAdLinks, UIColor;

@interface RegulateAdversiteControl : UIView
{
    UIColor *_commonTextColor;
    UIColor *_linkTextColor;
    struct NSMutableArray *_adLinksArray;
    IFlyAdLinks *_currentAdLinks;
    struct CGRect _linkRect;
}

- (void)setLinksArray:(struct NSMutableArray *)arg1;
- (void)refresh;
- (void)setLinkTextColor:(id)arg1;
- (void)setCommonTextColor:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawNormalRect:(struct CGRect)arg1;
- (void)drawMoreRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)randAdLinksFromArray;

@end

