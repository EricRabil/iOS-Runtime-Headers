/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <StoreKitUI/SKUITabBarController.h>
#import <Podcasts/MTSKUIScrollingTabBarPaletteDelegate.h>
#import <libobjc.A.dylib/SKUIClientContextConsuming.h>

@class SKUIClientContext, MTSKUIScrollingTabBarPalette, NSString;

@interface MTStoreTabBarController : SKUITabBarController <MTSKUIScrollingTabBarPaletteDelegate, SKUIClientContextConsuming> {

	unsigned long long _activePaletteTransitions;
	unsigned long long _additionalPositionOffsetsAtomicUpdateRequestCount;
	MTSKUIScrollingTabBarPalette* _tabBarPalette;
	BOOL _tabBarExplicitlyHidden;
	SCD_Struct_MT10 _additionalPositionOffsetsUpdateRecord;
	BOOL _chargeEnabledOnTabBarButtonsContainer;
	SKUIClientContext* _clientContext;
	UIOffset _additionalTabBarButtonsContainerPositionOffset;
	UIOffset _additionalTabBarPalettePositionOffset;

}

@property (assign,nonatomic) BOOL chargeEnabledOnTabBarButtonsContainer;                           //@synthesize chargeEnabledOnTabBarButtonsContainer=_chargeEnabledOnTabBarButtonsContainer - In the implementation block
@property (assign,nonatomic) UIOffset additionalTabBarButtonsContainerPositionOffset;              //@synthesize additionalTabBarButtonsContainerPositionOffset=_additionalTabBarButtonsContainerPositionOffset - In the implementation block
@property (assign,nonatomic) UIOffset additionalTabBarPalettePositionOffset;                       //@synthesize additionalTabBarPalettePositionOffset=_additionalTabBarPalettePositionOffset - In the implementation block
@property (nonatomic,readonly) CGRect tabBarButtonsContainerFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext;                                    //@synthesize clientContext=_clientContext - In the implementation block
-(double)currentPaletteHeight;
-(id)selectedNavigationViewController;
-(CGRect)frameForPalette;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(id)_backdropGroupName;
-(void)showBarWithTransition:(int)arg1 ;
-(void)hideBarWithTransition:(int)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_updateLayoutOfTabBar;
-(UIOffset)_roundedOffsetFromOffset:(UIOffset)arg1 ;
-(void)_updateAdditionalPositionOffsetsWithUpdateRecord:(SCD_Struct_MT11)arg1 ;
-(void)attachTabBarPalette:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_animatePaletteWithSetup:(/*^block*/id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)detachTabBarPalette:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)willUpdateAdditionalTabBarComponentsPositionOffsets;
-(void)setAdditionalTabBarButtonsContainerPositionOffset:(UIOffset)arg1 ;
-(void)setAdditionalTabBarPalettePositionOffset:(UIOffset)arg1 ;
-(void)didUpdateAdditionalTabBarComponentsPositionOffsets;
-(void)setChargeEnabledOnTabBarButtonsContainer:(BOOL)arg1 ;
-(CGRect)tabBarButtonsContainerFrame;
-(id)existingTabBarPalette;
-(id)tabBarPaletteWithHeight:(double)arg1 ;
-(void)attachTabBarPalette:(id)arg1 ;
-(void)detachTabBarPalette:(id)arg1 ;
-(void)updateTabBarComponentPositionOffsetsWithPresentationValues;
-(UIOffset)additionalTabBarButtonsContainerPositionOffset;
-(UIOffset)additionalTabBarPalettePositionOffset;
-(BOOL)chargeEnabledOnTabBarButtonsContainer;
@end

