//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DJPhotoBrowser, NSURL, UIImage;

@protocol DJPhotoBrowserDelegate <NSObject>
- (UIImage *)photoBrowser:(DJPhotoBrowser *)arg1 placeholderImageForIndex:(long long)arg2;

@optional
- (NSURL *)photoBrowser:(DJPhotoBrowser *)arg1 highQualityImageURLForIndex:(long long)arg2;
@end

