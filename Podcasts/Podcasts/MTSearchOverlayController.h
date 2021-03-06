/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSearchDisplayControllerDelegate.h>

@protocol MTSearchOverlayControllerDelegate, MTAppController;
@class MusicTabBarController, UIViewController, UINavigationController, MTSearchDisplayController, UINavigationBar, MTSearchBar, NSString;

@interface MTSearchOverlayController : NSObject <MTSearchDisplayControllerDelegate> {

	BOOL _isShowingSearch;
	id<MTSearchOverlayControllerDelegate> _delegate;
	MusicTabBarController* _musicTabBarController;
	UIViewController* _containerViewController;
	id<MTAppController> _appController;
	UINavigationController* _searchNavigationController;
	MTSearchDisplayController* _searchDisplayController;
	UINavigationBar* _searchNavigationBar;
	MTSearchBar* _globalSearchBar;

}

@property (nonatomic,retain) MusicTabBarController * musicTabBarController;                      //@synthesize musicTabBarController=_musicTabBarController - In the implementation block
@property (nonatomic,retain) UIViewController * containerViewController;                         //@synthesize containerViewController=_containerViewController - In the implementation block
@property (nonatomic,retain) id<MTAppController> appController;                                  //@synthesize appController=_appController - In the implementation block
@property (nonatomic,retain) UINavigationController * searchNavigationController;                //@synthesize searchNavigationController=_searchNavigationController - In the implementation block
@property (nonatomic,retain) MTSearchDisplayController * searchDisplayController;                //@synthesize searchDisplayController=_searchDisplayController - In the implementation block
@property (nonatomic,retain) UINavigationBar * searchNavigationBar;                              //@synthesize searchNavigationBar=_searchNavigationBar - In the implementation block
@property (nonatomic,retain) MTSearchBar * globalSearchBar;                                      //@synthesize globalSearchBar=_globalSearchBar - In the implementation block
@property (assign,nonatomic) BOOL isShowingSearch;                                               //@synthesize isShowingSearch=_isShowingSearch - In the implementation block
@property (assign,nonatomic,__weak) id<MTSearchOverlayControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainerViewController:(id)arg1 ;
-(void)dismissOverlay:(BOOL)arg1 ;
-(void)presentOverlay;
-(UINavigationBar *)searchNavigationBar;
-(void)setSearchNavigationBar:(UINavigationBar *)arg1 ;
-(void)searchDisplayController:(id)arg1 didSelectPodcast:(id)arg2 ;
-(void)searchDisplayController:(id)arg1 didStoreSearch:(id)arg2 ;
-(void)presentOverlay:(BOOL)arg1 ;
-(UINavigationController *)searchNavigationController;
-(void)setIsShowingSearch:(BOOL)arg1 ;
-(void)dismissOverlay;
-(BOOL)isShowingSearch;
-(MusicTabBarController *)musicTabBarController;
-(void)setMusicTabBarController:(MusicTabBarController *)arg1 ;
-(void)setSearchNavigationController:(UINavigationController *)arg1 ;
-(MTSearchBar *)globalSearchBar;
-(void)setGlobalSearchBar:(MTSearchBar *)arg1 ;
-(void)setDelegate:(id<MTSearchOverlayControllerDelegate>)arg1 ;
-(id<MTSearchOverlayControllerDelegate>)delegate;
-(MTSearchDisplayController *)searchDisplayController;
-(void)setSearchDisplayController:(MTSearchDisplayController *)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(void)cancelSearch:(id)arg1 ;
-(UIViewController *)containerViewController;
-(void)setContainerViewController:(UIViewController *)arg1 ;
-(id<MTAppController>)appController;
-(void)setAppController:(id<MTAppController>)arg1 ;
@end

