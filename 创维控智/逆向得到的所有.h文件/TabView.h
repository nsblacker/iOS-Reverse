//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TabView : UIView
{
    UIButton *_btn[2];
    UIView *_line[2];
    int _currentPage;
    id <tabviewDelegate> _delegate;
}

@property(nonatomic) id <tabviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onBtnPress:(id)arg1;
- (void)setBtnIndex:(int)arg1 text:(id)arg2;

@end

