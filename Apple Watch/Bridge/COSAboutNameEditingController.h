/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface COSAboutNameEditingController : PSListController {

	PSSpecifier* _textSpecifier;

}

@property (nonatomic,retain) PSSpecifier * textSpecifier;              //@synthesize textSpecifier=_textSpecifier - In the implementation block
-(PSSpecifier *)textSpecifier;
-(void)setTextSpecifier:(PSSpecifier *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)suspend;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(id)specifiers;
-(BOOL)canBeShownFromSuspendedState;
@end

