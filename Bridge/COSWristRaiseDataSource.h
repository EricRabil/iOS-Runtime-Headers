/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifierDataSource.h>

@class NPSDomainAccessor, NPSManager;

@interface COSWristRaiseDataSource : PSSpecifierDataSource {

	BOOL _hasBacklightExtendCapability;
	BOOL _hasRotateToWakeCapability;
	NPSDomainAccessor* _viewOnWakeDomainAccessor;
	NPSDomainAccessor* _wakeGestureDomainAccessor;
	NPSDomainAccessor* _backlightExtendDomainAccessor;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) NPSDomainAccessor * viewOnWakeDomainAccessor;                   //@synthesize viewOnWakeDomainAccessor=_viewOnWakeDomainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * wakeGestureDomainAccessor;                  //@synthesize wakeGestureDomainAccessor=_wakeGestureDomainAccessor - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * backlightExtendDomainAccessor;              //@synthesize backlightExtendDomainAccessor=_backlightExtendDomainAccessor - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                                       //@synthesize syncManager=_syncManager - In the implementation block
@property (assign,nonatomic) BOOL hasBacklightExtendCapability;                              //@synthesize hasBacklightExtendCapability=_hasBacklightExtendCapability - In the implementation block
@property (assign,nonatomic) BOOL hasRotateToWakeCapability;                                 //@synthesize hasRotateToWakeCapability=_hasRotateToWakeCapability - In the implementation block
-(void)setViewOnWakeDisabled:(BOOL)arg1 ;
-(void)setAppStickiness:(long long)arg1 ;
-(void)setBacklightExtendValue:(long long)arg1 ;
-(void)handleDidUnpair;
-(NPSDomainAccessor *)wakeGestureDomainAccessor;
-(void)setActivateOnWristRaiseValue:(id)arg1 specifier:(id)arg2 ;
-(id)activateOnWristRaiseValue:(id)arg1 ;
-(void)setActivateOnCrownUpValue:(id)arg1 specifier:(id)arg2 ;
-(id)activateOnCrownUpValue:(id)arg1 ;
-(id)_onWristRaiseGroup;
-(id)_onTapGroup;
-(NPSDomainAccessor *)viewOnWakeDomainAccessor;
-(NPSDomainAccessor *)backlightExtendDomainAccessor;
-(BOOL)isWakeSetToShort;
-(void)setViewOnWakeDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setWakeGestureDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setBacklightExtendDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(BOOL)hasBacklightExtendCapability;
-(void)setHasBacklightExtendCapability:(BOOL)arg1 ;
-(BOOL)hasRotateToWakeCapability;
-(void)setHasRotateToWakeCapability:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadSpecifiers;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
@end
