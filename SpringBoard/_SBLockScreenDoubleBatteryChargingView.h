/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenBatteryChargingView.h>

@class UIView, _UIBackdropView, SBLockScreenBatteryFillView, SBUILegibilityLabel, UIImageView;

@interface _SBLockScreenDoubleBatteryChargingView : SBLockScreenBatteryChargingView {

	UIView* _batteryContainerView;
	UIView* _internalBatteryContainerView;
	UIView* _externalBatteryContainerView;
	_UIBackdropView* _internalBatteryBlurView;
	_UIBackdropView* _externalBatteryBlurView;
	SBLockScreenBatteryFillView* _internalBatteryFillView;
	SBLockScreenBatteryFillView* _externalBatteryFillView;
	SBUILegibilityLabel* _internalChargePercentLabel;
	SBUILegibilityLabel* _externalChargePercentLabel;
	SBUILegibilityLabel* _internalChargingNameLabel;
	SBUILegibilityLabel* _externalChargingNameLabel;
	UIImageView* _internalChargingIndicator;
	UIImageView* _externalChargingIndicator;

}
-(void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2 ;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(id)_chargePercentFont;
-(double)_spaceBetweenBatteryImages;
-(double)_batteryTopPadding;
-(double)_chargingBoltTopOffset;
-(double)_deviceNameBaselineOffset;
-(double)_deviceChargeBaselineOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)arg1 ;
@end

