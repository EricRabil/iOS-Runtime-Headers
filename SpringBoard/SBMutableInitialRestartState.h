/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBInitialRestartState.h>

@class UMUser, SBBootDefaults;

@interface SBMutableInitialRestartState : SBInitialRestartState

@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (assign,getter=isInLostMode,nonatomic) BOOL inLostMode; 
@property (assign,getter=isBlocked,nonatomic) BOOL blocked; 
@property (assign,nonatomic) BOOL requiresSetup; 
@property (assign,nonatomic) BOOL hasPasscodeSet; 
@property (assign,nonatomic) BOOL shouldNeverLock; 
@property (nonatomic,retain) UMUser * currentUser; 
@property (nonatomic,retain) SBBootDefaults * bootDefaults; 
@property (assign,getter=isForSimulator,nonatomic) BOOL forSimulator; 
@end

