//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface DeviceObject : NSObject
{
    NSString *_product_id;
    NSString *_mac;
    NSString *_name;
    NSNumber *_access_key;
    NSString *_mcu_mod;
    NSString *_mcu_version;
    NSString *_firmware_mod;
    NSString *_firmware_version;
}

@property(retain, nonatomic) NSString *firmware_version; // @synthesize firmware_version=_firmware_version;
@property(retain, nonatomic) NSString *firmware_mod; // @synthesize firmware_mod=_firmware_mod;
@property(retain, nonatomic) NSString *mcu_version; // @synthesize mcu_version=_mcu_version;
@property(retain, nonatomic) NSString *mcu_mod; // @synthesize mcu_mod=_mcu_mod;
@property(retain, nonatomic) NSNumber *access_key; // @synthesize access_key=_access_key;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *mac; // @synthesize mac=_mac;
@property(retain, nonatomic) NSString *product_id; // @synthesize product_id=_product_id;
- (void).cxx_destruct;
- (id)initWithProductID:(id)arg1 withMac:(id)arg2 withAccessKey:(id)arg3;

@end

