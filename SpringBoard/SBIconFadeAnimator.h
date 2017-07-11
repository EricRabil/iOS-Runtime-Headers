/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimator.h>

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator {

	UIView* _crossfadeView;
	BOOL _addedToWindow;
	BOOL _fadesReferenceView;

}

@property (assign,nonatomic) BOOL fadesReferenceView;              //@synthesize fadesReferenceView=_fadesReferenceView - In the implementation block
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 ;
-(void)setFadesReferenceView:(BOOL)arg1 ;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_applyAlphaForFraction:(double)arg1 ;
-(BOOL)fadesReferenceView;
@end
