/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTFetchedTableWithSectionsViewController.h>
#import <Podcasts/MTTableViewDataSource.h>

@protocol MTViewControllerEditingNotificationDelegate;
@class NSMutableDictionary, MTContentUnavailableView, UIButton, UIImageView, UINavigationItem, UIBarButtonItem, UIView, NSString, MTToolbar, UIAlertController, MTTableView;

@interface MTListViewController : MTFetchedTableWithSectionsViewController <MTTableViewDataSource> {

	NSMutableDictionary* _resultsChangedBlocks;
	MTContentUnavailableView* _emptyOverlay;
	UIButton* _editButton;
	UIButton* _downloadButton;
	UIImageView* _defaultFooterView;
	UINavigationItem* _navItem;
	BOOL _wasEditing;
	BOOL _hidesFooterWhenEmpty;
	BOOL _showMarkButtonInsteadOfRemoveButton;
	BOOL _disallowTopToolbarItems;
	UIBarButtonItem* _doneButtonItem;
	UIBarButtonItem* _markButtonItem;
	UIBarButtonItem* _saveButtonItem;
	UIBarButtonItem* _deleteButtonItem;
	long long _state;
	UIView* _footerView;
	NSString* _emptyListMessage;
	id<MTViewControllerEditingNotificationDelegate> _editingNotificationDelegate;
	MTToolbar* _toolbarHeader;
	UIButton* _doneButton;
	UIButton* _markButton;
	UIButton* _saveButton;
	UIButton* _deleteButton;
	UIAlertController* _markAlertController;

}

@property (assign,nonatomic) BOOL inSwipeToDeleteMode; 
@property (nonatomic,retain) MTToolbar * toolbarHeader;                                                      //@synthesize toolbarHeader=_toolbarHeader - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * markButton;                                                          //@synthesize markButton=_markButton - In the implementation block
@property (nonatomic,retain) UIButton * saveButton;                                                          //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                                        //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UIAlertController * markAlertController;                                        //@synthesize markAlertController=_markAlertController - In the implementation block
@property (nonatomic,retain) MTTableView * tableView; 
@property (nonatomic,readonly) long long state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                            //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) NSString * emptyListMessage;                                                      //@synthesize emptyListMessage=_emptyListMessage - In the implementation block
@property (assign,nonatomic) BOOL hidesFooterWhenEmpty;                                                      //@synthesize hidesFooterWhenEmpty=_hidesFooterWhenEmpty - In the implementation block
@property (assign,nonatomic) BOOL showMarkButtonInsteadOfRemoveButton;                                       //@synthesize showMarkButtonInsteadOfRemoveButton=_showMarkButtonInsteadOfRemoveButton - In the implementation block
@property (assign,nonatomic) BOOL disallowTopToolbarItems;                                                   //@synthesize disallowTopToolbarItems=_disallowTopToolbarItems - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * doneButtonItem;                                             //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * markButtonItem;                                             //@synthesize markButtonItem=_markButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * saveButtonItem;                                             //@synthesize saveButtonItem=_saveButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * deleteButtonItem;                                           //@synthesize deleteButtonItem=_deleteButtonItem - In the implementation block
@property (__weak) id<MTViewControllerEditingNotificationDelegate> editingNotificationDelegate;              //@synthesize editingNotificationDelegate=_editingNotificationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEditingNotificationDelegate:(id<MTViewControllerEditingNotificationDelegate>)arg1 ;
-(id<MTViewControllerEditingNotificationDelegate>)editingNotificationDelegate;
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(void)refreshBarButtons;
-(UIBarButtonItem *)markButtonItem;
-(UIBarButtonItem *)saveButtonItem;
-(UIBarButtonItem *)deleteButtonItem;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)markSelectedItems:(BOOL)arg1 ;
-(void)markSelectedItemsAsSaved:(BOOL)arg1 ;
-(id)editingToolbarItems;
-(void)updateMarkButtonsAndTitle;
-(void)refetchWithSortDescriptors:(id)arg1 animated:(BOOL)arg2 ;
-(void)refetchWithPredicate:(id)arg1 ;
-(void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(BOOL)arg3 ;
-(void)setEmptyListMessage:(NSString *)arg1 ;
-(void)updateListStateAnimated:(BOOL)arg1 ;
-(id)leftButtonItems;
-(NSString *)emptyListMessage;
-(id)downloadButton;
-(void)updateNavigationItemsForEditing:(BOOL)arg1 ;
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
-(void)finishEditing:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(void)markButtonTapped:(id)arg1 ;
-(void)downloadAll:(id)arg1 ;
-(id)markAsPlayedTitleForCount:(long long)arg1 ;
-(id)markAsUnplayedTitleForCount:(long long)arg1 ;
-(BOOL)isSelectedMediaTypeVideo;
-(void)setHidesFooterWhenEmpty:(BOOL)arg1 ;
-(BOOL)showMarkButtonInsteadOfRemoveButton;
-(void)setShowMarkButtonInsteadOfRemoveButton:(BOOL)arg1 ;
-(void)setToolbarHeader:(MTToolbar *)arg1 ;
-(void)setMarkButton:(UIButton *)arg1 ;
-(UIAlertController *)markAlertController;
-(void)setMarkAlertController:(UIAlertController *)arg1 ;
-(BOOL)disallowTopToolbarItems;
-(void)setDisallowTopToolbarItems:(BOOL)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(long long)state;
-(id)navigationItem;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)hasItems;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)transitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(UIButton *)saveButton;
-(UIButton *)deleteButton;
-(void)setSaveButton:(UIButton *)arg1 ;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)editButtonTapped:(id)arg1 ;
-(id)editButton;
-(id)rightButtonItems;
-(void)saveButtonTapped:(id)arg1 ;
-(UIBarButtonItem *)doneButtonItem;
@end
