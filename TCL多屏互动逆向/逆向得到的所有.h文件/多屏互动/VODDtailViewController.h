//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLBaseUIViewController.h"

#import "IFlyRecognizeControlDelegate.h"
#import "UITextFieldDelegate.h"

@class FMDatabase, IFlyRecognizeControl, NSMutableArray, NSString, PlayList, SearchSongView, SongEntity, UIAlertView, UITextField;

@interface VODDtailViewController : TLBaseUIViewController <IFlyRecognizeControlDelegate, UITextFieldDelegate>
{
    UIAlertView *alertView;
    PlayList *pl;
    IFlyRecognizeControl *iFlyRecognizeControl;
    NSMutableArray *list;
    NSMutableArray *tmp;
    SearchSongView *songV;
    FMDatabase *db;
    UITextField *searchField;
    NSString *_name;
    SongEntity *_song;
}

@property(retain, nonatomic) SongEntity *song; // @synthesize song=_song;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UITextField *searchField; // @synthesize searchField;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)navReturn;
- (void)didReceiveMemoryWarning;
- (struct CGPoint)iFlyRecognizeControlPoint;
- (void)viewDidLoad;
- (id)getBgImageName;
- (id)getSiriImgname;
- (id)getSearchImgname;
- (struct CGRect)setBGImageRect;
- (void)creatTableView;
- (struct CGRect)getTableViewRect;
- (struct CGRect)getsoundBtnRect;
- (struct CGRect)getsearchBtnRect;
- (struct CGRect)getTextFieldRect;
- (void)onResult:(id)arg1 theResult:(id)arg2;
- (void)onRecognizeResult:(id)arg1;
- (void)onUpdateTextView:(id)arg1;
- (void)onRecognizeEnd:(id)arg1 theError:(int)arg2;
- (void)soundBtnClick;
- (void)parseSearchResultDataList:(id)arg1;
- (void)searchBtnClick;
- (id)createButton:(struct CGRect)arg1 bgimage:(id)arg2 bgImageS:(id)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidUnload;
- (void)dealloc;

@end

