/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSURL;

@interface BLTBBAttachment : NSObject {

	NSData* _data;
	NSURL* _url;

}

@property (nonatomic,retain) NSData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
@end
