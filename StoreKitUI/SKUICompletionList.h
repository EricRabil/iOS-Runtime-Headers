/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:01 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSArray, NSString, NSMutableDictionary;

@interface SKUICompletionList : NSObject <SKUICacheCoding> {

	NSArray* _completions;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * completions;                                  //@synthesize completions=_completions - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(NSString *)title;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(NSArray *)completions;
-(id)initWithCompletionListDictionary:(id)arg1 ;
@end

