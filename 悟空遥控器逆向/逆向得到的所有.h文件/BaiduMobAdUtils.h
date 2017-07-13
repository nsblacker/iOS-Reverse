//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BaiduMobAdUtils : NSObject
{
}

+ (id)replaceURLWithSupportProtocol:(id)arg1;
+ (id)handleEmptyValue:(id)arg1 withDefaut:(id)arg2;
+ (id)objectFromDict:(id)arg1 withKey:(id)arg2 withDefault:(id)arg3;
+ (void)setWebView:(id)arg1 scrollEnabled:(_Bool)arg2;
+ (void)setWebView:(id)arg1 scrollsToTop:(_Bool)arg2;
+ (unsigned int)longScreenDimension;
+ (unsigned int)shortScreenDimension;
+ (_Bool)isNilOrEmptyString:(id)arg1;
+ (id)newStringWithData:(id)arg1;
+ (id)userAgent;
+ (_Bool)isAvailableUrl:(id)arg1;
+ (id)model;
+ (void)sendStats:(id)arg1;
+ (_Bool)useStats;
+ (id)colorWithHexString:(id)arg1;
+ (void)setView:(id)arg1 ifNotEqualTransform:(struct CGAffineTransform)arg2 bounds:(struct CGRect)arg3 center:(struct CGPoint)arg4;
+ (id)MIMETypeForImageData:(id)arg1;
+ (unsigned long long)UIInterfaceOrientationMaskFromOrientation:(long long)arg1;
+ (double)UIInterfaceOrientationAngleOfOrientation:(long long)arg1;
+ (struct CGPoint)pointInWindowBounds:(struct CGRect)arg1 statusBarOrientation:(long long)arg2 statusBarHeight:(double)arg3;
+ (struct CGRect)rectInWindowBounds:(struct CGRect)arg1 statusBarOrientation:(long long)arg2 statusBarHeight:(double)arg3;
+ (double)getStatusBarHeight;
+ (void)postLogwithUrl:(id)arg1 body:(id)arg2 retry:(_Bool)arg3;
+ (void)sendLogwithLogUrl:(id)arg1 retry:(_Bool)arg2;
+ (void)sendLog:(id)arg1 withLogUrl:(id)arg2 retry:(_Bool)arg3;
+ (void)_syncRequest:(id)arg1;
+ (id)urlDecodeComponent:(id)arg1;
+ (id)urlEncodeComponent:(id)arg1;
+ (id)urlEncodeString:(id)arg1;
+ (_Bool)dayInterval:(id)arg1 d2:(id)arg2;
+ (_Bool)inSameDay:(id)arg1 d2:(id)arg2;
+ (id)fileCreationDate:(id)arg1;
+ (id)fileModificationDate:(id)arg1;
+ (id)createImageFromDataStr:(id)arg1;
+ (id)base64forString:(id)arg1;
+ (id)base64StringFromData:(id)arg1 length:(long long)arg2;
+ (id)customResoureForName:(id)arg1 ofType:(id)arg2;
+ (id)md5:(id)arg1;
+ (id)requestIdWithSN:(id)arg1 publishId:(id)arg2 adId:(id)arg3;
+ (_Bool)isMSSP;
+ (id)cachePath;
+ (id)publisherId;
+ (void)setPublisherId:(id)arg1;
+ (void)initialize;

@end

