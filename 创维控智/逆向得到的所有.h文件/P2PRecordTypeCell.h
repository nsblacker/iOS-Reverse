//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class RadioButton;

@interface P2PRecordTypeCell : UITableViewCell
{
    RadioButton *_radio1;
    RadioButton *_radio2;
    RadioButton *_radio3;
    long long _selectedIndex;
    id <RecodeTypeDelegate> _delegate;
}

@property id <RecodeTypeDelegate> delegate; // @synthesize delegate=_delegate;
@property long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) RadioButton *radio3; // @synthesize radio3=_radio3;
@property(retain, nonatomic) RadioButton *radio2; // @synthesize radio2=_radio2;
@property(retain, nonatomic) RadioButton *radio1; // @synthesize radio1=_radio1;
- (void)onRadioPress3;
- (void)onRadioPress2;
- (void)onRadioPress1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

