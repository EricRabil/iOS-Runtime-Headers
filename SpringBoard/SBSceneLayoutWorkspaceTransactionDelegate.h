/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>
@optional
-(BOOL)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(id)arg1;

@required
-(void)transactionWillBeginLayoutTransition:(id)arg1;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2;

@end
