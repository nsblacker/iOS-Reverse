//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface XGJcePair : NSObject
{
    id _key;
    id _value;
}

+ (id)pairWithValue:(id)arg1 forKey:(id)arg2;
+ (id)pairFromExtStr:(id)arg1;
+ (id)analyzeExtStr:(id)arg1;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

