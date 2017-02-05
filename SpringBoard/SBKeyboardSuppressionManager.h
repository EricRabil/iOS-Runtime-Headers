/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject {

	NSMutableDictionary* _keyboardSuppressionAssertions;

}
+(id)sharedInstance;
-(void)_setKeyboardSuppressed:(BOOL)arg1 forReason:(id)arg2 withPredicate:(/*^block*/id)arg3 ;
-(void)startSuppressingKeyboardWithReason:(id)arg1 predicate:(/*^block*/id)arg2 ;
-(void)stopSuppressingKeyboardWithReason:(id)arg1 ;
-(id)init;
-(id)description;
@end

