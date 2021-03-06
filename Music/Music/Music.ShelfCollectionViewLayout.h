/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@interface Music.ShelfCollectionViewLayout : UICollectionViewLayout {

	 scrollStyle;
	 interSectionHorizontalOffset;
	 startingIndexPath;
	 contentSize;
	 globalHeaderStartingRelativeFrames;
	 hasValidItemLayoutMetrics;
	 _interSectionHorizontalOffset;
	 itemIndexPathRelativeFrameMap;
	 maximumScrollingHeaderHeight;
	 scrollingHeaderIndexPathMetricsMap;
	 sectionPageRects;
	 cachedShelfGridMetrics;
	 originalHorizontalScrollDecelerationFactor;

}

@property (assign,nonatomic) double interSectionHorizontalOffset; 
@property (readonly,nonatomic) CGSize collectionViewContentSize; 
@property (readonly,nonatomic) BOOL _shouldScrollToContentBeginningInRightToLeft; 
+(Class)invalidationContextClass;
-(void)panGestureRecognizerStateDidChange:(id)arg1 ;
-(double)interSectionHorizontalOffset;
-(void)setInterSectionHorizontalOffset:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(void)music_collectionViewInheritedLayoutInsetsDidChange;
@end

