/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableDictionary;

@interface SBRemoteViewsController : NSObject {

	NSMutableDictionary* _registeredRemoteViewInfos;
	NSMutableDictionary* _unregisteredRemoteViewInfos;

}
+(id)sharedInstance;
-(void)unregisterRemoteViewsForApplication:(id)arg1 ;
-(void)registerRemoteContextID:(unsigned)arg1 forIdentifier:(id)arg2 opaque:(BOOL)arg3 size:(CGSize)arg4 application:(id)arg5 ;
-(void)unregisterRemoteIdentifier:(id)arg1 application:(id)arg2 ;
-(void)unregisterProxyRemoteView:(id)arg1 ;
-(void)_sequesterProxyRemoteView:(id)arg1 ;
-(id)_newProxyRemoteViewForIdentifier:(id)arg1 ;
-(id)proxyRemoteViewForIdentifier:(id)arg1 ;
-(id)init;
@end

