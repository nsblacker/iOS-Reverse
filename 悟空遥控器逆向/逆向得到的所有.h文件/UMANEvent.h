//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMANBaseEvent.h"

@class NSMutableDictionary, NSString;

@interface UMANEvent : UMANBaseEvent
{
    NSString *_event_id;
    NSString *_label;
    long long _acc;
    long long _du;
    NSMutableDictionary *_values;
}

@property(nonatomic) long long du; // @synthesize du=_du;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
@property(nonatomic) long long acc; // @synthesize acc=_acc;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *event_id; // @synthesize event_id=_event_id;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)outputUMLog;
- (id)attributes;
- (void)updateDu;
- (id)init;
- (void)dealloc;

@end

