/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTLibraryChangeNotifier.h>
#import <Podcasts/MPPlayableContentDataSource.h>
#import <libobjc.A.dylib/MPPlayableContentDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, MTPlayableContentItem, MTLibraryChanges, NSObject, NSMutableArray, NSMapTable, NSMutableDictionary, MTUuidQueryObserver, NSNumber;

@interface MTPlayableContentManager : NSObject <MTLibraryChangeNotifier, MPPlayableContentDataSource, MPPlayableContentDelegate> {

	NSString* _derivedPropertyCallbackToken;
	MTPlayableContentItem* _rootItem;
	MTLibraryChanges* _libraryChanges;
	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _forcedReloadData;
	BOOL _lastDumpFailed;
	BOOL _reloadingData;
	BOOL _libraryChangedWhileReloading;
	BOOL _running;
	BOOL _contentActive;
	BOOL _hasStations;
	BOOL _hasMiniPlayer;
	NSMutableArray* _storeTopPodcastsChart;
	NSMapTable* _contentItems;
	NSMutableDictionary* _uuidCache;
	MTPlayableContentItem* _topLevelMiniPlayer;
	MTPlayableContentItem* _topLevelUnplayed;
	MTPlayableContentItem* _topLevelPodcasts;
	MTPlayableContentItem* _topLevelStations;
	MTPlayableContentItem* _topLevelTopCharts;
	MTUuidQueryObserver* _countObserverForPodcasts;
	MTUuidQueryObserver* _countObserverForStations;
	MTUuidQueryObserver* _countObserverForUnplayed;
	NSNumber* _countOfPodcasts;
	NSNumber* _countOfStations;
	NSNumber* _countOfUnplayed;

}

