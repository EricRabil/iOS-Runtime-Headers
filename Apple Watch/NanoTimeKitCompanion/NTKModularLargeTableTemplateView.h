/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularLargeColumnTemplateView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel, CLKComplicationTemplateModularLargeTable;

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView {

	UIView*<NTKComplicationImageView> _headerImageView;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _row1Column1Label;
	NTKColoringLabel* _row1Column2Label;
	NTKColoringLabel* _row2Column1Label;
	NTKColoringLabel* _row2Column2Label;

}

@property (nonatomic,retain) CLKComplicationTemplateModularLargeTable * complicationTemplate; 
+(void)load;
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_update;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColumnRowsWithBlock:(/*^block*/id)arg1 ;
@end

