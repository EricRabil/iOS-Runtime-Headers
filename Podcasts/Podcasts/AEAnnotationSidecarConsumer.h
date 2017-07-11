/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/AEAnnotationSidecarProducer.h>

@class NSArray, NSString, NSMutableSet;

@interface AEAnnotationSidecarConsumer : AEAnnotationSidecarProducer {

	NSArray* _bookmarks;
	NSString* _timestamp;
	NSMutableSet* _acknowledgedMismatchingAssetIDs;

}
+(id)annotationUuidsFromDictionaryRepresentations:(id)arg1 ;
+(id)doesNotExistTimestamp;
+(id)modificationDatesFromDictionaryRepresentations:(id)arg1 ;
-(BOOL)isChangedTimestamp;
-(BOOL)isChangedGeneration;
-(BOOL)acknowledgeMergingAnnotationsWithAssetVersionMismatch:(id)arg1 assetID:(id)arg2 provider:(id)arg3 ;
-(void)cacheTimestamp;
-(id)timestampCacheKey;
-(id)fileTimestamp;
-(void)mergeIntoAnnotationProvider:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)read;
@end
