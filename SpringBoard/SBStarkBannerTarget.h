/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIBannerTargetImplementation.h>

@protocol SBStarkBannerTargetObserver;
@class NSHashTable, NSMutableSet, NSMutableArray, SBUIBannerContext, SBUISound, NSString;

@interface SBStarkBannerTarget : NSObject <SBUIBannerTargetImplementation> {

	id<SBStarkBannerTargetObserver> _observer;
	NSHashTable* _sources;
	BOOL _invalidated;
	NSMutableSet* _suspensionReasons;
	NSMutableArray* _pendedContexts;
	SBUIBannerContext* _currentContext;
	SBUISound* _currentSound;
	long long _displayAssertions;

}

@property (assign,nonatomic,__weak) id<SBStarkBannerTargetObserver> observer;                              //@synthesize observer=_observer - In the implementation block
@property (assign,getter=isPausedForUserInteraction,nonatomic) BOOL pausedForUserInteraction; 
@property (nonatomic,readonly) SBUIBannerContext * currentContext;                                         //@synthesize currentContext=_currentContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) void* bannerTargetIdentifier; 
@property (nonatomic,readonly) long long bannerTargetIdiom; 
-(void)noteContextCanceled:(id)arg1 ;
-(void)setSuspended:(BOOL)arg1 cancellingCurrent:(BOOL)arg2 forReason:(id)arg3 ;
-(void)setPausedForUserInteraction:(BOOL)arg1 ;
-(void)noteContext:(id)arg1 subActionSelected:(unsigned long long)arg2 ;
-(void)noteContextSelected:(id)arg1 ;
-(BOOL)isPausedForUserInteraction;
-(void)_dequeueWithOptions:(long long)arg1 dismissReason:(int)arg2 ;
-(BOOL)_isSuspendedForAssistant;
-(void)_dismissContext:(id)arg1 withOptions:(long long)arg2 dismissReason:(int)arg3 ;
-(void)_replaceIntervalElapsed:(id)arg1 ;
-(void)_dismissIntervalElapsed:(id)arg1 ;
-(void)_killIntervalElapsed:(id)arg1 ;
-(BOOL)_canDismissWithOptions:(long long)arg1 ;
-(BOOL)_canDequeueWithOptions:(long long)arg1 ;
-(BOOL)isSuspendedForReason:(id)arg1 ;
-(id)init;
-(BOOL)isSuspended;
-(void)dealloc;
-(void)invalidate;
-(void)setObserver:(id<SBStarkBannerTargetObserver>)arg1 ;
-(id<SBStarkBannerTargetObserver>)observer;
-(void*)bannerTargetIdentifier;
-(long long)bannerTargetIdiom;
-(void)registerSource:(id)arg1 ;
-(void)unregisterSource:(id)arg1 ;
-(void)modallyPresentBannerWithContext:(id)arg1 ;
-(BOOL)isShowingModalBanner;
-(void)signalSource:(id)arg1 ;
-(id)currentBannerContextForSource:(id)arg1 ;
-(void)dismissCurrentBannerContextForSource:(id)arg1 ;
-(void)cacheBannerForContext:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForContext:(id)arg1 ;
-(SBUIBannerContext *)currentContext;
@end

