/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UISlider.h>
#import <libobjc.A.dylib/MPDetailedScrubbing.h>
#import <libobjc.A.dylib/MPDetailScrubControllerDelegate.h>
#import <libobjc.A.dylib/MPUVibrantContentDisabling.h>
#import <Podcasts/MusicPlaybackProgressScrubbing.h>

@protocol MusicPlaybackProgressScrubberDelegate;
@class MPDetailScrubController, UIImage, UIView, NSString;

@interface MusicPlaybackProgressSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate, MPUVibrantContentDisabling, MusicPlaybackProgressScrubbing> {

	BOOL _alwaysLive;
	double _currentTime;
	double _currentTimeSetTimeInterval;
	MPDetailScrubController* _detailScrubController;
	BOOL _displayScaleHasBeenSet;
	BOOL _needsAnimationUpdate;
	CGSize _previousKnownSize;
	float _rate;
	id<MusicPlaybackProgressScrubberDelegate> _scrubberDelegate;
	BOOL _scrubbingEnabled;
	UIImage* _thumbImage;
	double _totalDuration;
	double _loadedDuration;
	BOOL _tracking;
	UIView* _knobView;
	UIView* _loadingView;

}

@property (nonatomic,readonly) UIView * knobView; 
@property (nonatomic,readonly) double effectiveCurrentTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive; 
@property (nonatomic,readonly) long long currentScrubSpeed; 
@property (assign,nonatomic,__weak) id<MusicPlaybackProgressScrubberDelegate> scrubberDelegate; 
@property (assign,nonatomic) float rate; 
@property (assign,getter=isScrubbingEnabled,nonatomic) BOOL scrubbingEnabled; 
@property (assign,nonatomic) double totalDuration; 
@property (assign,nonatomic) double loadedDuration; 
-(double)loadedDuration;
-(void)setLoadedDuration:(double)arg1 ;
-(void)cancelScrubbing;
-(double)effectiveCurrentTime;
-(BOOL)isScrubbingEnabled;
-(void)_setThumbAppearance;
-(void)_setTrackAppearance;
-(void)_setNeedsAnimationUpdate;
-(void)_updateAnimations;
-(double)_valueForTime:(double)arg1 ;
-(void)_recursivelyRemoveAnimationsForAllSubviews;
-(void)_recursivelyRemoveAnimationsForView:(id)arg1 ;
-(id)_trackImageWithAlpha:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(id)createThumbView;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(CGRect)thumbHitRect;
-(long long)currentScrubSpeed;
-(void)detailScrubControllerDidBeginScrubbing:(id)arg1 ;
-(void)detailScrubControllerDidEndScrubbing:(id)arg1 ;
-(void)detailScrubController:(id)arg1 didChangeValue:(float)arg2 ;
-(void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(BOOL)isAlwaysLive;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(id<MusicPlaybackProgressScrubberDelegate>)scrubberDelegate;
-(void)setScrubberDelegate:(id<MusicPlaybackProgressScrubberDelegate>)arg1 ;
-(BOOL)_setCurrentTime:(double)arg1 ;
-(id)layersNotWantingVibrancy;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(double)totalDuration;
-(UIView *)knobView;
@end

