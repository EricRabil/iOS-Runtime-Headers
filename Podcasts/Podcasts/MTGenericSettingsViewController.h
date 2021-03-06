/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Podcasts/MTSettingsControllerDelegate.h>

@class MTSettingsController, NSString;

@interface MTGenericSettingsViewController : UITableViewController <MTSettingsControllerDelegate> {

	MTSettingsController* _settingsController;

}

@property (nonatomic,retain) MTSettingsController * settingsController;              //@synthesize settingsController=_settingsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)footerFont;
+(id)settingFont;
+(id)cellClassForSettingType:(int)arg1 inGroupWithIdentifier:(id)arg2 ;
+(id)cellIdentifierForSettingType:(int)arg1 ;
+(double)rowHeight;
+(id)selectedColor;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4 ;
-(void)textSettingChanged:(id)arg1 value:(id)arg2 ;
-(void)setCell:(id)arg1 enabled:(BOOL)arg2 withDescription:(id)arg3 ;
-(id)settingAtIndexPath:(id)arg1 ;
-(id)optionsTableViewControllerWithOption:(id)arg1 ;
-(void)updateRowHeight;
-(void)settingsController:(id)arg1 reloadedGroupWithIdentifier:(id)arg2 ;
-(void)settingsController:(id)arg1 addedGroup:(id)arg2 atIndex:(long long)arg3 ;
-(void)settingsController:(id)arg1 removedGroupAtIndex:(long long)arg2 ;
-(void)settingsController:(id)arg1 removedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)settingsController:(id)arg1 updatedSettingAtIndex:(long long)arg2 inGroupWithIdentifier:(id)arg3 ;
-(void)syncControllerOperationCompleted:(id)arg1 ;
-(void)switchSettingChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)newCellForDescriptionType:(int)arg1 inGroupWithIdentifier:(id)arg2 ;
-(void)optionSettingChanged:(id)arg1 value:(unsigned long long)arg2 ;
-(id)indexPathForSetting:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(MTSettingsController *)settingsController;
-(void)setSettingsController:(MTSettingsController *)arg1 ;
@end

