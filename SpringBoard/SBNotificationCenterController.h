/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBulletinWindowClient.h>
#import <SpringBoard/SBNotificationCenterViewControllerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBReachabilityObserver.h>
#import <SpringBoard/SBSystemGestureRecognizerDelegate.h>
#import <SpringBoard/SBViewControllerInteractiveAnimatedTransitioning.h>
#import <SpringBoard/SBViewControllerTransitionContextDelegate.h>
#import <SpringBoard/SBCoordinatedPresenting.h>
#import <SpringBoard/SBLockScreenActionProvider.h>

@class SBNotificationCenterViewController, UIView, SBUIChevronView, UILongPressGestureRecognizer, SBLockScreenActionContext, SBNotificationCenterSettings, FBUIApplicationSceneDeactivationAssertion, FBDisplayLayoutElement, SBScreenEdgePanGestureRecognizer, UIScreenEdgePanGestureRecognizer, SBNotificationCenterBounceAnimator, NSMutableSet, SBNotificationCenterTransitionContext, SBNotificationCenterDefaults, _UIFeedbackEdgeBehavior, UIImpactFeedbackGenerator, SBWindow, NSString, NSSet;

@interface SBNotificationCenterController : NSObject <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, _UISettingsKeyObserver, UIGestureRecognizerDelegate, SBReachabilityObserver, SBSystemGestureRecognizerDelegate, SBViewControllerInteractiveAnimatedTransitioning, SBViewControllerTransitionContextDelegate, SBCoordinatedPresenting, SBLockScreenActionProvider> {

	SBNotificationCenterViewController* _viewController;
	UIView* _coveredContentSnapshot;
	SBUIChevronView* _borrowedGrabberView;
	/*^block*/id _borrowedGrabberWillPresentBlock;
	/*^block*/id _borrowedGrabberHideBlock;
	/*^block*/id _borrowedGrabberCompletionBlock;
	UILongPressGestureRecognizer* _grabberPressGesture;
	SBLockScreenActionContext* _lockScreenActionContext;
	long long _transitionState;
	SBNotificationCenterSettings* _settings;
	BOOL _grabberEnabled;
	BOOL _didCoalesceWidgetsConnections;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	FBDisplayLayoutElement* _displayLayoutElement;
	SBScreenEdgePanGestureRecognizer* _showSystemGestureRecognizer;
	UIScreenEdgePanGestureRecognizer* _dismissGestureRecognizer;
	SBNotificationCenterBounceAnimator* _currentBounceAnimator;
	NSMutableSet* _bulletinWindowClients;
	SBNotificationCenterTransitionContext* _activeTransitionContext;
	SBNotificationCenterDefaults* _ncDefaults;
	_UIFeedbackEdgeBehavior* _feedbackBehavior;
	UIImpactFeedbackGenerator* _partialPulldownFeedbackBehavior;
	long long _presentedState;

}

