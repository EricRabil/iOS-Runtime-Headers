/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBPresentingDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterObserver.h>

@protocol SBCoordinatedPresenting;
@class SBLockScreenView, SBLockScreenHintTapGestureRecognizer, SBLockScreenHintLongPressGestureRecognizer, SBLockScreenHintPanGestureRecognizer, NSMutableSet, NSMapTable, NSDate, NSString;

@interface SBLockScreenHintManager : NSObject <UIGestureRecognizerDelegate, SBPresentingDelegate, CCUIControlCenterObserver> {

	BOOL _gestureHandlingEnabled;
	BOOL _guestGestureActive;
	BOOL _didEvaluatePressDelay;
	BOOL _fingerOnMesa;
	SBLockScreenView* _lockScreenView;
	SBLockScreenHintTapGestureRecognizer* _tapGesture;
	SBLockScreenHintLongPressGestureRecognizer* _longPressGesture;
	SBLockScreenHintPanGestureRecognizer* _panGesture;
	NSMutableSet* _gestures;
	NSMapTable* _controllersToGuestGestures;
	NSMapTable* _controllersToConflictingGuestGestures;
	long long _gestureState;
	id<SBCoordinatedPresenting> _previousActiveController;
	id<SBCoordinatedPresenting> _activeController;
	unsigned long long _activeHintEdge;
	NSDate* _initialTouchTimeStamp;
	CGPoint _initialPanLocationInViewSpace;

}

