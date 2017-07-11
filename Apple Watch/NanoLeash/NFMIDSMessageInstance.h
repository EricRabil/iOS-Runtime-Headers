/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:40 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NFMIDSMessageInstance : NSObject {

	long long _retryCount;
	double _retryInterval;
	/*^block*/id _retryAction;

}

@property (assign,nonatomic) long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) double retryInterval;              //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,copy) id retryAction;                      //@synthesize retryAction=_retryAction - In the implementation block
+(id)newMessageInstanceWithAction:(/*^block*/id)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3 ;
-(id)description;
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
-(void)setRetryAction:(id)arg1 ;
-(id)retryAction;
@end
