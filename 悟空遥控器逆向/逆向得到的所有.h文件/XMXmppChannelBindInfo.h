//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface XMXmppChannelBindInfo : NSObject
{
    NSString *mStrClientAttr;
    NSString *mStrCloudAttr;
    NSString *mStrPFAttr;
    NSMutableDictionary *_dictBasicInfo;
    NSMutableDictionary *_dictAuthInfo;
    NSMutableDictionary *_dictClientAttr;
    NSMutableDictionary *_dictCloudAttr;
    NSMutableDictionary *_dictPFInfo;
}

@property(retain, nonatomic) NSMutableDictionary *dictPFInfo; // @synthesize dictPFInfo=_dictPFInfo;
@property(retain, nonatomic) NSMutableDictionary *dictCloudAttr; // @synthesize dictCloudAttr=_dictCloudAttr;
@property(retain, nonatomic) NSMutableDictionary *dictClientAttr; // @synthesize dictClientAttr=_dictClientAttr;
@property(retain, nonatomic) NSMutableDictionary *dictAuthInfo; // @synthesize dictAuthInfo=_dictAuthInfo;
@property(retain, nonatomic) NSMutableDictionary *dictBasicInfo; // @synthesize dictBasicInfo=_dictBasicInfo;
- (void).cxx_destruct;
- (id)genSignatureUsingPASSMethod;
- (id)genSignature;
- (id)genBindNode;
- (void)dealloc;
- (id)initByDefaultInfo;

@end

