/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPlayerManifest.h>

@class NSString, NSArray;

@interface MTBaseEpisodeListManifest : MTPlayerManifest {

	BOOL _isInitialPrepare;
	NSString* _initialEpisodeUuid;
	NSArray* _episodeUuids;

}

@property (nonatomic,retain) NSString * initialEpisodeUuid;              //@synthesize initialEpisodeUuid=_initialEpisodeUuid - In the implementation block
@property (assign,nonatomic) BOOL isInitialPrepare;                      //@synthesize isInitialPrepare=_isInitialPrepare - In the implementation block
@property (nonatomic,retain) NSArray * episodeUuids;                     //@synthesize episodeUuids=_episodeUuids - In the implementation block
+(id)episodeUuidForActivity:(id)arg1 ;
+(id)mediaItemForEpisodeWithUUID:(id)arg1 ;
+(id)_mediaItemForEpisode:(id)arg1 ;
-(id)initWithInitialEpisodeUuid:(id)arg1 ;
-(NSArray *)episodeUuids;
-(BOOL)defaultToInitialIndexZero;
-(void)postManifestDidChangeNotification;
-(void)setInitialEpisodeUuid:(NSString *)arg1 ;
-(void)setIsInitialPrepare:(BOOL)arg1 ;
-(BOOL)isInitialPrepare;
-(NSString *)initialEpisodeUuid;
-(id)_predicateForFilteringExplicitEpisodes;
-(void)setEpisodeUuids:(NSArray *)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
@end
