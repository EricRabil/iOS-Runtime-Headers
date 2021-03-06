/*
* This header is generated by classdump-dyld 1.0
* on Saturday, April 22, 2017 at 12:44:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Passbook.app/Passbook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Passbook/Passbook-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, UINavigationController, UITabBarController, PKActivityViewController, CLInUseAssertion, NSMutableArray, CLLocationManager, PKPassGroupsViewController, NSString;

@interface PBKAppDelegate : UIResponder <UIApplicationDelegate> {

	UIWindow* _window;
	UINavigationController* _navigationController;
	UITabBarController* _tabBarController;
	PKActivityViewController* _activityViewController;
	CLInUseAssertion* _inUseAssertion;
	BOOL _needsOnScreenPresentation;
	BOOL _needsRegionSupportUpdate;
	BOOL _firstActive;
	BOOL _enteringForeground;
	NSMutableArray* _blocksQueuedForForegroundExecution;
	CLLocationManager* _requestManager;
	PKPassGroupsViewController* _cardsViewController;

}

@property (nonatomic,readonly) PKPassGroupsViewController * cardsViewController;              //@synthesize cardsViewController=_cardsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)_executeWhenApplicationHasEnteredForeground:(/*^block*/id)arg1 ;
-(id)applicationDocumentsDirectory;
-(PKPassGroupsViewController *)cardsViewController;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

