/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularTemplateView.h>

@class NTKColoringLabel, CLKComplicationTemplateModularSmallColumnsText;

@interface NTKModularSmallColumnTemplateView : NTKModularTemplateView {

	NTKColoringLabel* _row1Column1Label;
	NTKColoringLabel* _row1Column2Label;
	NTKColoringLabel* _row2Column1Label;
	NTKColoringLabel* _row2Column2Label;
	BOOL _calculatedFontSize;

}

@property (nonatomic,readonly) CLKComplicationTemplateModularSmallColumnsText * complicationTemplate; 
+(void)load;
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_update;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(id)_newLabelSubview;
-(id)_headerFontOfSize:(double)arg1 ;
-(id)_bodyFontOfSize:(double)arg1 ;
@end

