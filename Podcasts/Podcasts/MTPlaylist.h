/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <IMStoreUtil/IMMetricsDataSource.h>

@class NSString, NSSet, MTPodcastPlaylistSettings, NSOrderedSet;

@interface MTPlaylist : NSManagedObject <IMMetricsDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int containerOrder; 
@property (assign,nonatomic) long long downloadedCount; 
@property (assign,nonatomic) long long flags; 
@property (assign,nonatomic) double generatedDate; 
@property (assign,nonatomic) BOOL hidden; 
@property (assign,nonatomic) long long mediaLibraryId; 
@property (assign,nonatomic) long long parentMediaLibraryId; 
@property (assign,nonatomic) long long sortOrder; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long unplayedCount; 
@property (assign,nonatomic) double updatedDate; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * addedEpisodes; 
@property (nonatomic,retain) MTPodcastPlaylistSettings * defaultSettings; 
@property (nonatomic,retain) NSSet * deletedEpisodes; 
@property (nonatomic,retain) NSOrderedSet * episodes; 
@property (nonatomic,retain) NSOrderedSet * podcasts; 
@property (nonatomic,retain) NSOrderedSet * settings; 
+(id)topLevelPlaylistsExcludingFoldersPredicate;
+(id)insertNewPlaylistInManagedObjectContext:(id)arg1 ;
+(id)predicateForVisiblePlaylistWithUUID:(id)arg1 ;
+(id)predicateForFlag:(int)arg1 isTrue:(BOOL)arg2 ;
+(id)topLevelPlaylistsPredicate;
+(id)insertNewPlaylistInManagedObjectContext:(id)arg1 uuid:(id)arg2 defaultSettings:(id)arg3 ;
+(id)stringForContainerOrder:(int)arg1 short:(BOOL)arg2 ;
+(long long)getITunesPlaylistsCount;
+(id)containerOrderOptionArray:(BOOL)arg1 ;
+(id)containerOrderOptionValues;
+(id)sortDescriptors;
-(BOOL)updateUnplayedCount;
-(void)setIsItunesPlaylist:(BOOL)arg1 ;
-(void)setIsItunesSmartPlaylist:(BOOL)arg1 ;
-(void)setIsFolder:(BOOL)arg1 ;
-(void)setEpisodes:(NSOrderedSet *)arg1 ;
-(void)setPodcasts:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)podcasts;
-(void)setIncludesAllPodcasts:(BOOL)arg1 ;
-(BOOL)isItunesPlaylist;
-(BOOL)hasBeenSynced;
-(void)setHasBeenSynced:(BOOL)arg1 ;
-(id)nextEpisode;
-(void)setUngroupedList:(BOOL)arg1 ;
-(void)recalculateEpisodeCounts;
-(void)removeEpisode:(id)arg1 inBulkTransaction:(BOOL)arg2 ;
-(BOOL)includesAllPodcasts;
-(BOOL)isItunesSmartPlaylist;
-(BOOL)isUngroupedList;
-(void)removePodcast:(id)arg1 ;
-(void)removePodcastEpisodes:(id)arg1 shouldSave:(BOOL)arg2 ;
-(void)removeEpisodes:(id)arg1 ;
-(void)removeEpisode:(id)arg1 ;
-(id)imageWithSize:(CGSize)arg1 forEpisode:(id)arg2 ;
-(long long)getFolderSubPlaylistsCount;
-(id)metricsContentIdentifier;
-(id)metricsAdditionalData;
-(BOOL)isEditable;
-(id)detailViewController;
-(BOOL)isAutomatic;
-(void)forceUpdate;
-(void)setIsBuiltIn:(BOOL)arg1 ;
-(BOOL)isFolder;
-(BOOL)isBuiltIn;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
-(double)totalDuration;
-(void)setAutomatic:(BOOL)arg1 ;
@end

