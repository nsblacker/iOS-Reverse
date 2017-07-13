//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AbstractMedia.h"

@class NSMutableArray;

@interface CategoryMedia : AbstractMedia
{
    NSMutableArray *_itemArray;
}

@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
- (id)findMediaItemListWithName:(id)arg1;
- (id)getAllNsMediaList;
- (id)getNSMediaList;
- (id)getCategoryMediaList;
- (id)getChildALLItemList;
- (id)getChildItemListWithMediaType:(id)arg1;
- (id)getFullName;
- (id)getChildItemListWithKey:(id)arg1;
- (id)findCategoryMediaWithKName:(id)arg1;
- (id)findChildMediaWithUrlPath:(id)arg1 withFileName:(id)arg2;
- (id)findChildMediaWithKey:(id)arg1;
- (id)findMediaChildItemList:(id)arg1;
- (id)getCurrentChildItemList;
- (void)addItems:(id)arg1;
- (void)addItem:(id)arg1;
- (id)createThumbnailData;
- (id)initWithKey:(id)arg1 withName:(id)arg2 withUrl:(id)arg3 withMediaType:(id)arg4;

@end

