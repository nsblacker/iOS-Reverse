//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSString;

@interface WKHttpRequest : NSObject <NSURLConnectionDataDelegate>
{
    NSMutableData *_resultData;
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _responseBlock;
    CDUnknownBlockType _resultBlock;
}

+ (id)postWithURL:(id)arg1 withPostData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)getWithUrlRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)getWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)sharedQueue;
+ (id)defaultHttpRequest;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSMutableData *resultData; // @synthesize resultData=_resultData;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestWithURLWithRequest:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)requestWithURLWithPost:(id)arg1 paramters:(id)arg2 finshedBlock:(CDUnknownBlockType)arg3;
- (void)requestWithURLWithGet:(id)arg1 finshedBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

