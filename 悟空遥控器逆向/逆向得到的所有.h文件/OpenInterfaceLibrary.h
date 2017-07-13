//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface OpenInterfaceLibrary : NSObject
{
    NSMutableDictionary *_interfaceCache;
    NSMutableDictionary *_pluginCache;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *pluginCache; // @synthesize pluginCache=_pluginCache;
@property(retain, nonatomic) NSMutableDictionary *interfaceCache; // @synthesize interfaceCache=_interfaceCache;
- (void).cxx_destruct;
- (Class)getMetaClassFromInterface:(id)arg1;
- (Class)getMetaClassFromPluginName:(id)arg1;
- (_Bool)initPlugin:(Class)arg1;
- (id)getInterfaceRaw:(id)arg1 errorInfo:(id *)arg2;
- (_Bool)callPluginEntry:(Class)arg1;
- (_Bool)checkDependency:(Class)arg1 loadDependencyOption:(long long)arg2 errorInfo:(id *)arg3;
- (_Bool)loadPlugin:(Class)arg1 loadDependency:(_Bool)arg2 erroInfo:(id *)arg3;
- (id)translateProtocolNameToPluginName:(id)arg1;
- (id)translateProtocolName:(id)arg1;
- (id)getInterface:(id)arg1;
- (id)init;

@end

