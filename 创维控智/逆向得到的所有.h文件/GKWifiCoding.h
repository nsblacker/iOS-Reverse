//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKWifiCoding : NSObject
{
}

+ (int)HexDigitFromChar:(BOOL)arg1;
+ (BOOL)HexCharFromDigit:(int)arg1;
+ (id)Hex2Byte2:(id)arg1;
+ (id)Hex2Byte:(id)arg1;
+ (id)Byte2Hex:(id)arg1;
+ (id)RemoveTheSpaces:(id)arg1 leng:(int)arg2;
+ (int)getRandomHex;
+ (id)DecipheringRxData:(id)arg1;
+ (id)EncryptionByteData:(id)arg1;
+ (id)build57HStyShePinIP:(id)arg1 HostSnPW:(id)arg2 subSn:(id)arg3 subDeviceType:(int)arg4 subStyNum:(int)arg5 LAM:(_Bool)arg6;
+ (id)build56HGetSubSNIP:(id)arg1 HostSnPW:(id)arg2 subDeviceType:(int)arg3 LAM:(_Bool)arg4;
+ (id)build33HGetHostIP:(id)arg1 HostSnPW:(id)arg2 LAM:(_Bool)arg3;
+ (id)build55HALLSubHost:(id)arg1 HostSnPw:(id)arg2 subType:(_Bool)arg3 LAM:(_Bool)arg4;
+ (id)build53HChannelHost:(id)arg1 HostSnPw:(id)arg2 subSn:(id)arg3 subType:(int)arg4 ChannelNum:(int *)arg5 time:(int)arg6 LAM:(_Bool)arg7;
+ (id)build2FHStudySendHost:(id)arg1 HostSnPw:(id)arg2 type:(int)arg3 num:(int)arg4 studyData:(id)arg5 LAM:(_Bool)arg6;
+ (id)build2EHResetHost:(id)arg1 HostSnPw:(id)arg2 type:(int)arg3 num:(int)arg4 LAM:(_Bool)arg5;
+ (id)build2DHResetHost:(id)arg1 HostSnPw:(id)arg2 LAM:(_Bool)arg3;
+ (id)build2CHResetHost:(id)arg1 HostSnPw:(id)arg2 LAM:(_Bool)arg3;
+ (id)build27HSubDevice_lock:(id)arg1 HostSnPw:(id)arg2 subSn:(id)arg3 subType:(int)arg4 deviceCode:(int)arg5 airCode:(id)arg6 LAM:(_Bool)arg7;
+ (id)build27HSubDevice:(id)arg1 HostSnPw:(id)arg2 subSn:(id)arg3 subType:(int)arg4 deviceCode:(int)arg5 airCode:(id)arg6 LAM:(_Bool)arg7;
+ (id)build26HInquireSubDevice:(id)arg1 HostSnPw:(id)arg2 LAM:(_Bool)arg3;
+ (id)build25HModificationSubDevice:(id)arg1 HostSnPw:(id)arg2 subNum:(int)arg3 subSn:(id)arg4 subName:(id)arg5 subType:(int)arg6 subState:(int)arg7 LAM:(_Bool)arg8;
+ (id)build24HDeleteSubDevice:(id)arg1 HostSnPw:(id)arg2 subNum:(int)arg3 subSn:(id)arg4 subType:(int)arg5 LAM:(_Bool)arg6;
+ (id)build23HAddSubDevice:(id)arg1 HostSnPw:(id)arg2 subSn:(id)arg3 subName:(id)arg4 subType:(int)arg5 subState:(int)arg6 LAM:(_Bool)arg7;
+ (id)build22HGetHostMessageforHost:(id)arg1 hostPW:(id)arg2 LAM:(_Bool)arg3;
+ (id)buildResetPassword:(id)arg1;
+ (id)buildUDPforHost:(id)arg1 hostPW:(id)arg2;
+ (id)build2FHStudySN:(id)arg1 snPassword:(id)arg2 studyData:(id)arg3 studyNum:(int)arg4 ordLeng:(int)arg5 isLan:(_Bool)arg6;
+ (id)build20HSettingHostInfoSN:(id)arg1 snPassword:(id)arg2 newSnPassword:(id)arg3 Name:(id)arg4 RouteSSID:(id)arg5 RoutPassword:(id)arg6 SecurityType:(int)arg7 isLan:(_Bool)arg8;
+ (char *)getHeadbyLAN:(_Bool)arg1;
+ (char *)getHead;

@end

