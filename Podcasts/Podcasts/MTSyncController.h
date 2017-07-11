/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MZKeyValueStoreControllerDelegate.h>
#import <Podcasts/MTReachabilityObserver.h>

@class IMUniversalPlaybackPositionStore, MTUniversalPlaybackPositionDataSource, NSString, NSOperationQueue, IMKeyValueStoreController;

@interface MTSyncController : NSObject <MZKeyValueStoreControllerDelegate, MTReachabilityObserver> {

	double _lastOperation;
	BOOL _uppSyncDirtyFlag;
	BOOL _running;
	BOOL _resyncWhenDone;
	BOOL _resetingToInitialState;
	IMUniversalPlaybackPositionStore* _UPPStore;
	MTUniversalPlaybackPositionDataSource* _UPPDataSource;
	NSString* _playlistSyncVersion;
	unsigned long long _backgroundTask;
	NSOperationQueue* _queue;
	IMKeyValueStoreController* _cloudSyncController;
	unsigned long long _uppSyncCount;
	unsigned long long _subscriptionSyncCount;
	unsigned long long _episodeSyncCount;
	unsigned long long _legacyEpisodeSyncCount;

}

@property (assign,nonatomic) unsigned long long backgroundTask;                                  //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IMUniversalPlaybackPositionStore * UPPStore;                        //@synthesize UPPStore=_UPPStore - In the implementation block
@property (nonatomic,retain) MTUniversalPlaybackPositionDataSource * UPPDataSource;              //@synthesize UPPDataSource=_UPPDataSource - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreController * cloudSyncController;                    //@synthesize cloudSyncController=_cloudSyncController - In the implementation block
@property (assign,nonatomic) unsigned long long uppSyncCount;                                    //@synthesize uppSyncCount=_uppSyncCount - In the implementation block
@property (assign,nonatomic) unsigned long long subscriptionSyncCount;                           //@synthesize subscriptionSyncCount=_subscriptionSyncCount - In the implementation block
@property (assign,nonatomic) unsigned long long episodeSyncCount;                                //@synthesize episodeSyncCount=_episodeSyncCount - In the implementation block
@property (assign,nonatomic) unsigned long long legacyEpisodeSyncCount;                          //@synthesize legacyEpisodeSyncCount=_legacyEpisodeSyncCount - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                                      //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL resyncWhenDone;                                                //@synthesize resyncWhenDone=_resyncWhenDone - In the implementation block
@property (assign,nonatomic) BOOL resetingToInitialState;                                        //@synthesize resetingToInitialState=_resetingToInitialState - In the implementation block
@property (assign,nonatomic) BOOL uppSyncDirtyFlag;                                              //@synthesize uppSyncDirtyFlag=_uppSyncDirtyFlag - In the implementation block
@property (nonatomic,retain) NSString * podcastSyncVersion; 
@property (nonatomic,retain) NSString * playlistSyncVersion;                                     //@synthesize playlistSyncVersion=_playlistSyncVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasAccountChangedSinceLastSync;
+(void)setAccountIdentifierForLastSync:(id)arg1 ;
+(id)accountIdentifierForLastSync;
+(void)mergeArray:(id)arg1 fromArray:(id)arg2 properties:(id)arg3 lookupKey:(id)arg4 updateBlock:(/*^block*/id)arg5 insertBlock:(/*^block*/id)arg6 deleteBlock:(/*^block*/id)arg7 ;
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)syncSubscriptions;
-(void)performUniversalPlaybackPositionSync;
-(void)reachabilityChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(BOOL)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3 ;
-(void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3 ;
-(void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2 ;
-(void)resetToInitialState;
-(void)scheduleEpisodeStatePutWithFeedUrls:(id)arg1 ;
-(void)scheduleEpisodeStateGetWithFeedUrls:(id)arg1 ;
-(void)bagDidLoad:(id)arg1 ;
-(void)setUPPDataSource:(MTUniversalPlaybackPositionDataSource *)arg1 ;
-(void)setUPPStore:(IMUniversalPlaybackPositionStore *)arg1 ;
-(IMUniversalPlaybackPositionStore *)UPPStore;
-(MTUniversalPlaybackPositionDataSource *)UPPDataSource;
-(void)updateAccountForLastSync;
-(void)setUppSyncCount:(unsigned long long)arg1 ;
-(void)setSubscriptionSyncCount:(unsigned long long)arg1 ;
-(void)setEpisodeSyncCount:(unsigned long long)arg1 ;
-(void)setLegacyEpisodeSyncCount:(unsigned long long)arg1 ;
-(void)enableAssetDeletionIfPossible:(unsigned long long)arg1 ;
-(BOOL)resyncWhenDone;
-(void)setResyncWhenDone:(BOOL)arg1 ;
-(BOOL)queueContainsOperationType:(int)arg1 ;
-(BOOL)canScheduleSyncRequest;
-(void)resetToInitialStateIfAccountHasChanged;
-(BOOL)UPPEnabled;
-(unsigned long long)uppSyncCount;
-(BOOL)isUserLoggedIn;
-(BOOL)hasAccountChangedSinceLastSync;
-(BOOL)resetingToInitialState;
-(void)syncSubscriptions:(int)arg1 ;
-(void)syncPlaylists:(int)arg1 ;
-(id)subscriptionKeys;
-(unsigned long long)subscriptionSyncCount;
-(void)enableAssetDeletionIfPossible;
-(unsigned long long)episodeSyncCount;
-(id)expandFeedUrls:(id)arg1 ;
-(BOOL)hasPodcastSyncVersion;
-(BOOL)hasPlaylistSyncVersion;
-(void)setResetingToInitialState:(BOOL)arg1 ;
-(void)resetPodcastSyncVersion;
-(void)resetPlaylistSyncVersion;
-(NSString *)podcastSyncVersion;
-(void)setPodcastSyncVersion:(NSString *)arg1 ;
-(NSString *)playlistSyncVersion;
-(void)setPlaylistSyncVersion:(NSString *)arg1 ;
-(BOOL)uppSyncDirtyFlag;
-(void)setUppSyncDirtyFlag:(BOOL)arg1 ;
-(IMKeyValueStoreController *)cloudSyncController;
-(void)setCloudSyncController:(IMKeyValueStoreController *)arg1 ;
-(unsigned long long)legacyEpisodeSyncCount;
-(void)startBackgroundTask;
-(void)endBackgroundTask;
-(id)init;
-(void)dealloc;
-(BOOL)isRunning;
-(void)start;
-(void)addOperation:(id)arg1 ;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)operationFinished:(id)arg1 ;
-(BOOL)isSyncing;
-(void)setRunning:(BOOL)arg1 ;
-(unsigned long long)backgroundTask;
-(void)setBackgroundTask:(unsigned long long)arg1 ;
@end
