/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface MTMediaLibraryTransactionManager : MTSingleton {

	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
-(void)requestMediaLibraryWriteTransaction:(/*^block*/id)arg1 ;
-(void)requestMediaLibraryReadTransaction:(/*^block*/id)arg1 ;
-(void)requestMediaLibraryWriteTransaction:(/*^block*/id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
