/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:56:17 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface NPSManager : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 ;
-(NSXPCConnection *)xpcConnection;
-(void)unsafe_invalidate;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 ;
-(void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end

