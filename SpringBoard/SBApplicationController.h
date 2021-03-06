/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBApplicationRestrictionDataSource.h>
#import <SpringBoard/SBApplicationLifecycleObserver.h>
#import <SpringBoard/FBUIApplicationServiceDelegate.h>
#import <SpringBoard/FBApplicationTerminationAssertionServiceDelegate.h>

@class NSMutableDictionary, NSMutableSet, NSDictionary, NSLock, NSSet, BKSApplicationStateMonitor, SBApplicationRestrictionController, SBApplicationLibraryObserver, FBApplicationLibrary, SBApplicationInfo, SBReverseCountedSemaphore, NSString;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, SBApplicationLifecycleObserver, FBUIApplicationServiceDelegate, FBApplicationTerminationAssertionServiceDelegate> {

	NSMutableDictionary* _applicationsByBundleIdentifer;
	NSMutableSet* _applicationsPlayingMutedAudioSinceLastLock;
	NSDictionary* _backgroundDisplayDict;
	NSLock* _applicationsLock;
	NSMutableDictionary* _systemAppsVisibilityOverrides;
	NSSet* _cachedSystemAppsWithVisibilityOverrideHidden;
	BKSApplicationStateMonitor* _appStateMonitor;
	BOOL _booting;
	NSMutableSet* _appsToAutoLaunchAfterBoot;
	SBApplicationRestrictionController* _restrictionController;
	SBApplicationLibraryObserver* _appLibraryObserver;
	FBApplicationLibrary* _appLibrary;
	SBApplicationInfo* _systemAppInfo;
	SBReverseCountedSemaphore* _uninstallationReverseSemaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setClearSystemAppSnapshotsWhenLoaded:(BOOL)arg1 ;
+(void)_setClearAllLegacySnapshotsWhenLoaded:(BOOL)arg1 ;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)waitForUninstallsToComplete;
-(id)restrictionController;
-(void)_autoLaunchAppsIfNecessaryAfterBoot;
-(void)_mediaServerConnectionDied:(id)arg1 ;
-(id)setupApplication;
-(id)runningApplications;
-(id)musicApplication;
-(id)dataActivationApplication;
-(void)uninstallApplication:(id)arg1 ;
-(id)cameraApplication;
-(id)testFlightApplication;
-(id)webApplications;
-(id)_loadApplications:(id)arg1 removed:(id)arg2 ;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_memoryWarningReceived;
-(void)_deviceFirstUnlocked;
-(void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
-(void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
-(id)_lock_applicationWithBundleIdentifier:(id)arg1 ;
-(void)_removeApplicationsFromModelWithBundleIdentifier:(id)arg1 forInstall:(BOOL)arg2 withReason:(id)arg3 ;
-(void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3 ;
-(void)_unusuallyMutedAudioPlaying:(id)arg1 ;
-(Class)_appClassForInfo:(id)arg1 ;
-(void)_preLoadApplications;
-(void)_loadApplicationFromApplicationInfo:(id)arg1 ;
-(id)_appInfosToBundleIDs:(id)arg1 ;
-(void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(BOOL)arg2 popIn:(BOOL)arg3 reloadAllIcons:(BOOL)arg4 ;
-(void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 reveal:(BOOL)arg3 ;
-(void)_updateVisibilityOverrides;
-(id)allBundleIdentifiers;
-(id)alwaysAvailableApplicationBundleIdentifiers;
-(void)noteNeedsToRefreshVisiblityOverrides;
-(id)bundleIdentifiersWithVisibilityOverrideHidden;
-(void)applicationsAdded:(id)arg1 ;
-(void)applicationsModified:(id)arg1 ;
-(void)applicationsRemoved:(id)arg1 ;
-(void)applicationsDemoted:(id)arg1 ;
-(id)faceTimeApp;
-(id)inCallServiceApp;
-(id)clockApplication;
-(id)iPodOutApplication;
-(id)loginApplication;
-(BOOL)_loadApplicationWithoutMutatingIconState:(id)arg1 ;
-(id)allApplications;
-(id)init;
-(void)dealloc;
-(id)mobilePhone;
-(void)service:(id)arg1 didAcquireTerminationAssertion:(id)arg2 ;
-(void)service:(id)arg1 didRelinquishTerminationAssertion:(id)arg2 ;
-(void)service:(id)arg1 canAcquireTerminationAssertion:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)applicationService:(id)arg1 deleteAllSnapshotsForBundleIdentifier:(id)arg2 ;
-(void)applicationService:(id)arg1 setNextWakeDate:(id)arg2 forBundleIdentifier:(id)arg3 ;
-(void)applicationService:(id)arg1 suspendApplicationWithBundleIdentifier:(id)arg2 ;
-(id)applicationWithPid:(int)arg1 ;
-(id)applicationWithBundleIdentifier:(id)arg1 ;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_registerForAVSystemControllerNotifications;
@end

