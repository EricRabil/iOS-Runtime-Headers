/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMCloudSyncTransactionProcessing;
@class NSString, NSURL, NSMutableDictionary, NSArray;

@interface IMCloudSyncTransaction : NSObject {

	NSString* _domain;
	NSURL* _URL;
	id<IMCloudSyncTransactionProcessing> _processor;
	NSMutableDictionary* _userInfo;
	int _type;
	NSArray* _keys;

}

@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (retain) NSMutableDictionary * userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
@property (copy) NSString * domain;                                             //@synthesize domain=_domain - In the implementation block
@property (retain) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (retain) id<IMCloudSyncTransactionProcessing> processor;              //@synthesize processor=_processor - In the implementation block
@property (nonatomic,retain,readonly) NSArray * keys;                           //@synthesize keys=_keys - In the implementation block
-(id)initWithType:(int)arg1 domain:(id)arg2 URL:(id)arg3 keys:(id)arg4 ;
-(void)setProcessor:(id<IMCloudSyncTransactionProcessing>)arg1 ;
-(void)setUserInfoValue:(id)arg1 forKey:(id)arg2 ;
-(id)userInfoValueForKey:(id)arg1 ;
-(id<IMCloudSyncTransactionProcessing>)processor;
-(void)dealloc;
-(id)description;
-(NSMutableDictionary *)userInfo;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)domain;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSArray *)keys;
-(void)setDomain:(NSString *)arg1 ;
@end

