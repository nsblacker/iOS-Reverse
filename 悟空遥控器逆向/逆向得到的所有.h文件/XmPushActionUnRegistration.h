//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, Target;

@interface XmPushActionUnRegistration : NSObject <NSCoding>
{
    NSString *__debug;
    Target *__target;
    NSString *__id;
    NSString *__appId;
    NSString *__regId;
    NSString *__appVersion;
    NSString *__packageName;
    NSString *__token;
    NSString *__deviceId;
    NSString *__aliasName;
    _Bool __debug_isset;
    _Bool __target_isset;
    _Bool __id_isset;
    _Bool __appId_isset;
    _Bool __regId_isset;
    _Bool __appVersion_isset;
    _Bool __packageName_isset;
    _Bool __token_isset;
    _Bool __deviceId_isset;
    _Bool __aliasName_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetAliasName;
- (_Bool)aliasNameIsSet;
@property(retain, nonatomic, getter=aliasName, setter=setAliasName:) NSString *aliasName;
- (void)unsetDeviceId;
- (_Bool)deviceIdIsSet;
@property(retain, nonatomic, getter=deviceId, setter=setDeviceId:) NSString *deviceId;
- (void)unsetToken;
- (_Bool)tokenIsSet;
@property(retain, nonatomic, getter=token, setter=setToken:) NSString *token;
- (void)unsetPackageName;
- (_Bool)packageNameIsSet;
@property(retain, nonatomic, getter=packageName, setter=setPackageName:) NSString *packageName;
- (void)unsetAppVersion;
- (_Bool)appVersionIsSet;
@property(retain, nonatomic, getter=appVersion, setter=setAppVersion:) NSString *appVersion;
- (void)unsetRegId;
- (_Bool)regIdIsSet;
@property(retain, nonatomic, getter=regId, setter=setRegId:) NSString *regId;
- (void)unsetAppId;
- (_Bool)appIdIsSet;
@property(retain, nonatomic, getter=appId, setter=setAppId:) NSString *appId;
- (void)unsetId;
- (_Bool)idIsSet;
@property(retain, nonatomic, getter=id, setter=setId:) NSString *id;
- (void)unsetTarget;
- (_Bool)targetIsSet;
@property(retain, nonatomic, getter=target, setter=setTarget:) Target *target;
- (void)unsetDebug;
- (_Bool)debugIsSet;
@property(retain, nonatomic, getter=debug, setter=setDebug:) NSString *debug;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDebug:(id)arg1 target:(id)arg2 id:(id)arg3 appId:(id)arg4 regId:(id)arg5 appVersion:(id)arg6 packageName:(id)arg7 token:(id)arg8 deviceId:(id)arg9 aliasName:(id)arg10;

@end

