//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEUTVReplayService, NSString;

@protocol NEUTVReplayServiceDelegate <NSObject>
- (void)neuTVReplayService:(NEUTVReplayService *)arg1 errorOccurrdWithErrCode:(int)arg2;

@optional
- (void)neuTVReplayService:(NEUTVReplayService *)arg1 didStartReplayWithURLString:(NSString *)arg2;
@end

