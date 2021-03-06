/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:50:01 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/MobileSMS.app/MobileSMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSMS/MobileSMS-Structs.h>
#import <UIKit/UIApplication.h>
#import <libobjc.A.dylib/IMSystemMonitorListener.h>
#import <libobjc.A.dylib/PARSessionDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@protocol SMSApplicationPerformSearchProtocol;
@class UIWindow, CKMessagesController, CKRegistrationViewController, NSString, NSArray, BKSProcessAssertion, TLAlert, NSURL;

@interface SMSApplication : UIApplication <IMSystemMonitorListener, PARSessionDelegate, UIApplicationDelegate> {

	BOOL _waitToSendFinishLaunching;
	BOOL _isLocked;
	BOOL _isSuspended;
	UIWindow* _window;
	CKMessagesController* _messagesController;
	CKRegistrationViewController* _madridRegistrationController;
	NSString* _defaultPng;
	NSArray* _suspendUnreadMessages;
	BKSProcessAssertion* _backgroundAssertion;
	TLAlert* _alert;
	BOOL _shouldShowRegistrationOverride;
	id<SMSApplicationPerformSearchProtocol> _testPerformSearchDelegate;
	BOOL _isHandlingLaunchTask;
	unsigned _receiveAcknowledgmentSoundID;
	NSString* _openURLSourceApplication;
	NSURL* _deferredLoadURL;
	NSString* _deferredLoadURLSourceApplication;
	/*^block*/id _alertViewHandler;

}

