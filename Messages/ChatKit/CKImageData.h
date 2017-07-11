/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:20 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSData, NSURL, UIImage, NSString;

@interface CKImageData : NSObject {

	CGImageSourceRef _imageSource;
	unsigned long long _count;
	long long _orientation;
	CGSize _pxSize;
	BOOL _initializedProperties;
	NSData* _data;
	NSURL* _url;
	UIImage* _image;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGSize ptSize; 
@property (nonatomic,readonly) CGSize pxSize; 
@property (nonatomic,copy,readonly) NSString * UTIType; 
@property (nonatomic,copy,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsASTC;
+(id)UTITypeForData:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(NSURL *)url;
-(long long)orientation;
-(UIImage *)image;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)MIMEType;
-(void)_initializeProperties;
-(id)thumbnailFillToSize:(CGSize)arg1 ;
-(NSString *)UTIType;
-(id)durationsWithMaxCount:(unsigned long long)arg1 ;
-(CGSize)ptSize;
-(id)thumbnailAtIndex:(unsigned long long)arg1 fillToSize:(CGSize)arg2 maxCount:(unsigned long long)arg3 ;
-(CGSize)pxSize;
-(id)thumbnailsFillToSize:(CGSize)arg1 maxCount:(unsigned long long)arg2 ;
-(id)_thumbnailFitToSize:(CGSize)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_thumbnailFillToSize:(CGSize)arg1 atIndex:(unsigned long long)arg2 ;
-(id)thumbnailFitToSize:(CGSize)arg1 ;
-(id)thumbnailFillToSizeCropping:(CGSize)arg1 ;
-(id)thumbnailsFitToSize:(CGSize)arg1 maxCount:(unsigned long long)arg2 ;
@end
