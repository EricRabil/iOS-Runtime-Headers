/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSearchEtceteraMultiplexingViewController.h>

@class _UILegibilitySettings;

@interface SBHomeScreenSearchableTodayViewController : SBSearchEtceteraMultiplexingViewController {

	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(id)displayLayoutElementIdentifier;
-(id)_todayViewController;
-(void)dismissSearchForHardwareKeyboard:(BOOL)arg1 ;
-(void)textSelectionInteractionWillBegin;
-(void)textSelectionInteractionDidEnd;
-(void)presentationControllerDidEndPresenting:(id)arg1 ;
-(void)presentationControllerDidEndDismissing:(id)arg1 ;
-(void)willActivateHosting;
-(unsigned long long)initialPresentationMode;
-(unsigned long long)defaultSearchViewPresentationSource;
-(unsigned long long)defaultSearchViewDismissalReason;
-(BOOL)directlyForwardViewSizeChanges;
-(void)willChangeToMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)didChangeToMode:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(id)requestedLegibilitySettings;
-(BOOL)shouldDisableClipping;
-(CGPoint)_offsetForScrollView:(id)arg1 ;
-(double)_maxClippingOffset;
-(void)_updateAppearanceForScrollViews;
-(void)_updateAppearanceForScrollViewsAnimated:(BOOL)arg1 ;
-(void)_setRequestDisableRootFolderParallax:(BOOL)arg1 reason:(id)arg2 ;
-(void)_setRequestDisableRootFolderScrolling:(BOOL)arg1 reason:(id)arg2 ;
-(id)_eligibleScrollViews;
-(id)_todayLayoutContentView;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
@end

