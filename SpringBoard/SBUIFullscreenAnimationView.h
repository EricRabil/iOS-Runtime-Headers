/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol SBUIFullscreenAnimationViewDelegate;
@interface SBUIFullscreenAnimationView : UIView {

	id<SBUIFullscreenAnimationViewDelegate> _delegate;
	BOOL _animating;

}

@property (assign,nonatomic,__weak) id<SBUIFullscreenAnimationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL animating;                                                     //@synthesize animating=_animating - In the implementation block
-(void)_animationBegan;
-(void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2 ;
-(void)_notifyDelegateThatAnimationIsDone;
-(void)setDelegate:(id<SBUIFullscreenAnimationViewDelegate>)arg1 ;
-(id<SBUIFullscreenAnimationViewDelegate>)delegate;
-(void)_animationEnded;
-(BOOL)animating;
-(void)setToView:(id)arg1 ;
-(void)setFromView:(id)arg1 ;
-(void)beginTransition;
-(void)endTransition;
@end
