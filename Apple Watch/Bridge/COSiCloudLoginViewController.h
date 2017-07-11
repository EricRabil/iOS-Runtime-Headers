/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:10 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSAppleIDLoginViewController.h>

@class ACAccount, NSString;

@interface COSiCloudLoginViewController : COSAppleIDLoginViewController {

	ACAccount* _account;
	NSString* _detailTextKey;
	BOOL _hasCheckedStockholm;

}
+(BOOL)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1 ;
-(void)stockholmSupportedInGizmoRegion:(BOOL)arg1 ;
-(id)detailTextKeyForActivationLockEnabled:(BOOL)arg1 findMyWatchSupported:(BOOL)arg2 stockholmSupported:(BOOL)arg3 ;
-(void)checkIfCanReleaseHold;
-(void)loggedInSuccessfully;
-(id)holdActivityIdentifier;
-(void)silentSignInStateChanged:(id)arg1 ;
-(void)markEndOfHoldActivity;
-(BOOL)allowSkipping;
-(id)performanceMonitorActivityName;
-(unsigned long long)performanceMonitorAggTiming;
-(id)activationHoldActivityIdentifier;
-(void)signInFailedWithError:(id)arg1 ;
-(void)didEstablishHold;
-(void)finishedUpdatingAppleAccountProperties;
-(void)finishedActivating;
-(id)init;
-(void)dealloc;
-(id)detailText;
-(id)titleString;
-(id)account;
-(BOOL)controllerAllowsNavigatingBackTo;
-(BOOL)holdBeforeDisplaying;
@end
