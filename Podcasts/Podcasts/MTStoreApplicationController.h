/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <StoreKitUI/SKUIApplicationController.h>
#import <Podcasts/SKUIApplicationDelegate.h>
#import <Podcasts/MTSSDownloadManagerDelegate.h>
#import <Podcasts/MTStoreTabControllerSizeDelegate.h>
#import <Podcasts/MTAppController.h>
#import <Podcasts/MusicClientContextConsuming.h>

@class UIViewController, MTPodcastSplitViewController, NSString, SKUITabBarItem, MTDownloadsCollectionViewController, UINavigationController, MTStoreNavigationController, MTUnplayedViewController, MTMusicTabController, SKUIClientContext;

@interface MTStoreApplicationController : SKUIApplicationController <SKUIApplicationDelegate, MTSSDownloadManagerDelegate, MTStoreTabControllerSizeDelegate, MTAppController, MusicClientContextConsuming> {

	BOOL _tabBarContainsDownloadsTab;
	MTPodcastSplitViewController* _myPodcastsViewController;
	NSString* _derivedPropertyObserverId;
	unsigned long long _currentNewCount;
	SKUITabBarItem* _unplayedTab;
	SKUITabBarItem* _podcastsTab;
	SKUITabBarItem* _featuredTab;
	SKUITabBarItem* _topChartsTab;
	SKUITabBarItem* _searchTab;
	SKUITabBarItem* _downloadsTab;
	MTDownloadsCollectionViewController* _downloadsViewController;
	UINavigationController* _downloadNavigationController;
	MTDownloadsCollectionViewController* _downloadsTabViewController;
	MTStoreNavigationController* _downloadTabNavigationController;
	MTUnplayedViewController* _unplayedViewController;

}

