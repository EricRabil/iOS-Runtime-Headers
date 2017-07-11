/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringImageView, UIColor;

@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView {

	NTKColoringImageView* _fillFractionRing;
	double _fillFraction;
	BOOL _didDrawOnce;
	UIColor* _ringOverrideColor;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setForegroundColor:(id)arg1 ;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)updateRingWithRingDescription:(id)arg1 ;
-(void)setUsesMediumLayout:(BOOL)arg1 ;
-(BOOL)_wantsPlatter;
-(void)updateRingWithOverrideColor:(id)arg1 ;
@end
