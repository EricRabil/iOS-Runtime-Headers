/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:46 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
@class NSObject, NSMutableDictionary;

@interface NNMKSQLiteConnection : NSObject {

	BOOL _isInTransaction;
	sqlite3Ref _db;
	NSObject*<OS_dispatch_queue> _dbQueue;
	NSMutableDictionary* _cachedPreparedStatementsKeyedBySQLPattern;

}

@property (assign,nonatomic) sqlite3Ref db;                                                                //@synthesize db=_db - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dbQueue;                                         //@synthesize dbQueue=_dbQueue - In the implementation block
@property (assign,nonatomic) BOOL isInTransaction;                                                         //@synthesize isInTransaction=_isInTransaction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedPreparedStatementsKeyedBySQLPattern;              //@synthesize cachedPreparedStatementsKeyedBySQLPattern=_cachedPreparedStatementsKeyedBySQLPattern - In the implementation block
+(BOOL)errorCodeMeansCorruptedDatabase:(int)arg1 ;
-(void)dealloc;
-(BOOL)commitTransaction;
-(int)_executeSQL:(id)arg1 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 ;
-(void)_closeDatabase;
-(id)lastErrorMessage;
-(int)lastErrorCode;
-(BOOL)rollbackTransaction;
-(BOOL)beginTransaction;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(int)executeSQL:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dbQueue;
-(void)setDbQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isInTransaction;
-(id)initWithPath:(id)arg1 protectData:(BOOL)arg2 errorCode:(int*)arg3 ;
-(BOOL)tableExists:(id)arg1 inDatabase:(id)arg2 ;
-(int)stepPreparedStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)_openDatabaseWithPath:(id)arg1 protectData:(BOOL)arg2 errorCode:(int*)arg3 ;
-(sqlite3_stmtRef)preparedStatementForPattern:(id)arg1 cacheStatement:(BOOL)arg2 ;
-(sqlite3_stmtRef)_preparedStatementForPattern:(id)arg1 cacheStatement:(BOOL)arg2 ;
-(int)_stepPreparedStatement:(sqlite3_stmtRef)arg1 ;
-(int)_lastErrorCode;
-(id)_lastErrorMessage;
-(int)_runRetryingIfNeeded:(/*^block*/id)arg1 ;
-(void)setIsInTransaction:(BOOL)arg1 ;
-(NSMutableDictionary *)cachedPreparedStatementsKeyedBySQLPattern;
-(void)setCachedPreparedStatementsKeyedBySQLPattern:(NSMutableDictionary *)arg1 ;
@end

