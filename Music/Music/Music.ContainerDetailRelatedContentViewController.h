/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class _TtC5Music32CompositeComponentCollectionView, _TtC5Music40ContainerDetailFooterStackViewController;

@interface Music.ContainerDetailRelatedContentViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	 allowsRelatedContentDisplay;
	 collectionView;
	 footerViewModelKinds;
	 verticalStackViewController;

}

@property (readonly,nonatomic) _TtC5Music32CompositeComponentCollectionView * compositeComponentCollectionView; 
@property (assign,nonatomic) BOOL allowsRelatedContentDisplay; 
@property (retain,nonatomic) _TtC5Music32CompositeComponentCollectionView * collectionView; 
@property (readonly,nonatomic) _TtC5Music40ContainerDetailFooterStackViewController * verticalStackViewController; 
-(void)prepareInitialContent:(/*^block*/id)arg1 ;
-(_TtC5Music32CompositeComponentCollectionView *)compositeComponentCollectionView;
-(BOOL)allowsRelatedContentDisplay;
-(void)setAllowsRelatedContentDisplay:(BOOL)arg1 ;
-(double)relatedContentHeightFor:(id)arg1 layout:(id)arg2 ;
-(void)verticalScrollStackViewControllerScrollViewContentSizeDidChange:(id)arg1 ;
-(_TtC5Music40ContainerDetailFooterStackViewController *)verticalStackViewController;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(_TtC5Music32CompositeComponentCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)setCollectionView:(_TtC5Music32CompositeComponentCollectionView *)arg1 ;
@end

