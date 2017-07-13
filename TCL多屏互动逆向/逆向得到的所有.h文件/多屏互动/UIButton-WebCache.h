//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "SDWebImageManagerDelegate.h"

@interface UIButton (WebCache) <SDWebImageManagerDelegate>
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2 forURL:(id)arg3 userInfo:(id)arg4;
- (void)webImageManager:(id)arg1 didProgressWithPartialImage:(id)arg2 forURL:(id)arg3 userInfo:(id)arg4;
- (void)cancelCurrentImageLoad;
- (void)setBackgroundImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setBackgroundImageWithURL:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setBackgroundImageWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)setBackgroundImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3;
- (void)setBackgroundImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setBackgroundImageWithURL:(id)arg1;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)setImageWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3;
- (void)setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)setImageWithURL:(id)arg1;
@end

