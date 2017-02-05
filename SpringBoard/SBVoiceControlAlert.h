/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>
#import <SpringBoard/SBDashBoardExternalBehaviorProviding.h>

@class NSString;

@interface SBVoiceControlAlert : SBAlert <SBDashBoardExternalBehaviorProviding> {

	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	}  _voiceControlFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
+(id)pendingOrActiveAlert;
+(BOOL)shouldEnterVoiceControl;
+(BOOL)resetVoiceControlIfNecessary:(BOOL)arg1 ;
+(void)unregisterForAlerts;
+(void)bluetoothDeviceRequestedVoiceControl:(id)arg1 ;
+(void)bluetoothDeviceTerminatedVoiceControl:(id)arg1 ;
+(void)setNextRecognitionAudioInputPaths:(id)arg1 ;
+(BOOL)_bluetoothDevicesPickable;
+(void)_configureSession:(id)arg1 forAlert:(id)arg2 ;
+(void)_setNextRecognitionAudioInputPathForSession:(id)arg1 resetting:(BOOL)arg2 ;
+(void)registerForAlerts;
-(NSString *)dashBoardIdentifier;
-(void)_proximityChanged:(id)arg1 ;
-(void)cancelIfNotActivated;
-(double)autoDimTime;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(BOOL)allowsEventOnlySuspension;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)initFromMenuButton;
-(id)initFromWiredHeadsetButton;
-(void)handleHeadsetButtonUpFromActivation:(BOOL)arg1 ;
-(void)_resign;
-(id)initFromBluetoothDevice:(id)arg1 ;
-(void)_workspaceActivate;
-(void)_makeActive;
-(void)_setRoutingAttributesForWiredHeadset:(BOOL)arg1 ;
-(void)activateWhenReady;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)deactivate;
-(void)activate;
-(BOOL)recognitionSessionWillBeginAction:(id)arg1 ;
-(long long)idleTimerMode;
-(BOOL)handleMenuButtonTap;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(id)_session;
-(long long)participantState;
@end

