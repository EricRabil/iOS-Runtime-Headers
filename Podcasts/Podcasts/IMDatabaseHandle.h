/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Podcasts/Podcasts-Structs.h>
@class NSMutableDictionary, NSObject;

@interface IMDatabaseHandle : NSObject {

	sqlite3Ref _databaseHandle;
	NSMutableDictionary* _statementCache;
	NSObject*<OS_dispatch_queue> _accessQueue;

}
+(id)questionMarkListForCollection:(id)arg1 ;
-(BOOL)runStatement:(id)arg1 arguments:(id)arg2 ;
-(id)arrayForQuery:(id)arg1 arguments:(id)arg2 rawRows:(BOOL)arg3 ;
-(id)stringColumnDataForQuery:(id)arg1 withArguments:(id)arg2 ;
-(id)_stringRowsForQuery:(id)arg1 ;
-(sqlite3Ref)_databaseHandle;
-(BOOL)_bindArguments:(id)arg1 inStatement:(sqlite3_stmtRef)arg2 ;
-(void)_reportErrorInFunction:(const char*)arg1 ;
-(id)_cursorForQuery:(id)arg1 withArguments:(id)arg2 ;
-(id)columnInfoForTable:(id)arg1 ;
-(BOOL)runSql:(id)arg1 withArguments:(id)arg2 ;
-(id)arrayForQuery:(id)arg1 arguments:(id)arg2 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(id)version;
-(id)tableNames;
-(BOOL)passesIntegrityCheck;
@end
