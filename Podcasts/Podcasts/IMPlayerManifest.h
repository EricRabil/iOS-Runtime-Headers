/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, IMPlayerItem, NSUserActivity, NSObject;

@interface IMPlayerManifest : NSObject {

	BOOL _isLoaded;
	NSString* _title;
	unsigned long long _currentIndex;
	IMPlayerItem* _currentItem;
	NSUserActivity* _activity;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSUserActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) IMPlayerItem * currentItem;                      //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isLoaded;                                   //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long currentIndex;                 //@synthesize currentIndex=_currentIndex - In the implementation block
+(id)supportedActivityTypes;
+(id)createManifestForActivity:(id)arg1 ;
+(id)activityTypeSuffix;
+(void)registerManifestForRestoration:(Class)arg1 ;
+(id)restoreActivity:(id)arg1 ;
+(id)_activityType;
-(void)postManifestDidChangeNotification;
-(BOOL)hasPrevious;
-(void)load:(/*^block*/id)arg1 ;
-(id)init;
-(void)next;
-(void)previous;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(unsigned long long)currentIndex;
-(IMPlayerItem *)currentItem;
-(BOOL)isLoaded;
-(NSUserActivity *)activity;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setCurrentItem:(IMPlayerItem *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActivity:(NSUserActivity *)arg1 ;
-(void)_load;
-(void)setIsLoaded:(BOOL)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(BOOL)hasNext;
@end

