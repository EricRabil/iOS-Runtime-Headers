/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class NSManagedObjectContext, NSFetchRequest;

@interface MTCoreSpotlightIndexBatchGenerator : NSObject {

	MTIndexPath nextIndexPath;
	NSManagedObjectContext* context;
	NSFetchRequest* currentFetchRequest;

}
-(id)initWithStartingIndexPath:(id)arg1 ;
-(id)nextBatchWithTransformationBlock:(/*^block*/id)arg1 ;
-(id)nextIndexPath;
-(id)init;
-(void)reset;
@end

