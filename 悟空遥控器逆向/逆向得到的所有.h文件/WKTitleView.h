//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface WKTitleView : UIView
{
    UIButton *netStatusImageView;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIButton *netStatusImageView; // @synthesize netStatusImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)discoverAction:(id)arg1;
- (void)obeserveNetWorkChange:(id)arg1;
- (void)detetionNetWorkStatus:(id)arg1;
- (void)initTitleView:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

