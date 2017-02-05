/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:50 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, UIColor;

@interface NTKFaceColorScheme : NSObject {

	NSMutableDictionary* _colorsByUnit;
	BOOL _containsOverrideFaceColor;
	NSArray* _faceColors;
	double _multicolorAlpha;

}

@property (assign,nonatomic) BOOL containsOverrideFaceColor;                        //@synthesize containsOverrideFaceColor=_containsOverrideFaceColor - In the implementation block
@property (nonatomic,retain) NSArray * faceColors;                                  //@synthesize faceColors=_faceColors - In the implementation block
@property (assign,nonatomic) double multicolorAlpha;                                //@synthesize multicolorAlpha=_multicolorAlpha - In the implementation block
@property (nonatomic,readonly) unsigned long long units; 
@property (nonatomic,readonly) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIColor * secondaryForegroundColor; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * accentColor; 
@property (nonatomic,readonly) UIColor * shiftedForegroundColor; 
@property (nonatomic,readonly) UIColor * shiftedBackgroundColor; 
@property (nonatomic,readonly) UIColor * stackedImagesForegroundColor; 
@property (nonatomic,readonly) UIColor * tickColor; 
@property (nonatomic,readonly) UIColor * alternativeTickColor; 
@property (nonatomic,readonly) UIColor * activityTickColor; 
+(id)colorSchemeWithFaceColor:(unsigned long long)arg1 units:(unsigned long long)arg2 ;
+(id)colorSchemeWithFaceColor:(unsigned long long)arg1 foregroundColor:(id)arg2 units:(unsigned long long)arg3 alternateHighlight:(BOOL)arg4 ;
+(id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(double)arg3 brightenUnits:(unsigned long long)arg4 ;
+(id)interpolationFrom:(id)arg1 to:(id)arg2 fraction:(double)arg3 ;
+(id)interpolationFromFaceColor:(unsigned long long)arg1 toFaceColor:(unsigned long long)arg2 fraction:(double)arg3 units:(unsigned long long)arg4 brightenUnits:(unsigned long long)arg5 overrideColor:(id)arg6 alternateHighlight:(BOOL)arg7 ;
-(id)init;
-(UIColor *)backgroundColor;
-(BOOL)isEqual:(id)arg1 ;
-(UIColor *)foregroundColor;
-(unsigned long long)units;
-(BOOL)containsOverrideFaceColor;
-(UIColor *)secondaryForegroundColor;
-(UIColor *)shiftedBackgroundColor;
-(UIColor *)activityTickColor;
-(UIColor *)shiftedForegroundColor;
-(void)_setColor:(id)arg1 forUnit:(unsigned long long)arg2 ;
-(void)setMulticolorAlpha:(double)arg1 ;
-(void)setFaceColors:(NSArray *)arg1 ;
-(void)setContainsOverrideFaceColor:(BOOL)arg1 ;
-(NSArray *)faceColors;
-(double)multicolorAlpha;
-(id)_colorForUnit:(unsigned long long)arg1 ;
-(UIColor *)accentColor;
-(UIColor *)stackedImagesForegroundColor;
-(UIColor *)tickColor;
-(UIColor *)alternativeTickColor;
@end

