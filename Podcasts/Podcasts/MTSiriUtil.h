/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTSiriUtil : NSObject
+(id)manifestForPlayPodcastUuid:(id)arg1 ;
+(BOOL)playWithSiriPlaybackURL:(id)arg1 completion:(/*^block*/id)arg2 ;
+(BOOL)playMyPodcastsReason:(unsigned long long)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(id)manifestForPlayMyPodcasts;
+(BOOL)playStationUuid:(id)arg1 reason:(unsigned long long)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)isSiriPlaybackURL:(id)arg1 ;
+(unsigned long long)episodeOrderFromString:(id)arg1 ;
+(BOOL)playMyPodcastsWithPlaybackOrder:(unsigned long long)arg1 reason:(unsigned long long)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)playPodcastUuid:(id)arg1 reason:(unsigned long long)arg2 interactive:(BOOL)arg3 playbackOrder:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(BOOL)_playManifest:(id)arg1 reason:(unsigned long long)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(id)_manifestForPlayPodcastUuid:(id)arg1 ;
+(id)_manifestForPlayMyPodcasts;
+(id)_manifestForPlayMyPodcastsWithPlaybackOrder:(unsigned long long)arg1 ;
+(id)_manifestForPlayPodcastUuid:(id)arg1 playbackOrder:(unsigned long long)arg2 ;
+(id)_podcastManifestWithInitialEpisode:(id)arg1 ;
+(id)_manifestForPlayMyLatestPodcasts;
+(id)_manifestForPlayMyOldestPodcasts;
+(id)_episodeToPlayForPodcastUuid:(id)arg1 playbackOrder:(unsigned long long)arg2 ctx:(id)arg3 ;
+(id)_latestUserEpisodeForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)_oldestUserEpisodeForPodcastUuid:(id)arg1 ctx:(id)arg2 ;
+(id)_latestOrOldestUserEpisodeForPodcastUuid:(id)arg1 latest:(BOOL)arg2 ctx:(id)arg3 ;
+(BOOL)playPodcastUuid:(id)arg1 reason:(unsigned long long)arg2 interactive:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(id)_uuidForEpisode:(id)arg1 ;
@end
