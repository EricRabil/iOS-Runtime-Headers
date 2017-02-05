/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface COSFindMyController : NSObject
+(BOOL)isDeviceLocatorEnabled;
+(void)recordShowingActivationLockDetailsForPairingDevice;
+(BOOL)enabledDeviceLocatorForCompanion;
+(BOOL)allowsMarkAsMissingForUDID:(id)arg1 ;
+(id)usernameForAccount;
-(void)authenticateAccountActionWithMessage:(id)arg1 buttonTitle:(id)arg2 presentingViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)disableActivationLockForUDID:(id)arg1 messageString:(id)arg2 buttonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)markAsMissingForUDID:(id)arg1 messageString:(id)arg2 buttonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(/*^block*/id)arg5 ;
@end
