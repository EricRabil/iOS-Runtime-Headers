/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:47 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <PassKitCore/PKMicaLayer.h>

@class CAShapeLayer, CAGradientLayer, UIColor;

@interface PKCheckGlyphLayer : PKMicaLayer {

	CAShapeLayer* _shapeLayer;
	CAGradientLayer* _maskLayer;
	BOOL _covered;
	CATransform3D _uncoveredTransform;
	CATransform3D _coveredTransform;
	BOOL _revealed;
	UIColor* _primaryColor;

}

@property (nonatomic,copy) UIColor * primaryColor;              //@synthesize primaryColor=_primaryColor - In the implementation block
@property (assign,nonatomic) BOOL revealed;                     //@synthesize revealed=_revealed - In the implementation block
-(id)init;
-(void)dealloc;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(double)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 package:(id)arg2 ;
-(void)setPrimaryColor:(UIColor*)arg1 animated:(BOOL)arg2 ;
-(void)_createMask;
-(double)_updateCovered:(BOOL)arg1 ;
-(double)setCovered:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setRevealed:(BOOL)arg1 ;
-(BOOL)revealed;
@end

