//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MXSCycleScrollView, UIView;

@protocol MXSCycleScrollViewDatasource <NSObject>
- (UIView *)pageAtIndex:(long long)arg1 andScrollView:(MXSCycleScrollView *)arg2;
- (long long)numberOfPages:(MXSCycleScrollView *)arg1;
@end

