//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray, NSMutableData, UIImageView;

@interface AnimatedGif : NSObject
{
    NSData *GIF_pointer;
    NSMutableData *GIF_buffer;
    NSMutableData *GIF_screen;
    NSMutableData *GIF_global;
    NSMutableData *GIF_frameHeader;
    NSMutableArray *GIF_delays;
    NSMutableArray *GIF_framesData;
    NSMutableArray *imageQueue;
    _Bool busyDecoding;
    int GIF_sorted;
    int GIF_colorS;
    int GIF_colorC;
    int GIF_colorF;
    int animatedGifDelay;
    int dataPointer;
    UIImageView *imageView;
}

+ (id)getAnimationForGifAtUrl:(id)arg1;
+ (id)sharedInstance;
@property _Bool busyDecoding; // @synthesize busyDecoding;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
- (void)dealloc;
- (_Bool)GIFSkipBytes:(int)arg1;
- (_Bool)GIFGetBytes:(int)arg1;
- (void)GIFReadDescriptor;
- (void)GIFReadExtensions;
- (id)getAnimation;
- (id)getFrameAsImageAtIndex:(int)arg1;
- (id)getFrameAsDataAtIndex:(int)arg1;
- (void)decodeGIF:(id)arg1;
- (id)init;
- (void)addToQueue:(id)arg1;
- (void)asynchronousLoading;

@end

