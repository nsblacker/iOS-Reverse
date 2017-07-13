//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "UIAlertViewDelegate.h"
#import "UIApplicationDelegate.h"
#import "XlinkExportObjectDelegate.h"

@class AVAudioPlayer, Contact, MainController, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, UIAlertView, UIWindow, menu;

@interface AppDelegate : UIResponder <XlinkExportObjectDelegate, UIApplicationDelegate, UIAlertViewDelegate>
{
    UIAlertView *_alarmAlertView;
    _Bool _isLan;
    _Bool _isBeingInP2PVideo;
    _Bool _isMonitoring;
    _Bool _isDoorBellAlarm;
    _Bool _isGoBack;
    _Bool _isInputtingPwdToMonitor;
    _Bool _isShowingDoorBellAlarm;
    _Bool _isNotificationBeClicked;
    int _active;
    int _isfail;
    int _dwApContactID;
    int _index_tag;
    NSString *sn_id;
    NSString *sn_pass;
    NSManagedObjectContext *__managedObjectContext;
    NSManagedObjectModel *__managedObjectModel;
    NSPersistentStoreCoordinator *__persistentStoreCoordinator;
    UIWindow *_window;
    MainController *_mainController;
    menu *_main;
    NSString *_deviceTokenStr;
    NSString *_xlink_token;
    NSString *_camera_token;
    NSString *_alarmContactId;
    long long _networkStatus;
    Contact *_contact;
    NSString *_monitoredContactId;
    NSString *_currentPushedContactId;
    id <GApplicationDelegate> _gApplicationDelegate;
    long long _lastShowAlarmTimeInterval;
    AVAudioPlayer *_alarmRingPlayer;
    NSString *_sWifi;
}

