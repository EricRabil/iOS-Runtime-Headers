/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:52 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKAstronomyDummy_InputSequencerDelegate;
@interface NTKAstronomyDummy_CrownInputSequencer : NSObject {

	id<NTKAstronomyDummy_InputSequencerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NTKAstronomyDummy_InputSequencerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<NTKAstronomyDummy_InputSequencerDelegate>)arg1 ;
-(id<NTKAstronomyDummy_InputSequencerDelegate>)delegate;
-(void)setStart:(double)arg1 ;
-(void)setEnd:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(void)updateWithCrownInputEvent:(id)arg1 ;
-(void)setOffsetPerRevolution:(double)arg1 ;
@end

