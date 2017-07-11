/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView;

@interface SBUIStarkStartupAnimation : SBUIStarkScreenAnimationController {

	UIView* _fromLockoutView;

}

@property (nonatomic,readonly) UIView * fromLockoutView;              //@synthesize fromLockoutView=_fromLockoutView - In the implementation block
-(void)_cleanupAnimation;
-(id)_getTransitionWindow;
-(UIView *)fromLockoutView;
-(id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2 ;
-(void)_abortAnimation;
-(void)_begin;
@end
