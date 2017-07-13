//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "packParseEngineDelegate.h"

@class AutoReloginTask, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSTimer, XLReachability;

@interface XLinkCoreObject : NSObject <packParseEngineDelegate>
{
    NSMutableDictionary *_ip_Devices;
    NSMutableDictionary *_all_device;
    unsigned short _listenPort;
    int _currentVersion;
    int _currerntAppID;
    NSString *_currentAuthStr;
    unsigned short _messageID;
    NSMutableDictionary *_messageTrace;
    NSMutableDictionary *_messageQueue;
    NSMutableArray *_connectDeviceTaskList;
    int _keepAliveInterval;
    NSTimer *_pingTimer;
    _Bool _isUserStop;
    _Bool _isServerKicked;
    _Bool _isLoginUnauthorized;
    _Bool _isDelayThreadRun;
    NSThread *_delayThread;
    struct {
        unsigned int isStarted:1;
    } _flag;
    XLReachability *_networkReachability;
    AutoReloginTask *_autoReloginTask;
    _Bool _isLoginSuccessed;
    _Bool _isTcpConnected;
    NSMutableArray *_allDeviceKey;
    double _lastGetPingReturn;
}

+ (id)sharedCoreObject;
@property(nonatomic) double lastGetPingReturn; // @synthesize lastGetPingReturn=_lastGetPingReturn;
@property(nonatomic) _Bool isTcpConnected; // @synthesize isTcpConnected=_isTcpConnected;
@property(nonatomic) _Bool isLoginSuccessed; // @synthesize isLoginSuccessed=_isLoginSuccessed;
@property(readonly, retain, nonatomic) NSMutableArray *allDeviceKey; // @synthesize allDeviceKey=_allDeviceKey;
- (void).cxx_destruct;
- (void)checkNetworkStatus:(id)arg1;
- (void)unregisterNetworkNotify;
- (void)registerNetworkNotify;
- (void)onSessionIdError:(id)arg1;
- (void)reconnectDevice:(id)arg1;
- (void)reconnectDevices;
- (void)onSetDeviceAuthCode:(id)arg1 withResult:(int)arg2;
- (void)stop;
- (void)onMessageTraceResponse:(short)arg1;
- (id)getMessageDeviceByMessageID:(short)arg1;
- (id)getMessageTraceItem:(short)arg1;
- (void)pingMethod:(id)arg1;
- (int)sendLocalByeBye:(id)arg1;
- (void)stopPingCloud;
- (void)startPingTimer;
- (void)pingCloud;
- (void)removeMessageByMessageID:(int)arg1;
- (void)setMessageTraceObject:(id)arg1 andMessage:(unsigned short)arg2;
- (unsigned short)getMessageID;
- (int)sendCloudPropertySetWithDevice:(id)arg1;
- (void)sendProbeViaCloud:(id)arg1 andMessageID:(int)arg2 andFlag:(int)arg3;
- (void)sendPipeReplyPacketWithDeviceID:(unsigned int)arg1 withMsgID:(unsigned short)arg2 withCode:(BOOL)arg3;
- (int)sendCloudPipe:(id)arg1 andPayload:(id)arg2;
- (void)setDevicePropertyViaCloud:(id)arg1 andMessageId:(int)arg2 andFlag:(int)arg3;
- (void)setDevicePropertyViaCloud:(id)arg1 andFlag:(int)arg2;
- (int)setDeviceAuthorizeCode:(id)arg1 andOldAuthKey:(id)arg2 andNewAuthKey:(id)arg3;
- (int)subscribeDevice:(id)arg1 andAuthKey:(id)arg2 andFlag:(BOOL)arg3;
- (void)onLoginUnauthorized;
- (void)onServerKicked;
- (void)sendProbeViaLocal:(id)arg1;
- (void)handShakeWithDevice:(id)arg1 andAuthKey:(id)arg2;
- (void)handShakeWithDevice:(id)arg1;
- (int)setLocalDeviceAuthorizeCode:(id)arg1 andOldAuthCode:(id)arg2 andNewAuthCode:(id)arg3;
- (void)getSubKeyWithAccessKey:(id)arg1 withDevice:(id)arg2;
- (unsigned short)setCloudDataPoints:(id)arg1 withDevice:(id)arg2;
- (unsigned short)setLocalDataPoints:(id)arg1 withDevice:(id)arg2;
- (int)setAccessKey:(id)arg1 withDevice:(id)arg2;
- (int)sendLocalSetWithDevice:(id)arg1;
- (int)sendLocalProbeWithDevice:(id)arg1 andFlag:(int)arg2;
- (int)sendLocalPipeWithDevice:(id)arg1 andPayload:(id)arg2 andFlag:(int)arg3 withMsgID:(int)arg4;
- (int)sendLocalPipeWithDevice:(id)arg1 andPayload:(id)arg2 andFlag:(int)arg3;
- (int)sendCloudProbe:(id)arg1 andFlag:(int)arg2;
- (void)appLogout;
- (void)loginResponsed:(int)arg1;
- (void)autoRelogin:(_Bool)arg1;
- (void)logout;
- (void)loginWithVersion:(int)arg1 andAppID:(int)arg2 andAuthLength:(int)arg3 andAuthStr:(id)arg4 andKeepLive:(int)arg5;
- (void)loginWithAppID:(int)arg1 andAuthStr:(id)arg2 andKeepLive:(int)arg3;
- (void)connectExternal:(id)arg1 andPort:(int)arg2;
- (void)scanNeiWangDeviceWithProductID:(id)arg1;
- (void)scanByDeviceProductID:(id)arg1 andDelegate:(id)arg2;
- (id)getDeviceByDeviceID:(int)arg1;
- (id)getDeviceByMacAddress:(id)arg1;
- (id)getConnectDeviceTaskByDeviceID:(int)arg1;
- (id)getConnectDeviceTaskByDeviceMacAddress:(id)arg1;
- (void)ignore;
- (void)startDelayThread;
- (id)getDelayThread;
- (int)getAppID;
- (void)stopHeart;
- (void)initDevice:(id)arg1;
- (void)startHeartBeatWithSessionID:(int)arg1 andDevice:(id)arg2;
- (void)sendPingWithSessionID:(int)arg1 andDevice:(id)arg2;
- (void)sendByeByeSessionID:(int)arg1 withDevice:(id)arg2;
- (_Bool)needCheckSendOvertime;
- (void)clearDeviceList;
- (int)start;
- (int)getListenPort;
- (void)setListenPort:(int)arg1;
- (id)init;
- (id)senderEngine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

