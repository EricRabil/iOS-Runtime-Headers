/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary, NSIndexSet, NSArray, NSMutableIndexSet, CADisplayLink;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout {

	NSMutableDictionary* _initialParentLayoutAttributes;
	NSMutableDictionary* _finalParentVerticalOffsets;
	BOOL _holdingBoundsInvalidation;
	BOOL _useInitialLayoutAttributesForRotation;
	BOOL _isResting;
	BOOL _easingUp;
	BOOL _shouldDisplayLinkInvalidateLayout;
	BOOL _hasLoadMore;
	double _anchorYPosition;
	NSIndexSet* _indicesOfChatItemsToBeRemovedWithoutFading;
	NSIndexSet* _indicesOfChatItemsToBeInsertedWithoutFading;
	NSArray* _layoutAttributes;
	NSArray* _associatedLayoutAttributes;
	NSArray* _decorationLayoutAttributes;
	NSArray* _oldAssociatedLayoutAttributes;
	NSMutableIndexSet* _insertedAssociatedLayoutAttributes;
	CADisplayLink* _displayLink;
	double _prevTimestamp;
	CGPoint _targetContentOffset;
	CGSize _contentSize;
	CGRect _visibleBounds;

}

@property (nonatomic,copy) NSArray * layoutAttributes;                                                                                 //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * associatedLayoutAttributes;                                                                       //@synthesize associatedLayoutAttributes=_associatedLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * decorationLayoutAttributes;                                                                       //@synthesize decorationLayoutAttributes=_decorationLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * oldAssociatedLayoutAttributes;                                                                    //@synthesize oldAssociatedLayoutAttributes=_oldAssociatedLayoutAttributes - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * insertedAssociatedLayoutAttributes;                                                   //@synthesize insertedAssociatedLayoutAttributes=_insertedAssociatedLayoutAttributes - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                                                              //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) CGRect visibleBounds;                                                                                     //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (assign,nonatomic) double prevTimestamp;                                                                                     //@synthesize prevTimestamp=_prevTimestamp - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                                                       //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL easingUp;                                                                                            //@synthesize easingUp=_easingUp - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayLinkInvalidateLayout;                                                                   //@synthesize shouldDisplayLinkInvalidateLayout=_shouldDisplayLinkInvalidateLayout - In the implementation block
@property (assign,nonatomic) BOOL isResting;                                                                                           //@synthesize isResting=_isResting - In the implementation block
@property (assign,nonatomic) BOOL hasLoadMore;                                                                                         //@synthesize hasLoadMore=_hasLoadMore - In the implementation block
@property (assign,nonatomic) double anchorYPosition;                                                                                   //@synthesize anchorYPosition=_anchorYPosition - In the implementation block
@property (assign,nonatomic) CGPoint targetContentOffset;                                                                              //@synthesize targetContentOffset=_targetContentOffset - In the implementation block
@property (assign,getter=isHoldingBoundsInvalidation,nonatomic) BOOL holdingBoundsInvalidation;                                        //@synthesize holdingBoundsInvalidation=_holdingBoundsInvalidation - In the implementation block
@property (assign,getter=isUsingInitialLayoutAttributesForRotation,nonatomic) BOOL useInitialLayoutAttributesForRotation;              //@synthesize useInitialLayoutAttributesForRotation=_useInitialLayoutAttributesForRotation - In the implementation block
@property (nonatomic,retain) NSIndexSet * indicesOfChatItemsToBeRemovedWithoutFading;                                                  //@synthesize indicesOfChatItemsToBeRemovedWithoutFading=_indicesOfChatItemsToBeRemovedWithoutFading - In the implementation block
@property (nonatomic,retain) NSIndexSet * indicesOfChatItemsToBeInsertedWithoutFading;                                                 //@synthesize indicesOfChatItemsToBeInsertedWithoutFading=_indicesOfChatItemsToBeInsertedWithoutFading - In the implementation block
+(Class)layoutAttributesClass;
+(long long)translateLayoutIndexToEffectIndex:(long long)arg1 ;
-(id)init;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGRect)visibleBounds;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)invalidateDisplayLink;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)setVisibleBounds:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)setLayoutAttributes:(NSArray *)arg1 ;
-(NSArray *)layoutAttributes;
-(CGPoint)targetContentOffset;
-(void)setTargetContentOffset:(CGPoint)arg1 ;
-(BOOL)isResting;
-(void)setUseInitialLayoutAttributesForRotation:(BOOL)arg1 ;
-(void)setAnchorYPosition:(double)arg1 ;
-(long long)effectIndexForDecorationViewAtIndex:(long long)arg1 ;
-(void)setHoldingBoundsInvalidation:(BOOL)arg1 ;
-(void)setIndicesOfChatItemsToBeRemovedWithoutFading:(NSIndexSet *)arg1 ;
-(void)setIndicesOfChatItemsToBeInsertedWithoutFading:(NSIndexSet *)arg1 ;
-(void)setInitialIndex:(unsigned long long)arg1 forParentOfAssociatedItemInsertedAtIndex:(unsigned long long)arg2 ;
-(void)setVerticalOffset:(double)arg1 forParentOfAssociatedItemDeletedAtIndex:(unsigned long long)arg2 ;
-(void)clearParentInitialIndexesAndFinalOffsets;
-(void)updateAssociatedLayoutAttributesIfNecessary;
-(void)displayLinkFired:(id)arg1 ;
-(NSArray *)decorationLayoutAttributes;
-(void)setIsResting:(BOOL)arg1 ;
-(void)reduceMotionSettingChanged;
-(BOOL)hasLoadMore;
-(void)prepareLayoutForRotisserieScrolling;
-(void)updateContentSize;
-(double)prevTimestamp;
-(void)setEasingUp:(BOOL)arg1 ;
-(void)setPrevTimestamp:(double)arg1 ;
-(void)setShouldDisplayLinkInvalidateLayout:(BOOL)arg1 ;
-(BOOL)isUsingInitialLayoutAttributesForRotation;
-(NSArray *)associatedLayoutAttributes;
-(NSMutableIndexSet *)insertedAssociatedLayoutAttributes;
-(NSIndexSet *)indicesOfChatItemsToBeInsertedWithoutFading;
-(NSIndexSet *)indicesOfChatItemsToBeRemovedWithoutFading;
-(BOOL)isHoldingBoundsInvalidation;
-(void)setOldAssociatedLayoutAttributes:(NSArray *)arg1 ;
-(void)setAssociatedLayoutAttributes:(NSArray *)arg1 ;
-(void)setDecorationLayoutAttributes:(NSArray *)arg1 ;
-(void)setHasLoadMore:(BOOL)arg1 ;
-(NSArray *)oldAssociatedLayoutAttributes;
-(void)setInsertedAssociatedLayoutAttributes:(NSMutableIndexSet *)arg1 ;
-(void)updateFrames;
-(double)anchorYPosition;
-(double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5 ;
-(void)updateAttributesForAnchorYChangeWithAttributes:(id)arg1 ;
-(void)updateAttributesForTargetContentOffsetChangeWithAttributes:(id)arg1 ;
-(BOOL)shouldDisplayLinkInvalidateLayout;
-(BOOL)easingUp;
@end
