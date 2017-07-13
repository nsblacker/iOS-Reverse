//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class AppManagerItem, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface WKAppManagerCollectionViewCell : UICollectionViewCell
{
    UIView *_bottomLine;
    AppManagerItem *_item;
    UIImageView *_imageV;
    UILabel *_titleLbl;
    UILabel *_descLbl;
    UILabel *_badgeLbl;
    NSLayoutConstraint *_badgeLblW;
}

@property(nonatomic) __weak NSLayoutConstraint *badgeLblW; // @synthesize badgeLblW=_badgeLblW;
@property(nonatomic) __weak UILabel *badgeLbl; // @synthesize badgeLbl=_badgeLbl;
@property(nonatomic) __weak UILabel *descLbl; // @synthesize descLbl=_descLbl;
@property(nonatomic) __weak UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(nonatomic) __weak UIImageView *imageV; // @synthesize imageV=_imageV;
@property(retain, nonatomic) AppManagerItem *item; // @synthesize item=_item;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void).cxx_destruct;
- (void)configCellWithData:(id)arg1;
- (void)awakeFromNib;

@end

