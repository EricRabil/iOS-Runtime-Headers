/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIRemoteAlertHostInterface
@required
-(void)setWhitePointAdaptivityStyle:(long long)arg1;
-(void)dismiss;
-(void)dismissAndLockUIIfNecessary;
-(void)setAllowsMenuButtonDismissal:(BOOL)arg1;
-(void)setWallpaperTunnelActive:(BOOL)arg1;
-(void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
-(void)setAllowsAlertStacking:(BOOL)arg1;
-(void)setDesiredStatusBarStyleOverrides:(int)arg1;
-(void)setShouldDisableFadeInAnimation:(BOOL)arg1;
-(void)setIdleTimerDisabled:(BOOL)arg1 forReason:(id)arg2;
-(void)setShouldDismissOnUILock:(BOOL)arg1;
-(void)setDesiredHardwareButtonEvents:(long long)arg1;
-(void)setDismissalAnimationStyle:(long long)arg1;
-(void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;
-(void)setDesiredAutoLockDuration:(double)arg1;
-(void)setAllowsBanners:(BOOL)arg1;
-(void)setStatusBarHidden:(BOOL)arg1 withDuration:(double)arg2;

@end
