/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconAnimatorDelegate;
@class NSMutableArray, SBFolderControllerAnimationContext, NSString, SBIconAnimationSettings, SBValueConvergenceAnimator, UIView, SBFolderController;

@interface SBIconAnimator : NSObject {

	double _fraction;
	double _hintFraction;
	BOOL _startAnimationAfterRotationEnds;
	BOOL _windowIsRotating;
	BOOL _cleanedUp;
	BOOL _animating;
	NSMutableArray* _pendedAnimationContexts;
	SBFolderControllerAnimationContext* _animationContext;
	NSString* _instanceIdentifier;
	BOOL _invalidated;
	id<SBIconAnimatorDelegate> _delegate;
	SBIconAnimationSettings* _settings;
	SBValueConvergenceAnimator* _hintAnimator;
	UIView* _backgroundDarkeningView;
	SBFolderController* _folderController;

}

@property (nonatomic,readonly) SBFolderController * folderController;                              //@synthesize folderController=_folderController - In the implementation block
@property (nonatomic,readonly) SBFolderControllerAnimationContext * animationContext;              //@synthesize animationContext=_animationContext - In the implementation block
@property (nonatomic,readonly) UIView * referenceView; 
@property (assign,nonatomic) BOOL invalidated;                                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (assign,nonatomic,__weak) id<SBIconAnimatorDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBIconAnimationSettings * settings;                                   //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double fraction; 
@property (assign,nonatomic) double hintFraction;                                                  //@synthesize hintFraction=_hintFraction - In the implementation block
@property (nonatomic,retain) SBValueConvergenceAnimator * hintAnimator;                            //@synthesize hintAnimator=_hintAnimator - In the implementation block
@property (nonatomic,retain) UIView * backgroundDarkeningView;                                     //@synthesize backgroundDarkeningView=_backgroundDarkeningView - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
@property (getter=isPastPointOfNoReturn,nonatomic,readonly) BOOL pastPointOfNoReturn; 
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)centralAnimationFactory;
-(void)setHintAnimator:(SBValueConvergenceAnimator *)arg1 ;
-(void)hintToFraction:(double)arg1 ;
-(id)initWithFolderController:(id)arg1 ;
-(SBFolderController *)folderController;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(SBValueConvergenceAnimator *)hintAnimator;
-(double)hintFraction;
-(UIView *)backgroundDarkeningView;
-(BOOL)isPastPointOfNoReturn;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_windowFinishedRotating;
-(void)_allowRotationOnMainWindowIfNecessary:(BOOL)arg1 ;
-(void)_invalidateCompletions;
-(void)_animateToFractionFromContext:(id)arg1 ;
-(void)_animateToFractionFromPendingContexts;
-(BOOL)_isDelayedForRotation;
-(void)setHintFraction:(double)arg1 ;
-(void)setBackgroundDarkeningView:(UIView *)arg1 ;
-(void)setDelegate:(id<SBIconAnimatorDelegate>)arg1 ;
-(void)dealloc;
-(id<SBIconAnimatorDelegate>)delegate;
-(SBIconAnimationSettings *)settings;
-(BOOL)isAnimating;
-(void)prepare;
-(UIView *)referenceView;
-(void)setSettings:(SBIconAnimationSettings *)arg1 ;
-(void)cleanup;
-(SBFolderControllerAnimationContext *)animationContext;
-(BOOL)invalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)setFraction:(double)arg1 ;
-(double)fraction;
@end

