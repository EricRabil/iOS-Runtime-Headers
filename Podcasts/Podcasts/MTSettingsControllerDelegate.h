/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTSettingsControllerDelegate <NSObject>
@required
-(void)settingsController:(id)arg1 reloadedGroupWithIdentifier:(id)arg2;
-(void)settingsController:(id)arg1 addedGroup:(id)arg2 atIndex:(long long)arg3;
-(void)settingsController:(id)arg1 removedGroupAtIndex:(long long)arg2;
-(void)settingsController:(id)arg1 removedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3;
-(void)settingsController:(id)arg1 updatedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3;

@end

