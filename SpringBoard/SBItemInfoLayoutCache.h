/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:34 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBItemInfoLayoutCache : NSObject {

	double _cachedViewHeight;
	CGSize _referenceSize;
	long long _layoutMode;

}
-(double)viewHeightWithReferenceSize:(CGSize)arg1 layoutMode:(long long)arg2 generateBlock:(/*^block*/id)arg3 ;
-(BOOL)_isLayoutValidWithReferenceSize:(CGSize)arg1 layoutMode:(long long)arg2 ;
-(void)invalidateCache;
@end
