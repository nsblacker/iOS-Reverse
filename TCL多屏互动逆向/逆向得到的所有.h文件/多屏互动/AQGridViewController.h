//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "AQGridViewDataSource.h"
#import "AQGridViewDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class AQGridView;

@interface AQGridViewController : UIViewController <AQGridViewDelegate, AQGridViewDataSource, UIPopoverControllerDelegate>
{
    BOOL _clearsSelectionOnViewWillAppear;
    BOOL _popoverShowing;
}

@property(nonatomic) BOOL clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)gridView:(id)arg1 cellForItemAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfItemsInGridView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
@property(retain, nonatomic) AQGridView *gridView;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (void)loadView;
- (void)_sharedGridViewDefaultSetup;

@end

