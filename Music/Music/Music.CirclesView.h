/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UIView.h>
#import <Music/MusicPhysicsContactDelegate.h>

@class NSArray;

@interface Music.CirclesView : UIView <MusicPhysicsContactDelegate> {

	 maximumFrequencyDistance;
	 minimumFrequencyDistance;
	 circleBodies;
	 repellors;
	 physicsWorld;
	 groundBody;
	 longPressCircleIndex;
	 longPressRecognizer;
	 panRecognizer;
	 tapRecognizer;
	 circleLoadStepTimer;
	 displayLink;
	 dataSource;
	 delegate;
	 constants;

}

@property (retain,nonatomic) id<_TtP5Music19CirclesViewDelegate_> delegate; 
@property (readonly,nonatomic) NSArray * accessibilityCircleBodies; 
-(void)removeAllCirclesWithAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)accessibilityWillRemoveCircleWithIndex:(long long)arg1 ;
-(void)removeCircleWithIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeCirclesWithIndexSet:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeCirclesWithIndexSet:(id)arg1 animatingToPoint:(CGPoint)arg2 delay:(double)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)accessibilityCircleBodies;
-(void)accessibilityReloadDidFinish;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_TtP5Music19CirclesViewDelegate_>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id<_TtP5Music19CirclesViewDelegate_>)delegate;
-(void)_longPressAction:(id)arg1 ;
-(void)addCirclesWithCount:(long long)arg1 ;
-(id)circleViewAtIndex:(long long)arg1 ;
-(void)setSize:(CGSize)arg1 forCircleAtIndex:(long long)arg2 ;
-(void)startPhysics;
-(void)stopPhysics;
-(void)removeAllRepellors;
-(void)_tapGestureAction:(id)arg1 ;
-(void)_panGestureAction:(id)arg1 ;
-(void)_displayLinkTick;
@end

