/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTFetchedCollectionWithSectionsViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Podcasts/MTCollectionViewCellDelegate.h>

@protocol MTViewControllerEditingNotificationDelegate;
@class NSMutableDictionary, MTContentUnavailableView, UIButton, UINavigationItem, UIBarButtonItem, NSIndexPath, NSString, MTToolbar, MTCollectionViewFlowLayout, UICollectionViewCell, MTCollectionView, UIRefreshControl;

@interface MTCollectionListViewController : MTFetchedCollectionWithSectionsViewController <UICollectionViewDelegateFlowLayout, MTCollectionViewCellDelegate> {

	NSMutableDictionary* _resultsChangedBlocks;
	MTContentUnavailableView* _emptyOverlay;
	UIButton* _editButton;
	UIButton* _downloadButton;
	UINavigationItem* _navItem;
	BOOL _hidesFooterWhenEmpty;
	BOOL _showMarkButtonInsteadOfRemoveButton;
	BOOL _inSwipeToDeleteMode;
	UIBarButtonItem* _doneButtonItem;
	UIBarButtonItem* _markButtonItem;
	UIBarButtonItem* _saveButtonItem;
	UIBarButtonItem* _deleteButtonItem;
	NSIndexPath* _expandedIndexPath;
	long long _state;
	NSString* _emptyListMessage;
	id<MTViewControllerEditingNotificationDelegate> _editingNotificationDelegate;
	MTToolbar* _toolbarHeader;
	double _expandedSectionBottomInset;
	long long _expandedSection;
	MTCollectionViewFlowLayout* _transitioningToFlowLayout;
	UIButton* _doneButton;
	UIButton* _markButton;
	UIButton* _saveButton;
	UIButton* _deleteButton;
	UICollectionViewCell* _sizingCell;

}

