/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKZeusFramedComplicationView.h>
#import <libobjc.A.dylib/NTKStopwatchComplicationDisplay.h>

@class UILabel, NSString;

@interface NTKZeusStopwatchComplicationView : NTKZeusFramedComplicationView <NTKStopwatchComplicationDisplay> {

	UILabel* _label;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)init;
-(void)layoutSubviews;
-(void)setTime:(double)arg1 ;
-(CGRect)contentFrame;
@end

