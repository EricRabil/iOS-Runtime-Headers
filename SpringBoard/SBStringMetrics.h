/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration> {

	NSMutableArray* _fragments;

}
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_SB36*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)description;
-(unsigned long long)fragmentCount;
-(id)fragments;
-(void)addFragment:(id)arg1 ;
@end
