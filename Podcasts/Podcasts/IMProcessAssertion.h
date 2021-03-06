/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BKSProcessAssertion_IM;

@interface IMProcessAssertion : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _expirationBlock;
	unsigned long long _identifier;
	BKSProcessAssertion_IM* _bkProcessAssertion;
	id _expirationObserver;

}

@property (nonatomic,readonly) unsigned long long identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion_IM * bkProcessAssertion;              //@synthesize bkProcessAssertion=_bkProcessAssertion - In the implementation block
@property (nonatomic,retain) id expirationObserver;                                    //@synthesize expirationObserver=_expirationObserver - In the implementation block
+(Class)BKSProcessAssertionClass;
-(void)_expireBackgroundTask;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(unsigned long long)identifier;
-(void)setBkProcessAssertion:(BKSProcessAssertion_IM *)arg1 ;
-(void)setExpirationObserver:(id)arg1 ;
-(void)_onQueueSetBkProcessAssertion:(id)arg1 ;
-(id)initWithExpirationBlock:(/*^block*/id)arg1 debugDescription:(id)arg2 ;
-(BKSProcessAssertion_IM *)bkProcessAssertion;
-(id)expirationObserver;
@end

