/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTPreferences : NSObject
+(BOOL)copySettingsToSharedContainer;
+(BOOL)_copyUserDefaultToSharedContainer:(id)arg1 synchronize:(BOOL)arg2 ;
+(void)moveUserDefaultToSharedContainer:(id)arg1 ;
+(id)sharedUserDefaults;
+(void)registerDefaults;
+(id)_defaultSettings;
@end
