/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>
#import <libobjc.A.dylib/NTKAlarmComplicationDisplay.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>

@class NTKDigitalTimeLabel, NTKColoringLabel, NTKStackedImagesComplicationImageView, NSDate, NSString;

@interface NTKAlarmCircularSmallComplicationView : NTKCircularComplicationView <NTKAlarmComplicationDisplay, CLKTimeFormatterObserver> {

	NTKDigitalTimeLabel* _timeLabel;
	NTKColoringLabel* _designatorLabel;
	NTKColoringLabel* _alternativeTimeLabel;
	NTKStackedImagesComplicationImageView* _image;
	BOOL _showAlternativeTimeLabel;
	NSDate* _alarmDate;
	double _snoozeDuration;
	long long _alarmState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setForegroundColor:(id)arg1 ;
-(void)_updateImage;
-(void)timeFormatterTextDidChange:(id)arg1 ;
-(void)setUsesMediumLayout:(BOOL)arg1 ;
-(void)_updateTime;
-(void)setStateAllAlarmsOff;
-(void)setStateNoAlarms;
-(void)setStateActiveWithDate:(id)arg1 ;
-(void)setStateSnoozingWithDuration:(double)arg1 ;
-(void)_updateLabelsForFontChange;
-(void)_setShowAlternativeLabel:(BOOL)arg1 ;
@end

