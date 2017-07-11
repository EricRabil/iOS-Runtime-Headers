/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:55 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _NMRClient : NSObject {

	NSXPCConnection* _serverConnection;
	NSObject*<OS_dispatch_queue> _serverConnectionQueue;

}
+(id)sharedClient;
-(id)init;
-(id)_proxy;
-(void)refreshMediaRemoteStateIfNecessary;
-(void)sendMediaRemoteCommand:(unsigned)arg1 withCommandOptions:(id)arg2 commandResultHandler:(/*^block*/id)arg3 ;
-(void)prewarmCompanionSystemMusicApp;
-(void)fetchCompanionCloudAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchCompanionSpecializedQueueInfoWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fetchTrackAssetAvailabilityForTrackPID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
