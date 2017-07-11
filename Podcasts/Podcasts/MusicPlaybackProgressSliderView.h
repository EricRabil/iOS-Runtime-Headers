/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>
#import <Podcasts/MusicPlaybackProgressScrubberDelegate.h>
#import <Podcasts/MusicPlaybackProgressScrubbing.h>

@protocol OS_dispatch_source, MusicPlaybackProgressScrubberDelegate;
@class NSObject, MusicPlaybackProgressSlider, UILabel, MPUTimeFormatter, NSString;

@interface MusicPlaybackProgressSliderView : UIView <MusicPlaybackProgressScrubberDelegate, MusicPlaybackProgressScrubbing> {

	BOOL _isTracking;
	NSObject*<OS_dispatch_source> _labelAdjustTimerSource;
	BOOL _needsUpdateTimeLabelText;
	MusicPlaybackProgressSlider* _playbackProgressSlider;
	BOOL _preventsTimerStart;
	CGSize _previousKnownSize;
	id<MusicPlaybackProgressScrubberDelegate> _scrubberDelegate;
	UILabel* _timePlayedLabel;
	UILabel* _timeRemainingLabel;
	MPUTimeFormatter* _timeFormatter;
	UIEdgeInsets _textLabelEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets textLabelEdgeInsets;                                               //@synthesize textLabelEdgeInsets=_textLabelEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive; 
@property (nonatomic,readonly) long long currentScrubSpeed; 
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubberDelegate> scrubberDelegate; 
@property (nonatomic,readonly) double effectiveCurrentTime; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isScrubbingEnabled,nonatomic) BOOL scrubbingEnabled; 
@property (assign,nonatomic) double totalDuration; 
@property (assign,nonatomic) double loadedDuration; 
-(void)playbackProgressScrubberTrackingDidBegin:(id)arg1 ;
-(void)playbackProgressScrubberTrackingDidEnd:(id)arg1 ;
-(void)playbackProgressScrubber:(id)arg1 didChangeCurrentTime:(double)arg2 ;
-(void)playbackProgressScrubber:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(double)loadedDuration;
-(void)setLoadedDuration:(double)arg1 ;
-(void)cancelScrubbing;
-(void)_cancelTimeLabelUpdateTimer;
-(BOOL)_updateTimeLabelsText;
-(void)_setNeedsUpdateTimeLabelText;
-(double)effectiveCurrentTime;
-(BOOL)isScrubbingEnabled;
-(void)_reloadTimeLabelUpdateTimer;
-(void)setTextLabelEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textLabelEdgeInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(long long)currentScrubSpeed;
-(BOOL)isAlwaysLive;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(id<MusicPlaybackProgressScrubberDelegate>)scrubberDelegate;
-(void)setScrubberDelegate:(id<MusicPlaybackProgressScrubberDelegate>)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(double)totalDuration;
@end
