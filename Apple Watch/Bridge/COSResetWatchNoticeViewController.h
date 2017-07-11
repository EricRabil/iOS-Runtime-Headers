/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSOptinViewController.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface COSResetWatchNoticeViewController : COSOptinViewController {

	NSObject*<OS_dispatch_source> _discoveryTimer;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> discoveryTimer;              //@synthesize discoveryTimer=_discoveryTimer - In the implementation block
+(BOOL)controllerNeedsToRun;
-(void)applyConfirmedOptin:(BOOL)arg1 ;
-(id)detailString;
-(void)selectedOptinChoice:(id)arg1 ;
-(id)suggestedButtonString;
-(id)alternateButtonString;
-(id)aboutButtonString;
-(id)detailTitleString;
-(void)selectedAboutDetail:(id)arg1 ;
-(BOOL)legacyButtonStyles;
-(id)moreOptionsButtonString;
-(void)selectedMoreOptions:(id)arg1 ;
-(void)discoveredAdvertisingWatch:(id)arg1 ;
-(void)cancelDiscoveryTimer;
-(void)beginDiscoveryTimer;
-(NSObject*<OS_dispatch_source>)discoveryTimer;
-(void)setDiscoveryTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)titleString;
-(id)imageResource;
@end
