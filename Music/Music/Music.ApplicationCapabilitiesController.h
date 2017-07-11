/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ISURLBagObserver.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class RadioAvailabilityController;

@interface Music.ApplicationCapabilitiesController : NSObject <ISURLBagObserver, MCProfileConnectionObserver> {

	 isUpdatingPropertiesForInitialization;
	 radioAvailabilityController;
	 _allowsConnectContent;
	 _allowsRadioContent;
	 _allowsSubscriptionContent;
	 _hasNetworkConnectivity;
	 _supportedTabConfigurations;
	 _userSubscriptionState;
	 activeStoreAccountUniqueIdentifier;
	 hasActiveSubscription;
	 accessQueue;
	 calloutQueue;
	 storeBagDictionary;
	 accountStoreNotificationObserver;
	 hasProperNetworkConditionsToShowCloudMediaObserver;
	 radioAvailabilityNotificationObserver;
	 subscriptionAvailabilityNotificationObserver;
	 subscriptionStatusNotificationObserver;
	 hasUserRequestedSubscriptionHiddenObserver;

}

@property (readonly,nonatomic) BOOL allowsConnectContent; 
@property (readonly,nonatomic) BOOL allowsRadioContent; 
@property (readonly,nonatomic) BOOL allowsSubscriptionContent; 
@property (readonly,nonatomic) BOOL hasNetworkConnectivity; 
@property (readonly,nonatomic) RadioAvailabilityController * radioAvailabilityController; 
+(id)shared;
-(BOOL)allowsConnectContent;
-(BOOL)allowsSubscriptionContent;
-(BOOL)hasNetworkConnectivity;
-(id)init;
-(void)dealloc;
-(void)bagDidChange:(id)arg1 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)allowsRadioContent;
-(RadioAvailabilityController *)radioAvailabilityController;
@end
