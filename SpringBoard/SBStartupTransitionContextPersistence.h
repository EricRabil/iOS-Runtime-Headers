/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBBootDefaults, UMUser;

@interface SBStartupTransitionContextPersistence : NSObject {

	SBBootDefaults* _bootDefaults;
	UMUser* _user;

}
-(id)initWithBootDefaults:(id)arg1 user:(id)arg2 ;
-(id)readTransitionContext;
-(void)saveContext:(id)arg1 ;
@end

