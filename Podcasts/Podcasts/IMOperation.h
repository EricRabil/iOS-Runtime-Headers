/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Foundation/NSOperation.h>

@protocol IMOperationDelegate;
@interface IMOperation : NSOperation {

	id<IMOperationDelegate> _delegate;
	double _progressUpdateInterval;
	double _progress;
	double _lastUpdate;
	long long _backgroundTaskID;
	struct {
		unsigned hasStarted : 1;
		unsigned hasProgress : 1;
		unsigned hasFinished : 1;
		unsigned hasCancelled : 1;
		unsigned hasError : 1;
		unsigned hasResponseThread : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic) id<IMOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double progress;                               //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) double progressUpdateInterval;                 //@synthesize progressUpdateInterval=_progressUpdateInterval - In the implementation block
-(BOOL)isApexOrLater;
-(void)sendCancelledMessage;
-(void)_performDelegateSelector:(SEL)arg1 ;
-(double)progressUpdateInterval;
-(void)_sendError:(id)arg1 ;
-(void)setBackgroundExpirationHandler:(/*^block*/id)arg1 ;
-(void)sendHasProgressMessage;
-(void)sendError:(id)arg1 ;
-(void)setProgressUpdateInterval:(double)arg1 ;
-(void)sendStartedMessage;
-(void)sendFinishedMessage;
-(void)setDelegate:(id<IMOperationDelegate>)arg1 ;
-(void)dealloc;
-(id<IMOperationDelegate>)delegate;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(void)main;
-(void)setThreadPriority:(double)arg1 ;
-(void)performOperation;
@end

