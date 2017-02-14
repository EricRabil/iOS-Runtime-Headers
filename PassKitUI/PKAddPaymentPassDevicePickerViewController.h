/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol PKAddPaymentPassDevicePickerDelegate;
@class PKTableHeaderView, NSArray, PKAddPaymentPassRequestConfiguration;

@interface PKAddPaymentPassDevicePickerViewController : UITableViewController {

	PKTableHeaderView* _headerView;
	NSArray* _webServices;
	PKAddPaymentPassRequestConfiguration* _configuration;
	id<PKAddPaymentPassDevicePickerDelegate> _delegate;

}

@property (assign,nonatomic) id<PKAddPaymentPassDevicePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PKAddPaymentPassDevicePickerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<PKAddPaymentPassDevicePickerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithPaymentWebServices:(id)arg1 configuration:(id)arg2 ;
@end

