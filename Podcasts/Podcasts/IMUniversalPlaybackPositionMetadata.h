/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IMUniversalPlaybackPositionMetadata : NSObject <NSCopying> {

	BOOL _hasBeenPlayed;
	BOOL _isNew;
	NSString* _itemIdentifier;
	double _timestamp;
	double _bookmarkTime;
	unsigned long long _playCount;

}

@property (nonatomic,copy) NSString * itemIdentifier;                   //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double bookmarkTime;                       //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign,nonatomic) BOOL hasBeenPlayed;                        //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (assign,nonatomic) unsigned long long playCount;              //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) BOOL isNew;                                //@synthesize isNew=_isNew - In the implementation block
+(id)metadataWithValuesItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 ;
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
+(id)metadataWithValuesFromDataSourceItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsNew:(BOOL)arg1 ;
-(double)bookmarkTime;
-(void)setBookmarkTime:(double)arg1 ;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(unsigned long long)playCount;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(BOOL)isNew;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)keyValueStorePayload;
@end
