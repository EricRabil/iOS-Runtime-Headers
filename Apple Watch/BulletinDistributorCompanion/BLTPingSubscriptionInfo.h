/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:29 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol BLTPingSubscriptionInfo <NSObject>
@property (nonatomic,copy,readonly) NSString * sectionID; 
@property (nonatomic,readonly) BOOL forBulletin; 
@property (nonatomic,readonly) BOOL canAck; 
@required
-(NSString *)sectionID;
-(BOOL)forBulletin;
-(BOOL)canAck;

@end
