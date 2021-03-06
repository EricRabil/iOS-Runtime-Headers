/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconZoomAnimator.h>
#import <SpringBoard/SBIconListLayoutDelegate.h>

@class SBFloatyFolderView, SBFolderIconView, SBFolderZoomSettings, NSString;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate> {

	SBFloatyFolderView* _folderView;
	SBFolderIconView* _folderIconView;
	CGAffineTransform _folderIconViewScaleTransform;

}

@property (nonatomic,retain) SBFolderZoomSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithFolderController:(id)arg1 iconView:(id)arg2 iconZoomScaleDimension:(CGPoint)arg3 ;
-(void)_applyIconCrossfadeForZoomFraction:(double)arg1 ;
-(void)_applyIconTransformForZoomFraction:(double)arg1 ;
-(void)_applyFolderFadeForZoomFraction:(double)arg1 ;
-(void)_calculateZoomedOffset:(CGPoint*)arg1 scale:(CGPoint*)arg2 forIcon:(id)arg3 withView:(id)arg4 ;
@end

