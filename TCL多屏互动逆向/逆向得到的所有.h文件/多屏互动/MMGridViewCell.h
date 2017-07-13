//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMGridView, UIButton, UILabel;

@interface MMGridViewCell : UIView
{
    MMGridView *gridView;
    int index;
    UIButton *_btnImg;
    UIButton *_btnCheck;
    BOOL _isChecked;
    UILabel *_lblIndex;
}

@property(retain, nonatomic) UILabel *lblIndex; // @synthesize lblIndex=_lblIndex;
@property(nonatomic) BOOL isChecked; // @synthesize isChecked=_isChecked;
@property(retain, nonatomic) UIButton *btnImg; // @synthesize btnImg=_btnImg;
@property(retain, nonatomic) UIButton *btnCheck; // @synthesize btnCheck=_btnCheck;
@property(readonly, nonatomic) int index; // @synthesize index;
@property(nonatomic) MMGridView *gridView; // @synthesize gridView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setIndex:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getParam;
- (void)btnCheckClicked:(id)arg1;
- (void)setChecked:(BOOL)arg1;
- (void)btnImgClicked:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

