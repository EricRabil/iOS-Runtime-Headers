/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:02 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol _SKUIStatusBarAlertViewControllerDelegate;
@class UILabel, UIView, NSString;

@interface _SKUIStatusBarAlertViewController : UIViewController {

	UILabel* _label;
	BOOL _onScreen;
	long long _style;
	unsigned long long _supportedInterfaceOrientations;
	id<_SKUIStatusBarAlertViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UIView * statusBarView; 
@property (assign,nonatomic) long long style;                                                            //@synthesize style=_style - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                            //@synthesize onScreen=_onScreen - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic) unsigned long long supportedInterfaceOrientations;                          //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (assign,nonatomic,__weak) id<_SKUIStatusBarAlertViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultInterfaceOrientations; 
-(void)setDelegate:(id<_SKUIStatusBarAlertViewControllerDelegate>)arg1 ;
-(id<_SKUIStatusBarAlertViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(long long)style;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setStyle:(long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)isOnScreen;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)updateLabelFrame;
-(void)endAllAnimations;
-(void)setOnScreen:(BOOL)arg1 ;
-(unsigned long long)defaultInterfaceOrientations;
-(UIView *)statusBarView;
-(void)handleLabelTap:(id)arg1 ;
@end
