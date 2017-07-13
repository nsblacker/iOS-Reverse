//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XGJceObjectV2.h"

@class NSString, XGDeviceInfo, XGMutableInfo;

@interface XGTpnsRegisterReq : XGJceObjectV2
{
    unsigned char jcev2_p_6_o_ticketType;
    unsigned char jcev2_p_7_o_deviceType;
    unsigned char jcev2_p_10_o_version;
    BOOL jcev2_p_11_o_keyEncrypted;
    unsigned char jcev2_p_13_o_updateAutoTag;
    unsigned int jcev2_p_0_r_accessId;
    NSString *jcev2_p_1_r_accessKey;
    NSString *jcev2_p_2_r_deviceId;
    NSString *jcev2_p_3_r_appCert;
    NSString *jcev2_p_4_o_account;
    NSString *jcev2_p_5_o_ticket;
    XGDeviceInfo *jcev2_p_8_o_deviceInfo;
    NSString *jcev2_p_9_o_token;
    XGMutableInfo *jcev2_p_12_o_mutableInfo;
    NSString *jcev2_p_14_o_appVersion;
    NSString *jcev2_p_15_o_reserved;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_reserved, setter=setJce_reserved:) NSString *jcev2_p_15_o_reserved; // @synthesize jcev2_p_15_o_reserved;
@property(retain, nonatomic, getter=jce_appVersion, setter=setJce_appVersion:) NSString *jcev2_p_14_o_appVersion; // @synthesize jcev2_p_14_o_appVersion;
@property(nonatomic, getter=jce_updateAutoTag, setter=setJce_updateAutoTag:) unsigned char jcev2_p_13_o_updateAutoTag; // @synthesize jcev2_p_13_o_updateAutoTag;
@property(retain, nonatomic, getter=jce_mutableInfo, setter=setJce_mutableInfo:) XGMutableInfo *jcev2_p_12_o_mutableInfo; // @synthesize jcev2_p_12_o_mutableInfo;
@property(nonatomic, getter=jce_keyEncrypted, setter=setJce_keyEncrypted:) BOOL jcev2_p_11_o_keyEncrypted; // @synthesize jcev2_p_11_o_keyEncrypted;
@property(nonatomic, getter=jce_version, setter=setJce_version:) unsigned char jcev2_p_10_o_version; // @synthesize jcev2_p_10_o_version;
@property(retain, nonatomic, getter=jce_token, setter=setJce_token:) NSString *jcev2_p_9_o_token; // @synthesize jcev2_p_9_o_token;
@property(retain, nonatomic, getter=jce_deviceInfo, setter=setJce_deviceInfo:) XGDeviceInfo *jcev2_p_8_o_deviceInfo; // @synthesize jcev2_p_8_o_deviceInfo;
@property(nonatomic, getter=jce_deviceType, setter=setJce_deviceType:) unsigned char jcev2_p_7_o_deviceType; // @synthesize jcev2_p_7_o_deviceType;
@property(nonatomic, getter=jce_ticketType, setter=setJce_ticketType:) unsigned char jcev2_p_6_o_ticketType; // @synthesize jcev2_p_6_o_ticketType;
@property(retain, nonatomic, getter=jce_ticket, setter=setJce_ticket:) NSString *jcev2_p_5_o_ticket; // @synthesize jcev2_p_5_o_ticket;
@property(retain, nonatomic, getter=jce_account, setter=setJce_account:) NSString *jcev2_p_4_o_account; // @synthesize jcev2_p_4_o_account;
@property(retain, nonatomic, getter=jce_appCert, setter=setJce_appCert:) NSString *jcev2_p_3_r_appCert; // @synthesize jcev2_p_3_r_appCert;
@property(retain, nonatomic, getter=jce_deviceId, setter=setJce_deviceId:) NSString *jcev2_p_2_r_deviceId; // @synthesize jcev2_p_2_r_deviceId;
@property(retain, nonatomic, getter=jce_accessKey, setter=setJce_accessKey:) NSString *jcev2_p_1_r_accessKey; // @synthesize jcev2_p_1_r_accessKey;
@property(nonatomic, getter=jce_accessId, setter=setJce_accessId:) unsigned int jcev2_p_0_r_accessId; // @synthesize jcev2_p_0_r_accessId;
- (void)dealloc;
- (id)init;

@end

