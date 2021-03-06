/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, UIImageView;

@interface IMSkipBackButton : UIButton {

	double _timeInterval;
	UILabel* _innerLabel;
	UIImageView* _spinningOuter;
	BOOL _reverseDirection;

}

@property (assign,nonatomic) double timeInterval;                        //@synthesize timeInterval=_timeInterval - In the implementation block
@property (assign,nonatomic) BOOL reverseDirection;                      //@synthesize reverseDirection=_reverseDirection - In the implementation block
@property (nonatomic,readonly) UIImageView * spinningOuter;              //@synthesize spinningOuter=_spinningOuter - In the implementation block
-(CGRect)buttonContentFrame;
-(BOOL)reverseDirection;
-(void)spinBack;
-(void)spinningHalfway:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)spinning:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)setReverseDirection:(BOOL)arg1 ;
-(UIImageView *)spinningOuter;
-(id)init;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(double)timeInterval;
-(void)setTimeInterval:(double)arg1 ;
-(void)_initCommon;
@end

