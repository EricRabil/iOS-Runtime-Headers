/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationController.h>

@class _SBUIStarkStartupToAppAnimation, SBStarkScreenController, UIView;

@interface SBUIStarkStartupToAppAnimation : SBUIAnimationController {

	_SBUIStarkStartupToAppAnimation* _animation;
	SBStarkScreenController* _screenController;

}

@property (nonatomic,readonly) _SBUIStarkStartupToAppAnimation * animation;              //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) UIView * fromLockoutView; 
-(void)_cleanupAnimation;
-(id)_animationProgressDependencies;
-(void)_prepareAnimation;
-(UIView *)fromLockoutView;
-(id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(id)_animationWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(id)_waitToStartTransaction;
-(id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2 ;
-(void)_applicationDependencyStateChanged;
-(_SBUIStarkStartupToAppAnimation *)animation;
@end

