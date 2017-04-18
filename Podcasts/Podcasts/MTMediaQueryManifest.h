/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTPredicateManifest.h>

@class MPMediaQuery, NSArray, NSMutableDictionary;

@interface MTMediaQueryManifest : MTPredicateManifest {

	MPMediaQuery* _query;
	NSArray* _persistentIds;
	NSMutableDictionary* _pidToUuidMapping;

}

@property (nonatomic,retain) MPMediaQuery * query;                                //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSArray * persistentIds;                             //@synthesize persistentIds=_persistentIds - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pidToUuidMapping;              //@synthesize pidToUuidMapping=_pidToUuidMapping - In the implementation block
-(id)initWithMediaQuery:(id)arg1 initialItem:(id)arg2 ;
-(void)setPersistentIds:(NSArray *)arg1 ;
-(void)setPidToUuidMapping:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)pidToUuidMapping;
-(void)_updateSortOrder;
-(NSArray *)persistentIds;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(MPMediaQuery *)query;
-(void)setQuery:(MPMediaQuery *)arg1 ;
-(void)_processResults:(id)arg1 ;
@end

