/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBFDeviceBlockTimer, NSString;

@interface SBLockScreenDeviceBlockViewController : SBLockOverlayViewController {

	SBFDeviceBlockTimer* _blockTimer;

}

@property (nonatomic,retain) SBFDeviceBlockTimer * blockTimer;                   //@synthesize blockTimer=_blockTimer - In the implementation block
@property (nonatomic,__weak,readonly) NSString * slideToUnlockText; 
-(SBFDeviceBlockTimer *)blockTimer;
-(void)setBlockTimer:(SBFDeviceBlockTimer *)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)start;
-(NSString *)slideToUnlockText;
@end
