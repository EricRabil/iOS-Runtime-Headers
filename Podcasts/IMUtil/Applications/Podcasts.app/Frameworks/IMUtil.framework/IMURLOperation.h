/*
* This header is generated by classdump-dyld 1.0
* on Saturday, April 22, 2017 at 9:57:30 AM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Frameworks/IMUtil.framework/IMUtil
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURLRequest, NSURLConnection;

@interface IMURLOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _isStarted;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	/*^block*/id _successCallback;
	/*^block*/id _errorCallback;

}

@property (readonly) NSURLRequest * request;                    //@synthesize request=_request - In the implementation block
@property (assign) BOOL isFinished;                             //@synthesize isFinished=_isFinished - In the implementation block
@property (assign) BOOL isExecuting;                            //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isStarted;                              //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) id successCallback;                        //@synthesize successCallback=_successCallback - In the implementation block
@property (readonly) id errorCallback;                          //@synthesize errorCallback=_errorCallback - In the implementation block
-(id)successCallback;
-(id)initWithRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 withErrorCallback:(/*^block*/id)arg3 ;
-(id)initWithRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 ;
-(void)cancel;
-(NSURLRequest *)request;
-(void)start;
-(void)cleanup;
-(NSURLConnection *)connection;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(void)setIsStarted:(BOOL)arg1 ;
-(BOOL)isStarted;
-(id)errorCallback;
-(void)setIsFinished:(BOOL)arg1 ;
-(void)setIsExecuting:(BOOL)arg1 ;
@end
