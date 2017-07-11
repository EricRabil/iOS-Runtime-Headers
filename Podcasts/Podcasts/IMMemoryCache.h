/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, NSString, NSOperationQueue, NSObject;

@interface IMMemoryCache : NSObject {

	NSMutableArray* _itemsArray;
	NSMutableDictionary* _items;
	unsigned long long _totalCost;
	NSString* _name;
	unsigned long long _count;
	unsigned long long _countLimit;
	unsigned long long _totalCostLimit;
	BOOL _evictsItemsWithDiscardedContent;
	id _delegate;
	NSOperationQueue* _queue;
	double _lastCheckTime;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,retain) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) id delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL evictsItemsWithDiscardedContent;              //@synthesize evictsItemsWithDiscardedContent=_evictsItemsWithDiscardedContent - In the implementation block
@property (assign,nonatomic) unsigned long long totalCostLimit;                 //@synthesize totalCostLimit=_totalCostLimit - In the implementation block
@property (assign,nonatomic) unsigned long long countLimit;                     //@synthesize countLimit=_countLimit - In the implementation block
-(void)_addItem:(id)arg1 forKey:(id)arg2 ;
-(void)_checkLimitsAndEvictObjects;
-(BOOL)_shouldRemoveIndex:(unsigned long long)arg1 ;
-(void)_checkLimits;
-(void)checkLimitsAndEvictObjects;
-(unsigned long long)totalCost;
-(unsigned long long)costForObjectWithKey:(id)arg1 ;
-(long long)numberOfCachedItems;
-(BOOL)evictsItemsWithDiscardedContent;
-(void)setEvictsItemsWithDiscardedContent:(BOOL)arg1 ;
-(void)removeObjectsForKeyWithPrefix:(id)arg1 ;
-(unsigned long long)totalCostLimit;
-(void)_removeObjectForKey:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(id)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)countLimit;
@end
