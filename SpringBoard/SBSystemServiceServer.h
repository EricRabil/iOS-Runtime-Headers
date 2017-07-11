/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>

@protocol SBSystemServiceServerBiometricsDelegate, SBSystemServiceServerHardwareButtonDelegate;
@interface SBSystemServiceServer : FBSystemServiceFacility {

	id<SBSystemServiceServerBiometricsDelegate> _biometricsDelegate;
	id<SBSystemServiceServerHardwareButtonDelegate> _hardwareButtonDelegate;

}

@property (assign,nonatomic,__weak) id<SBSystemServiceServerBiometricsDelegate> biometricsDelegate;                      //@synthesize biometricsDelegate=_biometricsDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<SBSystemServiceServerHardwareButtonDelegate> hardwareButtonDelegate;              //@synthesize hardwareButtonDelegate=_hardwareButtonDelegate - In the implementation block
+(id)sharedInstance;
-(void)setHardwareButtonDelegate:(id<SBSystemServiceServerHardwareButtonDelegate>)arg1 ;
-(id<SBSystemServiceServerHardwareButtonDelegate>)hardwareButtonDelegate;
-(void)_handleBiometricsFetchUnlockCredentialSetMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleHardwareButtonAcquireAssertionMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleHardwareButtonSetPressEventMask:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleHardwareButtonSetHapticType:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleHardwareButtonGetHapticType:(id)arg1 fromClient:(id)arg2 ;
-(id<SBSystemServiceServerBiometricsDelegate>)biometricsDelegate;
-(void)setBiometricsDelegate:(id<SBSystemServiceServerBiometricsDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
@end
