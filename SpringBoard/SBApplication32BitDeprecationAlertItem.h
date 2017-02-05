/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem {

	SBApplication* _associatedDisplay;
	/*^block*/id _manualDismissalHandler;

}

@property (assign,nonatomic,__weak) SBApplication * associatedDisplay;              //@synthesize associatedDisplay=_associatedDisplay - In the implementation block
@property (nonatomic,copy) id manualDismissalHandler;                               //@synthesize manualDismissalHandler=_manualDismissalHandler - In the implementation block
-(id)initWithApplication:(id)arg1 dismissalHandler:(/*^block*/id)arg2 ;
-(void)_displayDeactivated:(id)arg1 ;
-(void)_setAssociatedDisplay:(id)arg1 ;
-(SBApplication *)associatedDisplay;
-(void)setAssociatedDisplay:(SBApplication *)arg1 ;
-(id)manualDismissalHandler;
-(void)setManualDismissalHandler:(id)arg1 ;
-(id)_actions;
-(id)_title;
-(id)_message;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end

