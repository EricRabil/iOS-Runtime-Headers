/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:48 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIView;

@interface NTKAstronomyLocationDot : UIView {

	BOOL _animating;
	UIColor* _outerDotColor;
	double _outerDotDiameter;
	UIColor* _innerDotColor;
	double _innerDotDiameter;
	double _pulseDuration;
	double _pulseAlphaDelay;
	UIView* _outerDot;
	UIView* _innerDotImageView;

}

@property (nonatomic,retain) UIView * outerDot;                       //@synthesize outerDot=_outerDot - In the implementation block
@property (nonatomic,retain) UIView * innerDotImageView;              //@synthesize innerDotImageView=_innerDotImageView - In the implementation block
@property (nonatomic,retain) UIColor * outerDotColor;                 //@synthesize outerDotColor=_outerDotColor - In the implementation block
@property (assign,nonatomic) double outerDotDiameter;                 //@synthesize outerDotDiameter=_outerDotDiameter - In the implementation block
@property (nonatomic,retain) UIColor * innerDotColor;                 //@synthesize innerDotColor=_innerDotColor - In the implementation block
@property (assign,nonatomic) double innerDotDiameter;                 //@synthesize innerDotDiameter=_innerDotDiameter - In the implementation block
@property (assign,nonatomic) double pulseDuration;                    //@synthesize pulseDuration=_pulseDuration - In the implementation block
@property (assign,nonatomic) double pulseAlphaDelay;                  //@synthesize pulseAlphaDelay=_pulseAlphaDelay - In the implementation block
@property (assign,nonatomic) BOOL animating;                          //@synthesize animating=_animating - In the implementation block
+(CGSize)defaultSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)stopAnimation;
-(void)setAnimating:(BOOL)arg1 ;
-(void)startAnimation;
-(id)initWithDefaultSize;
-(BOOL)animating;
-(double)defaultInnerDotDiameter;
-(id)makeDot;
-(void)setOuterDot:(UIView *)arg1 ;
-(void)setOuterDotColor:(UIColor *)arg1 ;
-(double)defaultOuterDotDiameter;
-(void)setOuterDotDiameter:(double)arg1 ;
-(void)setInnerDotColor:(UIColor *)arg1 ;
-(void)setInnerDotDiameter:(double)arg1 ;
-(double)defaultPulseDuration;
-(void)setPulseDuration:(double)arg1 ;
-(double)defaultPulseAlphaDelay;
-(void)setPulseAlphaDelay:(double)arg1 ;
-(UIView *)outerDot;
-(UIView *)innerDotImageView;
-(double)outerDotDiameter;
-(double)pulseDuration;
-(double)innerDotDiameter;
-(double)pulseAlphaDelay;
-(UIColor *)outerDotColor;
-(UIColor *)innerDotColor;
-(void)setInnerDotImageView:(UIView *)arg1 ;
-(id)defaultColor;
@end

