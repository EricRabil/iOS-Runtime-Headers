/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@interface Music.CompositeCollectionViewLayout : UICollectionViewLayout {

	 countData;
	 layoutData;
	 decorationLayoutAttributes;
	 lastDecorationLayoutAttributes;
	 lastDecorationLayoutAttributesRevision;
	 currentCollectionViewUpdates;
	 isInvalidatingLayout;

}

@property (readonly,nonatomic) CGSize collectionViewContentSize; 
@property (assign,nonatomic) BOOL isInvalidatingLayout; 
@property (readonly,nonatomic) BOOL canBeEdited; 
@property (assign,nonatomic) BOOL isEditing; 
+(Class)invalidationContextClass;
-(BOOL)isInvalidatingLayout;
-(void)setIsInvalidatingLayout:(BOOL)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)isEditing;
-(BOOL)canBeEdited;
-(void)setEditing:(BOOL)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1 ;
-(id)_decorationViewForLayoutAttributes:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
@end
