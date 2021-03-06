/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:46 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSQLiteConnection.h>

@class NSString;

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection {

	BOOL _protectedDatabaseAttached;
	NSString* _protectedDatabasePath;
	NSString* _protectedDatabaseName;

}

@property (nonatomic,retain) NSString * protectedDatabasePath;              //@synthesize protectedDatabasePath=_protectedDatabasePath - In the implementation block
@property (nonatomic,retain) NSString * protectedDatabaseName;              //@synthesize protectedDatabaseName=_protectedDatabaseName - In the implementation block
@property (nonatomic,readonly) BOOL protectedDatabaseAttached;              //@synthesize protectedDatabaseAttached=_protectedDatabaseAttached - In the implementation block
-(int)attachProtectedDatabase;
-(id)_vfsModuleName;
-(NSString *)protectedDatabaseName;
-(id)initWithUnprotectedDatabaseFileName:(id)arg1 protectedDatabaseFileName:(id)arg2 inDirectory:(id)arg3 protectedDatabaseName:(id)arg4 errorCode:(int*)arg5 ;
-(void)dettachProtectedDatabase;
-(BOOL)protectedDatabaseAttached;
-(NSString *)protectedDatabasePath;
-(void)setProtectedDatabasePath:(NSString *)arg1 ;
-(void)setProtectedDatabaseName:(NSString *)arg1 ;
@end

