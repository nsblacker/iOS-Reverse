//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SpeechUserImp;

@interface SpeechUser : NSObject
{
    SpeechUserImp *_speechUserImp;
}

- (BOOL)logout;
- (int)getLoginSate;
- (BOOL)login:(id)arg1 password:(id)arg2 params:(id)arg3;
- (id)init;

@end

