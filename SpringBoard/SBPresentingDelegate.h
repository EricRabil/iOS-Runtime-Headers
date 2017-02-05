/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBPresentingDelegate <NSObject>
@optional
-(void)presentingController:(id)arg1 conflictingGestureDidBegin:(id)arg2;
-(void)presentingController:(id)arg1 conflictingGestureDidEnd:(id)arg2;

@required
-(BOOL)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
-(void)presentingControllerDidFinishPresentation:(id)arg1;
-(BOOL)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(void)presentingController:(id)arg1 willHandleGesture:(id)arg2;

@end

