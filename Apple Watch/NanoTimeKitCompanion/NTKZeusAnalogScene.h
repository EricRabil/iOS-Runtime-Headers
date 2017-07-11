/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogScene.h>

@class NSArray, SKNode, SKSpriteNode;

@interface NTKZeusAnalogScene : NTKAnalogScene {

	NSArray* _fontHourNodes;
	SKNode* _logoContainerNode;
	SKSpriteNode* _logo1Node;
	SKSpriteNode* _logo2Node;
	unsigned long long _currentDensity;
	BOOL _isEditing;
	unsigned long long _style;
	BOOL _statusIconVisible;
	 _lightDirection;
	BOOL _scrubbing;

}

@property (assign,getter=isScrubbing,nonatomic) BOOL scrubbing;              //@synthesize scrubbing=_scrubbing - In the implementation block
-(id)initWithSize:(CGSize)arg1 ;
-(void)applyStyle:(unsigned long long)arg1 ;
-(BOOL)isScrubbing;
-(void)setScrubbing:(BOOL)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ;
-(void)applyColor:(unsigned long long)arg1 ;
-(void)applyDensity:(unsigned long long)arg1 ;
-(void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3 ;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_update12ForStatusIconVisibility;
-(void)_update12ForStatusIconVisibilityAnimated:(BOOL)arg1 ;
-(void)_displayZoomScale:(double)arg1 fraction:(double)arg2 ;
-(id)_hoursNodeForStyle:(unsigned long long)arg1 ;
-(id)_colorForFaceColor:(unsigned long long)arg1 ;
-(double)_contentAlphaForEditing:(BOOL)arg1 ;
-(double)_digitAlphaForEditMode:(long long)arg1 ;
-(id)auxiliaryScrubbingObscuredNodes;
-(void)setAdjustsForStatusBarIcon:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(BOOL)arg2 ;
-(unsigned long long)currentDensity;
-(double)_lowerComplicationAlphaForEditing:(BOOL)arg1 ;
@end
