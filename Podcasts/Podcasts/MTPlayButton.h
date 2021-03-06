/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <StoreKitUI/SKUIPlayButton.h>

@class NSString;

@interface MTPlayButton : SKUIPlayButton {

	BOOL _playing;
	NSString* _episodeUuid;
	unsigned long long _playImageStyle;

}

@property (assign,getter=isPlaying,nonatomic) BOOL playing;                  //@synthesize playing=_playing - In the implementation block
@property (nonatomic,retain) NSString * episodeUuid;                         //@synthesize episodeUuid=_episodeUuid - In the implementation block
@property (assign,nonatomic) unsigned long long playImageStyle;              //@synthesize playImageStyle=_playImageStyle - In the implementation block
-(NSString *)episodeUuid;
-(void)setEpisodeUuid:(NSString *)arg1 ;
-(void)updateIsPlayingForCurrentItem;
-(unsigned long long)playImageStyle;
-(void)setPlayImageStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(void)updateProgress;
@end

