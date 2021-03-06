/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/IMPlayerManifest.h>
#import <IMStoreUtil/IMMetricsDataSource.h>

@class NSString, MTPlayerItem;

@interface MTPlayerManifest : IMPlayerManifest <IMMetricsDataSource> {

	unsigned long long _playReason;
	NSString* _manifestIdentifier;

}

@property (nonatomic,retain) NSString * manifestIdentifier;              //@synthesize manifestIdentifier=_manifestIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long playReason;              //@synthesize playReason=_playReason - In the implementation block
@property (nonatomic,readonly) MTPlayerItem * currentItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setManifestIdentifier:(NSString *)arg1 ;
-(id)activitySpotlightIdentifier;
-(NSString *)manifestIdentifier;
-(unsigned long long)playReason;
-(void)setPlayReason:(unsigned long long)arg1 ;
-(id)metricsContentIdentifier;
-(id)metricsAdditionalData;
-(id)init;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)activity;
@end

