/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Podcasts/Podcasts-Structs.h>
@class IMCloudSyncTransaction;

@interface IMCloudSyncSerializer : NSObject {

	IMCloudSyncTransaction* _transaction;

}

@property (nonatomic,retain) IMCloudSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(IMCloudSyncDataVerionPair)objectVersionPairForKey:(id)arg1 ;
-(id)dataWithNodes:(id)arg1 ;
-(id)baseDictionary;
-(id)payloadWithNode:(id)arg1 ;
-(void)dealloc;
-(id)payload;
-(id)keys;
-(IMCloudSyncTransaction *)transaction;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(id)initWithTransaction:(id)arg1 ;
@end

