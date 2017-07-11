/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:46 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NNMKAttachment : NSTextAttachment <NSSecureCoding> {

	NSString* _contentId;
	NSString* _fileName;
	unsigned long long _fileSize;
	unsigned long long _type;

}

@property (nonatomic,retain) NSString * contentId;                     //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,retain) NSString * fileName;                      //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;              //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)fileSize;
-(void)setContentId:(NSString *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(NSString *)contentId;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end
