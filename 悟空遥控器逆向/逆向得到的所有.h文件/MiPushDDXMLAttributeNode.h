//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MiPushDDXMLNode.h"

@interface MiPushDDXMLAttributeNode : MiPushDDXMLNode
{
}

+ (id)nodeWithPrimitive:(struct _miPushXmlKind *)arg1 owner:(id)arg2;
+ (id)nodeWithAttrPrimitive:(struct _xmlAttr *)arg1 owner:(id)arg2;
- (id)URI;
- (void)setURI:(id)arg1;
- (struct _miPushXmlStd *)_XPathPreProcess:(id)arg1;
- (void)detach;
- (id)nextNode;
- (id)previousNode;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)initWithPrimitive:(struct _miPushXmlKind *)arg1 owner:(id)arg2;
- (id)initWithAttrPrimitive:(struct _xmlAttr *)arg1 owner:(id)arg2;

@end

