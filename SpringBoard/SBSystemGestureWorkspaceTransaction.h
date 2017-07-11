/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransactionDelegate.h>

@class NSString, UIGestureRecognizer, NSMutableSet;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction <FBSynchronizedTransactionDelegate> {

	NSString* _suppressionReason;
	UIGestureRecognizer* _gestureRecognizer;
	long long _completionType;
	NSMutableSet* _nonSlaveChildrenWaitingToFinish;
	BOOL _notifiedSlaves;

}

@property (nonatomic,retain) UIGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,readonly) long long completionType;                           //@synthesize completionType=_completionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)addSlaveTransaction:(id)arg1 ;
-(void)finishWithCompletionType:(long long)arg1 ;
-(void)_finishWithCompletionType:(long long)arg1 ;
-(void)_notifySlavesIfNecessary;
-(void)_notifySlavesForMilestoneRemovalIfNecessary;
-(BOOL)removeMilestones:(id)arg1 ;
-(void)removeAllMilestones;
-(void)setGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(void)_beginAnimation;
-(long long)completionType;
-(void)_willAddChildTransaction:(id)arg1 ;
-(void)_didComplete;
-(void)_begin;
-(BOOL)removeMilestone:(id)arg1 ;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
-(void)_setupAnimation;
@end
