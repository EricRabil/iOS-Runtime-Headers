/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTListViewController.h>
#import <Podcasts/MTEpisodeCellDelegate.h>
#import <Podcasts/IMActionControllerDelegate.h>

@protocol MTEpisodeListViewControllerDelegate;
@class UISearchController, NSString, UIRefreshControl;

@interface MTEpisodeListViewController : MTListViewController <MTEpisodeCellDelegate, IMActionControllerDelegate> {

	BOOL _needsScrollAdjust;
	double _lastDownloadUpdate;
	BOOL _cellularReachable;
	UISearchController* _searchController;
	BOOL _viewSizeChangedWhileNotVisible;
	BOOL _needsToFixUpHeaderInsets;
	double _cachedFixedRowHeight;
	CGSize _cachedExpandedRowSize;
	BOOL _showsArtworkInCells;
	BOOL _showFooterView;
	BOOL _disablesEditWhileRefreshing;
	BOOL _disablesPullToRefreshWhileEditing;
	int _refreshControlState;
	id<MTEpisodeListViewControllerDelegate> _delegate;
	unsigned long long _cellStyle;
	NSString* _playingUuid;
	UIRefreshControl* _mt_refreshControl;
	NSString* _expandedEpisodeUuid;
	UIEdgeInsets __layoutMargins;

}

@property (assign,nonatomic) int refreshControlState;                                                        //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (assign,nonatomic) BOOL showsArtworkInCells;                                                       //@synthesize showsArtworkInCells=_showsArtworkInCells - In the implementation block
@property (assign,nonatomic,__weak) id<MTEpisodeListViewControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long cellStyle;                                                   //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic) BOOL showFooterView;                                                            //@synthesize showFooterView=_showFooterView - In the implementation block
@property (nonatomic,copy,readonly) NSString * playingUuid;                                                  //@synthesize playingUuid=_playingUuid - In the implementation block
@property (assign,nonatomic) BOOL disablesEditWhileRefreshing;                                               //@synthesize disablesEditWhileRefreshing=_disablesEditWhileRefreshing - In the implementation block
@property (assign,nonatomic) BOOL disablesPullToRefreshWhileEditing;                                         //@synthesize disablesPullToRefreshWhileEditing=_disablesPullToRefreshWhileEditing - In the implementation block
@property (setter=mt_setRefreshControl:,nonatomic,retain) UIRefreshControl * mt_refreshControl;              //@synthesize mt_refreshControl=_mt_refreshControl - In the implementation block
@property (nonatomic,retain) NSString * expandedEpisodeUuid;                                                 //@synthesize expandedEpisodeUuid=_expandedEpisodeUuid - In the implementation block
@property (assign,nonatomic) UIEdgeInsets _layoutMargins;                                                    //@synthesize _layoutMargins=__layoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didEndRefreshing;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(void)nowPlayingItemChanged:(id)arg1 ;
-(void)mt_setRefreshControl:(id)arg1 ;
-(void)updateActionSheetsAndPopovers;
-(UIRefreshControl *)mt_refreshControl;
-(void)refreshControlStateMovedToIdle;
-(void)refreshControlStateMovedToRefreshing;
-(void)refreshControlStateMovedToEnding;
-(void)updateCellStyle;
-(BOOL)showsArtworkInCells;
-(NSString *)expandedEpisodeUuid;
-(id)indexPathForEpisodeUuid:(id)arg1 ;
-(void)setExpandedEpisodeUuid:(NSString *)arg1 ;
-(void)dismissSwipeToDeleteMode;
-(void)toggleExpansionForEpisodeUuid:(id)arg1 ;
-(void)playEpisodeAtIndexPath:(id)arg1 ;
-(void)cell:(id)arg1 moreButtonTapped:(id)arg2 ;
-(void)cellDidChangeSize:(id)arg1 ;
-(unsigned long long)sectionTypeForIndexPath:(id)arg1 ;
-(void)setShowsArtworkInCells:(BOOL)arg1 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)scrollToLatestIfNeeded:(BOOL)arg1 ;
-(void)markSelectedItems:(BOOL)arg1 ;
-(void)markSelectedItemsAsSaved:(BOOL)arg1 ;
-(id)editingToolbarItems;
-(void)refetchWithSortDescriptors:(id)arg1 animated:(BOOL)arg2 ;
-(void)setShowFooterView:(BOOL)arg1 ;
-(void)nowPlayingStateChanged:(id)arg1 ;
-(void)updateEstimatedRowHeight;
-(void)set_layoutMargins:(UIEdgeInsets)arg1 ;
-(void)fixEmptyTextContainers;
-(BOOL)shouldShowNowPlayingGlyphWhenPaused;
-(void)_updateNowPlayingGlyph;
-(void)_updateRowHeightsForEditingStateChange;
-(BOOL)disablesPullToRefreshWhileEditing;
-(BOOL)disablesEditWhileRefreshing;
-(BOOL)primaryActionIsMarkForSwipeGestureAtIndexPath:(id)arg1 ;
-(id)markRowActionForIndexPath:(id)arg1 ;
-(BOOL)hasRemoveActionInsteadOfDeleteActionForRowAtIndexPath:(id)arg1 ;
-(id)removeRowActionForIndexPath:(id)arg1 ;
-(id)deleteRowActionForIndexPath:(id)arg1 ;
-(BOOL)hasMoreActionsForRowAtIndexPath:(id)arg1 ;
-(id)_moreRowAction;
-(void)showMoreActionSheetFromButton:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)removeEpisodeAtIndexPath:(id)arg1 fromButton:(id)arg2 ;
-(void)updateMarkRowAction:(id)arg1 forEpisode:(id)arg2 ;
-(void)_updateRowHeightsForExpansionChange;
-(void)scrollToExpandedEpisodeAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)_layoutMarginsForViewWidth:(double)arg1 ;
-(void)playEpisodeWithUUID:(id)arg1 ;
-(void)fixSectionHeaderInsetsIfNeeded;
-(BOOL)isSwipingExpandedCell;
-(void)pauseEpisodeAtIndexPath:(id)arg1 ;
-(double)tableView:(id)arg1 headerSizeForIndexPath:(id)arg2 ;
-(UIEdgeInsets)_layoutMargins;
-(BOOL)showFooterView;
-(NSString *)playingUuid;
-(void)setDisablesEditWhileRefreshing:(BOOL)arg1 ;
-(void)setDisablesPullToRefreshWhileEditing:(BOOL)arg1 ;
-(void)didPerformActionInSheet:(id)arg1 ;
-(void)dismissActionSheetsAndPopovers;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)setDelegate:(id<MTEpisodeListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id<MTEpisodeListViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(int)refreshControlState;
-(void)beginRefreshing;
-(void)endRefreshing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)footerView;
-(void)setRefreshControlState:(int)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
-(void)transitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(unsigned long long)cellStyle;
-(void)setCellStyle:(unsigned long long)arg1 ;
@end
