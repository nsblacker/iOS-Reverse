//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UTMCLifeCycleProtocol.h"

@class NSMutableArray, NSString, UTDPersistentFile;

@interface UTDOnlineConfManager : NSObject <UTMCLifeCycleProtocol>
{
    NSMutableArray *mConfBusinessList;
    _Bool mIsStop;
    id mOptLock;
    NSString *mUTSyncConfTimeKeyStr;
    NSString *mUTConfFileName;
    UTDPersistentFile *mConfCache;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (void).cxx_destruct;
- (id)responseConfigunPack:(id)arg1;
- (void)syncOnlineconf;
- (void)dispatchSyncFailNotify;
- (id)ogLocalCacheEntryForRequest;
- (void)dispatchSuccessConfs:(id)arg1;
- (void)saveOnlineConf:(id)arg1;
- (id)calOnlineConf:(id)arg1;
- (void)switchBackGround;
- (void)switchForeGround;
- (void)start;
- (void)loadConfsFromFile;
- (id)localConfCacheForKey:(id)arg1;
- (void)saveAllConfigEntry;
- (void)updateConfEntryToCache:(id)arg1 confEntry:(id)arg2;
- (void)removeConfBusiness:(id)arg1;
- (void)addConfBusiness:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

