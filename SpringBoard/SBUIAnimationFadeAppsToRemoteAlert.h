/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:39 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBMainAlertManager, SBRemoteAlertAdapter, SBAppStatusBarSettingsAssertion, SBWindowSelfHostWrapper, UIView, NSArray;

@interface SBUIAnimationFadeAppsToRemoteAlert : SBUIMainScreenAnimationController {

	SBMainAlertManager* _alertManager;
	SBRemoteAlertAdapter* _alert;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBWindowSelfHostWrapper* _appContextHostWrapper;
	UIView* _alertContextHostView;
	NSArray* _accessoryHostWrappers;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(BOOL)_shouldDismissBanner;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)_animationFinished;
-(void)dealloc;
-(id)animationSettings;
-(double)animationDuration;
-(void)_setHidden:(BOOL)arg1 ;
-(void)_startAnimation;
@end

