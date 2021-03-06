/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView, SBWorkspaceApplication;

@interface SBUIStarkStaticAnimationController : SBUIStarkScreenAnimationController {

	BOOL _relaunchExpected;
	BOOL _appWasActivating;
	UIView* _staticAppView;
	UIView* _hostView;

}

@property (nonatomic,readonly) SBWorkspaceApplication * app; 
-(void)_cleanupAnimation;
-(id)_animationProgressDependencies;
-(BOOL)_shouldDismissBanner;
-(void)_applicationDependencyStateChanged;
-(BOOL)__animationShouldStart;
-(BOOL)_willAnimate;
-(void)_willBeginWaitingForStartDependencies;
-(void)_hideAppHostView;
-(id)initWithApp:(id)arg1 starkScreenController:(id)arg2 ;
-(SBWorkspaceApplication *)app;
-(void)_startAnimation;
@end

