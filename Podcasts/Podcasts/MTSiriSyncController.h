/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@protocol OS_dispatch_queue;
@class MTPropertyChangeQueryObserver, NSArray, NSObject;

@interface MTSiriSyncController : MTSingleton {

	BOOL _dirty;
	BOOL _running;
	MTPropertyChangeQueryObserver* _podcastsObserver;
	MTPropertyChangeQueryObserver* _stationsObserver;
	NSArray* _podcasts;
	NSArray* _stations;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) MTPropertyChangeQueryObserver * podcastsObserver;              //@synthesize podcastsObserver=_podcastsObserver - In the implementation block
@property (nonatomic,retain) MTPropertyChangeQueryObserver * stationsObserver;              //@synthesize stationsObserver=_stationsObserver - In the implementation block
@property (nonatomic,retain) NSArray * podcasts;                                            //@synthesize podcasts=_podcasts - In the implementation block
@property (nonatomic,retain) NSArray * stations;                                            //@synthesize stations=_stations - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,getter=isDirty,nonatomic) BOOL dirty;                                     //@synthesize dirty=_dirty - In the implementation block
@property (getter=isRunning,nonatomic,readonly) BOOL running;                               //@synthesize running=_running - In the implementation block
-(void)setPodcastsObserver:(MTPropertyChangeQueryObserver *)arg1 ;
-(MTPropertyChangeQueryObserver *)podcastsObserver;
-(void)setPodcasts:(NSArray *)arg1 ;
-(void)setStationsObserver:(MTPropertyChangeQueryObserver *)arg1 ;
-(MTPropertyChangeQueryObserver *)stationsObserver;
-(void)dumpPlists;
-(NSArray *)podcasts;
-(BOOL)dumpDatabasePlistForLibrary:(id)arg1 ;
-(BOOL)dumpDiffPlistForLibrary:(id)arg1 ;
-(BOOL)dumpNewDiffToFile:(id)arg1 library:(id)arg2 ;
-(id)_diffForSet:(id)arg1 deleteSet:(id)arg2 currentMap:(id)arg3 ;
-(id)init;
-(BOOL)isRunning;
-(void)start;
-(void)setDirty:(BOOL)arg1 ;
-(void)setupObservers;
-(NSArray *)stations;
-(void)setStations:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(BOOL)isDirty;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
