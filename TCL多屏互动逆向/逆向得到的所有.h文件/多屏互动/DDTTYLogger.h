//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DDAbstractLogger.h"

#import "DDLogger.h"

@class NSDateFormatter;

@interface DDTTYLogger : DDAbstractLogger <DDLogger>
{
    BOOL isaTTY;
    NSDateFormatter *dateFormatter;
    char *app;
    char *pid;
    unsigned long appLen;
    unsigned long pidLen;
}

+ (id)sharedInstance;
+ (void)initialize;
- (id)loggerName;
- (void)logMessage:(id)arg1;
- (id)init;

@end

