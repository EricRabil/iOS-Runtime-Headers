/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:01 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UISegmentedControl, SKUIColorScheme, UIView, _UIBackdropView, UIControl;

@interface SKUIProductPageHeaderFloatingView : UIView {

	UISegmentedControl* _sectionControl;
	SKUIColorScheme* _colorScheme;
	UIView* _separatorView;
	UIView* _backdropAlphaView;
	_UIBackdropView* _backdropView;
	BOOL _isPad;

}

@property (assign,nonatomic) double backdropAlpha; 
@property (nonatomic,retain) SKUIColorScheme * colorScheme;               //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIControl * sectionControl;                //@synthesize sectionControl=_sectionControl - In the implementation block
@property (assign,nonatomic) long long selectedSectionIndex; 
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(UIControl *)sectionControl;
-(id)initWithSectionTitles:(id)arg1 isPad:(BOOL)arg2 ;
-(long long)selectedSectionIndex;
-(void)setSelectedSectionIndex:(long long)arg1 ;
-(void)setBackdropAlpha:(double)arg1 ;
-(void)_reloadBackdropView;
-(double)backdropAlpha;
@end
