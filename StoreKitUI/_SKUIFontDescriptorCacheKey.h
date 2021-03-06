/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:58 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString;

@interface _SKUIFontDescriptorCacheKey : NSObject {

	const CFStringRef _textStyle;
	NSString* _sizeCategory;

}

@property (nonatomic,readonly) const CFStringRef textStyle;              //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) NSString * sizeCategory;                  //@synthesize sizeCategory=_sizeCategory - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(const CFStringRef)textStyle;
-(NSString *)sizeCategory;
-(id)initWithTextStyle:(const CFStringRef)arg1 sizeCategory:(id)arg2 ;
@end