@property (nonatomic,retain) NSString * derivedPropertyObserverId;                                          //@synthesize derivedPropertyObserverId=_derivedPropertyObserverId - In the implementation block
@property (assign,nonatomic) unsigned long long currentNewCount;                                            //@synthesize currentNewCount=_currentNewCount - In the implementation block
@property (assign,nonatomic) BOOL tabBarContainsDownloadsTab;                                               //@synthesize tabBarContainsDownloadsTab=_tabBarContainsDownloadsTab - In the implementation block
@property (nonatomic,retain) SKUITabBarItem * unplayedTab;                                                  //@synthesize unplayedTab=_unplayedTab - In the implementation block
@property (nonatomic,retain) SKUITabBarItem * podcastsTab;                                                  //@synthesize podcastsTab=_podcastsTab - In the implementation block
@property (nonatomic,retain) SKUITabBarItem * featuredTab;                                                  //@synthesize featuredTab=_featuredTab - In the implementation block
@property (nonatomic,retain) SKUITabBarItem * topChartsTab;                                                 //@synthesize topChartsTab=_topChartsTab - In the implementation block
@property (nonatomic,retain) SKUITabBarItem * searchTab;                                                    //@synthesize searchTab=_searchTab - In the implementation block
@property (nonatomic,retain) SKUITabBarItem * downloadsTab;                                                 //@synthesize downloadsTab=_downloadsTab - In the implementation block
@property (nonatomic,retain) MTPodcastSplitViewController * myPodcastsViewController;                       //@synthesize myPodcastsViewController=_myPodcastsViewController - In the implementation block
@property (nonatomic,retain) MTDownloadsCollectionViewController * downloadsViewController;                 //@synthesize downloadsViewController=_downloadsViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * downloadNavigationController;                         //@synthesize downloadNavigationController=_downloadNavigationController - In the implementation block
@property (nonatomic,retain) MTDownloadsCollectionViewController * downloadsTabViewController;              //@synthesize downloadsTabViewController=_downloadsTabViewController - In the implementation block
@property (nonatomic,retain) MTStoreNavigationController * downloadTabNavigationController;                 //@synthesize downloadTabNavigationController=_downloadTabNavigationController - In the implementation block
@property (nonatomic,retain) MTUnplayedViewController * unplayedViewController;                             //@synthesize unplayedViewController=_unplayedViewController - In the implementation block
@property (nonatomic,readonly) MTMusicTabController * rootViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)handleiTMSUrlScheme:(id)arg1 ;
-(void)handlePodcastsUrlScheme:(id)arg1 ;
-(void)presentNowPlayingAnimated:(BOOL)arg1 ;
-(void)downloadManager:(id)arg1 willRemoveDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 didUpdateDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 didAddDownload:(id)arg2 ;
-(void)downloadManager:(id)arg1 didRemoveDownloads:(id)arg2 ;
-(void)downloadManager:(id)arg1 updateDownloadCount:(id)arg2 ;
-(void)showDownloadsControllerAnimated:(BOOL)arg1 ;
-(void)dismissSearchOverlayController;
-(void)presentPodcast:(id)arg1 episode:(id)arg2 podcastTab:(unsigned long long)arg3 startPlayback:(BOOL)arg4 animated:(BOOL)arg5 ;
-(void)presentStation:(id)arg1 new:(BOOL)arg2 ;
-(void)showSearchControllerWithSearchText:(id)arg1 ;
-(void)registerForBadgeCountUpdates;
-(NSString *)derivedPropertyObserverId;
-(void)setupPodcastsTab;
-(void)setupUnplayedTab;
-(id)tabBarItemWithIdentifier:(id)arg1 title:(id)arg2 imageName:(id)arg3 ;
-(void)setFeaturedTab:(SKUITabBarItem *)arg1 ;
-(SKUITabBarItem *)featuredTab;
-(void)setTopChartsTab:(SKUITabBarItem *)arg1 ;
-(SKUITabBarItem *)topChartsTab;
-(void)setSearchTab:(SKUITabBarItem *)arg1 ;
-(SKUITabBarItem *)searchTab;
-(void)updateTabBarAnimated:(BOOL)arg1 ;
-(void)setMyPodcastsViewController:(MTPodcastSplitViewController *)arg1 ;
-(void)setPodcastsTab:(SKUITabBarItem *)arg1 ;
-(MTPodcastSplitViewController *)myPodcastsViewController;
-(SKUITabBarItem *)podcastsTab;
-(void)setUnplayedTab:(SKUITabBarItem *)arg1 ;
-(void)setUnplayedViewController:(MTUnplayedViewController *)arg1 ;
-(SKUITabBarItem *)unplayedTab;
-(BOOL)tabBarContainsDownloadsTab;
-(SKUITabBarItem *)downloadsTab;
-(void)setTabBarContainsDownloadsTab:(BOOL)arg1 ;
-(void)presentPodcast:(id)arg1 episode:(id)arg2 podcastTab:(unsigned long long)arg3 animated:(BOOL)arg4 episodeSelectionBlock:(/*^block*/id)arg5 ;
-(MTUnplayedViewController *)unplayedViewController;
-(void)updateNewCount;
-(void)setDerivedPropertyObserverId:(NSString *)arg1 ;
-(void)setCurrentNewCount:(unsigned long long)arg1 ;
-(void)updateUnplayedBadgeCount;
-(unsigned long long)currentNewCount;
-(void)updateTabBar;
-(void)setDownloadsTab:(SKUITabBarItem *)arg1 ;
-(void)setDownloadsViewController:(MTDownloadsCollectionViewController *)arg1 ;
-(void)setDownloadNavigationController:(UINavigationController *)arg1 ;
-(void)setDownloadTabNavigationController:(MTStoreNavigationController *)arg1 ;
-(UINavigationController *)downloadNavigationController;
-(MTDownloadsCollectionViewController *)downloadsViewController;
-(MTDownloadsCollectionViewController *)downloadsTabViewController;
-(MTStoreNavigationController *)downloadTabNavigationController;
-(void)storeTabController:(id)arg1 didMoveToHorizontalClass:(long long)arg2 ;
-(void)storeTabController:(id)arg1 willMoveToHorizontalClass:(long long)arg2 ;
-(void)storeTabController:(id)arg1 didTransitionToSize:(CGSize)arg2 ;
-(void)openStoreURL:(id)arg1 ;
-(void)selectUnplayedTab;
-(void)selectFeaturedTab;
-(void)initializeTabs;
-(void)setDownloadsTabViewController:(MTDownloadsCollectionViewController *)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(id)initWithClientContextClass:(Class)arg1 ;
-(BOOL)shouldShowExplicitRestrictionAlertOnLaunch;
-(void)_invalidateApplication;
-(Class)_JSITunesStoreClass;
-(void)application:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 JSContext:(id)arg3 ;
-(void)application:(id)arg1 didFailToLoadWithError:(id)arg2 ;
-(id)application:(id)arg1 navigationControllerWithTabBarItem:(id)arg2 ;
-(void)applicationDidChangeClientContext:(id)arg1 ;
-(Class)_tabBarControllerClass;
-(id)legacyScriptInterfaceForApplication:(id)arg1 ;
@end
