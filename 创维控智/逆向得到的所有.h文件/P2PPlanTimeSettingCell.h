//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PlanTimePickView;

@interface P2PPlanTimeSettingCell : UITableViewCell
{
    PlanTimePickView *_picker1;
    PlanTimePickView *_picker2;
    long long _planTime;
}

@property long long planTime; // @synthesize planTime=_planTime;
@property(retain, nonatomic) PlanTimePickView *picker2; // @synthesize picker2=_picker2;
@property(retain, nonatomic) PlanTimePickView *picker1; // @synthesize picker1=_picker1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