@property (nonatomic,retain) SBLockScreenHintTapGestureRecognizer * tapGesture;                          //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) SBLockScreenHintLongPressGestureRecognizer * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (nonatomic,retain) SBLockScreenHintPanGestureRecognizer * panGesture;                          //@synthesize panGesture=_panGesture - In the implementation block
@property (assign,nonatomic) CGPoint initialPanLocationInViewSpace;                                      //@synthesize initialPanLocationInViewSpace=_initialPanLocationInViewSpace - In the implementation block
@property (nonatomic,retain) NSMutableSet * gestures;                                                    //@synthesize gestures=_gestures - In the implementation block
@property (nonatomic,retain) NSMapTable * controllersToGuestGestures;                                    //@synthesize controllersToGuestGestures=_controllersToGuestGestures - In the implementation block
@property (nonatomic,retain) NSMapTable * controllersToConflictingGuestGestures;                         //@synthesize controllersToConflictingGuestGestures=_controllersToConflictingGuestGestures - In the implementation block
@property (assign,nonatomic) long long gestureState;                                                     //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,retain) id<SBCoordinatedPresenting> previousActiveController;                       //@synthesize previousActiveController=_previousActiveController - In the implementation block
@property (nonatomic,retain) id<SBCoordinatedPresenting> activeController;                               //@synthesize activeController=_activeController - In the implementation block
@property (assign,nonatomic) unsigned long long activeHintEdge;                                          //@synthesize activeHintEdge=_activeHintEdge - In the implementation block
@property (nonatomic,retain) NSDate * initialTouchTimeStamp;                                             //@synthesize initialTouchTimeStamp=_initialTouchTimeStamp - In the implementation block
@property (assign,getter=isGuestGestureActive,nonatomic) BOOL guestGestureActive;                        //@synthesize guestGestureActive=_guestGestureActive - In the implementation block
@property (assign,nonatomic) BOOL didEvaluatePressDelay;                                                 //@synthesize didEvaluatePressDelay=_didEvaluatePressDelay - In the implementation block
@property (assign,getter=isFingerOnMesa,nonatomic) BOOL fingerOnMesa;                                    //@synthesize fingerOnMesa=_fingerOnMesa - In the implementation block
@property (nonatomic,retain) SBLockScreenView * lockScreenView;                                          //@synthesize lockScreenView=_lockScreenView - In the implementation block
@property (assign,getter=isGestureHandlingEnabled,nonatomic) BOOL gestureHandlingEnabled;                //@synthesize gestureHandlingEnabled=_gestureHandlingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBLockScreenView *)lockScreenView;
-(id)_lockScreenViewController;
-(void)setLockScreenView:(SBLockScreenView *)arg1 ;
-(void)resetCoordinatedPresentingController:(id)arg1 ;
-(void)removeCoordinatedPresentingController:(id)arg1 ;
-(void)addCoordinatedPresentingController:(id)arg1 ;
-(BOOL)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(void)presentingControllerDidFinishPresentation:(id)arg1 ;
-(NSMutableSet *)gestures;
-(BOOL)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(void)presentingController:(id)arg1 willHandleGesture:(id)arg2 ;
-(void)presentingController:(id)arg1 conflictingGestureDidBegin:(id)arg2 ;
-(void)presentingController:(id)arg1 conflictingGestureDidEnd:(id)arg2 ;
-(void)notificationCenterDidDismiss:(id)arg1 ;
-(void)setGestureHandlingEnabled:(BOOL)arg1 ;
-(void)_removeTapGestureFailureRequirementFromGuestGestures:(id)arg1 ;
-(void)_installLocalGestures;
-(void)_resetGestureSequence;
-(void)_removeAllGestures;
-(void)setFingerOnMesa:(BOOL)arg1 ;
-(BOOL)_hasCoordinatedPresentingController:(id)arg1 ;
-(id)_controller:(id)arg1 managedGestureLikeGesture:(id)arg2 ;
-(void)_resetInitialPanLocation;
-(void)_setLocalGesture:(id)arg1 enabled:(BOOL)arg2 ;
-(id)_viewForGestures;
-(CGRect)_cameraGrabberZone;
-(id)_lockScreenNotificationListController;
-(id)_lockScreenCameraController;
-(id)_lockScreenBottomLeftController;
-(CGRect)_topGrabberZone;
-(CGRect)_bottomLeftGrabberZone;
-(CGRect)_bottomGrabberZone;
-(id)_lockScreenNotificationListView;
-(BOOL)_canControllerWithIdentifier:(long long)arg1 becomeActiveWithTouchAtLocation:(CGPoint)arg2 ;
-(id)_coordinatedPresentingControllerWithIdentifier:(long long)arg1 ;
-(BOOL)_isPresentationEnabledForController:(id)arg1 locationInWindow:(CGPoint)arg2 ;
-(BOOL)_isBounceEnabledForController:(id)arg1 locationInWindow:(CGPoint)arg2 ;
-(id<SBCoordinatedPresenting>)previousActiveController;
-(void)setInitialPanLocationInViewSpace:(CGPoint)arg1 ;
-(void)_tapPeriodElapsed;
-(void)setPreviousActiveController:(id<SBCoordinatedPresenting>)arg1 ;
-(void)setActiveHintEdge:(unsigned long long)arg1 ;
-(void)setInitialTouchTimeStamp:(NSDate *)arg1 ;
-(BOOL)isGestureHandlingEnabled;
-(void)_reenableGestures;
-(id)_controllerForGesture:(id)arg1 ;
-(long long)_compareControllerWithIdentifier:(long long)arg1 withControllerWithIdentifier:(long long)arg2 ;
-(BOOL)_doesController:(id)arg1 manageGestureLikeGesture:(id)arg2 ;
-(BOOL)_isController:(id)arg1 excludingViewsUnderGesture:(id)arg2 ;
-(BOOL)isFingerOnMesa;
-(void)_initializeInitialTouchTimeStamp;
-(unsigned long long)activeHintEdge;
-(void)_abortCurrentAnimationForController:(id)arg1 ;
-(void)_resetGestureSequenceAndReenableGestures;
-(void)_updateControllerPresentationForTapOrPress:(id)arg1 withAnimation:(/*^block*/id)arg2 abortingCurrentAnimation:(BOOL)arg3 ;
-(double)_elapsedTapPeriod;
-(BOOL)isGuestGestureActive;
-(id)_tapGestureForActiveController;
-(BOOL)_hasTapPeriodElapsed;
-(void)_resetGesture:(id)arg1 ;
-(void)_cancelGuestGesturesExcludingController:(id)arg1 ;
-(void)_updateControllerPresentationForTap;
-(unsigned long long)_hintEdgeForController:(id)arg1 ;
-(void)_updateActiveControllerPresentationForPress:(BOOL)arg1 ;
-(void)_dismissControllerForPress:(id)arg1 abortingCurrentAnimation:(BOOL)arg2 ;
-(BOOL)_didActiveControllerChange;
-(void)_resetGesture:(id)arg1 forController:(id)arg2 ;
-(void)_updateGrabberStateForControllerIfNecessary:(id)arg1 ;
-(void)_beginControllerPresentationForPan;
-(void)_updateControllerPresentationForPan;
-(void)_endControllerPresentationForPanInState:(long long)arg1 ;
-(BOOL)_hintGestureShouldBegin:(id)arg1 ;
-(void)setGuestGestureActive:(BOOL)arg1 ;
-(void)_presentingController:(id)arg1 willHandleTap:(id)arg2 ;
-(void)_presentingController:(id)arg1 willHandlePan:(id)arg2 ;
-(CGPoint)initialPanLocationInViewSpace;
-(void)setGestures:(NSMutableSet *)arg1 ;
-(NSMapTable *)controllersToGuestGestures;
-(void)setControllersToGuestGestures:(NSMapTable *)arg1 ;
-(NSMapTable *)controllersToConflictingGuestGestures;
-(void)setControllersToConflictingGuestGestures:(NSMapTable *)arg1 ;
-(NSDate *)initialTouchTimeStamp;
-(BOOL)didEvaluatePressDelay;
-(void)setDidEvaluatePressDelay:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleTap:(id)arg1 ;
-(void)setTapGesture:(SBLockScreenHintTapGestureRecognizer *)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(void)setPanGesture:(SBLockScreenHintPanGestureRecognizer *)arg1 ;
-(SBLockScreenHintTapGestureRecognizer *)tapGesture;
-(SBLockScreenHintPanGestureRecognizer *)panGesture;
-(void)setLongPressGesture:(SBLockScreenHintLongPressGestureRecognizer *)arg1 ;
-(SBLockScreenHintLongPressGestureRecognizer *)longPressGesture;
-(void)_handlePress:(id)arg1 ;
-(long long)gestureState;
-(void)setGestureState:(long long)arg1 ;
-(id<SBCoordinatedPresenting>)activeController;
-(void)setActiveController:(id<SBCoordinatedPresenting>)arg1 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
@end

