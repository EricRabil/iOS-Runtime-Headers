/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <Music/MusicPhysicsWrapper.h>
#import <libobjc.A.dylib/PKPhysicsContactDelegate.h>

@protocol MusicPhysicsContactDelegate;
@class NSString;

@interface MusicPhysicsWorld : MusicPhysicsWrapper <PKPhysicsContactDelegate> {

	id<MusicPhysicsContactDelegate> _contactDelegate;

}

@property (assign,nonatomic) id<MusicPhysicsContactDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_unwrappedWorld;
-(id)init;
-(void)removeJoint:(id)arg1 ;
-(void)addJoint:(id)arg1 ;
-(void)addBody:(id)arg1 ;
-(void)removeBody:(id)arg1 ;
-(id<MusicPhysicsContactDelegate>)contactDelegate;
-(void)setContactDelegate:(id<MusicPhysicsContactDelegate>)arg1 ;
-(BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned long long)arg2 positionIterations:(unsigned long long)arg3 ;
-(void)didBeginContact:(id)arg1 ;
-(void)didEndContact:(id)arg1 ;
-(void)setGravity:(CGVector)arg1 ;
-(void)removeAllJoints;
@end
