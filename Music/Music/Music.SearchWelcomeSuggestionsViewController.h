/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateTableLayout.h>

@class NSString, _TtC5Music32CompositeComponentCollectionView, _TtC5Music8JSObject;

@interface Music.SearchWelcomeSuggestionsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateTableLayout> {

	 suggestionType;
	 headerTitle;
	 suggestions;
	 delegate;
	 collectionView.storage;
	 sectionHeaderSizingView;
	 impressionEventsObserver;
	 lifetimeImpressionsTree;
	 rootImpression;
	 textDrawingCache;
	 preferredContentSizeDidChangeObserver;
	 maximumNumberOfSuggestions;

}

@property (copy,nonatomic) NSString * headerTitle; 
@property (retain,nonatomic) _TtC5Music32CompositeComponentCollectionView * collectionView; 
@property (readonly,nonatomic) _TtC5Music32CompositeComponentCollectionView * compositeComponentCollectionView; 
@property (readonly,nonatomic) _TtC5Music8JSObject * rootJSObject; 
-(_TtC5Music8JSObject *)rootJSObject;
-(void)resetLifetimeImpressionsTree;
-(_TtC5Music32CompositeComponentCollectionView *)compositeComponentCollectionView;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(_TtC5Music32CompositeComponentCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)setCollectionView:(_TtC5Music32CompositeComponentCollectionView *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForHeaderInSection:(long long)arg3 ;
@end
