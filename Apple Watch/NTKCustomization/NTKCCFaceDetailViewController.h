/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:37:22 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <NTKCustomization/NTKFaceObserver.h>
#import <NTKCustomization/NTKFaceCollectionObserver.h>
#import <NTKCustomization/NTKCCFaceDetailExpandableDescriptionCellDelegate.h>
#import <NTKCustomization/NTKCCFaceDetailEditOptionCellDelegate.h>
#import <NTKCustomization/NTKCCFaceDetailComplicationPickerCellDelegate.h>
#import <NTKCustomization/NTKCCFaceDetailToggleCellDelegate.h>
#import <NTKCustomization/NTKCCGalleryCellDelegate.h>

@protocol NTKCCFaceDetailViewControllerDelegate;
@class NTKFace, NTKFaceCollection, NTKCompanionFaceViewController, NTKCompanionApp, _NTKCCDetailHeaderView, NTKCCFaceContainerView, UILabel, _NTKCCDetailActionButton, UIView, NTKCCIconView, UITableView, NTKCCFaceDetailExpandableDescriptionCell, NSMutableArray, NTKCCFaceDetailSyncedAlbumCell, NTKCCFaceDetailSectionHeaderView, NTKCCFaceDetailMonogramComplicationCell, NTKCCFaceDetailMonogramEditCell, NTKCCFaceDetailShowSecondsCell, NTKCCFaceDetailTapToSpeakCell, NTKCCFaceDetailTapToSpeakDescriptionCell, NTKCCFaceDetailActionCell, NTKCCGalleryCell, NTKCCFaceDetailEditOptionCell, NPSDomainAccessor, NSString;

@interface NTKCCFaceDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, NTKFaceObserver, NTKFaceCollectionObserver, NTKCCFaceDetailExpandableDescriptionCellDelegate, NTKCCFaceDetailEditOptionCellDelegate, NTKCCFaceDetailComplicationPickerCellDelegate, NTKCCFaceDetailToggleCellDelegate, NTKCCGalleryCellDelegate> {

	BOOL _inGallery;
	BOOL _appExistsOnFace;
	BOOL _faceHasBeenEdited;
	NTKFace* _face;
	id<NTKCCFaceDetailViewControllerDelegate> _delegate;
	NTKFaceCollection* _library;
	NTKCompanionFaceViewController* _faceVC;
	NTKCompanionApp* _app;
	double _intrinsicHeaderHeight;
	_NTKCCDetailHeaderView* _headerView;
	NTKCCFaceContainerView* _faceContainer;
	UILabel* _faceName;
	_NTKCCDetailActionButton* _addButton;
	UIView* _featuredContainer;
	UIView* _featuredAnimationContainer;
	UILabel* _featured;
	NTKCCIconView* _appIcon;
	UILabel* _appName;
	UIView* _headerSeparator;
	UITableView* _tableView;
	NTKCCFaceDetailExpandableDescriptionCell* _descriptionCell;
	NSMutableArray* _editOptions;
	NSMutableArray* _positionEditOptions;
	NTKCCFaceDetailSyncedAlbumCell* _syncedAlbumCell;
	NSMutableArray* _complications;
	long long _complicationsSectionIndex;
	long long _selectedComplicationIndex;
	long long _otherSectionIndex;
	long long _soundSectionIndex;
	NTKCCFaceDetailSectionHeaderView* _otherSectionHeader;
	NTKCCFaceDetailSectionHeaderView* _soundSectionHeader;
	NTKCCFaceDetailMonogramComplicationCell* _monogramCell;
	NTKCCFaceDetailMonogramEditCell* _monogramEditCell;
	NTKCCFaceDetailShowSecondsCell* _showSecondsCell;
	NTKCCFaceDetailTapToSpeakCell* _tapToSpeakCell;
	NTKCCFaceDetailTapToSpeakDescriptionCell* _tapToSpeakDescriptionCell;
	NTKCCFaceDetailActionCell* _selectCell;
	NTKCCFaceDetailActionCell* _deleteCell;
	NTKCCGalleryCell* _otherFacesCell;
	NSMutableArray* _otherFacesVCs;
	/*^block*/id _selectionFinishedHandler;
	NTKCCFaceDetailEditOptionCell* _editOptionToMakeFullyVisible;
	NPSDomainAccessor* _tapToSpeakDomainAccessor;
	CGSize _headerFaceSize;

}

