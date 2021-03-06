//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XGAsyncSocket, XGTpnsUnregisterDelegate;

@interface XGTpnsUnregister : NSObject
{
    XGAsyncSocket *_socket;
    CDUnknownBlockType _unRegistersuccessCallback;
    CDUnknownBlockType _unRegisterErrorCallback;
    XGTpnsUnregisterDelegate *_delegate;
}

+ (void)load;
@property(retain, nonatomic) XGTpnsUnregisterDelegate *delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType unRegisterErrorCallback; // @synthesize unRegisterErrorCallback=_unRegisterErrorCallback;
@property(copy, nonatomic) CDUnknownBlockType unRegistersuccessCallback; // @synthesize unRegistersuccessCallback=_unRegistersuccessCallback;
@property(retain, nonatomic) XGAsyncSocket *socket; // @synthesize socket=_socket;
- (void)dealloc;
- (void)send:(id)arg1;
- (_Bool)connect;
- (id)initWithSuccessCallback:(CDUnknownBlockType)arg1 errorCallback:(CDUnknownBlockType)arg2;

@end

