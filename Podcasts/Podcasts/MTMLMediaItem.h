/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface MTMLMediaItem : NSObject {

	BOOL _isItunesU;
	BOOL _hasBeenPlayed;
	BOOL _isExplicit;
	BOOL _fromiTunes;
	BOOL _isMissingAsset;
	NSString* _artist;
	NSNumber* _persistentId;
	NSNumber* _storeTrackId;
	NSNumber* _storeCollectionId;
	NSNumber* _byteSize;
	NSString* _category;
	NSNumber* _duration;
	NSString* _title;
	NSString* _assetUrl;
	NSString* _uti;
	NSString* _guid;
	NSDate* _pubDate;
	NSNumber* _playhead;
	NSNumber* _playCount;
	NSString* _feedUrl;
	NSString* _podcastTitle;
	NSNumber* _downloadIdentifier;
	NSDate* _lastPlayedDate;

}

@property (nonatomic,retain) NSString * artist;                          //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) NSNumber * persistentId;                    //@synthesize persistentId=_persistentId - In the implementation block
@property (nonatomic,retain) NSNumber * storeTrackId;                    //@synthesize storeTrackId=_storeTrackId - In the implementation block
@property (nonatomic,retain) NSNumber * storeCollectionId;               //@synthesize storeCollectionId=_storeCollectionId - In the implementation block
@property (nonatomic,retain) NSNumber * byteSize;                        //@synthesize byteSize=_byteSize - In the implementation block
@property (nonatomic,retain) NSString * category;                        //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                        //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * assetUrl;                        //@synthesize assetUrl=_assetUrl - In the implementation block
@property (assign,nonatomic) BOOL isItunesU;                             //@synthesize isItunesU=_isItunesU - In the implementation block
@property (nonatomic,retain) NSString * uti;                             //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSString * guid;                            //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSDate * pubDate;                           //@synthesize pubDate=_pubDate - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPlayed;                         //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (nonatomic,retain) NSNumber * playhead;                        //@synthesize playhead=_playhead - In the implementation block
@property (nonatomic,retain) NSNumber * playCount;                       //@synthesize playCount=_playCount - In the implementation block
@property (nonatomic,retain) NSString * feedUrl;                         //@synthesize feedUrl=_feedUrl - In the implementation block
@property (nonatomic,retain) NSString * podcastTitle;                    //@synthesize podcastTitle=_podcastTitle - In the implementation block
@property (nonatomic,retain) NSNumber * downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isExplicit;                            //@synthesize isExplicit=_isExplicit - In the implementation block
@property (assign,nonatomic) BOOL fromiTunes;                            //@synthesize fromiTunes=_fromiTunes - In the implementation block
@property (assign,nonatomic) BOOL isMissingAsset;                        //@synthesize isMissingAsset=_isMissingAsset - In the implementation block
@property (nonatomic,retain) NSDate * lastPlayedDate;                    //@synthesize lastPlayedDate=_lastPlayedDate - In the implementation block
+(id)itemWithMPMediaItem:(id)arg1 ;
+(id)propertiesForMediaItem;
+(BOOL)isMediaItemSyncedFromiTunes:(id)arg1 ;
+(BOOL)isMissingFilePathForItem:(id)arg1 ;
+(BOOL)isMissingAssetForItem:(id)arg1 ;
-(BOOL)fromiTunes;
-(NSNumber *)playhead;
-(void)setFromiTunes:(BOOL)arg1 ;
-(void)setPlayhead:(NSNumber *)arg1 ;
-(NSNumber *)storeTrackId;
-(void)setStoreTrackId:(NSNumber *)arg1 ;
-(NSNumber *)storeCollectionId;
-(BOOL)isItunesU;
-(NSString *)assetUrl;
-(BOOL)isMissingAsset;
-(void)setStoreCollectionId:(NSNumber *)arg1 ;
-(NSNumber *)byteSize;
-(void)setByteSize:(NSNumber *)arg1 ;
-(void)setPodcastTitle:(NSString *)arg1 ;
-(void)setAssetUrl:(NSString *)arg1 ;
-(void)setIsItunesU:(BOOL)arg1 ;
-(void)setIsMissingAsset:(BOOL)arg1 ;
-(void)setDownloadIdentifier:(NSNumber *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSNumber *)duration;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setFeedUrl:(NSString *)arg1 ;
-(NSString *)feedUrl;
-(NSNumber *)persistentId;
-(void)setPersistentId:(NSNumber *)arg1 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(NSNumber *)downloadIdentifier;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(NSString *)podcastTitle;
-(NSDate *)lastPlayedDate;
-(void)setLastPlayedDate:(NSDate *)arg1 ;
-(NSNumber *)playCount;
-(void)setPlayCount:(NSNumber *)arg1 ;
-(void)setIsExplicit:(BOOL)arg1 ;
-(BOOL)isExplicit;
-(void)setUti:(NSString *)arg1 ;
-(NSString *)uti;
-(NSDate *)pubDate;
-(void)setPubDate:(NSDate *)arg1 ;
@end

