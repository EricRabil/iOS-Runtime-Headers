/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTGenericSettingsViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UITapGestureRecognizer, NSString;

@interface MTiOSGenericSettingsViewController : MTGenericSettingsViewController <UITextFieldDelegate> {

	UITextField* _activeTextField;
	UITapGestureRecognizer* _tap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4 ;
-(void)setCell:(id)arg1 enabled:(BOOL)arg2 withDescription:(id)arg3 ;
-(void)dismissKeyboard:(id)arg1 ;
-(id)optionsTableViewControllerWithOption:(id)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
@end

