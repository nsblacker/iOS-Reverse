//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSString;

@interface Setting : NSManagedObject
{
    NSString *devicePort;
    NSString *scanPort;
    long long deviceTarget;
    NSString *deviceModel;
    NSString *deviceProduct;
    NSString *deviceBuildHost;
    long long serverVersion;
}

@property(nonatomic) long long serverVersion; // @synthesize serverVersion;
@property(retain, nonatomic) NSString *deviceBuildHost; // @synthesize deviceBuildHost;
@property(retain, nonatomic) NSString *deviceProduct; // @synthesize deviceProduct;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel;
@property(nonatomic) long long deviceTarget; // @synthesize deviceTarget;
@property(retain, nonatomic) NSString *scanPort; // @synthesize scanPort;
@property(retain, nonatomic) NSString *devicePort; // @synthesize devicePort;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSDate *deviceDate; // @dynamic deviceDate;
@property(retain, nonatomic) NSString *deviceIP; // @dynamic deviceIP;
@property(retain, nonatomic) NSString *deviceName; // @dynamic deviceName;
@property(retain, nonatomic) NSString *deviceURL; // @dynamic deviceURL;

@end

