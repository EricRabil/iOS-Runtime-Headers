/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLockScreenNotificationListDelegate <NSObject>
@required
-(void)authenticateForNotificationActionWithCompletion:(/*^block*/id)arg1;
-(void)removeCoordinatedPresentingController:(id)arg1;
-(void)addCoordinatedPresentingController:(id)arg1;
-(void)attemptToUnlockUIFromNotification;
-(void)presentFullscreenBulletinAlertWithItem:(id)arg1;
-(void)notificationListBecomingVisible:(BOOL)arg1;
-(void)modifyFullscreenBulletinAlertWithItem:(id)arg1;
-(void)dismissFullscreenBulletinAlertWithItem:(id)arg1 reason:(id)arg2;
-(id)lockScreenScrollView;
-(void)bannerEnablementChanged;

@end

