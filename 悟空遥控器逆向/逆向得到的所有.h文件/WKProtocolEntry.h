//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, WKBaseProtocol, WKTraverseProtocol;

@interface WKProtocolEntry : NSObject
{
    _Bool _killProgress;
    WKBaseProtocol *_currentProCtrl;
    WKBaseProtocol *_tempProCtrl;
    WKTraverseProtocol *_traverseProtocol;
    NSOperationQueue *operationQueue;
}

+ (_Bool)isXiaoMiProtocol:(id)arg1;
+ (_Bool)isTCLProtocol:(id)arg1;
+ (_Bool)isKonKaProtocol:(id)arg1;
+ (_Bool)isHiMediaProtocol:(id)arg1;
+ (_Bool)isLeShiProtocol:(id)arg1;
+ (_Bool)isCloudAli:(id)arg1;
+ (_Bool)isHisense:(id)arg1;
+ (_Bool)isBaiduDevice:(id)arg1;
+ (_Bool)isChangHongDevice:(id)arg1;
+ (_Bool)isHonorDevice:(id)arg1;
+ (_Bool)isIQiYiDevice:(id)arg1;
+ (_Bool)isKuKaiDevice:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue;
- (void).cxx_destruct;
- (void)showOpenServerAppSuccess:(_Bool)arg1;
- (void)autoInstallServerAppSuccess:(CDUnknownBlockType)arg1 failture:(CDUnknownBlockType)arg2;
- (void)tryOpenTVService;
- (void)autoInstallServerAppFailed:(_Bool)arg1;
- (void)autoInstallServerApp:(id)arg1;
- (void)autoInstallServerApp:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (void)openServerApp:(id)arg1 withResultBlock:(CDUnknownBlockType)arg2;
- (_Bool)canAutoInstallSever;
- (_Bool)isDefaultProtocol;
- (_Bool)shafaLaunch;
- (void)killProcessShafaLaunch;
- (void)sendPointerDown:(unsigned long long)arg1;
- (void)sendPointerMoveWithX:(float)arg1 withY:(float)arg2 withMill:(int)arg3;
- (void)sendLongKey:(int)arg1 withAction:(int)arg2;
- (void)statisticalClickForUmeng:(long long)arg1;
- (void)disposeNumerKeyboard:(long long)arg1;
- (void)sendKey:(int)arg1;
- (void)tryAllProtocolForControlDevices:(id)arg1;
- (id)getCurrentProtocol;
- (void)reConnectDeviceWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)changeToDefaultProtocol:(id)arg1;
- (void)changeControImplWithObj:(id)arg1 withDevice:(id)arg2;
- (void)changeDevFromSev:(id)arg1;
- (_Bool)changeDeviceProtocolByServer:(id)arg1;
- (_Bool)changeDev:(id)arg1;
- (void)onChangeDevice:(id)arg1;
- (void)onTraverseProtocol:(id)arg1;
- (void)dealloc;
- (id)init;

@end

