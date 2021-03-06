/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupProvisioningFieldsViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupDisambiguationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupBrowseProductsViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentCameraCaptureViewControllerDelegate.h>

@class PKPaymentSetupFindWithoutNumberFooterView, PKPaymentSetupBrowseProductsViewController, NSArray, NSString;

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate> {

	PKPaymentSetupFindWithoutNumberFooterView* _findWithoutNumberFooterView;
	PKPaymentSetupBrowseProductsViewController* _findWithoutNumberBrowser;
	NSArray* _pendingCameraCaptureObjects;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)footerView;
-(id)defaultHeaderViewTitle;
-(id)defaultHeaderViewSubTitle;
-(id)visibleFieldIdentifiers;
-(id)newPaymentEligibilityRequest;
-(void)_performRequirementsWithCompletion:(/*^block*/id)arg1 ;
-(id)readonlyFieldIdentifiers;
-(void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)defaultFields;
-(void)disambiguationViewController:(id)arg1 didSelectProduct:(id)arg2 ;
-(void)disambiguationViewControllerSetupLater:(id)arg1 ;
-(BOOL)_shouldUseInlineSecondaryProvisioningFlow;
-(id)_findWithoutNumberFooterView;
-(void)findCardWithoutNumber:(id)arg1 ;
-(void)_captureFromCamera:(id)arg1 ;
-(void)_cameraCaptureCancelButtonPressed:(id)arg1 ;
-(void)_dismissCameraCaptureViewController:(id)arg1 ;
-(void)updateFieldsModelWithCameraCaptureObjects:(id)arg1 ;
-(void)_performSecondaryWithCompletion:(/*^block*/id)arg1 ;
-(void)_performDisambiguationWithCompletion:(/*^block*/id)arg1 ;
-(void)_processPendingCameraCaptureObjects;
-(void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(void)_performInlineSecondaryWithCompletion:(/*^block*/id)arg1 ;
-(void)fieldCellEditableTextFieldValueDidChange:(id)arg1 ;
-(void)browseProductsViewController:(id)arg1 didSelectProduct:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)cameraCaptureViewControllerDidFail:(id)arg1 ;
-(void)cameraCaptureViewController:(id)arg1 didRecognizeObjects:(id)arg2 ;
@end

