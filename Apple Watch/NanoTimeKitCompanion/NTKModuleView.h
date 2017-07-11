/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:51 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/NTKContainerViewLayoutDelegate.h>
#import <libobjc.A.dylib/NTKControl.h>

@class NTKContainerView, UIView, UIColor, NTKFaceColorScheme, NSString;

@interface NTKModuleView : UIControl <NTKContainerViewLayoutDelegate, NTKControl> {

	NTKContainerView* _contentView;
	UIView* _highlightView;
	UIColor* _foregroundColor;
	UIColor* _secondaryForegroundColor;
	UIColor* _highlightBackgroundColor;
	double _contentHeight;
	double _contentHeightOffset;
	double _highlightAlpha;
	NTKFaceColorScheme* _colorScheme;
	double _highlightCornerRadius;
	UIColor* _overrideColor;

}

@property (nonatomic,readonly) UIView * contentView;                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double highlightCornerRadius;                    //@synthesize highlightCornerRadius=_highlightCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                         //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                       //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryForegroundColor;              //@synthesize secondaryForegroundColor=_secondaryForegroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightBackgroundColor;              //@synthesize highlightBackgroundColor=_highlightBackgroundColor - In the implementation block
@property (assign,nonatomic) double contentHeight;                            //@synthesize contentHeight=_contentHeight - In the implementation block
@property (assign,nonatomic) double contentHeightOffset;                      //@synthesize contentHeightOffset=_contentHeightOffset - In the implementation block
@property (assign,nonatomic) double highlightAlpha;                           //@synthesize highlightAlpha=_highlightAlpha - In the implementation block
@property (nonatomic,retain) NTKFaceColorScheme * colorScheme;                //@synthesize colorScheme=_colorScheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cornerRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(double)contentHeight;
-(void)setContentHeight:(double)arg1 ;
-(void)_updateColors;
-(void)layoutContainerView:(id)arg1 ;
-(NTKFaceColorScheme *)colorScheme;
-(void)setColorScheme:(NTKFaceColorScheme *)arg1 ;
-(void)applyFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2 ;
-(void)setContentHeightOffset:(double)arg1 ;
-(UIColor *)overrideColor;
-(void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 units:(unsigned long long)arg4 brightenedUnits:(unsigned long long)arg5 ;
-(UIColor *)secondaryForegroundColor;
-(void)_layoutContentView;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setSecondaryForegroundColor:(UIColor *)arg1 ;
-(void)applyColorScheme:(id)arg1 ;
-(void)naturalHorizontalLayoutForViewsAndSpacing:(id)arg1 columnAlignmentSpacing:(BOOL)arg2 ;
-(id)viewsAndSpacingArrayForSpace:(double)arg1 view:(id)arg2 space:(double)arg3 view:(id)arg4 ;
-(id)viewsAndSpacingArrayForSpace:(double)arg1 view:(id)arg2 ;
-(void)setHighlightCornerRadius:(double)arg1 ;
-(void)setHighlightBackgroundColor:(UIColor *)arg1 ;
-(void)setHighlightAlpha:(double)arg1 ;
-(BOOL)shouldCancelTouchesInScrollview;
-(UIColor *)highlightBackgroundColor;
-(double)contentHeightOffset;
-(double)highlightAlpha;
-(double)highlightCornerRadius;
@end
