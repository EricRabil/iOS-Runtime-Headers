/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderController.h>
#import <SpringBoard/SBRootFolderDelegate.h>

@class _SBRootFolderDockAnimationViewControllerWindow, SBRootFolder, SBRootFolderView, NSString;

@interface SBRootFolderController : SBFolderController <SBRootFolderDelegate> {

	BOOL _managesStatusBarWidth;
	_SBRootFolderDockAnimationViewControllerWindow* _dockAnimationWindow;

}

@property (nonatomic,retain) _SBRootFolderDockAnimationViewControllerWindow * dockAnimationWindow;              //@synthesize dockAnimationWindow=_dockAnimationWindow - In the implementation block
@property (assign,nonatomic) BOOL managesStatusBarWidth;                                                        //@synthesize managesStatusBarWidth=_managesStatusBarWidth - In the implementation block
@property (nonatomic,retain) SBRootFolder * folder; 
@property (nonatomic,readonly) SBRootFolderView * contentView; 
@property (assign,nonatomic) unsigned long long dockEdge; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)listViewClass;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 ;
-(unsigned long long)_dockEdgeForInterfaceOrientation:(long long)arg1 ;
-(void)setDockEdge:(unsigned long long)arg1 ;
-(void)_reduceTransparencyChanged;
-(void)viewWillTransitionToSize:(CGSize)arg1 withContainingExpandedTreeNode:(id)arg2 transitionCoordinator:(id)arg3 ;
-(BOOL)shouldOpenFolderIcon:(id)arg1 ;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(id)dockListView;
-(void)beginAnimatingDockOffscreenFractionForReason:(id)arg1 ;
-(void)setDockOffscreenFraction:(double)arg1 ;
-(void)endAnimatingDockOffscreenFractionForReason:(id)arg1 ;
-(unsigned long long)dockEdge;
-(BOOL)_listIndexIsVisible:(unsigned long long)arg1 ;
-(void)prepareToOpen;
-(void)setManagesStatusBarWidth:(BOOL)arg1 ;
-(void)prepareToClose;
-(BOOL)_isDockSwitchedForOrientation:(long long)arg1 ;
-(BOOL)_dockLayoutReversedForInterfaceOrientation:(long long)arg1 ;
-(_SBRootFolderDockAnimationViewControllerWindow *)dockAnimationWindow;
-(void)_configureDockViewForOrientationWithoutAnimation:(long long)arg1 ;
-(void)_configureAppStatusBarInsetsForOrientation:(long long)arg1 ;
-(void)configureAppStatusBarInsets;
-(BOOL)managesStatusBarWidth;
-(UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1 ;
-(BOOL)_shouldUseDockAnimationWindowForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)setDockAnimationWindow:(_SBRootFolderDockAnimationViewControllerWindow *)arg1 ;
-(BOOL)_shouldSlideDockOutDuringRotationFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(void)_configureDockViewForOrientationDuringAnimation:(long long)arg1 ;
-(void)_configureViewForOrientationWithoutAnimation:(long long)arg1 ;
-(BOOL)rootFolder:(id)arg1 shouldAllowBadgingForIcon:(id)arg2 ;
-(unsigned long long)_depth;
-(id)folderControllers;
-(CGRect)_autoscrollExclusionRegion;
-(void)_configureAppStatusBarInsetsAnimated:(BOOL)arg1 ;
-(id)view;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(Class)_contentViewClass;
-(BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setFolder:(SBRootFolder *)arg1 ;
-(void)setIdleText:(id)arg1 ;
@end

