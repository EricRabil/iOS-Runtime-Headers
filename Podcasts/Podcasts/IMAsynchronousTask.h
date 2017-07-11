/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSError, NSString, IMTaskAssertion, NSMutableArray;

@interface IMAsynchronousTask : NSObject {

	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	BOOL _taskInvalidationDisabled;
	double _timeout;
	int _cancelType;
	/*^block*/id _finishedHandler;
	/*^block*/id _expirationHandler;
	id _result;
	NSError* _error;
	NSString* _debugDescription;
	IMTaskAssertion* _taskAssertion;
	NSMutableArray* _completions;

}

@property (nonatomic,copy) NSString * debugDescription;                    //@synthesize debugDescription=_debugDescription - In the implementation block
@property (nonatomic,retain) id result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) IMTaskAssertion * taskAssertion;              //@synthesize taskAssertion=_taskAssertion - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                 //@synthesize completions=_completions - In the implementation block
@property (nonatomic,copy) id finishedHandler;                             //@synthesize finishedHandler=_finishedHandler - In the implementation block
@property (nonatomic,copy) id expirationHandler;                           //@synthesize expirationHandler=_expirationHandler - In the implementation block
@property (assign,nonatomic) int cancelType;                               //@synthesize cancelType=_cancelType - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(id)result;
-(id)finishedHandler;
-(void)setFinishedHandler:(id)arg1 ;
-(void)setResult:(id)arg1 ;
-(NSMutableArray *)completions;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)_invalidateTimer;
-(void)addTaskCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3 ;
-(void)invokeTaskCompletionBlocksWithBlock:(/*^block*/id)arg1 ;
-(void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2 ;
-(void)beginTaskOperation;
-(int)cancelType;
-(void)setCancelType:(int)arg1 ;
-(void)_onQueueFireExpirationHandlerIfNecesary;
-(void)setTaskAssertion:(IMTaskAssertion *)arg1 ;
-(void)_invalidateAssertion:(BOOL)arg1 ;
-(void)endTaskOperation;
-(IMTaskAssertion *)taskAssertion;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(id)expirationHandler;
-(void)setExpirationHandler:(id)arg1 ;
-(void)setDebugDescription:(NSString *)arg1 ;
@end
