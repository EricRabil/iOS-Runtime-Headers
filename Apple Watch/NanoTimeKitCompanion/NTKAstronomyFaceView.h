/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:52 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKDigitalFaceView.h>
#import <libobjc.A.dylib/NTKTimeView.h>
#import <libobjc.A.dylib/NTKAstronomyRotationModelObserver.h>
#import <libobjc.A.dylib/NTKAstronomyViewObserver.h>
#import <libobjc.A.dylib/NTKAstronomyDummy_InputSequencerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NTKDigitalTimeLabelStyle, NTKDigitalTimeLabel, NTKAstronomyDummy_ClientSideAnimation, NTKAstronomyRotationModel, NTKAstronomyDummy_CrownInputSequencer, UIPanGestureRecognizer, UITapGestureRecognizer, NTKAstronomyView, NTKDateComplicationLabel, UILabel, UIImageView, NTKAstronomyLocationDot, NSDate, NSDateFormatter, UIButton, NTKDelayedBlock, NSString;

@interface NTKAstronomyFaceView : NTKDigitalFaceView <NTKTimeView, NTKAstronomyRotationModelObserver, NTKAstronomyViewObserver, NTKAstronomyDummy_InputSequencerDelegate, UIGestureRecognizerDelegate> {

	NTKDigitalTimeLabelStyle* _digitalTimeLabelDefaultLayoutStyle;
	NTKDigitalTimeLabelStyle* _digitalTimeLabelSmallInUpperRightStyle;
	NTKDigitalTimeLabel* _digitalTimeLabel;
	CGPoint _digitalTimeLabelZoomEndingCenter;
	CGPoint _dateLabelZoomEndingCenter;
	NTKAstronomyDummy_ClientSideAnimation* _poseInterpolationAnimation;
	NTKAstronomyRotationModel* _rotationModel;
	CLLocationCoordinate2D _initialCoordinate;
	 _previousTranslation;
	float _recentMovement;
	NTKAstronomyDummy_CrownInputSequencer* _crownSequencer;
	UIPanGestureRecognizer* _spheroidPanGesture;
	UITapGestureRecognizer* _supplementalModeDoubleTapGesture;
	UITapGestureRecognizer* _interactiveModeTapGesture;
	NSNumber* _locationManagerToken;
	NTKAstronomyView* _astronomyView;
	NTKDateComplicationLabel* _dateLabel;
	UILabel* _scrubLabel;
	UILabel* _phaseLabel;
	UILabel* _overrideDateLabel;
	UIImageView* _spheroidLabels[8];
	NTKAstronomyLocationDot* _locationDot;
	NSDate* _overrideDate;
	NSDate* _crownDate;
	NSNumber* _clockTimerToken;
	unsigned long long _dateFormatterStyle;
	NSDateFormatter* _scrubDateFormatter[3];
	UIButton* _leftButton;
	UIButton* _rightButton;
	CGRect _phaseLabelDefaultFrame;
	double _supplementalFontLineHeightPlusDescender;
	NTKDelayedBlock* _wheelDelayedBlock;
	NTKDelayedBlock* _physicalButtonDelayedBlock;
	long long _previousDataMode;
	unsigned _isAnimatingViewMode : 1;
	unsigned _isContentLoaded : 1;
	unsigned _isFlying : 1;
	unsigned _isLocationCurrent : 1;
	unsigned _canHandleCrownEvents : 1;
	unsigned _canHandleButtonEvents : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
+(void)_prewarm;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_wheelChangedWithEvent:(id)arg1 ;
-(void)setTimeOffset:(double)arg1 ;
-(id)_date;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_applyDataMode;
-(void)_loadLayoutRules;
-(BOOL)_usesCustomZoom;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(BOOL)_handlePhysicalButton:(unsigned long long)arg1 event:(unsigned long long)arg2 ;
-(void)astronomyViewContentsAnimationFinished:(id)arg1 ;
-(void)setViewMode:(long long)arg1 ;
-(void)rotationModelStoppedByDecelerating:(id)arg1 ;
-(void)_disableCrown;
-(void)_hideLocationDot;
-(BOOL)_shouldHideStatusBarForViewMode:(long long)arg1 ;
-(id)_digitalTimeLabelStyle:(long long)arg1 ;
-(void)_interpolateFromPose:(const NTKAstronomyFaceViewAnimationPose*)arg1 toPose:(const NTKAstronomyFaceViewAnimationPose*)arg2 progress:(float)arg3 ;
-(void)_setIsAnimatingViewMode:(BOOL)arg1 ;
-(void)_applyViewMode:(long long)arg1 ;
-(void)_setAstronomyFaceViewModeDefault;
-(void)_setAstronomyFaceViewModeNonInteractive;
-(void)_setAstronomyFaceViewModeInteractive;
-(void)_setAstronomyFaceViewModeSupplemental;
-(void)_updateTimeAnimated:(BOOL)arg1 ;
-(void)_startClockUpdates;
-(void)_enableCrownForAstronomyTarget:(unsigned long long)arg1 ;
-(void)_showLocationDotIfNeeded;
-(void)_stopClockUpdates;
-(void)_animateTransitionToViewMode:(long long)arg1 ;
-(void)_applyDataModeAnimated:(BOOL)arg1 ;
-(void)_handleVirtualButton:(id)arg1 ;
-(void)_handleDateLabelButton:(id)arg1 ;
-(void)_layoutSpheroidLabel:(int)arg1 ;
-(void)_handleSpheroidPanGesture:(id)arg1 ;
-(void)_handleSupplementalModeGesture:(id)arg1 ;
-(void)_handleInteractiveModeGesture:(id)arg1 ;
-(void)_updateLocaleAnimated:(BOOL)arg1 ;
-(void)_asyncUpdateTime;
-(void)_asyncUpdateLocale;
-(void)_updateLocation:(id)arg1 lastLocation:(id)arg2 ;
-(void)_layoutPhaseLabel;
-(BOOL)_canEnterInteractiveMode;
-(void)_wheelDelayedBlockFired;
-(void)_physicalButtonDelayedBlockFired;
-(void)crownInputSequencerOffsetDidChange:(id)arg1 ;
@end

