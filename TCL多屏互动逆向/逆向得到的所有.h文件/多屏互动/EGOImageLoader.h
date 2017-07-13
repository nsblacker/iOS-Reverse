//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSLock, NSMutableDictionary;

@interface EGOImageLoader : NSObject
{
    NSDictionary *_currentConnections;
    NSMutableDictionary *currentConnections;
    NSLock *connectionsLock;
    BOOL _beUse;
}

+ (id)sharedImageLoader;
@property(retain, nonatomic) NSDictionary *currentConnections; // @synthesize currentConnections=_currentConnections;
- (void)dealloc;
- (void)imageLoadConnection:(id)arg1 didFailWithError:(id)arg2;
- (void)imageLoadConnectionDidFinishLoading:(id)arg1;
- (BOOL)hasLoadedImageURL:(id)arg1;
- (void)removeObserver:(id)arg1 forURL:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)imageForURL:(id)arg1 shouldLoadWithObserver:(id)arg2 withUseCache:(BOOL)arg3;
- (id)imageForURL:(id)arg1 shouldLoadWithObserver:(id)arg2;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2;
- (id)loadImageForURL:(id)arg1;
- (void)cancelLoadForURL:(id)arg1;
- (BOOL)isLoadingImageURL:(id)arg1;
- (void)clearCacheForURL:(id)arg1 style:(id)arg2;
- (void)clearCacheForURL:(id)arg1;
- (void)cleanUpConnection:(id)arg1;
- (id)loadingConnectionForURL:(id)arg1;
- (id)init;

@end

