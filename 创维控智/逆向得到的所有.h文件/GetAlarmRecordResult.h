//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GetAlarmRecordResult : NSObject
{
    int _error_code;
    NSArray *_alarmRecord;
}

@property(retain, nonatomic) NSArray *alarmRecord; // @synthesize alarmRecord=_alarmRecord;
@property(nonatomic) int error_code; // @synthesize error_code=_error_code;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

