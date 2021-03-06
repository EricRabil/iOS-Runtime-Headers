/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>
#import <Bridge/COSBuddyController.h>

@class UILabel, NSString;

@interface COSPasscodeCreateViewController : COSSetupPageViewController <COSBuddyController> {

	UILabel* _instructionLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)passcodeCreationComplete;
-(BOOL)isComplex;
-(void)removeFromNavHierarchyFrom:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)titleString;
-(void)_updateLayout;
-(BOOL)controllerAllowsNavigatingBackTo;
-(void)back:(id)arg1 ;
@end

