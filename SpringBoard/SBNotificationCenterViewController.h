/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBNCTableViewControllerDelegate.h>
#import <libobjc.A.dylib/SBUISizeObservingViewDelegate.h>
#import <SpringBoard/SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate.h>
#import <SpringBoard/SBNotificationCenterWithSearchViewControllerPresentationDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBDashBoardExternalBehaviorProviding.h>
#import <SpringBoard/SBBulletinActionHandler.h>
#import <SpringBoard/SBReachabilityObserver.h>

@protocol SBNotificationCenterViewControllerDelegate;
@class UIView, SBSearchBackdropView, SBNotificationSeparatorView, SBNotificationCenterLayoutViewController, SBNotificationCenterWithSearchViewController, UIStatusBar, SBNotificationCenterScrollToTopView, UIPageControl, SBUIChevronView, UIGestureRecognizer, _UIBackdropView, NSSet, NSString;

@interface SBNotificationCenterViewController : UIViewController <SBNCTableViewControllerDelegate, SBUISizeObservingViewDelegate, SBSearchEtceteraMultiplexingViewControllerAppearanceDelegate, SBNotificationCenterWithSearchViewControllerPresentationDelegate, UIGestureRecognizerDelegate, SBDashBoardExternalBehaviorProviding, SBBulletinActionHandler, SBReachabilityObserver> {

	id<SBNotificationCenterViewControllerDelegate> _delegate;
	UIView* _clippingView;
	UIView* _containerView;
	UIView* _contentClippingView;
	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _tintView;
	SBSearchBackdropView* _searchBackdropView;
	SBNotificationSeparatorView* _bottomSeparator;
	SBNotificationCenterLayoutViewController* _layoutViewController;
	SBNotificationCenterWithSearchViewController* _notificationCenterWithSearchViewController;
	UIStatusBar* _statusBar;
	SBNotificationCenterScrollToTopView* _scrollToTopView;
	UIPageControl* _pageControl;
	SBUIChevronView* _grabberView;
	UIView* _grabberContentView;
	UIView* _grabberBackgroundView;
	UIView* _grabberTintView;
	SBUIChevronView* _registeredGrabberView;
	CGRect _grabberContentViewFrameForRegisteredGrabber;
	/*^block*/id _registeredGrabberHideBlock;
	struct {
		unsigned blursBackground : 1;
		unsigned showsBackground : 1;
		unsigned isBackgroundValid : 1;
		unsigned isGrabberEnabled : 1;
		unsigned isGrabberLockEngaged : 1;
		unsigned viewHitTestsAsOpaque : 1;
		unsigned isViewHitTestingValid : 1;
	}  _notificationCenterViewControllerFlags;
	BOOL _showingForReachability;
	CGPoint _preReachabilityOrigin;
	CGPoint _reachabilityOrigin;
	BOOL _preReachabilityGrabberHidden;
	CGRect _preReachabilityGrabberFrame;
	CGPoint _preReachabilitySeparatorOrigin;
	CGPoint _reachabilitySeparatorOrigin;
	UIGestureRecognizer* _tapToCancelReachabilityGestureRecognizer;
	BOOL _allowPartialPulldownForCurrentTransition;
	BOOL _searchIsPresentedForPartialPulldown;
	BOOL _searchIsDismissingFromPartialPulldown;
	double _maxStatusBarOffsetForPartialPulldown;
	UIView* _spotlightTopBackgroundView;
	UIView* _spotlightTransitioningBackgroundView;
	double _lastHapticFeedbackPlayedPosition;
	BOOL _searchFieldNeedsEntryAcceleration;
	BOOL _gestureNeedsRubberbandSpeedup;

}

