//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MNMBottomPullToRefreshManager, UIScrollView;

@protocol MNMBottomPullToRefreshManagerClient
- (void)bottomPullToRefreshTriggered:(MNMBottomPullToRefreshManager *)arg1;
- (void)scrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(UIScrollView *)arg1;
@end