+ (id)sharedDefault;
+ (struct CGRect)getScreenSize:(_Bool)arg1 isHorizontal:(_Bool)arg2;
+ (id)getAppVersion;
@property(retain, nonatomic) NSString *sWifi; // @synthesize sWifi=_sWifi;
@property(nonatomic) int index_tag; // @synthesize index_tag=_index_tag;
@property(nonatomic) int dwApContactID; // @synthesize dwApContactID=_dwApContactID;
@property(retain, nonatomic) AVAudioPlayer *alarmRingPlayer; // @synthesize alarmRingPlayer=_alarmRingPlayer;
@property(nonatomic) _Bool isNotificationBeClicked; // @synthesize isNotificationBeClicked=_isNotificationBeClicked;
@property(nonatomic) _Bool isShowingDoorBellAlarm; // @synthesize isShowingDoorBellAlarm=_isShowingDoorBellAlarm;
@property(nonatomic) long long lastShowAlarmTimeInterval; // @synthesize lastShowAlarmTimeInterval=_lastShowAlarmTimeInterval;
@property(nonatomic) _Bool isInputtingPwdToMonitor; // @synthesize isInputtingPwdToMonitor=_isInputtingPwdToMonitor;
@property(nonatomic) id <GApplicationDelegate> gApplicationDelegate; // @synthesize gApplicationDelegate=_gApplicationDelegate;
@property(nonatomic) _Bool isGoBack; // @synthesize isGoBack=_isGoBack;
@property(nonatomic) _Bool isDoorBellAlarm; // @synthesize isDoorBellAlarm=_isDoorBellAlarm;
@property(retain, nonatomic) NSString *currentPushedContactId; // @synthesize currentPushedContactId=_currentPushedContactId;
@property(retain, nonatomic) NSString *monitoredContactId; // @synthesize monitoredContactId=_monitoredContactId;
@property(nonatomic) _Bool isMonitoring; // @synthesize isMonitoring=_isMonitoring;
@property(nonatomic) _Bool isBeingInP2PVideo; // @synthesize isBeingInP2PVideo=_isBeingInP2PVideo;
@property(retain, nonatomic) Contact *contact; // @synthesize contact=_contact;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(retain, nonatomic) NSString *alarmContactId; // @synthesize alarmContactId=_alarmContactId;
@property int isfail; // @synthesize isfail=_isfail;
@property int active; // @synthesize active=_active;
@property _Bool isLan; // @synthesize isLan=_isLan;
@property(retain, nonatomic) NSString *camera_token; // @synthesize camera_token=_camera_token;
@property(retain, nonatomic) NSString *xlink_token; // @synthesize xlink_token=_xlink_token;
@property(retain, nonatomic) NSString *deviceTokenStr; // @synthesize deviceTokenStr=_deviceTokenStr;
@property(retain, nonatomic) menu *main; // @synthesize main=_main;
@property(retain, nonatomic) MainController *mainController; // @synthesize mainController=_mainController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) NSString *sn_pass; // @synthesize sn_pass;
@property(retain, nonatomic) NSString *sn_id; // @synthesize sn_id;
- (void).cxx_destruct;
- (void)onCloudDataPoint2Update:(id)arg1 withDataPoints:(id)arg2;
- (void)onLocalDataPoint2Update:(id)arg1 withDataPoints:(id)arg2;
- (void)registerAPNWithAccessToken:(id)arg1 toUserID:(id)arg2;
- (id)hexadecimalString:(id)arg1;
- (void)onNotifyWithFlag:(unsigned char)arg1 withMessageData:(id)arg2 fromID:(int)arg3 messageID:(int)arg4;
- (void)onRecvPipeSyncData:(id)arg1 withPayload:(id)arg2;
- (void)onRecvPipeData:(id)arg1 withPayload:(id)arg2;
- (void)onRecvLocalPipeData:(id)arg1 withPayload:(id)arg2;
- (void)onSendPipeData:(id)arg1 withResult:(int)arg2 withMessageID:(int)arg3;
- (void)onSendLocalPipeData:(id)arg1 withResult:(int)arg2 withMessageID:(int)arg3;
- (void)onDeviceProbe:(id)arg1 withResult:(int)arg2 withMessageID:(int)arg3;
- (void)onSubscription:(id)arg1 withResult:(int)arg2 withMessageID:(int)arg3;
- (void)onDeviceStatusChanged:(id)arg1;
- (void)onConnectDevice:(id)arg1 andResult:(int)arg2 andTaskID:(int)arg3;
- (void)onHandShakeWithDevice:(id)arg1 withResult:(int)arg2;
- (void)onSetDeviceAuthorizeCode:(id)arg1 withResult:(int)arg2 withMessageID:(int)arg3;
- (void)onSetLocalDeviceAuthorizeCode:(id)arg1 withResult:(int)arg2 withMessageID:(int)arg3;
- (void)onSetDeviceAccessKey:(id)arg1 withResult:(unsigned char)arg2 withMessageID:(unsigned short)arg3;
- (void)onGotDeviceByScan:(id)arg1;
- (void)onLogin:(int)arg1;
- (void)onStart;
- (void)saveAlert:(id)arg1;
- (id)applicationDocumentsDirectory;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=__persistentStoreCoordinator;
@property(readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=__managedObjectModel;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=__managedObjectContext;
- (void)applicationWillTerminate:(id)arg1;
- (void)saveContext;
- (void)stopToPlayAlarmRing;
- (id)playAlarmMessageRingWithAlarmType:(int)arg1 isBeBackground:(_Bool)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)reachabilityChanged:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)tapReceivedNotificationHandler:(id)arg1;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)applicationWillResignActive:(id)arg1;
- (void)ack_receiveRemoteMessage:(id)arg1;
- (void)receiveRemoteMessage:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onReceiveDoorbellAlarmMessage:(id)arg1;
- (void)willPresentAlertView:(id)arg1;
- (void)onReceiveAlarmMessage:(id)arg1;
- (id)groupName:(int)arg1;
- (void)onSessionIdError:(id)arg1;
- (void)reset;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)registerPush;
- (void)registerPushForIOS8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

