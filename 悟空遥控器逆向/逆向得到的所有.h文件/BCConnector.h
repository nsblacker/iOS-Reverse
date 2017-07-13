//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCEAppClient, BCHandler, NSMutableDictionary;

@interface BCConnector : NSObject
{
    struct dispatch_queue_s *dispatchQueue;
    BCHandler *defaultEventHandler;
    BCEAppClient *client;
    NSMutableDictionary *eventProcessorRegistry;
    NSMutableDictionary *eventMap;
    BCConnector *_parentConnector;
}

+ (void)reset;
+ (void)registerGlobalDefaultEventHandler:(id)arg1;
+ (void)registerGlobalEventHandler:(id)arg1;
+ (id)getWQConnectorByAppKey:(id)arg1;
+ (id)registerWQConnector:(id)arg1 client:(id)arg2 withParentConnector:(id)arg3;
+ (id)getClientConnector;
+ (id)getGlobalConnector;
+ (void)setClientAppKey:(id)arg1 appSecret:(id)arg2 appCallback:(id)arg3;
+ (id)getNextSeq;
@property __weak BCConnector *parentConnector; // @synthesize parentConnector=_parentConnector;
@property(retain) NSMutableDictionary *eventMap; // @synthesize eventMap;
@property(retain) NSMutableDictionary *eventProcessorRegistry; // @synthesize eventProcessorRegistry;
@property(retain, nonatomic) BCEAppClient *client; // @synthesize client;
- (void).cxx_destruct;
- (void)addEventResultLog:(id)arg1 params:(id)arg2 result:(id)arg3;
- (_Bool)canHandleEventDirectly:(id)arg1 canOpenUI:(_Bool)arg2;
- (id)getEventHandler:(id)arg1 canOpenUI:(_Bool)arg2;
- (int)sendEventRequest:(id)arg1 path:(id)arg2 params:(id)arg3 eventCallback:(id)arg4 extraParams:(id)arg5;
- (int)sendEventRequest:(id)arg1 path:(id)arg2 params:(id)arg3 callBackBlock:(CDUnknownBlockType)arg4 extraParams:(id)arg5;
- (int)sendEventRequestCmd:(id)arg1;
- (void)mapEventFrom:(id)arg1 toEvent:(id)arg2;
- (id)getAppKey;
- (_Bool)canHandleEvent:(id)arg1 canOpenUI:(_Bool)arg2;
- (id)getRegisteredEvents;
- (void)unregisterAll;
- (void)unregisterEventHandler:(id)arg1;
- (void)registerDefaultEventHandler:(id)arg1;
- (void)registerEventHandler:(id)arg1;
- (void)dealloc;
- (id)initWithParentConnector:(id)arg1 andClient:(id)arg2;

@end

