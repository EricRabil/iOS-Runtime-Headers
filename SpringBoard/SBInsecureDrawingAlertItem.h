/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBInsecureDrawingAlertItem : SBAlertItem {

	NSString* _processName;

}

@property (nonatomic,copy) NSString * processName;              //@synthesize processName=_processName - In the implementation block
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)processName;
-(BOOL)ignoreIfAlreadyDisplaying;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
@end

