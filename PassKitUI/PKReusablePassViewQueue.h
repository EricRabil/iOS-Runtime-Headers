/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PKReusablePassViewQueue : NSObject {

	NSMutableSet* _passViews;

}
-(id)initWithCount:(unsigned long long)arg1 ;
-(id)dequeueReusablePassView;
-(void)enqueueReusablePassView:(id)arg1 ;
@end

