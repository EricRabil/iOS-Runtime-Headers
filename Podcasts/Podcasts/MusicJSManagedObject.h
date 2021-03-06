/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppContext, JSManagedValue;

@interface MusicJSManagedObject : NSObject {

	IKAppContext* _appContext;
	JSManagedValue* _managedValue;
	id _object;
	id _owner;

}

@property (nonatomic,__weak,readonly) IKAppContext * appContext; 
@property (nonatomic,readonly) id object; 
@property (nonatomic,__weak,readonly) id owner; 
-(id)init;
-(void)dealloc;
-(id)object;
-(id)owner;
-(IKAppContext *)appContext;
-(id)initWithObject:(id)arg1 owner:(id)arg2 appContext:(id)arg3 ;
@end

