/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IMBloomFilter, NSString;

@interface IMDocumentFragmentFilter : NSObject <NSCoding> {

	IMBloomFilter* _filter;
	SCD_Struct_IM31 _specification;

}

@property (readonly) NSString * usageDescription; 
-(long long)indexSize;
-(NSString *)usageDescription;
-(id)initWithDocument:(id)arg1 filterSpecification:(SCD_Struct_IM32)arg2 ;
-(BOOL)mightContainFragment:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

