/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBDaemonHandler : NSObject
+(BOOL)addRequest:(id)arg1 forKey:(id)arg2 forDaemonPid:(int)arg3 ;
+(void)removeRequestForKey:(id)arg1 forDaemonPid:(int)arg2 ;
+(void)noteDaemonCanceled:(id)arg1 ;
+(void)initialize;
+(id)stateDescription;
@end

