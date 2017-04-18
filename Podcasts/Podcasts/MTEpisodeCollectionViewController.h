/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTCollectionListViewController.h>
#import <Podcasts/MTReachabilityObserver.h>
#import <Podcasts/IMActionControllerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Podcasts/MTEpisodeCollectionViewCellDelegate.h>

@class UISearchController, UIRefreshControl, NSString;

@interface MTEpisodeCollectionViewController : MTCollectionListViewController <MTReachabilityObserver, IMActionControllerDelegate, UICollectionViewDelegateFlowLayout, MTEpisodeCollectionViewCellDelegate> {

	BOOL _needsScrollAdjust;
	double _lastDownloadUpdate;
	BOOL _cellularReachable;
	UISearchController* _searchController;
	BOOL _showsArtworkInCells;
	BOOL _showsPlayStateInCells;
	int _refreshControlState;
	unsigned long long _cellStyle;
	UIRefreshControl* _mt_refreshControl;
	NSString* _expandedEpisodeUuid;

}

@property (assign,nonatomic) int refreshControlState;                                                        //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (assign,nonatomic) unsigned long long cellStyle;                                                   //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic) BOOL showsArtworkInCells;                                                       //@synthesize showsArtworkInCells=_showsArtworkInCells - In the implementation block
@property (assign,nonatomic) BOOL showsPlayStateInCells;                                                     //@synthesize showsPlayStateInCells=_showsPlayStateInCells - In the implementation block
@property (setter=mt_setRefreshControl:,nonatomic,retain) UIRefreshControl * mt_refreshControl;              //@synthesize mt_refreshControl=_mt_refreshControl - In the implementation block
@property (nonatomic,retain) NSString * expandedEpisodeUuid;                                                 //@synthesize expandedEpisodeUuid=_expandedEpisodeUuid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)sizingCellClass;
-(void)didEndRefreshing;
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(void)nowPlayingItemChanged:(id)arg1 ;
-(void)mt_setRefreshControl:(id)arg1 ;
-(void)registerCollectionViewClasses;
-(void)updateActionSheetsAndPopovers;
-(UIRefreshControl *)mt_refreshControl;
-(void)refreshControlStateMovedToIdle;
-(void)refreshControlStateMovedToRefreshing;
-(void)refreshControlStateMovedToEnding;
-(void)updateCellStyle;
-(BOOL)showsArtworkInCells;
-(void)setExpandedEpisodeUuid:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateCellSizesWithSize:(CGSize)arg1 ;
-(NSString *)expandedEpisodeUuid;
-(id)indexPathForEpisodeUuid:(id)arg1 ;
-(void)setExpandedEpisodeUuid:(NSString *)arg1 ;
-(void)dismissSwipeToDeleteMode;
-(double)_currentMaxWidthForSectionHeaders;
-(void)collapseCollectionViewCell:(id)arg1 ;
-(void)expandCollectionViewCell:(id)arg1 ;
-(BOOL)showsPlayStateInCells;
-(void)toggleExpansionForEpisodeUuid:(id)arg1 ;
-(void)playEpisodeAtIndexPath:(id)arg1 ;
-(void)_updateSectionHeaderInsets;
-(void)reachabilityChangedFrom:(BOOL)arg1 to:(BOOL)arg2 ;
-(void)cell:(id)arg1 moreButtonTapped:(id)arg2 ;
-(void)cellDidChangeSize:(id)arg1 ;
-(unsigned long long)sectionTypeForIndexPath:(id)arg1 ;
-(void)setShowsArtworkInCells:(BOOL)arg1 ;
-(void)_willUpdateCollectionView:(id)arg1 ;
-(BOOL)shouldCalculateDynamicHeightForIndexPath:(id)arg1 ;
-(id)reuseIdentifierForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4 ;
-(double)estimatedCellHeightForWidth:(double)arg1 ;
-(double)calculateCellWidthForSize:(CGSize)arg1 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)deselectedItemAtIndexPath:(id)arg1 ;
-(void)scrollToLatestIfNeeded:(BOOL)arg1 ;
-(void)markSelectedItems:(BOOL)arg1 ;
-(void)markSelectedItemsAsSaved:(BOOL)arg1 ;
-(id)editingToolbarItems;
-(void)setShowsPlayStateInCells:(BOOL)arg1 ;
-(void)didPerformActionInSheet:(id)arg1 ;
-(void)dismissActionSheetsAndPopovers;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(int)refreshControlState;
-(void)beginRefreshing;
-(void)endRefreshing;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRefreshControlState:(int)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(unsigned long long)cellStyle;
-(void)setCellStyle:(unsigned long long)arg1 ;
@end

