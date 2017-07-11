/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:34 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBZoomView.h>

@class SBFullscreenZoomView, UIView;

@interface SBClippedZoomView : SBZoomView {

	SBFullscreenZoomView* _fullscreenZoomViewToClip;
	UIView* _clippingView;

}
-(id)initWithClippingFrame:(CGRect)arg1 fullscreenZoomView:(id)arg2 ;
@end
