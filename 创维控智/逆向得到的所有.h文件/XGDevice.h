//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class XGAsyncSocket;

@interface XGDevice : NSObject
{
    XGAsyncSocket *socket;
}

+ (id)getInstance;
- (id)getDeviceTokenErrorInfo:(id)arg1;
- (id)getLocalDeviceToken;
- (id)getDeviceToken:(id)arg1;

@end

