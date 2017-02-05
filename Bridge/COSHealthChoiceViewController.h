/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSOptinViewController.h>
#import <Bridge/COSBuddyController.h>

@class NSString;

@interface COSHealthChoiceViewController : COSOptinViewController <COSBuddyController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)controllerNeedsToRun;
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
-(id)init;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)titleString;
-(id)imageResource;
@end
