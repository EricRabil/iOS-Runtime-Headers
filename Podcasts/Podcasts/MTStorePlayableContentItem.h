/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPlayableContentItem.h>

@class NSDictionary;

@interface MTStorePlayableContentItem : MTPlayableContentItem {

	NSDictionary* _dict;

}

@property (nonatomic,retain) NSDictionary * dict;              //@synthesize dict=_dict - In the implementation block
-(id)_bestArtworkURLString;
-(void)loadArtwork;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dict;
-(void)setDict:(NSDictionary *)arg1 ;
@end
