//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL, UIViewController, UMSocialMessageObject;

@protocol UMSocialPlatformProvider <NSObject>

@optional
@property(nonatomic) long long socialPlatformType;
- (_Bool)umSocial_isSupport;
- (_Bool)umSocial_isInstall;
- (_Bool)checkUrlSchema;
- (NSString *)umSocial_PlatformSDKVersion;
- (unsigned long long)umSocial_SupportedFeatures;
- (_Bool)umSocial_handleOpenURL:(NSURL *)arg1 options:(NSDictionary *)arg2;
- (_Bool)umSocial_handleOpenURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 annotation:(id)arg3;
- (_Bool)umSocial_handleOpenURL:(NSURL *)arg1;
- (void)umSocial_clearCacheData;
- (void)umSocial_RequestForUserProfileWithViewController:(id)arg1 completion:(void (^)(id, NSError *))arg2;
- (void)umSocial_RequestForUserProfileWithCompletionHandler:(void (^)(id, NSError *))arg1;
- (void)umSocial_cancelAuthWithCompletionHandler:(void (^)(id, NSError *))arg1;
- (void)umSocial_ShareWithObject:(UMSocialMessageObject *)arg1 withViewController:(UIViewController *)arg2 withCompletionHandler:(void (^)(id, NSError *))arg3;
- (void)umSocial_ShareWithObject:(UMSocialMessageObject *)arg1 withCompletionHandler:(void (^)(id, NSError *))arg2;
- (void)umSocial_AuthorizeWithUserInfo:(NSDictionary *)arg1 withViewController:(UIViewController *)arg2 withCompletionHandler:(void (^)(id, NSError *))arg3;
- (void)umSocial_AuthorizeWithUserInfo:(NSDictionary *)arg1 withCompletionHandler:(void (^)(id, NSError *))arg2;
- (void)umSocial_setAppKey:(NSString *)arg1 withAppSecret:(NSString *)arg2 withRedirectURL:(NSString *)arg3;
@end

