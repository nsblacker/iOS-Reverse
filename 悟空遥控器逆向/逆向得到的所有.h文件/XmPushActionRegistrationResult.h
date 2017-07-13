//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, Target, XmPushActionRegistration;

@interface XmPushActionRegistrationResult : NSObject <NSCoding>
{
    NSString *__debug;
    Target *__target;
    NSString *__id;
    NSString *__appId;
    XmPushActionRegistration *__request;
    long long __errorCode;
    NSString *__reason;
    NSString *__regId;
    NSString *__regSecret;
    NSString *__packageName;
    _Bool __debug_isset;
    _Bool __target_isset;
    _Bool __id_isset;
    _Bool __appId_isset;
    _Bool __request_isset;
    _Bool __errorCode_isset;
    _Bool __reason_isset;
    _Bool __regId_isset;
    _Bool __regSecret_isset;
    _Bool __packageName_isset;
}

- (id)description;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPackageName;
- (_Bool)packageNameIsSet;
@property(retain, nonatomic, getter=packageName, setter=setPackageName:) NSString *packageName;
- (void)unsetRegSecret;
- (_Bool)regSecretIsSet;
@property(retain, nonatomic, getter=regSecret, setter=setRegSecret:) NSString *regSecret;
- (void)unsetRegId;
- (_Bool)regIdIsSet;
@property(retain, nonatomic, getter=regId, setter=setRegId:) NSString *regId;
- (void)unsetReason;
- (_Bool)reasonIsSet;
@property(retain, nonatomic, getter=reason, setter=setReason:) NSString *reason;
- (void)unsetErrorCode;
- (_Bool)errorCodeIsSet;
@property(nonatomic, getter=errorCode, setter=setErrorCode:) long long errorCode;
- (void)unsetRequest;
- (_Bool)requestIsSet;
@property(retain, nonatomic, getter=request, setter=setRequest:) XmPushActionRegistration *request;
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
- (id)initWithDebug:(id)arg1 target:(id)arg2 id:(id)arg3 appId:(id)arg4 request:(id)arg5 errorCode:(long long)arg6 reason:(id)arg7 regId:(id)arg8 regSecret:(id)arg9 packageName:(id)arg10;

@end

