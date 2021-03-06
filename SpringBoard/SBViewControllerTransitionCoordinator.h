/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBViewControllerTransitionCoordinator <UIViewControllerTransitionCoordinator,SBViewControllerTransitionCoordinatorContext>
@required
-(void)addTransitionContinuation:(/*^block*/id)arg1;
-(BOOL)requiresCancellableAnimations;
-(BOOL)requiresInteractiveAnimations;
-(BOOL)requiresRestartableAnimations;
-(BOOL)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1;

@end

