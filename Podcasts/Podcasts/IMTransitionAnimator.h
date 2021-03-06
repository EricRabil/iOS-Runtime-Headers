/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol IMTransitionAnimatorDelegate;
@class NSString;

@interface IMTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _appearing;
	double _duration;
	id<IMTransitionAnimatorDelegate> _delegate;

}

@property (assign,nonatomic) BOOL appearing;                                                //@synthesize appearing=_appearing - In the implementation block
@property (assign,nonatomic,__weak) id<IMTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double duration;                                               //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willStartAnimation;
-(void)setDelegate:(id<IMTransitionAnimatorDelegate>)arg1 ;
-(id<IMTransitionAnimatorDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setAppearing:(BOOL)arg1 ;
-(BOOL)appearing;
@end

