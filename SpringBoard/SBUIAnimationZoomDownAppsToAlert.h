/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBAlertManager, SBWorkspaceApplication, SBWindowSelfHostWrapper, SBAppStatusBarSettingsAssertion;

@interface SBUIAnimationZoomDownAppsToAlert : SBUIMainScreenAnimationController {

	SBAlertManager* _alertManager;
	SBWorkspaceApplication* _primaryApp;
	SBWindowSelfHostWrapper* _appContextHostWrapper;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_animationFinished;
-(void)dealloc;
-(id)animationSettings;
-(double)animationDuration;
-(void)_startAnimation;
@end

