/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class UABestAppSuggestion;

@interface _SBUABestAppSuggestion : SBBestAppSuggestion {

	UABestAppSuggestion* _appSuggestion;

}

@property (nonatomic,readonly) UABestAppSuggestion * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
-(UABestAppSuggestion *)appSuggestion;
-(BOOL)isCallContinuitySuggestion;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(id)initWithAppSuggestion:(id)arg1 ;
-(id)originatingDeviceIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)bundleIdentifier;
-(id)activityType;
-(id)uniqueIdentifier;
-(id)originatingDeviceType;
-(id)originatingDeviceName;
-(id)lastUpdateTime;
@end

