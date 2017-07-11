/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <libobjc.A.dylib/FBSynchronizedTransaction.h>

@protocol FBSynchronizedTransactionDelegate;
@class NSString;

@interface SBExternalDisplayWorkspaceSlaveTransaction : SBWorkspaceTransaction <FBSynchronizedTransaction> {

	id<FBSynchronizedTransactionDelegate> _synchronizationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;              //@synthesize synchronizationDelegate=_synchronizationDelegate - In the implementation block
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_doIt;
-(void)_begin;
-(id<FBSynchronizedTransactionDelegate>)synchronizationDelegate;
-(void)performSynchronizedCommit;
-(BOOL)isReadyForSynchronizedCommit;
-(void)setSynchronizationDelegate:(id<FBSynchronizedTransactionDelegate>)arg1 ;
-(void)_doWork;
@end
