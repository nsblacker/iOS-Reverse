//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class UIPageControl, UIScrollView;

@interface MSFunction_iPhoneViewController : UIViewController <UIScrollViewDelegate>
{
    UIScrollView *mainScrollView;
    UIPageControl *pageControl;
}

- (void)didReceiveMemoryWarning;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pageTurn:(id)arg1;
- (void)startBtnClick;
- (void)viewDidLoad;
- (struct CGRect)getPageControllerRect;
- (id)getImageArray;
- (struct CGRect)getImageViewRect;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

