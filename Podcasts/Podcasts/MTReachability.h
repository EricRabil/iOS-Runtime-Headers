/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class ITMReachability, NSHashTable, RadiosPreferences;

@interface MTReachability : NSObject <RadiosPreferencesDelegate> {

	BOOL _airplaneModeEnabled;
	BOOL _globalCellularEnabled;
	BOOL _reachable;
	long long _networkStatus;
	ITMReachability* _reachability;
	NSHashTable* _callbacks;
	RadiosPreferences* _radiosPreferences;

}

@property (nonatomic,retain) ITMReachability * reachability;                                           //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) NSHashTable * callbacks;                                                  //@synthesize callbacks=_callbacks - In the implementation block
@property (assign,nonatomic) long long networkStatus;                                                  //@synthesize networkStatus=_networkStatus - In the implementation block
@property (assign,getter=isReachable,nonatomic) BOOL reachable;                                        //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radiosPreferences;                                    //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (getter=isAirplaneModeEnabled,nonatomic,readonly) BOOL airplaneModeEnabled;                  //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
@property (getter=isGlobalCellularEnabled,nonatomic,readonly) BOOL globalCellularEnabled;              //@synthesize globalCellularEnabled=_globalCellularEnabled - In the implementation block
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)showInternetUnreachableDialog;
-(unsigned long long)reasonForNoInternet;
-(id)reasonTextForNoInternet;
-(BOOL)isGlobalCellularEnabled;
-(BOOL)showInternetUnreachableDialogWithAcknowledmentBlock:(/*^block*/id)arg1 ;
-(void)_applicationWillForeground;
-(void)_updateAirplaneMode;
-(void)_updateGlobalCellular;
-(void)_showAlertForInternetUnavailableReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setRadiosPreferences:(RadiosPreferences *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copy;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)airplaneModeChanged;
-(NSHashTable *)callbacks;
-(BOOL)isAirplaneModeEnabled;
-(RadiosPreferences *)radiosPreferences;
-(void)setCallbacks:(NSHashTable *)arg1 ;
-(BOOL)isReachable;
-(void)setReachable:(BOOL)arg1 ;
-(void)_updateReachability;
-(void)setReachability:(ITMReachability *)arg1 ;
-(ITMReachability *)reachability;
-(long long)networkStatus;
-(void)setNetworkStatus:(long long)arg1 ;
@end
