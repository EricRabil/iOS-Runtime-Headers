/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MZKeyValueStoreErrorHandler : NSObject {

	NSMutableDictionary* _handles;

}

@property (nonatomic,retain) NSMutableDictionary * handles;              //@synthesize handles=_handles - In the implementation block
-(id)noStoreAccountHandle;
-(void)setHandle:(id)arg1 forErrorDomain:(id)arg2 code:(long long)arg3 ;
-(id)storeAccountNeedSignInHandle;
-(id)storeAccountMismatchHandle;
-(id)handleKeyForErrorDomain:(id)arg1 code:(long long)arg2 ;
-(id)handleForErrorDomain:(id)arg1 code:(long long)arg2 ;
-(id)initWithGenericHandles;
-(BOOL)canHandleError:(id)arg1 ;
-(void)handleError:(id)arg1 withController:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(NSMutableDictionary *)handles;
-(id)allHandles;
-(void)setHandles:(NSMutableDictionary *)arg1 ;
@end

