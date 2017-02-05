/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkStartupAnimation.h>

@class UIStatusBar, SBIconAnimator;

@interface SBUIStarkStartupToHomeAnimation : SBUIStarkStartupAnimation {

	UIStatusBar* _fakeStatusBar;
	SBIconAnimator* _iconAnimator;
	BOOL _finishedCleanup;

}
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)_getTransitionWindow;
-(void)__startAnimation;
-(void)_abortAnimation;
-(void)_cleanupEverything;
-(id)animationSettings;
-(void)_didComplete;
-(void)_startAnimation;
@end

