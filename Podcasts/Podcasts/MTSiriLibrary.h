/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MTSiriLibrary : NSObject <NSCopying> {

	NSArray* _podcasts;
	NSArray* _stations;

}

@property (nonatomic,retain) NSArray * podcasts;              //@synthesize podcasts=_podcasts - In the implementation block
@property (nonatomic,retain) NSArray * stations;              //@synthesize stations=_stations - In the implementation block
-(void)setPodcasts:(NSArray *)arg1 ;
-(NSArray *)podcasts;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)stations;
-(void)setStations:(NSArray *)arg1 ;
@end

