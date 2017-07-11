/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBViewControllerInteractiveAnimatedTransitioning.h>

@protocol SBDosidoAnimator, SBViewControllerContextTransitioning;
@class BSUIAnimationFactory, SBSceneLayoutAnimationWrapperView, SBWorkspaceApplicationTransitionContext, NSString;

@interface SBUISwitchAppSwipeAnimationController : SBUIMainScreenAnimationController <SBViewControllerInteractiveAnimatedTransitioning> {

	BSUIAnimationFactory* _animationFactory;
	id<SBDosidoAnimator> _currentAnimator;
	unsigned long long _currentDirection;
	SBSceneLayoutAnimationWrapperView* _startingView;
	SBSceneLayoutAnimationWrapperView* _targetView;
	SBWorkspaceApplicationTransitionContext* _startingTransitionContext;
	SBWorkspaceApplicationTransitionContext* _targetTransitionContext;
	SBWorkspaceApplicationTransitionContext* _endingTransitionContext;
	id<SBViewControllerContextTransitioning> _animationTransition;

}

@property (nonatomic,readonly) unsigned long long currentDirection;                                            //@synthesize currentDirection=_currentDirection - In the implementation block
@property (nonatomic,readonly) SBWorkspaceApplicationTransitionContext * targetTransitionContext;              //@synthesize targetTransitionContext=_targetTransitionContext - In the implementation block
@property (nonatomic,readonly) SBWorkspaceApplicationTransitionContext * endingTransitionContext;              //@synthesize endingTransitionContext=_endingTransitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTransition:(id)arg1 withPercentComplete:(double)arg2 ;
-(void)finishInteractiveTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(id)transitionAnimationFactory:(id)arg1 ;
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(id)_animationSettings;
-(double)stepPercentage;
-(BOOL)isStepped;
-(id)_newAnimationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 displayMode:(long long)arg3 ;
-(void)_startAnimatingInDirection:(unsigned long long)arg1 ;
-(id)_animationFactory;
-(id)_newStretchTransformerForDirection:(unsigned long long)arg1 ;
-(id)_newDosidoAnimatorForDirection:(unsigned long long)arg1 ;
-(void)_animator:(id)arg1 finishedAnimating:(BOOL)arg2 ;
-(void)startAnimatingInDirection:(unsigned long long)arg1 withContext:(id)arg2 ;
-(id)_transitionAnimator;
-(void)enableSteppingWithAnimationSettings:(id)arg1 ;
-(SBWorkspaceApplicationTransitionContext *)targetTransitionContext;
-(SBWorkspaceApplicationTransitionContext *)endingTransitionContext;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)percentComplete;
-(id)animationSettings;
-(unsigned long long)currentDirection;
-(void)_didComplete;
-(id)_customizedDescriptionProperties;
-(void)_startAnimation;
@end
