//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "VLCMediaThumbnailerDelegate.h"

@class MLFile;

@interface ThumbnailOperation : NSOperation <VLCMediaThumbnailerDelegate>
{
    MLFile *_file;
}

@property(retain) MLFile *file; // @synthesize file=_file;
- (void)mediaThumbnailerDidTimeOut:(id)arg1;
- (void)mediaThumbnailer:(id)arg1 didFinishThumbnail:(struct CGImage *)arg2;
- (void)endThumbnailing;
- (void)main;
- (void)fetchThumbnail;
- (void)dealloc;
- (id)initWithFile:(id)arg1;

@end

