/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@class NSMutableSet;

@interface MTVisitedEpisodeManager : MTSingleton {

	NSMutableSet* _startedEpisodeUuids;
	NSMutableSet* _endedEpisodeUuids;

}

@property (nonatomic,retain) NSMutableSet * startedEpisodeUuids;              //@synthesize startedEpisodeUuids=_startedEpisodeUuids - In the implementation block
@property (nonatomic,retain) NSMutableSet * endedEpisodeUuids;                //@synthesize endedEpisodeUuids=_endedEpisodeUuids - In the implementation block
-(void)flushVisitedEpisodes;
-(void)startVisitingEpisode:(id)arg1 ;
-(unsigned long long)countOfStartedEpisodes;
-(void)setStartedEpisodeUuids:(NSMutableSet *)arg1 ;
-(void)setEndedEpisodeUuids:(NSMutableSet *)arg1 ;
-(NSMutableSet *)endedEpisodeUuids;
-(NSMutableSet *)startedEpisodeUuids;
-(void)endVisitingEpisode:(id)arg1 ;
-(BOOL)hasEndedVisitingEpisode:(id)arg1 ;
-(unsigned long long)countOfEndedEpisodes;
-(id)init;
@end

