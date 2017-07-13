//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLURLConnectionDelegate.h"

@class MLURLConnection, NSArray, NSDictionary;

@interface MLTVShowEpisodesInfoGrabber : NSObject <MLURLConnectionDelegate>
{
    MLURLConnection *_connection;
    NSDictionary *_results;
    NSArray *_episodesResults;
    id <MLTVShowEpisodesInfoGrabberDelegate> _delegate;
    CDUnknownBlockType _block;
    id _userData;
}

@property(retain) id userData; // @synthesize userData=_userData;
@property(retain) NSDictionary *results; // @synthesize results=_results;
@property(retain) NSArray *episodesResults; // @synthesize episodesResults=_episodesResults;
@property id <MLTVShowEpisodesInfoGrabberDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveData:(id)arg1;
- (void)lookUpForShowID:(id)arg1;
- (void)urlConnection:(id)arg1 didFinishWithError:(id)arg2;
- (void)dealloc;

@end

