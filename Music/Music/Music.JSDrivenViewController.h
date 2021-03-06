/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _TtC5Music21JSComponentController, UIViewController, NSString, UIColor, _TtC5Music31PageHeaderContentViewController, _TtC5Music33PromotionalParallaxViewController, _TtC5Music8JSObject;

@interface Music.JSDrivenViewController : UIViewController {

	 componentController;
	 contentViewController;
	 forceShowingLargeTitleHeader;
	 prefersCancelButton;
	 pageHeaderContentViewController;
	 promotionalParallaxViewController;
	 lifetimeImpressionsTree;
	 rootImpression;
	 appearanceState;
	 contentViewControllerAppearanceState;
	 hasInvokedDidLoadPreemptively;
	 lifecycleEventQueue;
	 presentationSegue;
	 pushSegue;
	 viewModelRevision;
	 isPreparingContentViewController;
	 contentViewControllerPreparationCompletionHandlers;
	 shouldIgnorePromotionalProperties;
	 wantsPromotionalParallaxViewController;
	 headerItemRevisionID;
	 contextActionsButtonHandler;
	 cancelBarButtonItem;
	 trailingBarButtonItemMap;
	 previousRightBarButtonItems;

}

@property (retain,nonatomic) _TtC5Music21JSComponentController * componentController; 
@property (retain,nonatomic) UIViewController * contentViewController; 
@property (assign,nonatomic) BOOL forceShowingLargeTitleHeader; 
@property (assign,nonatomic) BOOL prefersCancelButton; 
@property (readonly,nonatomic) UIViewController * childViewControllerForStatusBarStyle; 
@property (readonly,nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods; 
@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) UIColor * viewBackgroundColor; 
@property (retain,nonatomic) _TtC5Music31PageHeaderContentViewController * pageHeaderContentViewController; 
@property (retain,nonatomic) _TtC5Music33PromotionalParallaxViewController * promotionalParallaxViewController; 
@property (readonly,nonatomic) _TtC5Music8JSObject * rootJSObject; 
@property (assign,nonatomic) BOOL shouldIgnorePromotionalProperties; 
-(_TtC5Music8JSObject *)rootJSObject;
-(void)resetLifetimeImpressionsTree;
-(void)setViewBackgroundColor:(UIColor *)arg1 ;
-(_TtC5Music21JSComponentController *)componentController;
-(void)setComponentController:(_TtC5Music21JSComponentController *)arg1 ;
-(void)configureWithPushSegue:(id)arg1 ;
-(void)configureWithPresentationSegue:(id)arg1 ;
-(BOOL)forceShowingLargeTitleHeader;
-(void)setForceShowingLargeTitleHeader:(BOOL)arg1 ;
-(BOOL)prefersCancelButton;
-(void)setPrefersCancelButton:(BOOL)arg1 ;
-(void)componentController:(id)arg1 didUpdateHeaderItem:(id)arg2 ;
-(void)presentationSegue:(id)arg1 didUpdateComponentController:(id)arg2 ;
-(void)pushSegue:(id)arg1 didUpdateComponentController:(id)arg2 ;
-(void)prepareInitialContent:(/*^block*/id)arg1 ;
-(_TtC5Music31PageHeaderContentViewController *)pageHeaderContentViewController;
-(void)setPageHeaderContentViewController:(_TtC5Music31PageHeaderContentViewController *)arg1 ;
-(_TtC5Music33PromotionalParallaxViewController *)promotionalParallaxViewController;
-(void)setPromotionalParallaxViewController:(_TtC5Music33PromotionalParallaxViewController *)arg1 ;
-(void)didUpdateContentViewController:(id)arg1 ;
-(BOOL)shouldIgnorePromotionalProperties;
-(void)setShouldIgnorePromotionalProperties:(BOOL)arg1 ;
-(void)configurePageHeaderContentViewController:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)contentScrollView;
-(UIViewController *)contentViewController;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(UIViewController *)childViewControllerForStatusBarStyle;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIColor *)viewBackgroundColor;
@end

