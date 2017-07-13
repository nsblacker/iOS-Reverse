//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer, VLCMedia;

@interface VLCMediaThumbnailer : NSObject
{
    id <VLCMediaThumbnailerDelegate> _delegate;
    VLCMedia *_media;
    void *_mp;
    struct CGImage *_thumbnail;
    void *_data;
    NSTimer *_parsingTimeoutTimer;
    NSTimer *_thumbnailingTimeoutTimer;
    float _thumbnailHeight;
    float _thumbnailWidth;
    float _effectiveThumbnailHeight;
    float _effectiveThumbnailWidth;
    int _numberOfReceivedFrames;
    BOOL _shouldRejectFrames;
}

+ (id)thumbnailerWithMedia:(id)arg1 andDelegate:(id)arg2;
@property(readonly) BOOL shouldRejectFrames; // @synthesize shouldRejectFrames=_shouldRejectFrames;
@property float thumbnailHeight; // @synthesize thumbnailHeight=_thumbnailHeight;
@property float thumbnailWidth; // @synthesize thumbnailWidth=_thumbnailWidth;
@property(readonly) void *dataPointer; // @synthesize dataPointer=_data;
@property struct CGImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property id <VLCMediaThumbnailerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) VLCMedia *media; // @synthesize media=_media;
- (void)mediaThumbnailingTimedOut;
- (void)notifyDelegate;
- (void)endThumbnailing;
- (void)stopAsync;
- (void)didFetchThumbnail;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mediaParsingTimedOut;
- (void)startFetchingThumbnail;
- (void)fetchThumbnail;
- (void)dealloc;

@end

