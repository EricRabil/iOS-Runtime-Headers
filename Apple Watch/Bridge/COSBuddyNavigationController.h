/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSRootController.h>

@protocol COSBuddyNavigationControllerDelegate;
@interface COSBuddyNavigationController : PSRootController {

	id<COSBuddyNavigationControllerDelegate> _buddyNavDelegate;

}

@property (assign,nonatomic) id<COSBuddyNavigationControllerDelegate> buddyNavDelegate;              //@synthesize buddyNavDelegate=_buddyNavDelegate - In the implementation block
-(void)setBuddyNavDelegate:(id<COSBuddyNavigationControllerDelegate>)arg1 ;
-(id<COSBuddyNavigationControllerDelegate>)buddyNavDelegate;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)_usesTransitionController;
@end

