/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Podcasts/MTResultsControllerDelegate.h>

@class MTCompositeResultsController, MTCoreDataResultsController, NSString;

@interface MTFetchedTableWithSectionsViewController : UITableViewController <MTResultsControllerDelegate> {

	long long _userDrivenCounter;
	BOOL _inSwipeToDeleteMode;
	MTCompositeResultsController* _compositeResultsController;

}

@property (assign,nonatomic) BOOL inSwipeToDeleteMode;                                               //@synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode - In the implementation block
@property (nonatomic,retain) MTCompositeResultsController * compositeResultsController;              //@synthesize compositeResultsController=_compositeResultsController - In the implementation block
@property (assign,nonatomic) BOOL changeIsUserDriven; 
@property (nonatomic,readonly) MTCoreDataResultsController * frc; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)inSwipeToDeleteMode;
-(MTCoreDataResultsController *)frc;
-(BOOL)changeIsUserDriven;
-(void)setChangeIsUserDriven:(BOOL)arg1 ;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(void)_updateTableAnimated:(BOOL)arg1 ;
-(void)refetchWithSortDescriptors:(id)arg1 animated:(BOOL)arg2 ;
-(void)refetchWithPredicate:(id)arg1 ;
-(void)refetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 animated:(BOOL)arg3 ;
-(void)setInSwipeToDeleteMode:(BOOL)arg1 ;
-(id)indexPathsForObject:(id)arg1 ;
-(MTCompositeResultsController *)compositeResultsController;
-(void)setCompositeResultsController:(MTCompositeResultsController *)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertyKeys:(id)arg4 ;
-(BOOL)hideHeaderForEmptySection:(long long)arg1 ;
-(unsigned long long)_sectionForController:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
-(id)_controllerForSection:(unsigned long long)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

