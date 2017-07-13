//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class NSString, NSTimer, UIColor, UIFont;

@interface TextFlowView : UILabel
{
    UILabel *_firstLabel;
    UILabel *_secondLabel;
    NSTimer *_timer;
    NSString *_text;
    BOOL needFlow;
    BOOL isShow;
    struct CGRect _frame;
    UIFont *_font;
    UIColor *textColor;
    int _startIndex;
    float _XOffset;
    struct CGSize _textSize;
    UIColor *__textColor;
}

@property(retain, nonatomic) UIColor *_textColor; // @synthesize _textColor=__textColor;
- (void)setTextColor:(id)arg1;
- (id)textColor;
@property(nonatomic) BOOL isShow; // @synthesize isShow;
@property(nonatomic) BOOL needFlow; // @synthesize needFlow;
@property(copy, nonatomic) NSString *_text; // @synthesize _text;
- (void)setFont:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 Text:(id)arg2;
- (struct CGSize)computeTextSize:(id)arg1;
- (void)timerAction;
- (void)cancelRun;
- (void)startRun;
- (struct CGRect)moveNewPoint:(struct CGPoint)arg1 rect:(struct CGRect)arg2;
- (void)dealloc;

@end

