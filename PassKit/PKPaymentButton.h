/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:14:38 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIButton.h>

@class CAShapeLayer, UIView, UILabel, CAFilter, PKShapeView;

@interface PKPaymentButton : UIButton {

	CAShapeLayer* _layer;
	long long _style;
	long long _type;
	UIView* _container;
	UILabel* _buyLabel;
	CAFilter* _highlightFilter;
	BOOL _highlighted;
	CGSize _boundsSize;
	PKShapeView* _maskView;
	double _fontRatio;

}
+(Class)layerClass;
+(id)buttonWithType:(long long)arg1 style:(long long)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(id)initWithPaymentButtonType:(long long)arg1 paymentButtonStyle:(long long)arg2 ;
@end
