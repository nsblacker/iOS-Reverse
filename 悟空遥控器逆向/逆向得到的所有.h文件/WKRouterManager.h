//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WKRouterManager : NSObject
{
}

+ (_Bool)routeURL:(id)arg1 withParameters:(id)arg2;
+ (_Bool)routeURL:(id)arg1;
+ (_Bool)canRouteURL:(id)arg1;
+ (void)addUniversalLinkRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)addRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)presentNewViewController:(id)arg1;
+ (void)pushNewViewController:(id)arg1;
+ (void)setupRouters;

@end

