//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface WKSheetView : UIView
{
    CDUnknownBlockType _handler;
    UIView *_bgView;
}

@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)bgViewTaped:(id)arg1;
- (void)itemClicked:(id)arg1;
- (void)showSheetViewWithItems:(id)arg1 clickedHandler:(CDUnknownBlockType)arg2;

@end

