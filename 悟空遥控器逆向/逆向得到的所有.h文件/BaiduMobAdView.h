//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class BaiduMobAdBannerSlot, NSString;

@interface BaiduMobAdView : UIView
{
    _Bool _autoplayEnabled;
    int _AdType;
    id <BaiduMobAdViewDelegate> _delegate;
    NSString *_AdUnitTag;
    NSString *_Version;
    BaiduMobAdBannerSlot *_bannerSlot;
}

@property(retain, nonatomic) BaiduMobAdBannerSlot *bannerSlot; // @synthesize bannerSlot=_bannerSlot;
@property(nonatomic) _Bool autoplayEnabled; // @synthesize autoplayEnabled=_autoplayEnabled;
@property(readonly, nonatomic) NSString *Version; // @synthesize Version=_Version;
@property(copy, nonatomic) NSString *AdUnitTag; // @synthesize AdUnitTag=_AdUnitTag;
@property(nonatomic) int AdType; // @synthesize AdType=_AdType;
@property(nonatomic) id <BaiduMobAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)userOtherAttributes;
- (id)userHobbies;
- (long long)userSalary;
- (long long)userEducation;
- (id)userWork;
- (id)userPostalCode;
- (id)userCity;
- (id)userBirthday;
- (int)userGender;
- (id)keywords;
- (_Bool)enableLocation;
- (id)channelId;
- (id)publisherId;
- (id)buildSlotInfo:(id)arg1;
- (void)buildCallbackBlock;
- (void)start;
- (void)dealloc;
- (id)init;

@end

