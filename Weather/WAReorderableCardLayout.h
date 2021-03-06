/*
* This header is generated by classdump-dyld 1.0
* on Saturday, April 22, 2017 at 12:26:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WACardLayout.h>

@class _UIFeedbackDragBehavior, NSIndexPath;

@interface WAReorderableCardLayout : WACardLayout {

	BOOL _isReordering;
	_UIFeedbackDragBehavior* _feedbackBehavior;
	NSIndexPath* _deleteIndexPath;
	NSIndexPath* _pivotIndexPath;
	long long _initialDragIndex;
	long long _currentDragIndex;

}

@property (nonatomic,retain) NSIndexPath * deleteIndexPath;              //@synthesize deleteIndexPath=_deleteIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * pivotIndexPath;               //@synthesize pivotIndexPath=_pivotIndexPath - In the implementation block
@property (nonatomic,readonly) long long initialDragIndex;               //@synthesize initialDragIndex=_initialDragIndex - In the implementation block
@property (assign,nonatomic) long long currentDragIndex;                 //@synthesize currentDragIndex=_currentDragIndex - In the implementation block
-(NSIndexPath *)pivotIndexPath;
-(void)setPivotIndexPath:(NSIndexPath *)arg1 ;
-(long long)indexForItemAtPoint:(CGPoint)arg1 ;
-(long long)targetIndexForProposedStartIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)beginReorderingWithInitialDragIndex:(long long)arg1 ;
-(NSIndexPath *)deleteIndexPath;
-(void)setDeleteIndexPath:(NSIndexPath *)arg1 ;
-(long long)initialDragIndex;
-(long long)currentDragIndex;
-(void)setCurrentDragIndex:(long long)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)endReordering;
-(BOOL)isReordering;
@end

