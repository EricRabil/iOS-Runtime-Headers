/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:02 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUISettingsEditTransactionDelegate;
@class NSSet, NSLock, NSMutableSet;

@interface SKUISettingsEditTransaction : NSObject {

	NSSet* _all;
	/*^block*/id _commitBlock;
	NSLock* _lock;
	NSMutableSet* _pending;
	BOOL _success;
	id<SKUISettingsEditTransactionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISettingsEditTransactionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUISettingsEditTransactionDelegate>)arg1 ;
-(id<SKUISettingsEditTransactionDelegate>)delegate;
-(BOOL)isValid;
-(void)commitTransaction;
-(BOOL)isCommiting;
-(void)cancelTransaction;
-(void)rollbackTransaction;
-(void)beginTransaction;
-(id)initWithSettingDescriptions:(id)arg1 ;
-(void)_delegateWillBeginTransaction;
-(void)_delegateDidFailTransaction;
-(void)_delegateWillCommitTransaction;
-(void)_settingDescription:(id)arg1 completedWithSuccess:(BOOL)arg2 ;
-(void)_delegateDidCompleteTransaction;
-(void)_finalizeCommit;
@end

