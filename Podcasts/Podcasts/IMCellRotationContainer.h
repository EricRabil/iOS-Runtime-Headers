/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UIView, IMGridViewCell;

@interface IMCellRotationContainer : UIView {

	UIView* _startSnapshot;
	UIView* _endSnapshot;
	IMGridViewCell* _endCell;
	IMGridViewCell* _startCell;
	BOOL _shouldCrossfade;
	BOOL _cellNotVisible;

}

@property (nonatomic,retain) IMGridViewCell * endCell;                //@synthesize endCell=_endCell - In the implementation block
@property (nonatomic,retain) IMGridViewCell * startCell;              //@synthesize startCell=_startCell - In the implementation block
@property (assign,nonatomic) BOOL cellNotVisible;                     //@synthesize cellNotVisible=_cellNotVisible - In the implementation block
-(void)setStartCell:(IMGridViewCell *)arg1 ;
-(void)setCellNotVisible:(BOOL)arg1 ;
-(void)setEndCell:(IMGridViewCell *)arg1 ;
-(void)prepareToCrossfade;
-(void)crossfadeWithDuration:(double)arg1 ;
-(IMGridViewCell *)endCell;
-(BOOL)cellNotVisible;
-(id)copySnapshot:(id)arg1 ;
-(IMGridViewCell *)startCell;
-(void)dealloc;
-(void)setOrigin:(CGPoint)arg1 ;
@end
