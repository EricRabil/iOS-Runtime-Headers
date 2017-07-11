/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:48 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMutableSet, NSObject, NSString;

@interface NTKComplicationSampleData : NSObject <NSSecureCoding> {

	NSMutableDictionary* _familyToTemplate;
	NSMutableSet* _supportedFamilies;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _clientID;
	NSString* _applicationID;

}

@property (copy) NSString * clientID;                   //@synthesize clientID=_clientID - In the implementation block
@property (copy) NSString * applicationID;              //@synthesize applicationID=_applicationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_commonInit;
-(id)supportedFamilies;
-(id)initWithSupportedFamilies:(id)arg1 ;
-(id)templateForFamily:(long long)arg1 ;
-(void)setTemplate:(id)arg1 forFamily:(long long)arg2 ;
-(id)loadedFamilies;
-(NSString *)clientID;
-(void)setClientID:(NSString *)arg1 ;
-(NSString *)applicationID;
-(void)setApplicationID:(NSString *)arg1 ;
@end