@property (nonatomic,retain) NSMutableArray * storeTopPodcastsChart;                      //@synthesize storeTopPodcastsChart=_storeTopPodcastsChart - In the implementation block
@property (nonatomic,retain) NSMapTable * contentItems;                                   //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * uuidCache;                             //@synthesize uuidCache=_uuidCache - In the implementation block
@property (assign,getter=isReloadingData,nonatomic) BOOL reloadingData;                   //@synthesize reloadingData=_reloadingData - In the implementation block
@property (assign,nonatomic) BOOL libraryChangedWhileReloading;                           //@synthesize libraryChangedWhileReloading=_libraryChangedWhileReloading - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;                               //@synthesize running=_running - In the implementation block
@property (assign,getter=isContentActive,nonatomic) BOOL contentActive;                   //@synthesize contentActive=_contentActive - In the implementation block
@property (assign,nonatomic) BOOL hasStations;                                            //@synthesize hasStations=_hasStations - In the implementation block
@property (assign,nonatomic) BOOL hasMiniPlayer;                                          //@synthesize hasMiniPlayer=_hasMiniPlayer - In the implementation block
@property (nonatomic,retain) MTPlayableContentItem * topLevelMiniPlayer;                  //@synthesize topLevelMiniPlayer=_topLevelMiniPlayer - In the implementation block
@property (nonatomic,retain) MTPlayableContentItem * topLevelUnplayed;                    //@synthesize topLevelUnplayed=_topLevelUnplayed - In the implementation block
@property (nonatomic,retain) MTPlayableContentItem * topLevelPodcasts;                    //@synthesize topLevelPodcasts=_topLevelPodcasts - In the implementation block
@property (nonatomic,retain) MTPlayableContentItem * topLevelStations;                    //@synthesize topLevelStations=_topLevelStations - In the implementation block
@property (nonatomic,retain) MTPlayableContentItem * topLevelTopCharts;                   //@synthesize topLevelTopCharts=_topLevelTopCharts - In the implementation block
@property (nonatomic,retain) MTUuidQueryObserver * countObserverForPodcasts;              //@synthesize countObserverForPodcasts=_countObserverForPodcasts - In the implementation block
@property (nonatomic,retain) MTUuidQueryObserver * countObserverForStations;              //@synthesize countObserverForStations=_countObserverForStations - In the implementation block
@property (nonatomic,retain) MTUuidQueryObserver * countObserverForUnplayed;              //@synthesize countObserverForUnplayed=_countObserverForUnplayed - In the implementation block
@property (nonatomic,retain) NSNumber * countOfPodcasts;                                  //@synthesize countOfPodcasts=_countOfPodcasts - In the implementation block
@property (nonatomic,retain) NSNumber * countOfStations;                                  //@synthesize countOfStations=_countOfStations - In the implementation block
@property (nonatomic,retain) NSNumber * countOfUnplayed;                                  //@synthesize countOfUnplayed=_countOfUnplayed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)context:(id)arg1 didInsertObjects:(id)arg2 ;
-(void)context:(id)arg1 didUpdateObjects:(id)arg2 ;
-(void)context:(id)arg1 didDeleteObjects:(id)arg2 ;
-(id)_diffForSet:(id)arg1 deleteSet:(id)arg2 currentMap:(id)arg3 ;
-(void)startObserveringCounts;
-(void)nowPlayingItemDidChange:(id)arg1 ;
-(void)updateMiniPlayerItem;
-(void)forceReloadData;
-(void)_loadChildrenIfNeeded:(id)arg1 ;
-(void)setContentActive:(BOOL)arg1 ;
-(void)loadTopPodcastsChartsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)_isIndexPathForTogglePlayState:(id)arg1 ;
-(void)_togglePlayStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_childOfItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_stationUuidForStationIndex:(unsigned long long)arg1 ;
-(BOOL)hasMiniPlayer;
-(MTPlayableContentItem *)topLevelUnplayed;
-(MTPlayableContentItem *)topLevelMiniPlayer;
-(BOOL)isReloadingData;
-(void)setLibraryChangedWhileReloading:(BOOL)arg1 ;
-(void)reloadDataAfterDelay;
-(BOOL)libraryChangedWhileReloading;
-(void)libraryChanged:(id)arg1 ;
-(void)setReloadingData:(BOOL)arg1 ;
-(BOOL)rootItemNeedsFullReload;
-(BOOL)dataForSiriHasChanged;
-(void)_destroyPlayableContentTree;
-(void)reloadPlayableContentItemsForUpatedEntities:(id)arg1 ;
-(BOOL)dumpPlistForRootItem;
-(BOOL)dumpDiffForRootItem;
-(void)setTopLevelUnplayed:(MTPlayableContentItem *)arg1 ;
-(void)setTopLevelPodcasts:(MTPlayableContentItem *)arg1 ;
-(void)setTopLevelStations:(MTPlayableContentItem *)arg1 ;
-(void)setTopLevelTopCharts:(MTPlayableContentItem *)arg1 ;
-(BOOL)shouldReloadAllDataForUpdatedPodcastUuids:(id)arg1 ;
-(BOOL)shouldReloadAllDataForUpdatedStationUuids:(id)arg1 ;
-(BOOL)isPropertyWithName:(id)arg1 ofCachedObjectWithUuid:(id)arg2 equalToValue:(id)arg3 ;
-(void)updatePodcastContentItem:(id)arg1 ;
-(void)updateStationContentItem:(id)arg1 ;
-(void)updateEpisodeContentItem:(id)arg1 ;
-(void)updatePlayableContentItem:(id)arg1 withPodcast:(id)arg2 ;
-(void)updatePlayableContentItem:(id)arg1 withStation:(id)arg2 ;
-(void)updatePlayableContentItem:(id)arg1 withEpisode:(id)arg2 ;
-(MTPlayableContentItem *)topLevelPodcasts;
-(id)createTopLevelPodcastsItem;
-(MTPlayableContentItem *)topLevelStations;
-(id)createTopLevelStationsItem;
-(id)_rootItemForSiri;
-(id)dumpPlistTraversal:(id)arg1 ;
-(BOOL)dumpNewDiffToFile:(id)arg1 podcastItems:(id)arg2 stationsItem:(id)arg3 ;
-(id)_rootItem;
-(id)_createRootItem;
-(BOOL)hasNowPlayingItem;
-(void)setHasMiniPlayer:(BOOL)arg1 ;
-(void)setTopLevelMiniPlayer:(MTPlayableContentItem *)arg1 ;
-(void)updateSubtitleForTopLevelUnplayed;
-(void)updateSubtitleForTopLevelPodcasts;
-(void)updateSubtitleForTopLevelStations;
-(BOOL)hasStations;
-(MTPlayableContentItem *)topLevelTopCharts;
-(id)_createChildrenItemsForTopCharts;
-(id)_createEpisodeItemUnsafe:(id)arg1 ;
-(id)_createSavedItemForPodcastUuid:(id)arg1 ;
-(id)_subtitleForEpisode:(id)arg1 ;
-(void)cacheKeys:(id)arg1 forObject:(id)arg2 withUuid:(id)arg3 ;
-(void)invalidatePlayableContentForObjects:(id)arg1 andChangeType:(int)arg2 ;
-(void)setCountObserverForUnplayed:(MTUuidQueryObserver *)arg1 ;
-(MTUuidQueryObserver *)countObserverForUnplayed;
-(void)setCountOfUnplayed:(NSNumber *)arg1 ;
-(void)setCountObserverForPodcasts:(MTUuidQueryObserver *)arg1 ;
-(MTUuidQueryObserver *)countObserverForPodcasts;
-(void)setCountOfPodcasts:(NSNumber *)arg1 ;
-(void)setCountObserverForStations:(MTUuidQueryObserver *)arg1 ;
-(MTUuidQueryObserver *)countObserverForStations;
-(void)setCountOfStations:(NSNumber *)arg1 ;
-(void)setHasStations:(BOOL)arg1 ;
-(NSNumber *)countOfUnplayed;
-(NSNumber *)countOfPodcasts;
-(NSNumber *)countOfStations;
-(void)invalidateImageCacheForObjects:(id)arg1 ;
-(void)_playStationAtIndex:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_podcastUuidForPodcastIndex:(unsigned long long)arg1 ;
-(id)_createEpisodeItem:(id)arg1 ;
-(NSMutableArray *)storeTopPodcastsChart;
-(void)setStoreTopPodcastsChart:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)uuidCache;
-(void)setUuidCache:(NSMutableDictionary *)arg1 ;
-(BOOL)isContentActive;
-(void)setContentItems:(NSMapTable *)arg1 ;
-(NSMapTable *)contentItems;
-(id)init;
-(void)dealloc;
-(void)reloadData;
-(id)copy;
-(BOOL)isRunning;
-(void)start;
-(id)_itemAtIndexPath:(id)arg1 ;
-(void)playableContentManager:(id)arg1 initiatePlaybackOfContentItemAtIndexPath:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)playableContentManager:(id)arg1 initializePlaybackQueueWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)contentItemAtIndexPath:(id)arg1 ;
-(BOOL)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1 ;
-(long long)numberOfChildItemsAtIndexPath:(id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
@end

