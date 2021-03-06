/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:22 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonImageView.h>

@class UIImage, IMManualUpdater;

@interface CKWaveformProgressView : CKBalloonImageView {

	char _color;
	BOOL _playing;
	BOOL _played;
	double _duration;
	double _currentTime;
	UIImage* _waveform;
	IMManualUpdater* _displayUpdater;

}

@property (nonatomic,retain) IMManualUpdater * displayUpdater;              //@synthesize displayUpdater=_displayUpdater - In the implementation block
@property (assign,nonatomic) char color;                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double currentTime;                            //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) UIImage * waveform;                            //@synthesize waveform=_waveform - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                 //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPlayed,nonatomic) BOOL played;                   //@synthesize played=_played - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)color;
-(void)setColor:(char)arg1 ;
-(double)currentTime;
-(BOOL)isPlaying;
-(void)prepareForDisplay;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)setDisplayUpdater:(IMManualUpdater *)arg1 ;
-(void)setNeedsPrepareForDisplay;
-(IMManualUpdater *)displayUpdater;
-(void)prepareForDisplayIfNeeded;
-(void)setWaveform:(UIImage *)arg1 ;
-(void)setPlayed:(BOOL)arg1 ;
-(BOOL)isPlayed;
-(UIImage *)waveform;
@end