@property (assign,nonatomic,__weak) id<SBNotificationCenterViewControllerDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isSuppressingNotificationUpdates,nonatomic) BOOL suppressesNotificationUpdates; 
@property (assign,nonatomic) double contentViewAlpha; 
@property (assign,nonatomic) UIEdgeInsets clippingInsets; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (assign,getter=isGrabberViewEnabled,nonatomic) BOOL grabberViewEnabled; 
@property (assign,nonatomic) BOOL showsBackground; 
@property (assign,nonatomic) BOOL blursBackground; 
@property (nonatomic,readonly) _UIBackdropView * backdropView; 
@property (nonatomic,readonly) SBUIChevronView * grabberView;                                                                        //@synthesize grabberView=_grabberView - In the implementation block
@property (nonatomic,readonly) UIPageControl * pageControl;                                                                          //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) long long layoutMode; 
@property (nonatomic,copy,readonly) NSSet * visibleContentViewControllers; 
@property (nonatomic,retain) SBNotificationCenterWithSearchViewController * notificationCenterWithSearchViewController;              //@synthesize notificationCenterWithSearchViewController=_notificationCenterWithSearchViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
+(id)grayControlInteractionTintColor;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)prepareLayoutForPresentationFromBanner;
-(void)setSuppressesNotificationUpdates:(BOOL)arg1 ;
-(CGRect)revealRectForBulletin:(id)arg1 ;
-(void)setContentViewAlpha:(double)arg1 ;
-(void)setClippingInsets:(UIEdgeInsets)arg1 ;
-(id)colorForElement:(long long)arg1 ;
-(NSString *)dashBoardIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(void)setSpotlightVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)performScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3 ;
-(BOOL)_shouldRespondToReachability;
-(void)_performReachabilityTransactionForActivate:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(BOOL)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)searchEtceteraViewController:(id)arg1 willChangeToMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)searchEtceteraViewController:(id)arg1 changingToMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)searchEtceteraViewController:(id)arg1 didChangeToMode:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)searchEtceteraViewController:(id)arg1 willDismissSearchWithReason:(unsigned long long)arg2 ;
-(double)contentBottomInset;
-(BOOL)isGrabberLocked;
-(double)minimumTranslationToEndGestureWithReveal;
-(void)prepareLayoutForDefaultPresentation;
-(CGRect)grabberContentRect;
-(void)registerSharedGrabberView:(id)arg1 withHideBlock:(/*^block*/id)arg2 ;
-(CGRect)positionContentForTouchAtLocation:(CGPoint)arg1 ;
-(SBUIChevronView *)grabberView;
-(void)disableGrabberLock;
-(BOOL)shouldPresentSpotlightFromCurrentPositionWithVelocity:(CGPoint)arg1 ;
-(BOOL)shouldEndGestureWithPresentationWithVelocity:(CGPoint)arg1 ;
-(SBNotificationCenterWithSearchViewController *)notificationCenterWithSearchViewController;
-(void)presentPartialPulldownSpotlightAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)searchIsDismissingFromPartialPulldown;
-(void)presentSearchForHardwareKeyboardWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)searchIsPresentedFromPartialPulldown;
-(void)dismissPartialPulldownSpotlightAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanUpAfterTransition;
-(id)unregisterSharedGrabberView;
-(void)setGrabberViewEnabled:(BOOL)arg1 ;
-(void)updateForChangeInLockedState;
-(BOOL)shouldAllowInteractiveDismissal;
-(BOOL)shouldPlayFeedbackForNewTouchLocation:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)abortAnimatedPositionChange;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
-(void)_updateContrastSettingsForGrabberView;
-(void)_updateContrastSettingsForBottomSeparator;
-(void)_updateGrabberAndPageControlForMode:(unsigned long long)arg1 ;
-(NSSet *)visibleContentViewControllers;
-(BOOL)tintsBackground;
-(long long)_defaultBackdropViewStyle;
-(id)_newNonBlurredBackgroundViewWithAutoresizing:(BOOL)arg1 ;
-(id)_newBackgroundView;
-(id)_newTintView;
-(void)_setViewHitTestAsOpaque:(BOOL)arg1 ;
-(void)_validateBackgroundViewIfNecessary;
-(id)_newGrabberView;
-(BOOL)isGrabberViewEnabled;
-(void)_configureGrabberForSoloMode:(BOOL)arg1 ;
-(void)_loadClippingView;
-(void)_loadPageControl;
-(void)_loadGrabberContentView;
-(void)_loadContentClippingView;
-(void)_loadContentView;
-(void)_loadStatusBar;
-(void)_loadBottomSeparator;
-(void)_loadNotificationCenterWithSearchViewControllerView;
-(void)_loadSearchBackdropView;
-(void)_loadScrollToTopView;
-(id)notificationsViewController;
-(void)_registerGrabberView:(id)arg1 withHideBlock:(/*^block*/id)arg2 ;
-(id)_grabberColor;
-(id)_relevanceDateColor;
-(void)_updateContentClippingView;
-(void)_resetAdjustedViewPositions;
-(BOOL)_velocityIsSufficientToRevealNotificationCenter:(CGPoint)arg1 ;
-(double)_currentDragPosition;
-(double)_speedupOffsetForNotificationPulldown;
-(double)_initialStatusBarSearchFieldOffset;
-(BOOL)_shouldPlayFeedbackForNewOffset:(double)arg1 oldOffset:(double)arg2 targetValue:(double)arg3 ;
-(double)_scaledValueAtLocation:(double)arg1 withLowerBound:(double)arg2 upperBound:(double)arg3 rangeMin:(double)arg4 rangeMax:(double)arg5 ;
-(CGPoint)_translatedCenterPointWithOriginalBounds:(CGRect)arg1 yTranslation:(double)arg2 ;
-(CGRect)_grabberContentViewFrameForDefaultGrabberPresentation;
-(void)_setContainerFrame:(CGRect)arg1 ;
-(CGRect)_grabberContentViewFrameForRegisteredGrabber;
-(void)_positionSearchRelatedViewsWithTouchLocation:(double)arg1 ;
-(CGRect)_containerFrame:(BOOL)arg1 ;
-(UIEdgeInsets)clippingInsets;
-(void)_addSpotlightBackgroundForPresentation:(BOOL)arg1 ;
-(void)_transitionSpotlightBackgroundForPresentation:(BOOL)arg1 ;
-(id)_newSpotlightBackgroundView;
-(void)_animateForReachabilityActivatedWithHandler:(/*^block*/id)arg1 ;
-(void)_animateForReachabilityDeactivatedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)searchIsPresentingOrDismissingForPartialPulldown;
-(void)didPresentOrDismissModalViewController;
-(void)_loadLayoutViewControllerView;
-(BOOL)isSuppressingNotificationUpdates;
-(void)dismissSearchForHardwareKeyboardWithCompletion:(/*^block*/id)arg1 ;
-(void)presentGrabberView;
-(void)dismissGrabberView;
-(double)contentViewAlpha;
-(void)setNotificationCenterWithSearchViewController:(SBNotificationCenterWithSearchViewController *)arg1 ;
-(void)setDelegate:(id<SBNotificationCenterViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBNotificationCenterViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)prepareForTransition;
-(_UIBackdropView *)backdropView;
-(CGRect)_containerFrame;
-(UIPageControl *)pageControl;
-(BOOL)blursBackground;
-(void)setBlursBackground:(BOOL)arg1 ;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(long long)idleTimerMode;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(void)setShowsBackground:(BOOL)arg1 ;
-(BOOL)showsBackground;
-(long long)layoutMode;
-(void)_authenticationStateChanged:(id)arg1 ;
-(long long)participantState;
-(CGRect)contentFrame;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)_loadContainerView;
-(void)_configureView;
@end
