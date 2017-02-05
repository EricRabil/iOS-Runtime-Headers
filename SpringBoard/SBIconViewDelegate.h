/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconViewDelegate <NSObject>
@optional
-(void)iconHandleLongPress:(id)arg1 withFeedbackBehavior:(id)arg2;
-(void)iconTapped:(id)arg1;
-(void)iconTouchBegan:(id)arg1;
-(void)icon:(id)arg1 touchMoved:(id)arg2;
-(void)icon:(id)arg1 touchEnded:(BOOL)arg2;
-(BOOL)iconShouldAllowTap:(id)arg1;
-(BOOL)icon:(id)arg1 canReceiveGrabbedIcon:(id)arg2;
-(void)icon:(id)arg1 openFolder:(id)arg2 animated:(BOOL)arg3;
-(void)iconCloseBoxTapped:(id)arg1;
-(BOOL)iconViewDisplaysBadges:(id)arg1;
-(BOOL)iconViewDisplaysCloseBox:(id)arg1;
-(double)iconLabelWidth;
-(double)scale;

@end

