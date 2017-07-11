/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:34 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBDisplay <NSObject,SBDisplaySettings>
@required
-(BOOL)allowsEventOnlySuspension;
-(long long)starkStatusBarStyle;
-(id)statusBarStyleRequest;
-(id)effectiveStatusBarStyleRequest;
-(BOOL)suppressesBanners;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesControlCenter;
-(id)copyDisplaySettings;
-(long long)statusBarStyle;
-(void)deactivate;
-(void)activate;

@end
