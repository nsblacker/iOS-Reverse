//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PPMediaDevice;

@protocol TLMediaRenderDelegate <NSObject>

@optional
- (void)OnPauseResult:(PPMediaDevice *)arg1;
- (void)OnStopResult:(PPMediaDevice *)arg1;
- (void)OnPlayResult:(PPMediaDevice *)arg1;
- (void)speakerUpdated:(PPMediaDevice *)arg1;
@end

