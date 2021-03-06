/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPresentationController.h>

@class UIVisualEffectView;

@interface Music.ContextActionPresentationController : UIPresentationController {

	 backgroundView;
	 dismissalAnimations;

}

@property (retain,nonatomic) UIVisualEffectView * backgroundView; 
@property (copy,nonatomic) id dismissalAnimations; 
@property (readonly,nonatomic) BOOL shouldRemovePresentersView; 
-(id)dismissalAnimations;
-(void)setDismissalAnimations:(id)arg1 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)backgroundView;
-(BOOL)shouldRemovePresentersView;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionWillBegin;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
@end