@property (nonatomic,retain) _UIFeedbackEdgeBehavior * feedbackBehavior;                               //@synthesize feedbackBehavior=_feedbackBehavior - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * partialPulldownFeedbackBehavior;              //@synthesize partialPulldownFeedbackBehavior=_partialPulldownFeedbackBehavior - In the implementation block
@property (assign,nonatomic) long long presentedState;                                                 //@synthesize presentedState=_presentedState - In the implementation block
@property (nonatomic,readonly) SBNotificationCenterViewController * viewController;                    //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) SBNotificationCenterSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,__weak,readonly) SBWindow * window; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (getter=isGrabberVisible,nonatomic,readonly) BOOL grabberVisible; 
@property (assign,getter=isGrabberEnabled,nonatomic) BOOL grabberEnabled;                              //@synthesize grabberEnabled=_grabberEnabled - In the implementation block
@property (assign,nonatomic) BOOL blursBackground; 
@property (nonatomic,readonly) SBLockScreenActionContext * lockScreenActionContext;                    //@synthesize lockScreenActionContext=_lockScreenActionContext - In the implementation block
@property (nonatomic,readonly) long long layoutMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long coordinatedPresentingControllerIdentifier; 
@property (nonatomic,readonly) double hintDisplacement; 
@property (nonatomic,readonly) unsigned long long hintEdge; 
@property (assign,nonatomic) id<SBPresentingDelegate> presentingDelegate; 
@property (nonatomic,readonly) NSSet * gestures; 
@property (nonatomic,readonly) NSSet * conflictingGestures; 
@property (nonatomic,readonly) NSSet * tapExcludedViews; 
+(id)newDynamicAnimationForShow:(BOOL)arg1 targetValue:(double)arg2 withInitialValue:(double)arg3 velocity:(double)arg4 extraPull:(BOOL)arg5 ;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(double)transitionAnimationDuration;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)prepareLayoutForPresentationFromBanner;
-(void)updateTransitionWithTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)endTransitionWithVelocity:(CGPoint)arg1 wasCancelled:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)beginPresentationWithTouchLocation:(CGPoint)arg1 presentationBegunHandler:(/*^block*/id)arg2 ;
-(void)presentAnimated:(BOOL)arg1 presentationType:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isGrabberVisible;
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)performScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3 ;
-(void)finishedScrollTest;
-(void)transitionDidBegin:(id)arg1 ;
-(id)_lockScreenViewController;
-(BOOL)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(SBLockScreenActionContext *)lockScreenActionContext;
-(BOOL)isPresentingControllerTransitioning;
-(long long)coordinatedPresentingControllerIdentifier;
-(double)hintDisplacement;
-(unsigned long long)hintEdge;
-(void)invalidateLockScreenActionContext;
-(void)_updateCoveredContentSnapshot;
-(BOOL)_shouldShowGrabberOnFirstSwipe;
-(void)_hideGrabberForSystemGesture;
-(void)hideGrabberAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateShouldShowGrabberOnFirstSwipe;
-(void)_endTransitionWithVelocity:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(void)biometricEventMonitorDidAuthenticate:(id)arg1 ;
-(void)_handleBacklightFadeFinished:(id)arg1 ;
-(void)_handleUIDidLock:(id)arg1 ;
-(void)_handleShowNotificationCenterGesture:(id)arg1 ;
-(void)_showNotificationCenterGestureBeganWithGestureRecognizer:(id)arg1 ;
-(void)_showNotificationCenterGestureChangedWithGestureRecognizer:(id)arg1 duration:(double)arg2 ;
-(void)_showNotificationCenterGestureEndedWithGestureRecognizer:(id)arg1 ;
-(void)_showNotificationCenterGestureCancelled;
-(void)_showNotificationCenterGestureFailed;
-(void)setGrabberEnabled:(BOOL)arg1 ;
-(BOOL)canShowHideGrabberView;
-(void)_beginDismissalWithTouchLocation:(CGPoint)arg1 ;
-(void)_invalidateCoveredContentSnapshot;
-(void)_insertCoveredContentSnapshotIfNecessary:(id)arg1 ;
-(void)_setViewUserInteractionEnabled:(BOOL)arg1 ;
-(void)handleGrabberPress:(id)arg1 ;
-(BOOL)isGrabberEnabled;
-(void)_setupForViewPresentation;
-(void)_removeCoveredContentSnapshot;
-(void)setPresentedState:(long long)arg1 ;
-(void)_setGrabberEnabled:(BOOL)arg1 ;
-(void)_setupForPresentationWithTouchLocation:(CGPoint)arg1 ;
-(void)_setupForDismissal;
-(id)_newViewControllerTransitionContextForPresentation:(BOOL)arg1 interactive:(BOOL)arg2 ;
-(BOOL)_shouldPresentSpotlightForCurrentTransitionStateAndVelocity:(CGPoint)arg1 ;
-(BOOL)_cancelInteractiveTransitionIfAppropriateForVelocity:(CGPoint)arg1 ;
-(void)_cleanupAfterTransition:(BOOL)arg1 ;
-(void)_registerNotificationCenterBulletinWindowClient:(id)arg1 ;
-(void)dismissPartialPulldownSpotlightAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginPresentationWithTouchLocation:(CGPoint)arg1 presentationBegunHandler:(/*^block*/id)arg2 ;
-(void)_transitionNonInteractivelyForPresentation:(BOOL)arg1 stepper:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 fromCurrentState:(BOOL)arg2 withStepper:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_dismissPartialPulldownAnimated:(BOOL)arg1 fromCurrentState:(BOOL)arg2 withStepper:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_unregisterNotificationCenterBulletinWindowClient:(id)arg1 ;
-(void)_transitionNonInteractively;
-(void)unregisterSharedGrabberView;
-(void)_updateForChangeInLockedState;
-(BOOL)_requiresUIUnlockForActionContext:(id)arg1 ;
-(void)_handleActionContextRequiringUIUnlock:(id)arg1 ;
-(BOOL)_requiresAuthenticationForActionContext:(id)arg1 ;
-(void)_handleActionContextRequiringAuthentication:(id)arg1 ;
-(BOOL)_handleActionOrRequestWithDefaultAction:(/*^block*/id)arg1 lockedAction:(/*^block*/id)arg2 ;
-(BOOL)requiresKeyWindow;
-(BOOL)shouldClipContentView;
-(BOOL)shouldAllowPartialPulldownForCurrentTransition;
-(BOOL)shouldPinViewsForPartialPulldown;
-(BOOL)_shouldSelectViewControllerAtTouchLocation;
-(void)registerSharedGrabberView:(id)arg1 withWillPresentBlock:(/*^block*/id)arg2 hideBlock:(/*^block*/id)arg3 andCompletion:(/*^block*/id)arg4 ;
-(UIImpactFeedbackGenerator *)partialPulldownFeedbackBehavior;
-(void)setPartialPulldownFeedbackBehavior:(UIImpactFeedbackGenerator *)arg1 ;
-(long long)presentedState;
-(id)init;
-(void)dealloc;
-(SBWindow *)window;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)percentComplete;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(SBNotificationCenterSettings *)settings;
-(BOOL)isTransitioning;
-(_UIFeedbackEdgeBehavior *)feedbackBehavior;
-(void)setFeedbackBehavior:(_UIFeedbackEdgeBehavior *)arg1 ;
-(void)transitionDidFinish:(id)arg1 ;
-(SBNotificationCenterViewController *)viewController;
-(BOOL)isVisible;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)blursBackground;
-(void)setBlursBackground:(BOOL)arg1 ;
-(BOOL)handleMenuButtonTap;
-(void)presentAnimated:(BOOL)arg1 ;
-(long long)layoutMode;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)abortAnimatedTransition;
-(void)_handleDismissGesture:(id)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_cancelTransition;
@end

