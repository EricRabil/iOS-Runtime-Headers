/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSString, UIImage, NSDictionary;

@interface Music.MediaSocialProfileUpdateOperation : MPAsyncOperation {

	 updatedName;
	 updatedHandle;
	 updatedPhoto;
	 photoUploadDictionary;
	 accessQueue;
	 childOperationQueue;
	 childLoadURLOperation;
	 _responseHandler;

}

@property (copy,nonatomic) NSString * updatedName; 
@property (copy,nonatomic) NSString * updatedHandle; 
@property (retain,nonatomic) UIImage * updatedPhoto; 
@property (copy,nonatomic) NSDictionary * photoUploadDictionary; 
@property (copy,nonatomic) id responseHandler; 
+(id)errorDomain;
-(NSString *)updatedName;
-(void)setUpdatedName:(NSString *)arg1 ;
-(NSString *)updatedHandle;
-(void)setUpdatedHandle:(NSString *)arg1 ;
-(UIImage *)updatedPhoto;
-(void)setUpdatedPhoto:(UIImage *)arg1 ;
-(NSDictionary *)photoUploadDictionary;
-(void)setPhotoUploadDictionary:(NSDictionary *)arg1 ;
-(id)init;
-(void)cancel;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(void)finishWithError:(id)arg1 ;
@end

