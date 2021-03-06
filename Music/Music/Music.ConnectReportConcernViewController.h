/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, MPStoreContentReporter, NSArray, NSString;

@interface Music.ConnectReportConcernViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	 tableView;
	 reporter;
	 contentId;
	 contentType;
	 aucType;

}

@property (readonly,nonatomic) UITableView * tableView; 
@property (readonly,nonatomic) MPStoreContentReporter * reporter; 
@property (readonly,nonatomic) NSArray * reports; 
@property (readonly,nonatomic) NSString * contentId; 
@property (readonly,nonatomic) long long contentType; 
@property (readonly,nonatomic) NSString * aucType; 
-(NSArray *)reports;
-(id)initWithContentId:(id)arg1 type:(long long)arg2 aucType:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(NSString *)aucType;
-(NSString *)contentId;
-(long long)contentType;
-(MPStoreContentReporter *)reporter;
@end

