//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SongView.h"

#import "CustomIOS7AlertViewDelegate.h"

@interface Song_iPadView : SongView <CustomIOS7AlertViewDelegate>
{
}

- (id)getRN;
- (int)getPageNum;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showOptionsList:(id)arg1;
- (struct CGRect)getSingerLabRect;
- (struct CGRect)getnameLabRect;
- (struct CGRect)getNumLabRect;
- (id)initWithFrame:(struct CGRect)arg1;

@end

