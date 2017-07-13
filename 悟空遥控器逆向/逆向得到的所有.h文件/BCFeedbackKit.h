//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, YWFBUTServiceImpl;

@interface BCFeedbackKit : NSObject
{
    NSString *_appKey;
    NSDictionary *_extInfo;
    CDUnknownBlockType _YWFeedbackViewControllerErrorBlock;
    YWFBUTServiceImpl *_UTService;
}

+ (id)version;
@property(retain, nonatomic) YWFBUTServiceImpl *UTService; // @synthesize UTService=_UTService;
@property(copy, nonatomic) CDUnknownBlockType YWFeedbackViewControllerErrorBlock; // @synthesize YWFeedbackViewControllerErrorBlock=_YWFeedbackViewControllerErrorBlock;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)appendParams:(id)arg1 toUrl:(id)arg2;
- (id)appendParams:(id)arg1;
- (id)signWithParamsString:(id)arg1;
- (void)receiveYWTrackNotification:(id)arg1;
- (void)addObservers;
- (void)_prepareConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)getUnreadCountWithPrivate:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getUnreadCountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUnreadCountByPrivateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)makeFeedbackViewControllerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)prepare;
- (void)dealloc;
- (id)initWithOpenIMUserId:(id)arg1 password:(id)arg2 appKey:(id)arg3;
- (id)initWithAppKey:(id)arg1;

@end

