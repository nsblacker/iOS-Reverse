//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MiPushDDXMLNode.h"

@interface MiPushDDXMLDocument : MiPushDDXMLNode
{
}

+ (id)nodeWithPrimitive:(struct _miPushXmlKind *)arg1 owner:(id)arg2;
+ (id)nodeWithDocPrimitive:(struct _xmlDoc *)arg1 owner:(id)arg2;
- (id)XMLDataWithOptions:(unsigned long long)arg1;
- (id)XMLData;
- (id)rootElement;
- (id)initWithData:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithXMLString:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithPrimitive:(struct _miPushXmlKind *)arg1 owner:(id)arg2;
- (id)initWithDocPrimitive:(struct _xmlDoc *)arg1 owner:(id)arg2;

@end

