//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImage, UIToolbar, WKVideoSourceButton;

@interface WKVideoDetailBannerPlayToolsView : UIView
{
    UIToolbar *toolbar;
    UIButton *playButton;
    WKVideoSourceButton *srcButton;
    UIView *topSeparatorLineView;
    UIView *verticalSeparatorLineView;
    id <WKVideoDetailBannerPlayToolsViewDelegate> _delegate;
    UIImage *_highLightImage;
}

@property(retain, nonatomic) UIImage *highLightImage; // @synthesize highLightImage=_highLightImage;
@property(nonatomic) __weak id <WKVideoDetailBannerPlayToolsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *verticalSeparatorLineView; // @synthesize verticalSeparatorLineView;
@property(retain, nonatomic) UIView *topSeparatorLineView; // @synthesize topSeparatorLineView;
@property(retain, nonatomic) WKVideoSourceButton *srcButton; // @synthesize srcButton;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar;
- (void).cxx_destruct;
- (void)srcButtonClick;
- (void)playButtonClick;
- (void)setVideoSources:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

