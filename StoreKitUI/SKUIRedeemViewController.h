/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/SKUIRedeemIdDelegate.h>
#import <libobjc.A.dylib/SKUIRedeemStepDelegate.h>

@class SKUIClientContext, NSString, NSOperationQueue, SKUIRedeemPreflightOperation, SKUIRedeemConfiguration, SKUIRedeemStepViewController, UIBarButtonItem;

@interface SKUIRedeemViewController : UINavigationController <SKUIRedeemIdDelegate, SKUIRedeemStepDelegate> {

	BOOL _attempsAutomaticRedeem;
	char _cameraRedeemEnabled;
	long long _category;
	SKUIClientContext* _clientContext;
	NSString* _initialCode;
	NSOperationQueue* _operationQueue;
	SKUIRedeemPreflightOperation* _preflightOperation;
	SKUIRedeemConfiguration* _redeemConfiguration;
	SKUIRedeemStepViewController* _inputViewController;
	long long _initialBarStyle;
	UIBarButtonItem* _cancelButtonItem;

}

@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;              //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,readonly) long long category;                            //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL attempsAutomaticRedeem;                     //@synthesize attempsAutomaticRedeem=_attempsAutomaticRedeem - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                            //@synthesize initialCode=_initialCode - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;               //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;               //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)category;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)redeemIdViewControllerDidCancel:(id)arg1 ;
-(void)redeemIdViewController:(id)arg1 submittedWithFields:(id)arg2 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(NSString *)initialCode;
-(void)_performInitialRedeemOperation;
-(UIBarButtonItem *)cancelButtonItem;
-(void)_showNationalIdVerificationPage;
-(void)_showNationalIdLoadingPage;
-(void)_executeIdValidationOperationWithFields:(id)arg1 ;
-(id)_newInputViewController;
-(BOOL)_redeemRequiresNationalId;
-(void)_executeRequiresIdValidationOperation;
-(void)_executePreflightOperationForcesAuthentication:(BOOL)arg1 ;
-(BOOL)attempsAutomaticRedeem;
-(void)_finishPreflightWithResult:(id)arg1 ;
-(void)_loadInputViewController;
-(void)_attemptAutomaticRedeemWithMetadata:(id)arg1 ;
-(void)_showInputViewController;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setInitialCode:(NSString *)arg1 ;
-(void)redeemStepViewControllerShouldValidateNationalID:(id)arg1 ;
-(void)redeemAgainAnimated:(BOOL)arg1 ;
-(void)setAttempsAutomaticRedeem:(BOOL)arg1 ;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
@end

