//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIControl;

@interface DXPopover : UIView
{
    _Bool _animationSpring;
    _Bool _applyShadow;
    unsigned long long _popoverPosition;
    double _cornerRadius;
    double _animationIn;
    double _animationOut;
    unsigned long long _maskType;
    double _betweenAtViewAndArrowHeight;
    double _sideEdge;
    CDUnknownBlockType _didShowHandler;
    CDUnknownBlockType _didDismissHandler;
    UIControl *_blackOverlay;
    UIView *_containerView;
    UIView *_contentView;
    struct CGSize _arrowSize;
    struct CGPoint _arrowShowPoint;
    struct CGRect _contentViewFrame;
}

+ (id)popover;
@property(nonatomic) struct CGRect contentViewFrame; // @synthesize contentViewFrame=_contentViewFrame;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct CGPoint arrowShowPoint; // @synthesize arrowShowPoint=_arrowShowPoint;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIControl *blackOverlay; // @synthesize blackOverlay=_blackOverlay;
@property(copy, nonatomic) CDUnknownBlockType didDismissHandler; // @synthesize didDismissHandler=_didDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType didShowHandler; // @synthesize didShowHandler=_didShowHandler;
@property(nonatomic) double sideEdge; // @synthesize sideEdge=_sideEdge;
@property(nonatomic) double betweenAtViewAndArrowHeight; // @synthesize betweenAtViewAndArrowHeight=_betweenAtViewAndArrowHeight;
@property(nonatomic) _Bool applyShadow; // @synthesize applyShadow=_applyShadow;
@property(nonatomic) unsigned long long maskType; // @synthesize maskType=_maskType;
@property(nonatomic) _Bool animationSpring; // @synthesize animationSpring=_animationSpring;
@property(nonatomic) double animationOut; // @synthesize animationOut=_animationOut;
@property(nonatomic) double animationIn; // @synthesize animationIn=_animationIn;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGSize arrowSize; // @synthesize arrowSize=_arrowSize;
@property(nonatomic) unsigned long long popoverPosition; // @synthesize popoverPosition=_popoverPosition;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)dismiss;
- (void)show;
- (void)showAtView:(id)arg1 withContentView:(id)arg2;
- (void)showAtView:(id)arg1 withContentView:(id)arg2 inView:(id)arg3;
- (void)showAtView:(id)arg1 popoverPostion:(unsigned long long)arg2 withContentView:(id)arg3 inView:(id)arg4;
- (void)showAtPoint:(struct CGPoint)arg1 popoverPostion:(unsigned long long)arg2 withContentView:(id)arg3 inView:(id)arg4;
- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

