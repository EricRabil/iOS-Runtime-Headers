/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:51 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <Preferences/PSListController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface NTKCompanionMonogramEntryViewController : PSListController <UITextFieldDelegate> {

	BOOL _showsDoneButton;
	UITextField* _monogramEntry;

}

@property (nonatomic,retain) UITextField * monogramEntry;              //@synthesize monogramEntry=_monogramEntry - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButton;                     //@synthesize showsDoneButton=_showsDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedDescription;
+(id)localizedTitle;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)_doneTapped;
-(BOOL)showsDoneButton;
-(void)setShowsDoneButton:(BOOL)arg1 ;
-(void)setCustomMonogram:(id)arg1 specifier:(id)arg2 ;
-(id)customMonogram:(id)arg1 ;
-(void)setMonogramEntry:(UITextField *)arg1 ;
-(void)returnPressedAtEnd;
-(void)_resetEntryField;
-(UITextField *)monogramEntry;
-(id)specifiers;
@end
