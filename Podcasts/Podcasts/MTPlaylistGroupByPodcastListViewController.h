/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTListViewController.h>
#import <Podcasts/MTSourceListDelegate.h>
#import <Podcasts/MTPodcastGroupCellDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <Podcasts/MTReachabilityObserver.h>
#import <Podcasts/MTPlaylistLayoutControllerProtocol.h>

@protocol MTPlaylistLayoutViewControllerDelegate, UIViewControllerPreviewing;
@class UIViewController, UIPopoverController, NSString, UIView, UIButton, UIBarButtonItem, UIRefreshControl, MTUuidQueryObserver, MTPlaylistSelectPodcastListViewController, MTAllPropertyChangesQueryObserver, NSIndexPath;

@interface MTPlaylistGroupByPodcastListViewController : MTListViewController <MTSourceListDelegate, MTPodcastGroupCellDelegate, UIViewControllerRestoration, MTReachabilityObserver, MTPlaylistLayoutControllerProtocol> {

	UIViewController* _detailController;
	UIPopoverController* _episodePopover;
	NSString* _settingsUuidDisplayingPopover;
	UIView* _footerView;
	UIButton* _settingsButton;
	UIBarButtonItem* _settingsButtonItem;
	UIPopoverController* _settingsPopover;
	UIRefreshControl* _refreshControl;
	MTUuidQueryObserver* _uuidQueryObserver;
	unsigned long long _episodesCount;
	MTPlaylistSelectPodcastListViewController* _addPodcastsViewController;
	MTAllPropertyChangesQueryObserver* _downloadedQuery;
	BOOL _isRefreshing;
	BOOL _downloadButtonEnabled;
	BOOL _downloadsAvailable;
	/*^block*/id _settingsBlock;
	id<MTPlaylistLayoutViewControllerDelegate> _layoutDelegate;
	NSString* _playlistUuid;
	NSIndexPath* _previewIndexPath;
	id<UIViewControllerPreviewing> _previewingContext;

}

@property (assign,nonatomic) BOOL isRefreshing;                                                             //@synthesize isRefreshing=_isRefreshing - In the implementation block
@property (assign,nonatomic) BOOL downloadButtonEnabled;                                                    //@synthesize downloadButtonEnabled=_downloadButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL downloadsAvailable;                                                       //@synthesize downloadsAvailable=_downloadsAvailable - In the implementation block
@property (nonatomic,retain) NSIndexPath * previewIndexPath;                                                //@synthesize previewIndexPath=_previewIndexPath - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewing> previewingContext;                              //@synthesize previewingContext=_previewingContext - In the implementation block
@property (nonatomic,retain) NSString * playlistUuid;                                                       //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id settingsBlock;                                                                //@synthesize settingsBlock=_settingsBlock - In the implementation block
@property (assign,nonatomic,__weak) id<MTPlaylistLayoutViewControllerDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)stationPodcastPredicateForPlaylist:(id)arg1 ;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2 ;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)reachabilityChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)markSelectedItems:(BOOL)arg1 ;
-(void)markSelectedItemsAsSaved:(BOOL)arg1 ;
-(id)editingToolbarItems;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(id)previewPlayAction;
-(void)feedUpdateDidComplete:(id)arg1 ;
-(void)feedUpdateDidStart;
-(id)leftButtonItems;
-(id)emptyListMessage;
-(id)leftEditingItems;
-(id)toolbarButtonItems;
-(void)downloadAll:(id)arg1 ;
-(void)podcastGroupCellDidTapInfoButton:(id)arg1 ;
-(NSString *)playlistUuid;
-(void)refreshPlaylist:(id)arg1 ;
-(void)setDownloadButtonEnabled:(BOOL)arg1 ;
-(void)addUUIDQueryObserver;
-(void)setDownloadsAvailable:(BOOL)arg1 ;
-(id)_detailViewControllerForIndexPath:(id)arg1 ;
-(void)setPreviewIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)previewIndexPath;
-(void)_showDetailViewControllerForIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)settingsButtonItem;
-(void)showSettings:(id)arg1 ;
-(void)_updatePlaylist;
-(void)configureAllVisibleCells;
-(void)updateEditingState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)updateDownloadButtonState;
-(void)_modifyEpisodesForSettingsWithBlock:(/*^block*/id)arg1 atIndexPaths:(id)arg2 ctx:(id)arg3 ;
-(void)_updatePlaylistSuppressUpdates:(BOOL)arg1 ;
-(id)episodeListForSettings:(id)arg1 ;
-(void)playlistSettingsDidChange;
-(id)settingsBlock;
-(void)setSettingsBlock:(id)arg1 ;
-(void)finishedSettings:(id)arg1 ;
-(void)finishedAdding:(id)arg1 ;
-(void)playlistSettingsDidChangeSetting:(id)arg1 ;
-(BOOL)downloadButtonEnabled;
-(BOOL)downloadsAvailable;
-(id)metricsName;
-(id)metricDataSource;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)endRefreshing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)previewActionItems;
-(void)delete:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)footerView;
-(BOOL)isRefreshing;
-(void)cancel:(id)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
-(void)transitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(id)initWithStation:(id)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)setIsRefreshing:(BOOL)arg1 ;
-(void)setLayoutDelegate:(id<MTPlaylistLayoutViewControllerDelegate>)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id<MTPlaylistLayoutViewControllerDelegate>)layoutDelegate;
-(id)settingsButton;
-(void)setPreviewingContext:(id<UIViewControllerPreviewing>)arg1 ;
-(id<UIViewControllerPreviewing>)previewingContext;
@end
