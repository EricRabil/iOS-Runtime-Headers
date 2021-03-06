/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:27 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@protocol CKAvatarPickerLayoutDelegate;
@class UICollectionViewLayoutAttributes, NSArray;

@interface CKAvatarPickerLayout : UICollectionViewLayout {

	BOOL _isAnimatedLayoutChange;
	unsigned long long _layoutMode;
	id<CKAvatarPickerLayoutDelegate> _delegate;
	UICollectionViewLayoutAttributes* _titleSupplementaryAttr;
	NSArray* _attrCollection;
	NSArray* _supplementaryAttrCollection;
	NSArray* _cutoutAttrCollection;
	NSArray* _fromAttrCollection;
	NSArray* _fromSupplementaryAttrCollection;
	NSArray* _fromCutoutAttrCollection;
	UICollectionViewLayoutAttributes* _fromTitleSupplementaryAttr;

}

@property (nonatomic,copy) NSArray * attrCollection;                                                     //@synthesize attrCollection=_attrCollection - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryAttrCollection;                                        //@synthesize supplementaryAttrCollection=_supplementaryAttrCollection - In the implementation block
@property (nonatomic,copy) NSArray * cutoutAttrCollection;                                               //@synthesize cutoutAttrCollection=_cutoutAttrCollection - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * titleSupplementaryAttr;                  //@synthesize titleSupplementaryAttr=_titleSupplementaryAttr - In the implementation block
@property (nonatomic,retain) NSArray * fromAttrCollection;                                               //@synthesize fromAttrCollection=_fromAttrCollection - In the implementation block
@property (nonatomic,retain) NSArray * fromSupplementaryAttrCollection;                                  //@synthesize fromSupplementaryAttrCollection=_fromSupplementaryAttrCollection - In the implementation block
@property (nonatomic,copy) NSArray * fromCutoutAttrCollection;                                           //@synthesize fromCutoutAttrCollection=_fromCutoutAttrCollection - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * fromTitleSupplementaryAttr;              //@synthesize fromTitleSupplementaryAttr=_fromTitleSupplementaryAttr - In the implementation block
@property (assign,nonatomic) BOOL isAnimatedLayoutChange;                                                //@synthesize isAnimatedLayoutChange=_isAnimatedLayoutChange - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;                                              //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,readonly) BOOL shouldFillOutFromCenter; 
@property (assign,nonatomic,__weak) id<CKAvatarPickerLayoutDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CKAvatarPickerLayoutDelegate>)arg1 ;
-(id<CKAvatarPickerLayoutDelegate>)delegate;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutAndCache;
-(unsigned long long)layoutMode;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(void)cleanupAnimationCache;
-(BOOL)shouldFillOutFromCenter;
-(id)initWithLayoutMode:(unsigned long long)arg1 ;
-(UICollectionViewLayoutAttributes *)titleSupplementaryAttr;
-(id)nameLayoutAttributesCollectionAtPoint:(CGPoint)arg1 ;
-(void)prepareForAnimation;
-(void)setIsAnimatedLayoutChange:(BOOL)arg1 ;
-(BOOL)isAnimatedLayoutChange;
-(void)_setupExpandedLayout;
-(void)setAttrCollection:(NSArray *)arg1 ;
-(void)setSupplementaryAttrCollection:(NSArray *)arg1 ;
-(void)setTitleSupplementaryAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(NSArray *)attrCollection;
-(void)setFromAttrCollection:(NSArray *)arg1 ;
-(NSArray *)supplementaryAttrCollection;
-(void)setFromSupplementaryAttrCollection:(NSArray *)arg1 ;
-(NSArray *)cutoutAttrCollection;
-(void)setFromCutoutAttrCollection:(NSArray *)arg1 ;
-(void)setFromTitleSupplementaryAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(double)_avatarBoundWidthLayoutMode:(unsigned long long)arg1 ;
-(unsigned long long)_itemCount;
-(long long)_pancakeCount;
-(double)_expandedBoundWidthForCount:(long long)arg1 ;
-(double)_collectionViewCollapseProgress;
-(double)_avatarBoundWidth;
-(NSRange)_collapseableRange;
-(void)setCutoutAttrCollection:(NSArray *)arg1 ;
-(void)_setupPancakeLayout;
-(NSArray *)fromAttrCollection;
-(NSArray *)fromSupplementaryAttrCollection;
-(UICollectionViewLayoutAttributes *)fromTitleSupplementaryAttr;
-(NSArray *)fromCutoutAttrCollection;
@end

