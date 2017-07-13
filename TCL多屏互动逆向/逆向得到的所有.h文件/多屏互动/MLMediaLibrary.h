//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MLMovieInfoGrabberDelegate.h"
#import "MLTVShowEpisodesInfoGrabberDelegate.h"
#import "MLTVShowInfoGrabberDelegate.h"

@class NSManagedObjectContext, NSManagedObjectModel;

@interface MLMediaLibrary : NSObject <MLMovieInfoGrabberDelegate, MLTVShowEpisodesInfoGrabberDelegate, MLTVShowInfoGrabberDelegate>
{
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectModel *_managedObjectModel;
    BOOL _allowNetworkAccess;
}

+ (id)sharedMediaLibrary;
- (void)libraryDidAppear;
- (void)libraryDidDisappear;
- (void)applicationWillStart;
- (void)applicationWillExit;
- (void)updateDatabase;
- (void)tvShowInfoGrabber:(id)arg1 didFetchUpdates:(id)arg2;
- (void)addFilePaths:(id)arg1;
- (void)addFilePath:(id)arg1;
- (void)fetchMetaDataForFile:(id)arg1;
- (void)movieInfoGrabberDidFinishGrabbing:(id)arg1;
- (void)movieInfoGrabber:(id)arg1 didFailWithError:(id)arg2;
- (void)addTVShowEpisodeWithInfo:(id)arg1 andFile:(id)arg2;
- (void)fetchMetaDataForShow:(id)arg1;
- (void)tvShowInfoGrabberDidFetchServerTime:(id)arg1;
- (void)tvShowInfoGrabber:(id)arg1 didFailWithError:(id)arg2;
- (void)tvShowInfoGrabberDidFinishGrabbing:(id)arg1;
- (void)tvShowEpisodesInfoGrabber:(id)arg1 didFailWithError:(id)arg2;
- (void)save;
- (void)tvShowEpisodesInfoGrabberDidFinishGrabbing:(id)arg1;
- (void)addNewLabelWithName:(id)arg1;
- (void)noMetaDataInRemoteDBForShow:(id)arg1;
- (void)noMetaDataInRemoteDBForFile:(id)arg1;
- (void)errorWhenFetchingMetaDataForShow:(id)arg1;
- (void)errorWhenFetchingMetaDataForFile:(id)arg1;
- (void)computeThumbnailForFile:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)savePendingChanges;
- (id)managedObjectContext;
- (id)thumbnailFolderPath;
- (id)databaseFolderPath;
- (id)managedObjectModel;
- (id)createObjectForEntity:(id)arg1;
- (id)fetchRequestForEntity:(id)arg1;

@end

