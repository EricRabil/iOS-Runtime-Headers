/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface IMPodcastFeedItem : NSObject {

	NSString* _author;
	unsigned long long _byteSize;
	NSString* _category;
	double _duration;
	NSString* _enclosureParameterString;
	NSString* _enclosureURL;
	BOOL _isExplicit;
	NSString* _guid;
	NSString* _itemDescription;
	NSString* _itemDescriptionSourceElement;
	NSString* _mimeType;
	NSDate* _pubDate;
	NSString* _title;
	unsigned _trackNum;
	NSString* _uti;
	BOOL _preferredCategoryFound;

}

@property (assign,nonatomic) BOOL preferredCategoryFound;                          //@synthesize preferredCategoryFound=_preferredCategoryFound - In the implementation block
@property (nonatomic,retain) NSString * author;                                    //@synthesize author=_author - In the implementation block
@property (assign,nonatomic) unsigned long long byteSize;                          //@synthesize byteSize=_byteSize - In the implementation block
@property (nonatomic,retain) NSString * category;                                  //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) double duration;                                      //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSString * enclosureParameterString;                  //@synthesize enclosureParameterString=_enclosureParameterString - In the implementation block
@property (nonatomic,retain) NSString * enclosureURL;                              //@synthesize enclosureURL=_enclosureURL - In the implementation block
@property (assign,nonatomic) BOOL isExplicit;                                      //@synthesize isExplicit=_isExplicit - In the implementation block
@property (nonatomic,retain) NSString * guid;                                      //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * itemDescription;                           //@synthesize itemDescription=_itemDescription - In the implementation block
@property (nonatomic,retain) NSString * itemDescriptionSourceElement;              //@synthesize itemDescriptionSourceElement=_itemDescriptionSourceElement - In the implementation block
@property (nonatomic,retain) NSString * mimeType;                                  //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSDate * pubDate;                                     //@synthesize pubDate=_pubDate - In the implementation block
@property (nonatomic,retain) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned trackNum;                                    //@synthesize trackNum=_trackNum - In the implementation block
@property (nonatomic,retain) NSString * uti;                                       //@synthesize uti=_uti - In the implementation block
-(NSString *)enclosureURL;
-(unsigned long long)byteSize;
-(void)setByteSize:(unsigned long long)arg1 ;
-(NSString *)enclosureParameterString;
-(unsigned)trackNum;
-(void)setTrackNum:(unsigned)arg1 ;
-(void)setEnclosureURL:(NSString *)arg1 ;
-(void)setEnclosureParameterString:(NSString *)arg1 ;
-(void)setItemDescriptionSourceElement:(NSString *)arg1 ;
-(NSString *)itemDescriptionSourceElement;
-(BOOL)preferredCategoryFound;
-(void)setPreferredCategoryFound:(BOOL)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(double)duration;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(NSString *)mimeType;
-(NSString *)author;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setIsExplicit:(BOOL)arg1 ;
-(BOOL)isExplicit;
-(NSString *)itemDescription;
-(void)setUti:(NSString *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(NSString *)uti;
-(NSDate *)pubDate;
-(void)setPubDate:(NSDate *)arg1 ;
-(void)setItemDescription:(NSString *)arg1 ;
@end
