/*
* This header is generated by classdump-dyld 1.0
* on Saturday, April 22, 2017 at 12:26:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <Weather/WACollectionViewLayoutProtocol.h>

@protocol WACardLayoutDelegate;
@class NSMutableArray, NSMutableDictionary, NSString;

@interface WACardLayout : UICollectionViewLayout <WACollectionViewLayoutProtocol> {

	unsigned long long _numOfItems;
	CGSize _contentSize;
	CGSize _itemSize;
	CGRect* _itemFrames;
	NSMutableArray* _visibleAttributes;
	NSMutableDictionary* _cachedAttributes;
	id<WACardLayoutDelegate> _layoutDelegate;
	CGSize _footerReferenceSize;

}

@property (assign,nonatomic) CGSize footerReferenceSize;                                  //@synthesize footerReferenceSize=_footerReferenceSize - In the implementation block
@property (assign,nonatomic,__weak) id<WACardLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)viewTextTopMargin;
-(CGRect)frameForItem:(long long)arg1 ;
-(double)textTopMarginForItemAtIndexPath:(id)arg1 ;
-(double)cityViewPanOffsetForCell:(id)arg1 indexPath:(id)arg2 contentOffset:(CGPoint)arg3 ;
-(long long)targetIndexForProposedStartIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)collectionView;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setFooterReferenceSize:(CGSize)arg1 ;
-(CGSize)footerReferenceSize;
-(void)setLayoutDelegate:(id<WACardLayoutDelegate>)arg1 ;
-(id<WACardLayoutDelegate>)layoutDelegate;
@end

