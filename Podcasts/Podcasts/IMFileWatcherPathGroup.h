/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableSet, NSObject, NSString;

@interface IMFileWatcherPathGroup : NSObject {

	NSMutableSet* _entries;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	BOOL _watchingDirectory;
	NSString* _filePath;

}

@property (nonatomic,readonly) NSString * filePath;                             //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfEntries; 
-(id)initWithFilePath:(id)arg1 targetQueue:(id)arg2 ;
-(BOOL)setupSource;
-(void)handleDeleteOrRename;
-(void)handleWrite;
-(void)enqueueBlocksForEntries:(id)arg1 withChange:(int)arg2 ;
-(void)dealloc;
-(void)teardown;
-(NSString *)filePath;
-(BOOL)addEntry:(id)arg1 ;
-(void)removeEntry:(id)arg1 ;
-(unsigned long long)numberOfEntries;
-(void)invalidateEntries;
@end