@property (nonatomic,retain) NTKFaceCollection * library;                                                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                                                    //@synthesize face=_face - In the implementation block
@property (nonatomic,retain) NTKCompanionFaceViewController * faceVC;                                           //@synthesize faceVC=_faceVC - In the implementation block
@property (assign,nonatomic) CGSize headerFaceSize;                                                             //@synthesize headerFaceSize=_headerFaceSize - In the implementation block
@property (assign,nonatomic) BOOL inGallery;                                                                    //@synthesize inGallery=_inGallery - In the implementation block
@property (nonatomic,retain) NTKCompanionApp * app;                                                             //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) double intrinsicHeaderHeight;                                                      //@synthesize intrinsicHeaderHeight=_intrinsicHeaderHeight - In the implementation block
@property (nonatomic,retain) _NTKCCDetailHeaderView * headerView;                                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) NTKCCFaceContainerView * faceContainer;                                            //@synthesize faceContainer=_faceContainer - In the implementation block
@property (nonatomic,retain) UILabel * faceName;                                                                //@synthesize faceName=_faceName - In the implementation block
@property (nonatomic,retain) _NTKCCDetailActionButton * addButton;                                              //@synthesize addButton=_addButton - In the implementation block
@property (nonatomic,retain) UIView * featuredContainer;                                                        //@synthesize featuredContainer=_featuredContainer - In the implementation block
@property (nonatomic,retain) UIView * featuredAnimationContainer;                                               //@synthesize featuredAnimationContainer=_featuredAnimationContainer - In the implementation block
@property (nonatomic,retain) UILabel * featured;                                                                //@synthesize featured=_featured - In the implementation block
@property (nonatomic,retain) NTKCCIconView * appIcon;                                                           //@synthesize appIcon=_appIcon - In the implementation block
@property (nonatomic,retain) UILabel * appName;                                                                 //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) UIView * headerSeparator;                                                          //@synthesize headerSeparator=_headerSeparator - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailExpandableDescriptionCell * descriptionCell;                        //@synthesize descriptionCell=_descriptionCell - In the implementation block
@property (nonatomic,retain) NSMutableArray * editOptions;                                                      //@synthesize editOptions=_editOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * positionEditOptions;                                              //@synthesize positionEditOptions=_positionEditOptions - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailSyncedAlbumCell * syncedAlbumCell;                                  //@synthesize syncedAlbumCell=_syncedAlbumCell - In the implementation block
@property (nonatomic,retain) NSMutableArray * complications;                                                    //@synthesize complications=_complications - In the implementation block
@property (assign,nonatomic) long long complicationsSectionIndex;                                               //@synthesize complicationsSectionIndex=_complicationsSectionIndex - In the implementation block
@property (assign,nonatomic) long long selectedComplicationIndex;                                               //@synthesize selectedComplicationIndex=_selectedComplicationIndex - In the implementation block
@property (assign,nonatomic) long long otherSectionIndex;                                                       //@synthesize otherSectionIndex=_otherSectionIndex - In the implementation block
@property (assign,nonatomic) long long soundSectionIndex;                                                       //@synthesize soundSectionIndex=_soundSectionIndex - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailSectionHeaderView * otherSectionHeader;                             //@synthesize otherSectionHeader=_otherSectionHeader - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailSectionHeaderView * soundSectionHeader;                             //@synthesize soundSectionHeader=_soundSectionHeader - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailMonogramComplicationCell * monogramCell;                            //@synthesize monogramCell=_monogramCell - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailMonogramEditCell * monogramEditCell;                                //@synthesize monogramEditCell=_monogramEditCell - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailShowSecondsCell * showSecondsCell;                                  //@synthesize showSecondsCell=_showSecondsCell - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailTapToSpeakCell * tapToSpeakCell;                                    //@synthesize tapToSpeakCell=_tapToSpeakCell - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailTapToSpeakDescriptionCell * tapToSpeakDescriptionCell;              //@synthesize tapToSpeakDescriptionCell=_tapToSpeakDescriptionCell - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailActionCell * selectCell;                                            //@synthesize selectCell=_selectCell - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailActionCell * deleteCell;                                            //@synthesize deleteCell=_deleteCell - In the implementation block
@property (nonatomic,retain) NTKCCGalleryCell * otherFacesCell;                                                 //@synthesize otherFacesCell=_otherFacesCell - In the implementation block
@property (nonatomic,retain) NSMutableArray * otherFacesVCs;                                                    //@synthesize otherFacesVCs=_otherFacesVCs - In the implementation block
@property (nonatomic,copy) id selectionFinishedHandler;                                                         //@synthesize selectionFinishedHandler=_selectionFinishedHandler - In the implementation block
@property (nonatomic,retain) NTKCCFaceDetailEditOptionCell * editOptionToMakeFullyVisible;                      //@synthesize editOptionToMakeFullyVisible=_editOptionToMakeFullyVisible - In the implementation block
@property (assign,nonatomic) BOOL appExistsOnFace;                                                              //@synthesize appExistsOnFace=_appExistsOnFace - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * tapToSpeakDomainAccessor;                                      //@synthesize tapToSpeakDomainAccessor=_tapToSpeakDomainAccessor - In the implementation block
@property (nonatomic,readonly) BOOL faceHasBeenEdited;                                                          //@synthesize faceHasBeenEdited=_faceHasBeenEdited - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCCFaceDetailViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)headerFaceSize;
-(NTKCCFaceDetailSyncedAlbumCell *)syncedAlbumCell;
-(UIView *)headerSeparator;
-(void)_loadLibrary;
-(void)setFaceName:(UILabel *)arg1 ;
-(void)setInGallery:(BOOL)arg1 ;
-(void)setFaceVC:(NTKCompanionFaceViewController *)arg1 ;
-(void)setEditOptions:(NSMutableArray *)arg1 ;
-(void)setSelectCell:(NTKCCFaceDetailActionCell *)arg1 ;
-(void)setDeleteCell:(NTKCCFaceDetailActionCell *)arg1 ;
-(void)_faceDidChange;
-(void)_addFace;
-(NTKCompanionFaceViewController *)faceVC;
-(NSMutableArray *)editOptions;
-(NTKCCFaceContainerView *)faceContainer;
-(NTKCCFaceDetailMonogramComplicationCell *)monogramCell;
-(NSMutableArray *)complications;
-(BOOL)inGallery;
-(NTKCCFaceDetailActionCell *)deleteCell;
-(NTKCCFaceDetailActionCell *)selectCell;
-(NSMutableArray *)otherFacesVCs;
-(NTKCCGalleryCell *)otherFacesCell;
-(BOOL)appExistsOnFace;
-(NTKCCFaceDetailShowSecondsCell *)showSecondsCell;
-(NTKCCFaceDetailTapToSpeakCell *)tapToSpeakCell;
-(void)setIntrinsicHeaderHeight:(double)arg1 ;
-(id)_viewControllerForFace:(id)arg1 ;
-(void)setSelectionFinishedHandler:(id)arg1 ;
-(id)initWithFace:(id)arg1 inGallery:(BOOL)arg2 app:(id)arg3 ;
-(void)setFaceContainer:(NTKCCFaceContainerView *)arg1 ;
-(void)descriptionCellDidExpand:(id)arg1 ;
-(void)toggleCell:(id)arg1 didToggle:(BOOL)arg2 ;
-(void)setHeaderFaceSize:(CGSize)arg1 ;
-(void)setSelectedComplicationIndex:(long long)arg1 ;
-(void)setComplicationsSectionIndex:(long long)arg1 ;
-(void)setOtherSectionIndex:(long long)arg1 ;
-(void)setSoundSectionIndex:(long long)arg1 ;
-(void)_updateAddButton;
-(void)setFeaturedContainer:(UIView *)arg1 ;
-(void)setFeaturedAnimationContainer:(UIView *)arg1 ;
-(void)setHeaderSeparator:(UIView *)arg1 ;
-(void)setSyncedAlbumCell:(NTKCCFaceDetailSyncedAlbumCell *)arg1 ;
-(void)setPositionEditOptions:(NSMutableArray *)arg1 ;
-(id)_cellForEditOptionCollection:(id)arg1 ;
-(void)setComplications:(NSMutableArray *)arg1 ;
-(void)setMonogramCell:(NTKCCFaceDetailMonogramComplicationCell *)arg1 ;
-(void)setTapToSpeakCell:(NTKCCFaceDetailTapToSpeakCell *)arg1 ;
-(void)setTapToSpeakDescriptionCell:(NTKCCFaceDetailTapToSpeakDescriptionCell *)arg1 ;
-(void)setOtherFacesCell:(NTKCCGalleryCell *)arg1 ;
-(void)setTapToSpeakDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(void)setMonogramEditCell:(NTKCCFaceDetailMonogramEditCell *)arg1 ;
-(BOOL)_appExistsOnFace;
-(void)setAppExistsOnFace:(BOOL)arg1 ;
-(void)setShowSecondsCell:(NTKCCFaceDetailShowSecondsCell *)arg1 ;
-(void)_setFaceHasBeenEdited;
-(BOOL)_hasRemovedSystemApp;
-(void)_addFaceEndedForFace:(id)arg1 ;
-(BOOL)_hasOtherSectionsBelowSection:(long long)arg1 ;
-(BOOL)_isSpacerRowAtIndexPath:(id)arg1 ;
-(id)_pruneRemovedSystemApps:(id)arg1 ;
-(BOOL)_cellIsHiddenBehindHeader:(id)arg1 ;
-(void)_setEditOption:(id)arg1 forMode:(long long)arg2 ;
-(void)_faceChangedOptionsForEditMode:(long long)arg1 ;
-(void)_setComplication:(id)arg1 forSlot:(id)arg2 ;
-(void)setOtherFacesVCs:(NSMutableArray *)arg1 ;
-(long long)otherSectionIndex;
-(long long)complicationsSectionIndex;
-(id)selectionFinishedHandler;
-(UIView *)featuredContainer;
-(double)intrinsicHeaderHeight;
-(NTKCCFaceDetailEditOptionCell *)editOptionToMakeFullyVisible;
-(NTKCCFaceDetailTapToSpeakDescriptionCell *)tapToSpeakDescriptionCell;
-(NTKCCFaceDetailMonogramEditCell *)monogramEditCell;
-(UIView *)featuredAnimationContainer;
-(long long)soundSectionIndex;
-(void)setSoundSectionHeader:(NTKCCFaceDetailSectionHeaderView *)arg1 ;
-(NTKCCFaceDetailSectionHeaderView *)otherSectionHeader;
-(NTKCCFaceDetailSectionHeaderView *)soundSectionHeader;
-(BOOL)faceHasBeenEdited;
-(NPSDomainAccessor *)tapToSpeakDomainAccessor;
-(void)setOtherSectionHeader:(NTKCCFaceDetailSectionHeaderView *)arg1 ;
-(long long)selectedComplicationIndex;
-(NSMutableArray *)positionEditOptions;
-(id)galleryCell:(id)arg1 viewForFace:(id)arg2 atIndex:(long long)arg3 ;
-(void)editOptionCell:(id)arg1 didSelectOptionAtIndex:(long long)arg2 ;
-(void)complicationPickerCell:(id)arg1 didSelectComplication:(id)arg2 ;
-(void)_updateSelectedEditOptions:(id)arg1 forCell:(id)arg2 ;
-(void)setEditOptionToMakeFullyVisible:(NTKCCFaceDetailEditOptionCell *)arg1 ;
-(void)galleryCell:(id)arg1 didSelectFace:(id)arg2 finishedSelectionHandler:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<NTKCCFaceDetailViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<NTKCCFaceDetailViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(_NTKCCDetailHeaderView *)headerView;
-(void)setHeaderView:(_NTKCCDetailHeaderView *)arg1 ;
-(void)setAddButton:(_NTKCCDetailActionButton *)arg1 ;
-(NTKCCIconView *)appIcon;
-(void)setAppIcon:(NTKCCIconView *)arg1 ;
-(NTKFaceCollection *)library;
-(NTKFace *)face;
-(void)setLibrary:(NTKFaceCollection *)arg1 ;
-(void)setFace:(NTKFace *)arg1 ;
-(void)setDescriptionCell:(NTKCCFaceDetailExpandableDescriptionCell *)arg1 ;
-(NTKCCFaceDetailExpandableDescriptionCell *)descriptionCell;
-(UILabel *)appName;
-(NTKCompanionApp *)app;
-(_NTKCCDetailActionButton *)addButton;
-(void)setFeatured:(UILabel *)arg1 ;
-(UILabel *)featured;
-(void)setAppName:(UILabel *)arg1 ;
-(void)faceConfigurationDidChange:(id)arg1 ;
-(void)face:(id)arg1 didChangeOptionsForEditMode:(long long)arg2 ;
-(void)_activeDeviceChanged;
-(void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setApp:(NTKCompanionApp *)arg1 ;
-(void)faceCollectionDidLoad:(id)arg1 ;
-(id)_faceDescription;
-(id)initWithFace:(id)arg1 ;
-(UILabel *)faceName;
-(void)_addTapped;
@end

