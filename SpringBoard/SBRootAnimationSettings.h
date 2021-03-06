/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@class SBReducedMotionFadeSettings, SBUnlockSettings, SBCenterAppLaunchSettings, SBCenterAppSuspendSettings, SBCrossfadeAppLaunchSettings, SBCrossfadeAppSuspendSettings, SBFolderOpenSettings, SBFolderCloseSettings;

@interface SBRootAnimationSettings : SBUISettings {

	SBReducedMotionFadeSettings* _reducedMotionSettings;
	SBUnlockSettings* _unlockSettings;
	SBCenterAppLaunchSettings* _centerLaunchSettings;
	SBCenterAppSuspendSettings* _centerSuspendSettings;
	SBCrossfadeAppLaunchSettings* _crossfadeLaunchSettings;
	SBCrossfadeAppSuspendSettings* _crossfadeSuspendSettings;
	double _maxAppSuspendHintProgress;
	SBFolderOpenSettings* _folderOpenSettings;
	SBFolderCloseSettings* _folderCloseSettings;
	double _maxFolderCloseHintProgress;

}

@property (retain) SBReducedMotionFadeSettings * reducedMotionSettings;                   //@synthesize reducedMotionSettings=_reducedMotionSettings - In the implementation block
@property (retain) SBUnlockSettings * unlockSettings;                                     //@synthesize unlockSettings=_unlockSettings - In the implementation block
@property (retain) SBCenterAppLaunchSettings * centerLaunchSettings;                      //@synthesize centerLaunchSettings=_centerLaunchSettings - In the implementation block
@property (retain) SBCenterAppSuspendSettings * centerSuspendSettings;                    //@synthesize centerSuspendSettings=_centerSuspendSettings - In the implementation block
@property (retain) SBCrossfadeAppLaunchSettings * crossfadeLaunchSettings;                //@synthesize crossfadeLaunchSettings=_crossfadeLaunchSettings - In the implementation block
@property (retain) SBCrossfadeAppSuspendSettings * crossfadeSuspendSettings;              //@synthesize crossfadeSuspendSettings=_crossfadeSuspendSettings - In the implementation block
@property (assign) double maxAppSuspendHintProgress;                                      //@synthesize maxAppSuspendHintProgress=_maxAppSuspendHintProgress - In the implementation block
@property (retain) SBFolderOpenSettings * folderOpenSettings;                             //@synthesize folderOpenSettings=_folderOpenSettings - In the implementation block
@property (retain) SBFolderCloseSettings * folderCloseSettings;                           //@synthesize folderCloseSettings=_folderCloseSettings - In the implementation block
@property (assign) double maxFolderCloseHintProgress;                                     //@synthesize maxFolderCloseHintProgress=_maxFolderCloseHintProgress - In the implementation block
+(id)settingsControllerModule;
-(SBReducedMotionFadeSettings *)reducedMotionSettings;
-(SBCenterAppSuspendSettings *)centerSuspendSettings;
-(void)setMaxAppSuspendHintProgress:(double)arg1 ;
-(void)setMaxFolderCloseHintProgress:(double)arg1 ;
-(void)setReducedMotionSettings:(SBReducedMotionFadeSettings *)arg1 ;
-(SBUnlockSettings *)unlockSettings;
-(void)setUnlockSettings:(SBUnlockSettings *)arg1 ;
-(SBCenterAppLaunchSettings *)centerLaunchSettings;
-(void)setCenterLaunchSettings:(SBCenterAppLaunchSettings *)arg1 ;
-(void)setCenterSuspendSettings:(SBCenterAppSuspendSettings *)arg1 ;
-(SBCrossfadeAppLaunchSettings *)crossfadeLaunchSettings;
-(void)setCrossfadeLaunchSettings:(SBCrossfadeAppLaunchSettings *)arg1 ;
-(SBCrossfadeAppSuspendSettings *)crossfadeSuspendSettings;
-(void)setCrossfadeSuspendSettings:(SBCrossfadeAppSuspendSettings *)arg1 ;
-(double)maxAppSuspendHintProgress;
-(SBFolderOpenSettings *)folderOpenSettings;
-(void)setFolderOpenSettings:(SBFolderOpenSettings *)arg1 ;
-(SBFolderCloseSettings *)folderCloseSettings;
-(void)setFolderCloseSettings:(SBFolderCloseSettings *)arg1 ;
-(double)maxFolderCloseHintProgress;
-(void)setDefaultValues;
@end

