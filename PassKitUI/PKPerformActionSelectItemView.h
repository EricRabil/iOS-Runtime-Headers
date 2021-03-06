/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PKPerformActionView.h>

@protocol PKPerformActionViewDelegate;
@class PKPass, PKPaymentPassAction, NSDateFormatter, PKSelectedItemActionItem, UITableView, PKPerformActionSelectItemExpiresHeader, NSString;

@interface PKPerformActionSelectItemView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView> {

	PKPass* _pass;
	PKPaymentPassAction* _action;
	NSDateFormatter* _dateFormatter;
	PKSelectedItemActionItem* _selectedItem;
	UITableView* _tableView;
	PKPerformActionSelectItemExpiresHeader* _expiresHeader;
	id<PKPerformActionViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PKPerformActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<PKPerformActionViewDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<PKPerformActionViewDelegate>)delegate;
-(id)pass;
-(id)transactionAmount;
-(id)initWithPass:(id)arg1 action:(id)arg2 paymentDataProvider:(id)arg3 ;
-(id)serviceProviderData;
-(id)transactionCurrency;
-(void)saveLastInputValues;
-(void)_addSubviews;
-(BOOL)_showsExpirationSection;
-(id)_optionsSectionHeaderText;
-(id)_optionsSectionFooterText;
@end

