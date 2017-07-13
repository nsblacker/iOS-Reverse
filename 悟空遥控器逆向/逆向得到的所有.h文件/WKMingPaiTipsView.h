//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BoardView, NSArray, WKAbnormalModel, WKHitTestWindow, WKMingPaiLabelView, WKPromotionModel;

@interface WKMingPaiTipsView : NSObject
{
    _Bool _isAnimation;
    WKHitTestWindow *_boardWindow;
    WKPromotionModel *_promotionModel;
    BoardView *_boardView;
    _Bool _running;
    WKMingPaiLabelView *mingPaiView;
    NSArray *promotionArray;
    WKAbnormalModel *abnormalModel;
    id <WKMingPaiTipsViewDelegate> _delegatge;
}

+ (id)defaultTipsView;
@property(nonatomic) id <WKMingPaiTipsViewDelegate> delegatge; // @synthesize delegatge=_delegatge;
@property(retain, nonatomic) WKAbnormalModel *abnormalModel; // @synthesize abnormalModel;
@property(retain, nonatomic) NSArray *promotionArray; // @synthesize promotionArray;
@property(retain, nonatomic) WKMingPaiLabelView *mingPaiView; // @synthesize mingPaiView;
- (void).cxx_destruct;
- (_Bool)isRunning;
- (void)stopRunning;
- (void)startRunning;
- (id)getPromotionMingPaiID:(long long)arg1;
- (_Bool)checkOverFlowClickCount:(id)arg1;
- (id)disposePromotionDataArray:(id)arg1;
- (void)setMingPaiButtonForAbnormalMingPai;
- (void)setNoticeMessage;
- (_Bool)hasMingPaiMsg;
- (void)setMingPaiButtonForPromotionMingPai;
- (void)mingPaiViewTap;
- (void)mingPaiHidden;
- (void)mingPaiShown;
- (void)hiddenMingPaiView;
- (void)showMingPaiView;
- (void)tapGesHundel:(id)arg1;
- (void)initBoardView;
- (void)initBoardWindow;
- (id)init;

@end

