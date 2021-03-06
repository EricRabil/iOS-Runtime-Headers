/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:05 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIScrollingSegmentedControllerItemContextDelegate;
#import <StoreKitUI/StoreKitUI-Structs.h>
@class UIScrollView, UIViewController;

@interface SKUIScrollingSegmentedControllerItemContext : NSObject {

	UIEdgeInsets _appliedContentInsetsAdjustment;
	UIEdgeInsets _desiredContentInsetsAdjustment;
	UIScrollView* _insetAdjustedContentScrollView;
	id<SKUIScrollingSegmentedControllerItemContextDelegate> _delegate;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) id<SKUIScrollingSegmentedControllerItemContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                                  //@synthesize viewController=_viewController - In the implementation block
-(id)init;
-(void)setDelegate:(id<SKUIScrollingSegmentedControllerItemContextDelegate>)arg1 ;
-(id<SKUIScrollingSegmentedControllerItemContextDelegate>)delegate;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 ;
-(void)applyNewContentInset:(UIEdgeInsets)arg1 ;
-(void)updateAppliedContentInsetsAdjustment;
-(void)_applyNewContentInset:(UIEdgeInsets)arg1 withOldContentInset:(UIEdgeInsets)arg2 toContentScrollView:(id)arg3 ;
@end

