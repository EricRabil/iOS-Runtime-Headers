/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconImageAppCrossfadeView.h>

@class SBAnimatableCorneredView;

@interface SBIconImageAppLowQualityCrossfadeView : SBIconImageAppCrossfadeView {

	SBAnimatableCorneredView* _imageViewCornerView;
	SBAnimatableCorneredView* _crossfadeViewCornerView;

}
-(void)applyCornerRadius:(double)arg1 ;
-(id)imageViewParentView;
-(id)crossfadeViewParentView;
-(void)cleanup;
@end