@property (assign,nonatomic) BOOL inSwipeToDeleteMode;                                                       //@synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode - In the implementation block
@property (nonatomic,retain) MTToolbar * toolbarHeader;                                                      //@synthesize toolbarHeader=_toolbarHeader - In the implementation block
@property (assign,nonatomic) double expandedSectionBottomInset;                                              //@synthesize expandedSectionBottomInset=_expandedSectionBottomInset - In the implementation block
@property (assign,nonatomic) long long expandedSection;                                                      //@synthesize expandedSection=_expandedSection - In the implementation block
@property (nonatomic,retain) MTCollectionViewFlowLayout * transitioningToFlowLayout;                         //@synthesize transitioningToFlowLayout=_transitioningToFlowLayout - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * markButton;                                                          //@synthesize markButton=_markButton - In the implementation block
@property (nonatomic,retain) UIButton * saveButton;                                                          //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                                        //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * sizingCell;                                              //@synthesize sizingCell=_sizingCell - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns; 
@property (nonatomic,retain) NSIndexPath * expandedIndexPath;                                                //@synthesize expandedIndexPath=_expandedIndexPath - In the implementation block
@property (nonatomic,retain) MTCollectionView * collectionView; 
@property (nonatomic,retain) UIRefreshControl * refreshControl; 
@property (nonatomic,readonly) long long state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * emptyListMessage;                                                      //@synthesize emptyListMessage=_emptyListMessage - In the implementation block
@property (assign,nonatomic) BOOL hidesFooterWhenEmpty;                                                      //@synthesize hidesFooterWhenEmpty=_hidesFooterWhenEmpty - In the implementation block
@property (assign,nonatomic) BOOL showMarkButtonInsteadOfRemoveButton;                                       //@synthesize showMarkButtonInsteadOfRemoveButton=_showMarkButtonInsteadOfRemoveButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * doneButtonItem;                                             //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * markButtonItem;                                             //@synthesize markButtonItem=_markButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * saveButtonItem;                                             //@synthesize saveButtonItem=_saveButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * deleteButtonItem;                                           //@synthesize deleteButtonItem=_deleteButtonItem - In the implementation block
@property (__weak) id<MTViewControllerEditingNotificationDelegate> editingNotificationDelegate;              //@synthesize editingNotificationDelegate=_editingNotificationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)sizingCellClass;
+(Class)flowLayoutClass;
-(void)setEditingNotificationDelegate:(id<MTViewControllerEditingNotificationDelegate>)arg1 ;
-(BOOL)inSwipeToDeleteMode;
-(void)cellDidPressDelete:(id)arg1 ;
-(void)cellDidPressMore:(id)arg1 ;
-(id<MTViewControllerEditingNotificationDelegate>)editingNotificationDelegate;
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(CGSize)currentEstimatedCellSize;
-(NSIndexPath *)expandedIndexPath;
-(void)refreshBarButtons;
-(void)updateMarkButtons;
-(void)updateCellSizesWithSize:(CGSize)arg1 ;
-(void)setExpandedIndexPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)collapseCollectionViewCell:(id)arg1 ;
-(void)expandCollectionViewCell:(id)arg1 ;
-(UIBarButtonItem *)markButtonItem;
-(UIBarButtonItem *)saveButtonItem;
-(UIBarButtonItem *)deleteButtonItem;
-(BOOL)shouldCalculateDynamicHeightForIndexPath:(id)arg1 ;
-(double)estimatedCellHeightForWidth:(double)arg1 ;
-(double)calculateCellWidthForSize:(CGSize)arg1 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)deselectedItemAtIndexPath:(id)arg1 ;
-(void)markSelectedItems:(BOOL)arg1 ;
-(void)markSelectedItemsAsSaved:(BOOL)arg1 ;
-(id)editingToolbarItems;
-(void)setInSwipeToDeleteMode:(BOOL)arg1 ;
-(void)setEmptyListMessage:(NSString *)arg1 ;
-(void)updateCellSizes;
-(void)updateListStateAnimated:(BOOL)arg1 ;
-(CGPoint)initialLayoutContentOffset;
-(id)leftButtonItems;
-(NSString *)emptyListMessage;
-(BOOL)hasBulkMarkAsUnplayedAction;
-(id)downloadButton;
-(void)setExpandedIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 compositeFetchedResultsController:(id)arg2 ;
-(void)updateNavigationItemsForEditing:(BOOL)arg1 ;
-(void)calculateSectionInsetDueToExpansion;
-(void)setExpandedSectionBottomInset:(double)arg1 ;
-(void)setTransitioningToFlowLayout:(MTCollectionViewFlowLayout *)arg1 ;
-(MTCollectionViewFlowLayout *)transitioningToFlowLayout;
-(double)expandedSectionBottomInset;
-(UICollectionViewCell *)sizingCell;
-(void)transitionControlsForEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIButton *)markButton;
-(BOOL)isEntireSelectionSaved;
-(void)setEditingToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)rightEditingItems;
-(id)leftEditingItems;
-(id)toolbarButtonItems;
-(MTToolbar *)toolbarHeader;
-(id)emptyOverlay;
-(BOOL)hidesFooterWhenEmpty;
-(double)calculateCellWidthForCurrentBounds;
-(BOOL)isEditingToolbarHidden;
-(void)finishEditing:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(void)markButtonTapped:(id)arg1 ;
-(void)downloadAll:(id)arg1 ;
-(id)markAsPlayedTitleForCount:(long long)arg1 ;
-(id)markAsUnplayedTitleForCount:(long long)arg1 ;
-(BOOL)isSelectedMediaTypeVideo;
-(void)_didUpdateCollectionView:(id)arg1 ;
-(void)setHidesFooterWhenEmpty:(BOOL)arg1 ;
-(BOOL)showMarkButtonInsteadOfRemoveButton;
-(void)setShowMarkButtonInsteadOfRemoveButton:(BOOL)arg1 ;
-(void)setToolbarHeader:(MTToolbar *)arg1 ;
-(void)setMarkButton:(UIButton *)arg1 ;
-(void)setSizingCell:(UICollectionViewCell *)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(long long)state;
-(id)navigationItem;
-(void)setState:(long long)arg1 ;
-(id)collectionViewLayout;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(BOOL)hasItems;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)transitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(UIButton *)saveButton;
-(UIButton *)deleteButton;
-(void)setSaveButton:(UIButton *)arg1 ;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(long long)expandedSection;
-(void)editButtonTapped:(id)arg1 ;
-(void)setExpandedSection:(long long)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)editButton;
-(id)rightButtonItems;
-(void)saveButtonTapped:(id)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
@end
