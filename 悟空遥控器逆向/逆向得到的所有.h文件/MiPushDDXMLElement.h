//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MiPushDDXMLNode.h"

@interface MiPushDDXMLElement : MiPushDDXMLNode
{
}

+ (id)elementWithName:(id)arg1 xmlns:(id)arg2;
+ (id)nodeWithPrimitive:(struct _miPushXmlKind *)arg1 owner:(id)arg2;
+ (id)nodeWithElementPrimitive:(struct _xmlNode *)arg1 owner:(id)arg2;
- (id)namespaceStringValueForPrefix:(id)arg1 withDefaultValue:(id)arg2;
- (id)namespaceStringValueForPrefix:(id)arg1;
- (void)addNamespaceWithPrefix:(id)arg1 stringValue:(id)arg2;
- (id)attributesAsDictionary;
- (id)attributeNumberBoolValueForName:(id)arg1 withDefaultValue:(_Bool)arg2;
- (id)attributeNumberIntValueForName:(id)arg1 withDefaultValue:(int)arg2;
- (id)attributeStringValueForName:(id)arg1 withDefaultValue:(id)arg2;
- (double)attributeDoubleValueForName:(id)arg1 withDefaultValue:(double)arg2;
- (float)attributeFloatValueForName:(id)arg1 withDefaultValue:(float)arg2;
- (_Bool)attributeBoolValueForName:(id)arg1 withDefaultValue:(_Bool)arg2;
- (int)attributeIntValueForName:(id)arg1 withDefaultValue:(int)arg2;
- (id)attributeNumberBoolValueForName:(id)arg1;
- (id)attributeNumberIntValueForName:(id)arg1;
- (id)attributeStringValueForName:(id)arg1;
- (double)attributeDoubleValueForName:(id)arg1;
- (float)attributeFloatValueForName:(id)arg1;
- (_Bool)attributeBoolValueForName:(id)arg1;
- (int)attributeIntValueForName:(id)arg1;
- (void)addAttributeWithName:(id)arg1 stringValue:(id)arg2;
- (id)compactXMLString;
- (id)prettyXMLString;
- (void)setXmlns:(id)arg1;
- (id)xmlns;
- (id)elementForName:(id)arg1 xmlns:(id)arg2;
- (id)elementForName:(id)arg1;
- (id)initWithName:(id)arg1 xmlns:(id)arg2;
- (void)setChildren:(id)arg1;
- (void)removeChildAtIndex:(unsigned long long)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (id)resolvePrefixForNamespaceURI:(id)arg1;
- (id)_recursiveResolvePrefixForURI:(id)arg1 atNode:(struct _xmlNode *)arg2;
- (id)resolveNamespaceForName:(id)arg1;
- (id)_recursiveResolveNamespaceForPrefix:(id)arg1 atNode:(struct _xmlNode *)arg2;
- (void)setNamespaces:(id)arg1;
- (id)namespaceForPrefix:(id)arg1;
- (id)namespaces;
- (void)removeNamespaceForPrefix:(id)arg1;
- (void)addNamespace:(id)arg1;
- (void)_addNamespace:(id)arg1;
- (void)_removeNamespaceForPrefix:(id)arg1;
- (void)_removeAllNamespaces;
- (void)_removeNamespace:(struct _xmlNs *)arg1;
- (void)setAttributes:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)attributes;
- (void)removeAttributeForName:(id)arg1;
- (void)addAttribute:(id)arg1;
- (void)_removeAttributeForName:(id)arg1;
- (void)_removeAllAttributes;
- (void)_removeAttribute:(struct _xmlAttr *)arg1;
- (_Bool)_hasAttributeWithName:(id)arg1;
- (id)_elementsForName:(id)arg1 uri:(id)arg2;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)elementsForName:(id)arg1;
- (id)initWithXMLString:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;
- (id)initWithName:(id)arg1 URI:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithPrimitive:(struct _miPushXmlKind *)arg1 owner:(id)arg2;
- (id)initWithElementPrimitive:(struct _xmlNode *)arg1 owner:(id)arg2;

@end

