/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <SpriteKit/SKScene.h>

@class SKNode, UIColor, SKTexture, SKSpriteNode, NSMutableArray, NTKVariantNode, NTKFaceEditView, NSArray;

@interface NTKAnalogScene : SKScene {

	SKNode* _root;
	SKNode* _faceChild;
	SKNode* _backgroundChild;
	UIColor* _faceColor;
	SKTexture* _faceCircleTexture;
	SKSpriteNode* _faceCircleSprite;
	BOOL _showContentForUnadornedSnapshot;
	BOOL _shouldHideVariantsBelowCurrent;
	SKNode* _background;
	SKNode* _circle;
	NSMutableArray* _variantNodes;
	NTKVariantNode* _currentVariantNode;
	unsigned long long _currentDensity;
	long long _dataMode;
	NTKFaceEditView* _editView;
	UIColor* _tickColor;
	UIColor* _alternativeTickColor;

}

@property (nonatomic,readonly) SKNode * face; 
@property (nonatomic,readonly) SKNode * background;                             //@synthesize background=_background - In the implementation block
@property (nonatomic,readonly) SKNode * circle;                                 //@synthesize circle=_circle - In the implementation block
@property (retain) UIColor * faceColor; 
@property (nonatomic,readonly) NSMutableArray * variantNodes;                   //@synthesize variantNodes=_variantNodes - In the implementation block
@property (nonatomic,retain) NTKVariantNode * currentVariantNode;               //@synthesize currentVariantNode=_currentVariantNode - In the implementation block
@property (nonatomic,readonly) unsigned long long currentDensity;               //@synthesize currentDensity=_currentDensity - In the implementation block
@property (assign,nonatomic) BOOL showContentForUnadornedSnapshot;              //@synthesize showContentForUnadornedSnapshot=_showContentForUnadornedSnapshot - In the implementation block
@property (nonatomic,readonly) long long dataMode;                              //@synthesize dataMode=_dataMode - In the implementation block
@property (nonatomic,retain) NTKFaceEditView * editView;                        //@synthesize editView=_editView - In the implementation block
@property (readonly) NSArray * activeVariantNodes; 
@property (nonatomic,retain) UIColor * tickColor;                               //@synthesize tickColor=_tickColor - In the implementation block
@property (nonatomic,retain) UIColor * alternativeTickColor;                    //@synthesize alternativeTickColor=_alternativeTickColor - In the implementation block
@property (assign,nonatomic) BOOL shouldRasterizeBackground; 
@property (assign,nonatomic) BOOL shouldHideVariantsBelowCurrent;               //@synthesize shouldHideVariantsBelowCurrent=_shouldHideVariantsBelowCurrent - In the implementation block
-(id)initWithSize:(CGSize)arg1 ;
-(void)setDensity:(unsigned long long)arg1 ;
-(SKNode *)background;
-(void)setBackgroundAlpha:(double)arg1 ;
-(SKNode *)face;
-(SKNode *)circle;
-(long long)dataMode;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareToZoom;
-(void)cleanupAfterZoom;
-(void)prepareWristRaiseAnimation;
-(void)performWristRaiseAnimation;
-(UIColor *)faceColor;
-(BOOL)showContentForUnadornedSnapshot;
-(void)_applyShowContentForUnadornedSnapshot;
-(id)addVariantNodeWithElements:(id)arg1 ;
-(NSMutableArray *)variantNodes;
-(void)setCurrentVariantNode:(NTKVariantNode *)arg1 ;
-(NTKVariantNode *)currentVariantNode;
-(id)scrubbingObscuredCollectionNodes;
-(void)setShowContentForUnadornedSnapshot:(BOOL)arg1 ;
-(void)setEditView:(NTKFaceEditView *)arg1 ;
-(void)setShouldRasterizeBackground:(BOOL)arg1 ;
-(void)setZoomFraction:(double)arg1 diameter:(double)arg2 ;
-(id)displayTime;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_displayZoomScale:(double)arg1 fraction:(double)arg2 ;
-(id)auxiliaryScrubbingObscuredNodes;
-(unsigned long long)currentDensity;
-(void)setShouldHideVariantsBelowCurrent:(BOOL)arg1 ;
-(unsigned long long)scrubbingObscured12ElementBottomIndex;
-(void)setFaceColor:(UIColor *)arg1 ;
-(void)addNodeToBackground:(id)arg1 ;
-(UIColor *)tickColor;
-(UIColor *)alternativeTickColor;
-(void)applyLabelPositions:(LabelPosition*)arg1 toNodes:(id)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 ;
-(void)_applyDataMode:(long long)arg1 ;
-(BOOL)shouldRasterizeBackground;
-(void)setTickColor:(UIColor *)arg1 ;
-(void)setAlternativeTickColor:(UIColor *)arg1 ;
-(void)applyLabelPositions:(LabelPosition*)arg1 withCenter:(CGPoint)arg2 toNodes:(id)arg3 ;
-(void)addNodeToFace:(id)arg1 ;
-(BOOL)_canRasterize;
-(id)addVariantNodeWithElements:(id)arg1 parent:(id)arg2 hidden:(BOOL)arg3 ;
-(BOOL)shouldHideVariantsBelowCurrent;
-(void)_updateTickColors;
-(void)invalidateRasterization;
-(void)enumerateTickCollectionNodes:(/*^block*/id)arg1 ;
-(NSArray *)activeVariantNodes;
-(id)faceCircleSprite;
-(void)_restoreToFullScreen;
-(void)forEachActiveVariant:(/*^block*/id)arg1 ;
-(void)_setObscuredContentHiddenForScrubbing:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)preRender;
-(void)didMoveToView:(id)arg1 ;
-(id)handColor;
-(NTKFaceEditView *)editView;
@end

