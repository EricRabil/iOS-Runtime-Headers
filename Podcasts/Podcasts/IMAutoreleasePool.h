/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAutoreleasePool;

@interface IMAutoreleasePool : NSObject {

	NSAutoreleasePool* _pool;
	int _count;
	int _maxCount;
	id _target;
	SEL _action;
	void* _context;

}

@property (nonatomic,readonly) int count;               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) int maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
-(void)_resetPool;
-(void)setTarget:(id)arg1 action:(SEL)arg2 context:(void*)arg3 ;
-(void)increaseCount;
-(id)init;
-(void)dealloc;
-(int)count;
-(int)maxCount;
-(void)setMaxCount:(int)arg1 ;
@end

