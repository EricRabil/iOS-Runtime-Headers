/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBAlertManagerObserver.h>

@protocol BSInvalidatable, SBNotificationDestinationHomeButtonPressHandler;
@class NSMutableSet, SBHomeHardwareButtonActions, SBHomeHardwareButtonGestureRecognizerConfiguration, UIGestureRecognizer, NSMutableDictionary, BKSButtonDefinition, NSString;

@interface SBHomeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBAlertManagerObserver> {

	id<BSInvalidatable> _fingerDetectEnabledAssertion;
	NSMutableSet* _hintSuppressionAssertions;
	BOOL _longPressDidOccur;
	id<SBNotificationDestinationHomeButtonPressHandler> _bannerDestination;
	id<SBNotificationDestinationHomeButtonPressHandler> _notificationCenterDestination;
	SBHomeHardwareButtonActions* _buttonActions;
	SBHomeHardwareButtonGestureRecognizerConfiguration* _gestureRecognizerConfiguration;
	UIGestureRecognizer* _screenshotGestureRecognizer;
	long long _maximumPressCount;
	long long _maximumTapCount;
	double _longPressDurationOverride;
	NSMutableDictionary* _emulatedPerSenderDownCount;
	BKSButtonDefinition* _buttonDefinition;

}

@property (nonatomic,retain) SBHomeHardwareButtonActions * buttonActions;                                                           //@synthesize buttonActions=_buttonActions - In the implementation block
@property (nonatomic,retain) SBHomeHardwareButtonGestureRecognizerConfiguration * gestureRecognizerConfiguration;                   //@synthesize gestureRecognizerConfiguration=_gestureRecognizerConfiguration - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * screenshotGestureRecognizer;                                              //@synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer - In the implementation block
@property (assign,nonatomic) long long maximumPressCount;                                                                           //@synthesize maximumPressCount=_maximumPressCount - In the implementation block
@property (assign,nonatomic) long long maximumTapCount;                                                                             //@synthesize maximumTapCount=_maximumTapCount - In the implementation block
@property (assign,nonatomic) double longPressDurationOverride;                                                                      //@synthesize longPressDurationOverride=_longPressDurationOverride - In the implementation block
@property (assign,nonatomic) BOOL longPressDidOccur;                                                                                //@synthesize longPressDidOccur=_longPressDidOccur - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * emulatedPerSenderDownCount;                                                      //@synthesize emulatedPerSenderDownCount=_emulatedPerSenderDownCount - In the implementation block
@property (nonatomic,retain) BKSButtonDefinition * buttonDefinition;                                                                //@synthesize buttonDefinition=_buttonDefinition - In the implementation block
@property (assign,nonatomic,__weak) id<SBNotificationDestinationHomeButtonPressHandler> bannerDestination;                          //@synthesize bannerDestination=_bannerDestination - In the implementation block
@property (assign,nonatomic,__weak) id<SBNotificationDestinationHomeButtonPressHandler> notificationCenterDestination;              //@synthesize notificationCenterDestination=_notificationCenterDestination - In the implementation block
@property (getter=isButtonDown,nonatomic,readonly) BOOL buttonDown; 
@property (assign,nonatomic) long long hapticType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScreenshotGestureRecognizer:(id)arg1 ;
-(id<SBNotificationDestinationHomeButtonPressHandler>)bannerDestination;
-(void)setBannerDestination:(id<SBNotificationDestinationHomeButtonPressHandler>)arg1 ;
-(id<SBNotificationDestinationHomeButtonPressHandler>)notificationCenterDestination;
-(void)setNotificationCenterDestination:(id<SBNotificationDestinationHomeButtonPressHandler>)arg1 ;
-(BOOL)emulateHomeButtonEventsIfNeeded:(IOHIDEventRef)arg1 ;
-(BOOL)isButtonDown;
-(void)alertManager:(id)arg1 didChangeTopAlertFromAlert:(id)arg2 toAlert:(id)arg3 ;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(/*^block*/id)arg1 ;
-(void)setButtonActions:(SBHomeHardwareButtonActions *)arg1 ;
-(UIGestureRecognizer *)screenshotGestureRecognizer;
-(void)setScreenshotGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)performWhenMenuButtonIsUpUsingBlock:(/*^block*/id)arg1 ;
-(void)setHapticType:(long long)arg1 ;
-(long long)hapticType;
-(void)removeHintSuppressionAssertion:(id)arg1 ;
-(void)addHintSuppressionAssertion:(id)arg1 ;
-(id)initWithScreenshotGestureRecognizer:(id)arg1 buttonActions:(id)arg2 gestureRecognizerConfiguration:(id)arg3 ;
-(void)_createGestureRecognizersWithConfiguration:(id)arg1 ;
-(void)_reconfigureHomeButton;
-(void)_startObservingReconfigurationTriggers;
-(void)_setFingerDetectionEnabled:(BOOL)arg1 ;
-(void)_axHomeButtonPrefsDidChange:(id)arg1 ;
-(void)_siriHomeButtonPrefsDidChange:(id)arg1 ;
-(void)_reconfigureGestureRecognizersForNewMaximumTapCount:(long long)arg1 oldMaximumTapCount:(long long)arg2 ;
-(void)_reconfigureGestureRecognizersForNewMaximumPressCount:(long long)arg1 oldMaximumPressCount:(long long)arg2 ;
-(void)setButtonDefinition:(BKSButtonDefinition *)arg1 ;
-(void)initialButtonDown:(id)arg1 ;
-(void)initialButtonUp:(id)arg1 ;
-(void)singlePressUp:(id)arg1 ;
-(void)acceleratedSinglePressUp:(id)arg1 ;
-(void)doublePressDown:(id)arg1 ;
-(void)doublePressUp:(id)arg1 ;
-(void)triplePressUp:(id)arg1 ;
-(void)doubleTapUp:(id)arg1 ;
-(void)screenshotRecognizerDidRecognize:(id)arg1 ;
-(SBHomeHardwareButtonGestureRecognizerConfiguration *)gestureRecognizerConfiguration;
-(void)cancelLongPress;
-(BKSButtonDefinition *)buttonDefinition;
-(BOOL)_acceleratedSinglePressRecognizerShouldBegin;
-(BOOL)_isMenuDoublePressAllowed:(id*)arg1 ;
-(void)_terminateHomeButtonEventAtCount:(long long)arg1 ;
-(void)_singlePressUp:(id)arg1 ;
-(void)_cancelGestureRecognizer:(id)arg1 ;
-(BOOL)_processDoubleDownAndDoubleUpSimultaneously;
-(BOOL)_isMenuDoublePressDisabled;
-(void)setGestureRecognizerConfiguration:(SBHomeHardwareButtonGestureRecognizerConfiguration *)arg1 ;
-(double)longPressDurationOverride;
-(void)setLongPressDurationOverride:(double)arg1 ;
-(BOOL)longPressDidOccur;
-(void)setLongPressDidOccur:(BOOL)arg1 ;
-(NSMutableDictionary *)emulatedPerSenderDownCount;
-(void)setEmulatedPerSenderDownCount:(NSMutableDictionary *)arg1 ;
-(long long)maximumTapCount;
-(long long)maximumPressCount;
-(void)setMaximumTapCount:(long long)arg1 ;
-(void)setMaximumPressCount:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)longPress:(id)arg1 ;
-(SBHomeHardwareButtonActions *)buttonActions;
-(void)setLongPressDuration:(double)arg1 ;
@end

