/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Podcasts/Podcasts-Structs.h>
@class NSObject, AVURLAsset, NSString, NSURL, IMPlayerManifest, MPMediaItemArtwork, NSArray;

@interface IMPlayerItem : NSObject {

	NSObject*<OS_dispatch_queue> _chapterLoadingQueue;
	BOOL _video;
	BOOL _areChaptersLoaded;
	BOOL _areChaptersLoading;
	AVURLAsset* _asset;
	NSString* _title;
	NSString* _album;
	NSString* _author;
	NSURL* _url;
	double _duration;
	double _playhead;
	IMPlayerManifest* _manifest;
	unsigned long long _manifestIndex;
	MPMediaItemArtwork* _cachedArtworkItem;
	NSArray* _chapters;

}

@property (nonatomic,retain) NSURL * url;                                               //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                                        //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) BOOL areChaptersLoaded;                                    //@synthesize areChaptersLoaded=_areChaptersLoaded - In the implementation block
@property (assign,nonatomic) BOOL areChaptersLoading;                                   //@synthesize areChaptersLoading=_areChaptersLoading - In the implementation block
@property (nonatomic,copy) NSString * title;                                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * album;                                            //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * author;                                           //@synthesize author=_author - In the implementation block
@property (assign,setter=setIsVideo:,getter=isVideo,nonatomic) BOOL video;              //@synthesize video=_video - In the implementation block
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (nonatomic,readonly) AVURLAsset * asset;                                      //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) double duration;                                           //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double playhead;                                           //@synthesize playhead=_playhead - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * timeChapters; 
@property (nonatomic,__weak,readonly) NSArray * metadataChapters; 
@property (assign,nonatomic,__weak) IMPlayerManifest * manifest;                        //@synthesize manifest=_manifest - In the implementation block
@property (assign,nonatomic) unsigned long long manifestIndex;                          //@synthesize manifestIndex=_manifestIndex - In the implementation block
@property (nonatomic,retain) MPMediaItemArtwork * cachedArtworkItem;                    //@synthesize cachedArtworkItem=_cachedArtworkItem - In the implementation block
+(id)createAssetForUrl:(id)arg1 ;
-(double)playhead;
-(id)externalMetadata;
-(void)notifyUserIsNotPlayable;
-(void)retrieveArtwork:(/*^block*/id)arg1 withSize:(CGSize)arg2 ;
-(void)setPlayhead:(double)arg1 ;
-(id)initWithUrl:(id)arg1 ;
-(void)setManifestIndex:(unsigned long long)arg1 ;
-(NSArray *)timeChapters;
-(void)retrieveArtwork:(/*^block*/id)arg1 withSize:(CGSize)arg2 atTime:(double)arg3 ;
-(void)setAreChaptersLoaded:(BOOL)arg1 ;
-(unsigned long long)manifestIndex;
-(MPMediaItemArtwork *)cachedArtworkItem;
-(NSArray *)metadataChapters;
-(BOOL)areChaptersLoaded;
-(void)loadChapters;
-(BOOL)areChaptersLoading;
-(void)setAreChaptersLoading:(BOOL)arg1 ;
-(void)beginLoadingArtworkForAVPlayerItem:(id)arg1 ;
-(void)setCachedArtworkItem:(MPMediaItemArtwork *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)duration;
-(NSURL *)url;
-(BOOL)isLocal;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(void)reset;
-(void)setUrl:(NSURL *)arg1 ;
-(id)subtitle;
-(id)initWithAsset:(id)arg1 ;
-(AVURLAsset *)asset;
-(BOOL)isVideo;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(NSArray *)chapters;
-(void)setChapters:(NSArray *)arg1 ;
-(id)nowPlayingInfo;
-(void)updateActivity:(id)arg1 ;
-(NSString *)album;
-(BOOL)isPlayable;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)setManifest:(IMPlayerManifest *)arg1 ;
-(IMPlayerManifest *)manifest;
@end

