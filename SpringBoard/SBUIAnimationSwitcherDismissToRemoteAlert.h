/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class SBRemoteAlertAdapter, SBAlertManager;

@interface SBUIAnimationSwitcherDismissToRemoteAlert : SBUIMainScreenAnimationController {

	SBRemoteAlertAdapter* _alert;
	SBAlertManager* _alertManager;

}
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)animationSettings;
-(void)_startAnimation;
@end

