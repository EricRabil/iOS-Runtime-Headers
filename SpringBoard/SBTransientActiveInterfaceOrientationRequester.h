/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:34 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBTransientActiveInterfaceOrientationRequester : NSObject {

	long long _orientation;
	NSString* _reason;

}

@property (nonatomic,copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) long long orientation;               //@synthesize orientation=_orientation - In the implementation block
-(id)initWithOrientation:(long long)arg1 andReason:(id)arg2 ;
-(long long)orientation;
-(NSString *)reason;
@end

