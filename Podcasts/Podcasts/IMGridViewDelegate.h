/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMGridViewDelegate <NSObject,UIScrollViewDelegate>
@optional
-(void)gridView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndex:(long long)arg3;
-(long long)gridView:(id)arg1 willSelectItemAtIndex:(long long)arg2;
-(void)gridView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
-(void)gridView:(id)arg1 updateSelectedCell:(id)arg2;
-(BOOL)gridView:(id)arg1 canDeleteCellAtIndex:(long long)arg2;
-(BOOL)gridView:(id)arg1 canMoveCellAtIndex:(long long)arg2;
-(void)gridView:(id)arg1 moveCellAtIndex:(long long)arg2 toIndex:(long long)arg3;
-(void)gridView:(id)arg1 willGrabCell:(id)arg2;
-(void)gridView:(id)arg1 shouldDeleteItemAtIndex:(unsigned long long)arg2;
-(long long)gridView:(id)arg1 numberOfColumnsFor:(long long)arg2;

@end

