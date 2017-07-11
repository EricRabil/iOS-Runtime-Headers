/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:34 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>
#import <SpringBoard/SBMesaUnlockTriggerDelegate.h>

@class SBDashBoardViewController, SBMesaUnlockTrigger, NSString;

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger <SBMesaUnlockTriggerDelegate> {

	SBDashBoardViewController* _dbvc;
	SBMesaUnlockTrigger* _baseTrigger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)bioUnlock;
-(void)screenOff;
-(void)significantUserInteractionOccurred;
-(void)menuButtonDown;
-(void)menuButtonUp;
-(void)fingerOn;
-(void)fingerOff;
-(void)mesaUnlockTriggerFired:(id)arg1 ;
-(id)initWithDashBoardViewController:(id)arg1 baseTrigger:(id)arg2 ;
@end
