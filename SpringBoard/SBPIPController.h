/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/PGPictureInPictureControllerDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterObserver.h>
#import <SpringBoard/SBAlertManagerObserver.h>
#import <SpringBoard/SBAlertItemsControllerObserver.h>
#import <SpringBoard/SBAssistantObserver.h>

@class PGPictureInPictureController, SBWindow, NSMutableSet, NSMutableDictionary, NSString;

@interface SBPIPController : NSObject <PGPictureInPictureControllerDelegate, CCUIControlCenterObserver, SBAlertManagerObserver, SBAlertItemsControllerObserver, SBAssistantObserver> {

	PGPictureInPictureController* _pictureInPictureController;
	SBWindow* _pictureInPictureWindow;
	UIEdgeInsets _pictureInPictureWindowMargin;
	NSMutableSet* _pictureInPictureWindowHiddenReasons;
	NSMutableDictionary* _pictureInPictureInsetsForSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAutoPictureInPictureSupported;
+(id)sharedInstance;
+(BOOL)isPictureInPictureSupported;
-(void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2 ;
-(void)assistant:(id)arg1 viewWillAppear:(long long)arg2 ;
-(void)assistant:(id)arg1 viewDidDisappear:(long long)arg2 ;
-(void)applyPictureInPictureInsets:(UIEdgeInsets)arg1 fromSource:(long long)arg2 duration:(double)arg3 ;
-(void)alertItemsController:(id)arg1 willActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didActivateAlertItem:(id)arg2 ;
-(void)alertItemsController:(id)arg1 didDeactivateAlertItem:(id)arg2 forReason:(int)arg3 ;
-(id)_pipWindow;
-(void)setPictureInPictureWindowHidden:(BOOL)arg1 withReason:(id)arg2 ;
-(BOOL)isPictureInPictureWindowVisible;
-(BOOL)shouldStartPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 ;
-(void)startPictureInPictureForApplicationWithProcessIdentifierEnteringBackground:(int)arg1 animated:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_pointInside:(CGPoint)arg1 ;
-(void)_appSwitcherWillQuitApp:(id)arg1 ;
-(void)_keyboardWillDisappear:(id)arg1 ;
-(void)_keyboardWillRotate:(id)arg1 ;
-(void)_bulletinWillPresent:(id)arg1 ;
-(void)_bulletinWillDismiss:(id)arg1 ;
-(void)_nowPlayingStateChangedForPartialMedusaDevice;
-(void)_managePictureInPictureWindowVisibilityAnimated:(BOOL)arg1 ;
-(id)_pictureInPictureApplicationForProcessIdentifier:(int)arg1 ;
-(void)_updatePictureInPictureOverlayInsetsWithDuration:(double)arg1 ;
-(void)_managePictureInPictureWindowLevel;
-(void)_adjustPIPInsetsForKeyboardFrameChangeNotification:(id)arg1 ;
-(void)_setPictureInPictureWindowMargin:(UIEdgeInsets)arg1 animationDuration:(double)arg2 animationOptions:(unsigned long long)arg3 ;
-(void)_createWindowAndRootViewControllerIfNeeded;
-(void)_destroyWindowAndRootViewControllerIfPossible;
-(id)init;
-(void)dealloc;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)pictureInPictureController:(id)arg1 didCreatePictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureController:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2 ;
-(void)pictureInPictureInterruptionBegan;
-(void)pictureInPictureInterruptionEnded;
-(void)_lockStateDidChange:(id)arg1 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
@end

