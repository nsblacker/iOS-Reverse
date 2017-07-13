//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XGConfig : NSObject
{
    _Bool _debugEnable;
    _Bool _smartReporting;
    _Bool _autoExceptionCaught;
    _Bool _needRegister;
    unsigned int _sessionTimeoutSecs;
    unsigned int _appId;
    int _reportStrategy;
    unsigned int _maxStoreEventCount;
    unsigned int _maxLoadEventCount;
    unsigned int _minBatchReportCount;
    unsigned int _maxSendRetryCount;
    unsigned int _sendPeriodMinutes;
    unsigned int _maxParallelTimingEvents;
    unsigned int _maxReportEventLength;
    NSString *_keyForKeyChain;
    NSString *_appkey;
    NSString *_account;
    NSString *_deviceToken;
    NSString *_channel;
    NSString *_qq;
    NSString *_customerUserID;
    NSString *_customerAppVersion;
}

+ (id)getInstance;
@property _Bool needRegister; // @synthesize needRegister=_needRegister;
@property(retain, nonatomic) NSString *customerAppVersion; // @synthesize customerAppVersion=_customerAppVersion;
@property(retain, nonatomic) NSString *customerUserID; // @synthesize customerUserID=_customerUserID;
@property(retain, nonatomic) NSString *qq; // @synthesize qq=_qq;
@property unsigned int maxReportEventLength; // @synthesize maxReportEventLength=_maxReportEventLength;
@property _Bool autoExceptionCaught; // @synthesize autoExceptionCaught=_autoExceptionCaught;
@property _Bool smartReporting; // @synthesize smartReporting=_smartReporting;
@property unsigned int maxParallelTimingEvents; // @synthesize maxParallelTimingEvents=_maxParallelTimingEvents;
@property unsigned int sendPeriodMinutes; // @synthesize sendPeriodMinutes=_sendPeriodMinutes;
@property unsigned int maxSendRetryCount; // @synthesize maxSendRetryCount=_maxSendRetryCount;
@property unsigned int minBatchReportCount; // @synthesize minBatchReportCount=_minBatchReportCount;
@property unsigned int maxLoadEventCount; // @synthesize maxLoadEventCount=_maxLoadEventCount;
@property unsigned int maxStoreEventCount; // @synthesize maxStoreEventCount=_maxStoreEventCount;
@property int reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(retain, nonatomic) NSString *account; // @synthesize account=_account;
@property unsigned int appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property unsigned int sessionTimeoutSecs; // @synthesize sessionTimeoutSecs=_sessionTimeoutSecs;
@property _Bool debugEnable; // @synthesize debugEnable=_debugEnable;
@property(retain, nonatomic) NSString *keyForKeyChain; // @synthesize keyForKeyChain=_keyForKeyChain;
- (id)loadValueByKey:(id)arg1;
- (_Bool)saveKeyValue:(id)arg1 value:(id)arg2;
- (_Bool)isStarted;
- (id)init;

@end