@property (assign,nonatomic,__weak) id<SMSApplicationPerformSearchProtocol> testPerformSearchDelegate; 
@property (nonatomic,retain) NSString * openURLSourceApplication;                                                   //@synthesize openURLSourceApplication=_openURLSourceApplication - In the implementation block
@property (nonatomic,retain) NSURL * deferredLoadURL;                                                               //@synthesize deferredLoadURL=_deferredLoadURL - In the implementation block
@property (nonatomic,retain) NSString * deferredLoadURLSourceApplication;                                           //@synthesize deferredLoadURLSourceApplication=_deferredLoadURLSourceApplication - In the implementation block
@property (nonatomic,retain) CKMessagesController * messagesController;                                             //@synthesize messagesController=_messagesController - In the implementation block
@property (nonatomic,copy) id alertViewHandler;                                                                     //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (assign,nonatomic) BOOL isHandlingLaunchTask;                                                             //@synthesize isHandlingLaunchTask=_isHandlingLaunchTask - In the implementation block
@property (assign,nonatomic) unsigned receiveAcknowledgmentSoundID;                                                 //@synthesize receiveAcknowledgmentSoundID=_receiveAcknowledgmentSoundID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)didChangeOrientation:(id)arg1 ;
-(BOOL)runTestNameOrFallback:(id)arg1 ;
-(void)startShowMessagesTest:(id)arg1 ;
-(void)startShowPeoplePickerTest:(id)arg1 ;
-(void)startCancelPeoplePickerTest:(id)arg1 ;
-(void)startSelectContactPeoplePickerTest:(id)arg1 ;
-(void)startShowNewComposeTest:(id)arg1 ;
-(void)startResolveContactTest:(id)arg1 ;
-(void)startComposeMessageToPseudoContactTest:(id)arg1 ;
-(void)startScrollConversationsTest:(id)arg1 ;
-(void)startScrollTranscriptTest:(id)arg1 ;
-(void)startScrollPseudoContactNamesTest:(id)arg1 ;
-(void)startRotationTest:(id)arg1 ;
-(void)startPhotoTest:(id)arg1 ;
-(void)startSendAnimationTest:(id)arg1 ;
-(void)startDetailsTest:(id)arg1 ;
-(void)startStuckAudioPillTest:(id)arg1 ;
-(void)startExtensionTest:(id)arg1 launch:(BOOL)arg2 ;
-(void)startPriorityBoostingTestWithOptions:(id)arg1 ;
-(void)dismissPhotoPickerWithCompletion:(/*^block*/id)arg1 ;
-(void)showTranscriptListNotAnimated;
-(void)cleanupCurrentTest;
-(void)installNotificationObserverForNotificationName:(id)arg1 notificationName:(id)arg2 forOneNotification:(BOOL)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)showConversationForChatIdentifier:(id)arg1 willShowConversation:(/*^block*/id)arg2 didShowConversation:(/*^block*/id)arg3 ;
-(void)showTransscriptAnimated:(BOOL)arg1 ;
-(void)showTranscriptList;
-(void)scrollTranscript;
-(void)showNextMessage;
-(void)sendAudioMessage;
-(BOOL)validateTranscriptVendingIAV:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(BOOL)validateEntryViewIsFirstResponder:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(BOOL)validateNonzeroTranscriptInsets:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(BOOL)validateBottomInsetGreaterThanIAVHeight:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(BOOL)validateIAVisExpanded:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(BOOL)validateTranscriptIsScrolledToBottom:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(void)_recordResult:(BOOL)arg1 forKey:(id)arg2 comment:(id)arg3 resultsDictionary:(id)arg4 ;
-(void)deleteTopChat;
-(void)UITestShowPhotoPicker;
-(BOOL)validateSelectedPhotoIsZoomed:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(BOOL)validatePhotoPickerVisibility:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 withinSubtest:(id)arg4 ;
-(BOOL)validatePhotoPickerWindowLevel:(id)arg1 expected:(double)arg2 withResultsDictionary:(id)arg3 withinSubtest:(id)arg4 ;
-(BOOL)validateTranscriptShouldAutorotate:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(BOOL)validatePhotoIsSelected:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(void)showPhotoPickerInTranscriptWithCompletion:(/*^block*/id)arg1 ;
-(void)UITestSelectPhotoInPicker;
-(void)selectAPhotoInPickerWithCompletion:(/*^block*/id)arg1 ;
-(void)UITestSendSelectedPhoto;
-(void)sendSelectedPhotoWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)validateTranscriptControllerIsFirstResponder:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(BOOL)validateActionMenuWindowOrientationExpectedOrientation:(long long)arg1 withResultsDictionary:(id)arg2 ;
-(BOOL)validateTranscriptPreviewCacheHasResumed:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(void)_recordAllTestsPassed:(BOOL)arg1 resultsDictionary:(id)arg2 ;
-(BOOL)validateRecipientSelectionControllerIsFirstResponder:(id)arg1 expected:(BOOL)arg2 withResultsDictionary:(id)arg3 ;
-(void)doPushToTranscriptTestForChatIdentifierPerformanceTest:(id)arg1 testBlock:(/*^block*/id)arg2 ;
-(void)_doOneAppShelfScrollTest:(id)arg1 counter:(long long)arg2 ;
-(void)_browserSwitcherScrollScrollToFirst:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_browserSwitcherScrollScrollToLast:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startActualAppShelfScrollingTest:(id)arg1 ;
-(void)_runScrollingAppShelfTest;
-(void)contactPickerDidHide;
-(void)_dismissPeoplePickerWithCompletion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)newComposeDismissContactPicker:(id)arg1 ;
-(void)_performNextSearchWithRemainingSearches:(id)arg1 passedSoFar:(BOOL)arg2 resultsDictionary:(id)arg3 finalCompletion:(/*^block*/id)arg4 ;
-(void)_performNextSearchResultsClearingTestWithRemainingSearches:(id)arg1 passedSoFar:(BOOL)arg2 resultsDictionary:(id)arg3 finalCompletion:(/*^block*/id)arg4 ;
-(void)_performNextSearchPartialFirstWithRemainingSearches:(id)arg1 passedSoFar:(BOOL)arg2 resultsDictionary:(id)arg3 finalCompletion:(/*^block*/id)arg4 ;
-(void)_performNextTapIntoTapOutOfTestWithRemainingSearches:(id)arg1 startTime:(double)arg2 passedSoFar:(BOOL)arg3 resultsDictionary:(id)arg4 finalCompletion:(/*^block*/id)arg5 ;
-(void)_searchForString:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)validateNumberOfSearchResultsInConversationListController:(id)arg1 searchText:(id)arg2 expectedNumber:(long long)arg3 withResultsDictionary:(id)arg4 ;
-(void)_searchForStringWithNoCompletion:(id)arg1 ;
-(void)_searchForString:(id)arg1 validateExpectedSearchResults:(id)arg2 resultsDictionary:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_clearSearchStringWithPreviousSearchText:(id)arg1 resultsDictionary:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)validateAtConversationListInConversationListController:(id)arg1 previousSearchText:(id)arg2 withResultsDictionary:(id)arg3 ;
-(void)_showPeoplePickerTest:(id)arg1 ;
-(void)tearDownShowPeoplePickerTest:(id)arg1 ;
-(void)dissmissComposeSheet;
-(void)_startPeoplePickerTest;
-(void)_startSelectContactPeoplePickerTest;
-(void)_selectContact:(id)arg1 ;
-(void)tearDownSelectContactPeoplePickerTest;
-(void)_startCancelPeoplePickerTest;
-(void)_cancelPeoplePicker;
-(void)tearDownCancelPeoplePickerTest;
-(void)_startcomposePseudoContactTest:(id)arg1 withOptions:(id)arg2 ;
-(void)typeInContactName:(id)arg1 ;
-(void)_scrollPseudoContactTest:(id)arg1 withOptions:(id)arg2 ;
-(void)scrollPseudoContacts;
-(void)_resolveContactTest:(id)arg1 ;
-(void)_startResolveContactTest:(id)arg1 ;
-(void)_detailsViewScrollingPerfTest:(id)arg1 ;
-(void)sendMultipleMessagesEntryView:(id)arg1 composition:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeCompletionBlock:(/*^block*/id)arg1 ;
-(/*^block*/id)copyAndStoreCompletionBlock:(/*^block*/id)arg1 ;
-(void)clearEntryView;
-(void)showMessagesApplicationAndStartTestForIdentifier:(id)arg1 supportsLaunchSubtest:(BOOL)arg2 ;
-(void)startAndFailTestNamed:(id)arg1 withFailure:(id)arg2 ;
-(void)showConversationForChatIdentifier:(id)arg1 forceReload:(BOOL)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)didShowNewCompose;
-(void)UITestSendAndPlayAudioMessage;
-(void)UITestShowConversationWithAlertPresented;
-(void)UITestActionMenuAfterRotationInVideoTaker;
-(void)UITestDeleteTopChat;
-(void)UITestPushTranscript;
-(void)UITestLaunchToTranscript;
-(void)UITestPushTranscriptWithDraft;
-(void)UITestPushTranscriptKeyboardDownExpandTextEntry;
-(void)UITestPushTranscriptAndDetails;
-(void)UITestPushTranscriptAndDetailsKeyboardUp;
-(void)UITestDismissRegistration;
-(void)UITestRotateTranscript;
-(void)UITestRotateTranscriptKeyboardUp;
-(void)UITestRotateTranscriptTwice;
-(void)UITestRotateTranscriptTwiceKeyboardUp;
-(void)UITestPresentNewCompose;
-(void)UITestPresentNewComposeWithDraft;
-(void)UITestSendNewComposeDraft;
-(void)perfTestPushToTranscript;
-(void)perfTestScrollAppsTray;
-(void)perfTestPushTranscriptToAppsShelf;
-(void)UITestNewComposeDismissContactPicker;
-(void)UITestCancelNewComposeLandscape;
-(void)UITestImagePreviewAfterInsertedIntoEntryView;
-(void)UITestSearchForStrings;
-(void)UITestSearchResultsClearingAfterNotFound;
-(void)UITestSearchForSubstringThenFullString;
-(void)UITestTapIntoAndOutOfConversations;
-(void)UITestSearchResultNearTop;
-(void)IMCoreSendNewCompose;
-(void)IMCoreSendPhoto;
-(void)IMCoreToggleDisturb;
-(void)IMCoreDeleteTopChat;
-(void)tearDownShowPeoplePickerTest;
-(void)tearDownResolveContactTest:(/*^block*/id)arg1 ;
-(id<SMSApplicationPerformSearchProtocol>)testPerformSearchDelegate;
-(void)setTestPerformSearchDelegate:(id<SMSApplicationPerformSearchProtocol>)arg1 ;
-(BOOL)_shouldShowMadridRegistrationView;
-(void)setOpenURLSourceApplication:(NSString *)arg1 ;
-(BOOL)isHandlingLaunchTask;
-(BOOL)_loadingApplicationFromSpotlightSearch:(id)arg1 ;
-(void)setIsHandlingLaunchTask:(BOOL)arg1 ;
-(void)_messageReceived:(id)arg1 ;
-(void)_messageSent:(id)arg1 ;
-(void)_messageSendFailed:(id)arg1 ;
-(void)_handleAccountsChanged:(id)arg1 ;
-(void)_destroyMadridRegistrationView;
-(unsigned)receiveAcknowledgmentSoundID;
-(unsigned)_createReceiveAcknowledgmentSoundID;
-(void)setReceiveAcknowledgmentSoundID:(unsigned)arg1 ;
-(void)_playReceiveAcknowledgmentSound;
-(BOOL)_shouldPlayDefaultSendSoundForMessageInCurrentTranscript:(id)arg1 ;
-(void)_playMessageReceivedForMessage:(id)arg1 inChat:(id)arg2 ;
-(void)_playSendSoundForMessage:(id)arg1 ;
-(void)setAlertViewHandler:(id)arg1 ;
-(void)_loadURLMessageGUID:(id)arg1 ;
-(NSString *)openURLSourceApplication;
-(NSString *)deferredLoadURLSourceApplication;
-(void)setWaitToSendFinishLaunching:(BOOL)arg1 ;
-(id)defaultPng;
-(NSURL *)deferredLoadURL;
-(void)setDeferredLoadURL:(NSURL *)arg1 ;
-(void)setDeferredLoadURLSourceApplication:(NSString *)arg1 ;
-(void)reportAppLaunchFinished;
-(void)setDefaultPng:(id)arg1 ;
-(void)_storeState;
-(void)_scheduleDeferredSetup;
-(void)_updateMadridRegistrationViewAnimated:(BOOL)arg1 ;
-(BOOL)_restoreState;
-(void)_prepareForResume:(BOOL)arg1 ;
-(void)_showMadridRegistrationViewIfNecessary;
-(void)__updateAppSnapshot;
-(void)_updateAppSnapshot;
-(void)__showMadridRegistrationViewIfNecessary;
-(void)_createMadridRegistrationViewIfNecessary;
-(id)alertViewHandler;
-(BOOL)_isShowingNewComposition;
-(id)init;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)applicationSignificantTimeChange:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)_application:(id)arg1 handleSiriTask:(id)arg2 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(void)applicationDidResumeFromUnderLock;
-(BOOL)applicationSuspendWithSettings:(id)arg1 ;
-(BOOL)openURL:(id)arg1 ;
-(void)applicationOpenURL:(id)arg1 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(BOOL)isHandlingURL;
-(BOOL)isLocked;
-(void)failedTest:(id)arg1 ;
-(void)finishedTest:(id)arg1 waitForCommit:(BOOL)arg2 extraResults:(id)arg3 withTeardownBlock:(/*^block*/id)arg4 ;
-(void)failedTest:(id)arg1 withFailure:(id)arg2 withResults:(id)arg3 ;
-(BOOL)runTest:(id)arg1 options:(id)arg2 ;
-(void)failedTest:(id)arg1 withFailure:(id)arg2 ;
-(void)showKeyboard;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handleURL:(id)arg1 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg1 ;
-(void)_resetIdleTimer;
-(void)_prepareForSuspend;
-(void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3 ;
-(BOOL)_restoreState:(out /*^block*/id*)arg1 ;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspendForEventsOnly;
-(void)systemApplicationDidResumeForEventsOnly;
-(void)didShowAMessage:(id)arg1 ;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)_conversationFilteringStateChangedNotification:(id)arg1 ;
-(CKMessagesController *)messagesController;
-(void)didShowTranscriptList;
-(void)didDeleteChat;
-(void)setMessagesController:(CKMessagesController *)arg1 ;
-(void)startPPTSubtestForCurrentTest:(id)arg1 ;
-(void)stopPPTSubtestForCurrentTest:(id)arg1 ;
-(void)deleteChat:(id)arg1 ;
-(void)_clearFailureBadge;
-(void)playAudioMessage;
@end

