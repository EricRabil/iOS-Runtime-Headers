/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class UIImage, NSString, NSURL, NSData;

@interface IMPlayerChapterInfo : NSObject {

	UIImage* _artwork;
	int _type;
	int _metadataType;
	NSString* _title;
	NSURL* _externalURL;
	NSData* _artworkData;
	double _duration;
	double _time;
	SCD_Struct_IM22 _mediaTimeRange;
	SCD_Struct_IM22 _assetTimeRange;

}

@property (nonatomic,retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * externalURL;                         //@synthesize externalURL=_externalURL - In the implementation block
@property (nonatomic,readonly) UIImage * artwork; 
@property (nonatomic,retain) NSData * artworkData;                        //@synthesize artworkData=_artworkData - In the implementation block
@property (assign,nonatomic) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time;                                 //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM22 mediaTimeRange;              //@synthesize mediaTimeRange=_mediaTimeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_IM22 assetTimeRange;              //@synthesize assetTimeRange=_assetTimeRange - In the implementation block
@property (assign,nonatomic) int type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int metadataType;                            //@synthesize metadataType=_metadataType - In the implementation block
-(int)metadataType;
-(void)setMetadataType:(int)arg1 ;
-(void)setMediaTimeRange:(SCD_Struct_IM22)arg1 ;
-(void)setAssetTimeRange:(SCD_Struct_IM22)arg1 ;
-(SCD_Struct_IM22)mediaTimeRange;
-(SCD_Struct_IM22)assetTimeRange;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)time;
-(void)setTime:(double)arg1 ;
-(UIImage *)artwork;
-(NSURL *)externalURL;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(void)setExternalURL:(NSURL *)arg1 ;
@end
