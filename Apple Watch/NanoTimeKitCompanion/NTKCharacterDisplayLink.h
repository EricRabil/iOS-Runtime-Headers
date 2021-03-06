/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTKCharacterTimeView, CADisplayLink;

@interface NTKCharacterDisplayLink : NSObject {

	NTKCharacterTimeView* _timeView;
	CADisplayLink* _displayLink;

}
-(void)invalidate;
-(void)setAnimationFrameInterval:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)drawView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 loader:(id)arg2 ;
@end

