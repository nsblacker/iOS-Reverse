//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncSocket, HUD, NSArray, NSMutableArray, NSMutableData, NSString, NSTimer;

@interface SocketData : NSObject
{
    BOOL isFirstTimeReceive;
    BOOL isEcodeDataSucess;
    BOOL isFirstSendCommand;
    BOOL isConnectedFirst;
    BOOL tvDisconnet;
    BOOL _canLink;
    BOOL _phonePlay;
    NSMutableArray *_timerAry;
    id <CtrChangeValueAndUI> _ctrDelegate;
    id <GoToController> _goToDelegate;
    id <GoToMainController> _goToMainDelegate;
    id <changeRecordList> _singedDelegate;
    AsyncSocket *_sendSocket;
    NSString *_hostName;
    NSMutableData *_receiveData;
    NSTimer *_timerSendPhoneLive;
    NSTimer *_onLiveTimer;
    NSArray *_arySong;
    int _inTag;
    HUD *_hud;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareSocketData;
@property(nonatomic) BOOL phonePlay; // @synthesize phonePlay=_phonePlay;
@property(retain, nonatomic) HUD *hud; // @synthesize hud=_hud;
@property(nonatomic) int inTag; // @synthesize inTag=_inTag;
@property(retain, nonatomic) NSArray *arySong; // @synthesize arySong=_arySong;
@property(nonatomic) BOOL canLink; // @synthesize canLink=_canLink;
@property(retain, nonatomic) NSTimer *onLiveTimer; // @synthesize onLiveTimer=_onLiveTimer;
@property(retain, nonatomic) NSTimer *timerSendPhoneLive; // @synthesize timerSendPhoneLive=_timerSendPhoneLive;
@property(retain, nonatomic) NSMutableData *receiveData; // @synthesize receiveData=_receiveData;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(retain, nonatomic) AsyncSocket *sendSocket; // @synthesize sendSocket=_sendSocket;
@property(nonatomic) id <changeRecordList> singedDelegate; // @synthesize singedDelegate=_singedDelegate;
@property(nonatomic) id <GoToMainController> goToMainDelegate; // @synthesize goToMainDelegate=_goToMainDelegate;
@property(nonatomic) id <GoToController> goToDelegate; // @synthesize goToDelegate=_goToDelegate;
@property(nonatomic) id <CtrChangeValueAndUI> ctrDelegate; // @synthesize ctrDelegate=_ctrDelegate;
@property(retain, nonatomic) NSMutableArray *timerAry; // @synthesize timerAry=_timerAry;
- (void)sendOther;
- (void)sendMicOff;
- (void)sendMicOn;
- (void)sendGetTVRecordStatus;
- (void)sendGetTVRecordListNums;
- (void)sendGetTVRecordList;
- (void)sendPlayingComplete;
- (void)sendGetAccomVolume;
- (void)sendGetMICVolume;
- (void)sendChangeAccomVolume:(int)arg1;
- (void)sendChangeMICVolume:(int)arg1;
- (void)sendGetSongCount;
- (void)sendGetTVListForUpdata;
- (void)sendGetTVList;
- (void)sendPhoneExit;
- (void)sendReplay;
- (void)sendStopRecord;
- (void)sendOnLive;
- (void)sendGetVolume;
- (void)sendStartRecord;
- (void)sendChangeAudioOrRack;
- (void)sendPhoneLive;
- (void)sendGetAudioOrRack;
- (void)sendSeekToTime:(int)arg1;
- (void)sendChangeVolume:(int)arg1;
- (void)sendPlayNestCmd;
- (void)sendResumePlay;
- (void)sendStopPlay;
- (void)sendPausePlay;
- (id)sendSongListUpdata:(id)arg1;
- (void)sendSongList;
- (void)sendchangeSongList:(id)arg1;
- (void)sendSongListAndPlay:(id)arg1;
- (void)getTVRecordList:(id)arg1;
- (void)deleteAllFromRecoderList;
- (void)deleteOneFromRecoderList:(id)arg1;
- (id)getSongList:(id)arg1;
- (void)sendCMD:(id)arg1;
- (void)sendCMD1:(id)arg1;
- (long)getRespLength2:(char *)arg1;
- (id)parseBodyContentList1:(id)arg1 withHeaderLength:(int)arg2;
- (id)parseBodyContentList:(id)arg1 withHeaderLength:(int)arg2;
- (id)parseBodyContent1:(id)arg1 withHeaderLength:(int)arg2;
- (id)parseBodyContent:(id)arg1 withHeaderLength:(int)arg2;
- (id)stringToJavaObjectData1:(id)arg1;
- (id)stringToJavaObjectData:(id)arg1;
- (id)converNSDataWithInt2:(int)arg1;
- (BOOL)getCmdType:(id)arg1 AndCampare:(id)arg2;
- (void)phoneExit;
- (void)exitAndClose;
- (void)exit;
- (void)exitTime;
- (void)close;
- (void)canLinkOK;
- (void)onSocketDidDisconnect:(id)arg1;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)openSocket;
- (void)dealloc;
- (id)init;

@end

