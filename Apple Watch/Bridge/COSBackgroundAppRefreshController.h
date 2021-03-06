/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NARApplicationWorkspace, NSArray, NSMutableArray, NPSManager, NPSDomainAccessor, NSCache;

@interface COSBackgroundAppRefreshController : PSListController {

	NARApplicationWorkspace* _applicationWorkspace;
	NSArray* _applicationList;
	NSMutableArray* _disabledAppList;
	NPSManager* _syncManager;
	NPSDomainAccessor* _backgroundAppRefreshDomainAccessor;
	NSCache* _iconCache;

}

@property (nonatomic,retain) NARApplicationWorkspace * applicationWorkspace;                      //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,retain) NSArray * applicationList;                                           //@synthesize applicationList=_applicationList - In the implementation block
@property (nonatomic,retain) NSMutableArray * disabledAppList;                                    //@synthesize disabledAppList=_disabledAppList - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                                            //@synthesize syncManager=_syncManager - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * backgroundAppRefreshDomainAccessor;              //@synthesize backgroundAppRefreshDomainAccessor=_backgroundAppRefreshDomainAccessor - In the implementation block
@property (nonatomic,readonly) NSCache * iconCache;                                               //@synthesize iconCache=_iconCache - In the implementation block
-(NPSDomainAccessor *)backgroundAppRefreshDomainAccessor;
-(void)refreshAppList;
-(void)setBackgroundAppRefreshState:(id)arg1 specifier:(id)arg2 ;
-(id)backgroundAppRefreshState:(id)arg1 ;
-(void)applicationsDidChange;
-(void)backgroundAppRefreshSwitchStateDidChange;
-(NSArray *)applicationList;
-(void)setApplicationList:(NSArray *)arg1 ;
-(NSMutableArray *)disabledAppList;
-(void)setDisabledAppList:(NSMutableArray *)arg1 ;
-(void)setBackgroundAppRefreshDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(id)init;
-(NSCache *)iconCache;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(NARApplicationWorkspace *)applicationWorkspace;
-(void)setApplicationWorkspace:(NARApplicationWorkspace *)arg1 ;
-(id)specifiers;
@end

