//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDelegate.h"

@class NSString;

@interface UITableViewDelegateBlocks : NSObject <UITableViewDelegate>
{
    CDUnknownBlockType _accessoryButtonTappedForRowWithIndexPathBlock;
    CDUnknownBlockType _didDeselectRowAtIndexPathBlock;
    CDUnknownBlockType _didEndEditingRowAtIndexPathBlock;
    CDUnknownBlockType _didSelectRowAtIndexPathBlock;
    CDUnknownBlockType _editingStyleForRowAtIndexPathBlock;
    CDUnknownBlockType _heightForFooterInSectionBlock;
    CDUnknownBlockType _heightForHeaderInSectionBlock;
    CDUnknownBlockType _heightForRowAtIndexPathBlock;
    CDUnknownBlockType _shouldIndentWhileEditingRowAtIndexPathBlock;
    CDUnknownBlockType _targetIndexPathForMoveFromRowAtIndexPathBlock;
    CDUnknownBlockType _titleForDeleteConfirmationButtonForRowAtIndexPathBlock;
    CDUnknownBlockType _viewForFooterInSectionBlock;
    CDUnknownBlockType _viewForHeaderInSectionBlock;
    CDUnknownBlockType _willBeginEditingRowAtIndexPathBlock;
    CDUnknownBlockType _willDeselectRowAtIndexPathBlock;
    CDUnknownBlockType _willDisplayCellBlock;
    CDUnknownBlockType _willSelectRowAtIndexPathBlock;
}

@property(copy, nonatomic) CDUnknownBlockType willSelectRowAtIndexPathBlock; // @synthesize willSelectRowAtIndexPathBlock=_willSelectRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType willDisplayCellBlock; // @synthesize willDisplayCellBlock=_willDisplayCellBlock;
@property(copy, nonatomic) CDUnknownBlockType willDeselectRowAtIndexPathBlock; // @synthesize willDeselectRowAtIndexPathBlock=_willDeselectRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType willBeginEditingRowAtIndexPathBlock; // @synthesize willBeginEditingRowAtIndexPathBlock=_willBeginEditingRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType viewForHeaderInSectionBlock; // @synthesize viewForHeaderInSectionBlock=_viewForHeaderInSectionBlock;
@property(copy, nonatomic) CDUnknownBlockType viewForFooterInSectionBlock; // @synthesize viewForFooterInSectionBlock=_viewForFooterInSectionBlock;
@property(copy, nonatomic) CDUnknownBlockType titleForDeleteConfirmationButtonForRowAtIndexPathBlock; // @synthesize titleForDeleteConfirmationButtonForRowAtIndexPathBlock=_titleForDeleteConfirmationButtonForRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType targetIndexPathForMoveFromRowAtIndexPathBlock; // @synthesize targetIndexPathForMoveFromRowAtIndexPathBlock=_targetIndexPathForMoveFromRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType shouldIndentWhileEditingRowAtIndexPathBlock; // @synthesize shouldIndentWhileEditingRowAtIndexPathBlock=_shouldIndentWhileEditingRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType heightForRowAtIndexPathBlock; // @synthesize heightForRowAtIndexPathBlock=_heightForRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType heightForHeaderInSectionBlock; // @synthesize heightForHeaderInSectionBlock=_heightForHeaderInSectionBlock;
@property(copy, nonatomic) CDUnknownBlockType heightForFooterInSectionBlock; // @synthesize heightForFooterInSectionBlock=_heightForFooterInSectionBlock;
@property(copy, nonatomic) CDUnknownBlockType editingStyleForRowAtIndexPathBlock; // @synthesize editingStyleForRowAtIndexPathBlock=_editingStyleForRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType didSelectRowAtIndexPathBlock; // @synthesize didSelectRowAtIndexPathBlock=_didSelectRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType didEndEditingRowAtIndexPathBlock; // @synthesize didEndEditingRowAtIndexPathBlock=_didEndEditingRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType didDeselectRowAtIndexPathBlock; // @synthesize didDeselectRowAtIndexPathBlock=_didDeselectRowAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType accessoryButtonTappedForRowWithIndexPathBlock; // @synthesize accessoryButtonTappedForRowWithIndexPathBlock=_accessoryButtonTappedForRowWithIndexPathBlock;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

