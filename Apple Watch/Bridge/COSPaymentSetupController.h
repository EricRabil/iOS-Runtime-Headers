/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/PKPaymentSetupViewControllerDelegate.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class PKPaymentSetupAssistantRegistrationViewController, NSString;

@interface COSPaymentSetupController : NSObject <PKPaymentSetupViewControllerDelegate, COSBuddyController> {

	id<COSBuddyControllerDelegate> _delegate;
	PKPaymentSetupAssistantRegistrationViewController* _registrationController;

}

@property (nonatomic,retain) PKPaymentSetupAssistantRegistrationViewController * registrationController;              //@synthesize registrationController=_registrationController - In the implementation block
@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1 ;
-(id)holdActivityIdentifier;
-(PKPaymentSetupAssistantRegistrationViewController *)registrationController;
-(void)setRegistrationController:(PKPaymentSetupAssistantRegistrationViewController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(id<COSBuddyControllerDelegate>)delegate;
-(id)viewController;
-(BOOL)controllerAllowsNavigatingBackTo;
-(BOOL)holdBeforeDisplaying;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
@end

