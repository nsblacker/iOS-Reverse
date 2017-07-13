//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WKMyTvAppInfoModel : NSObject
{
    _Bool _isSystemApp;
    int _size;
    NSString *_type;
    NSString *_label;
    double _labelLength;
    long long _sort;
    unsigned long long _version_code;
    NSString *_version;
    NSString *_dir;
    NSString *_pkg;
    NSString *_appSize;
    long long _rank;
}

+ (_Bool)isSystemApp:(id)arg1;
+ (id)appSize:(float)arg1;
@property(nonatomic) _Bool isSystemApp; // @synthesize isSystemApp=_isSystemApp;
@property(nonatomic) long long rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *appSize; // @synthesize appSize=_appSize;
@property(nonatomic) int size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *pkg; // @synthesize pkg=_pkg;
@property(retain, nonatomic) NSString *dir; // @synthesize dir=_dir;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(nonatomic) unsigned long long version_code; // @synthesize version_code=_version_code;
@property(nonatomic) long long sort; // @synthesize sort=_sort;
@property(nonatomic) double labelLength; // @synthesize labelLength=_labelLength;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)sendUninstallAppMsg;
- (void)sendOpenAppMsg;
- (id)init;

@end

