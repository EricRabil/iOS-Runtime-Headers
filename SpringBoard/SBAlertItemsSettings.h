/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@interface SBAlertItemsSettings : SBUISettings {

	BOOL _disableBBHandlers;
	long long _testItemToken;

}

@property (assign,nonatomic) BOOL disableBBHandlers;               //@synthesize disableBBHandlers=_disableBBHandlers - In the implementation block
@property (assign,nonatomic) long long testItemToken;              //@synthesize testItemToken=_testItemToken - In the implementation block
+(id)newTestItemForToken:(long long)arg1 ;
+(id)settingsControllerModule;
-(BOOL)disableBBHandlers;
-(long long)testItemToken;
-(void)setDisableBBHandlers:(BOOL)arg1 ;
-(void)setTestItemToken:(long long)arg1 ;
-(void)setDefaultValues;
@end
