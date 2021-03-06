/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIViewController.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class UIView, UILabel, NSString;

@interface COSSetupPageViewController : UIViewController <COSBuddyController> {

	UIView* _contentView;
	UILabel* _titleLabel;
	id<COSBuddyControllerDelegate> _delegate;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) CGRect computedTitleFrame; 
@property (nonatomic,readonly) UIView * contentView; 
@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)contentViewIsInAdjustedScrollView;
-(CGRect)computedTitleFrame;
-(id)init;
-(UIView *)contentView;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(id<COSBuddyControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(id)titleString;
-(void)updateTitleLabel;
@end

