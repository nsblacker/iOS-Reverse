//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class MWGridViewController, UIButton, UIImageView;

@interface MWGridCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_videoIndicator;
    UIButton *_selectedButton;
    _Bool _selectionMode;
    _Bool _isSelected;
    MWGridViewController *_gridController;
    unsigned long long _index;
    id <MWPhoto> _photo;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) _Bool selectionMode; // @synthesize selectionMode=_selectionMode;
@property(retain, nonatomic) id <MWPhoto> photo; // @synthesize photo=_photo;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) __weak MWGridViewController *gridController; // @synthesize gridController=_gridController;
- (void).cxx_destruct;
- (void)handleMWPhotoLoadingDidEndNotification:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)selectionButtonPressed;
- (void)displayImage;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

