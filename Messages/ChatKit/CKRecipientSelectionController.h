/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:16 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <libobjc.A.dylib/MFComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/CKRecipientSearchListControllerDelegate.h>
#import <libobjc.A.dylib/MFGroupDetailViewControllerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>

@protocol CKRecipientSelectionControllerDelegate;
@class CKPendingConversation, CKComposeRecipientView, UIView, CKRecipientSearchListController, UIScrollView, UILabel, ABPeoplePickerNavigationController, NSArray, MFComposeRecipient, NSMutableDictionary, NSString;

@interface CKRecipientSelectionController : CKViewController <MFComposeRecipientTextViewDelegate, CKRecipientSearchListControllerDelegate, MFGroupDetailViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate> {

	double _keyboardHeightWithAccessoryView;
	BOOL _peoplePickerHidden;
	BOOL _editable;
	BOOL _forceMMS;
	BOOL _preventAtomization;
	BOOL _didShowOneTimeErrorAlert;
	BOOL _homogenizePreferredServiceForiMessage;
	BOOL _shouldSuppressSearchResultsTable;
	id<CKRecipientSelectionControllerDelegate> _delegate;
	CKPendingConversation* _conversation;
	CKComposeRecipientView* _toField;
	UIView* _toFieldContainerView;
	CKRecipientSearchListController* _searchListController;
	/*^block*/id _gameCenterPickerBlock;
	UIScrollView* _toFieldScrollingView;
	UILabel* _toFieldPlaceholderLabel;
	ABPeoplePickerNavigationController* _peoplePickerController;
	NSArray* _addressBookProperties;
	MFComposeRecipient* _recentContactForPresentedABCard;
	NSMutableDictionary* _recipientAvailibityTimers;
	NSMutableDictionary* _recipientAvailabilities;

}

@property (nonatomic,retain) CKPendingConversation * conversation;                                     //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKComposeRecipientView * toField;                                         //@synthesize toField=_toField - In the implementation block
@property (nonatomic,retain) UIScrollView * toFieldScrollingView;                                      //@synthesize toFieldScrollingView=_toFieldScrollingView - In the implementation block
@property (nonatomic,retain) UILabel * toFieldPlaceholderLabel;                                        //@synthesize toFieldPlaceholderLabel=_toFieldPlaceholderLabel - In the implementation block
@property (nonatomic,retain) ABPeoplePickerNavigationController * peoplePickerController;              //@synthesize peoplePickerController=_peoplePickerController - In the implementation block
@property (nonatomic,retain) NSArray * addressBookProperties;                                          //@synthesize addressBookProperties=_addressBookProperties - In the implementation block
@property (nonatomic,retain) MFComposeRecipient * recentContactForPresentedABCard;                     //@synthesize recentContactForPresentedABCard=_recentContactForPresentedABCard - In the implementation block
@property (assign,nonatomic) BOOL preventAtomization;                                                  //@synthesize preventAtomization=_preventAtomization - In the implementation block
@property (assign,nonatomic) BOOL didShowOneTimeErrorAlert;                                            //@synthesize didShowOneTimeErrorAlert=_didShowOneTimeErrorAlert - In the implementation block
@property (nonatomic,readonly) BOOL homogenizePreferredServiceForiMessage;                             //@synthesize homogenizePreferredServiceForiMessage=_homogenizePreferredServiceForiMessage - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressSearchResultsTable;                                  //@synthesize shouldSuppressSearchResultsTable=_shouldSuppressSearchResultsTable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recipientAvailibityTimers;                          //@synthesize recipientAvailibityTimers=_recipientAvailibityTimers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recipientAvailabilities;                            //@synthesize recipientAvailabilities=_recipientAvailabilities - In the implementation block
@property (assign,nonatomic,__weak) id<CKRecipientSelectionControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * toFieldContainerView;                                          //@synthesize toFieldContainerView=_toFieldContainerView - In the implementation block
@property (nonatomic,retain) CKRecipientSearchListController * searchListController;                   //@synthesize searchListController=_searchListController - In the implementation block
@property (assign,getter=isSearchResultsHidden,nonatomic) BOOL searchResultsHidden; 
@property (assign,getter=isPeoplePickerHidden,nonatomic) BOOL peoplePickerHidden;                      //@synthesize peoplePickerHidden=_peoplePickerHidden - In the implementation block
@property (assign,getter=isEditable,nonatomic) BOOL editable;                                          //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) BOOL toFieldIsFirstResponder; 
@property (nonatomic,readonly) double collapsedHeight; 
@property (assign,nonatomic) BOOL forceMMS;                                                            //@synthesize forceMMS=_forceMMS - In the implementation block
@property (nonatomic,copy) id gameCenterPickerBlock;                                                   //@synthesize gameCenterPickerBlock=_gameCenterPickerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<CKRecipientSelectionControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<CKRecipientSelectionControllerDelegate>)delegate;
-(void)reset;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(BOOL)isEditable;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLoad;
-(void)setEditable:(BOOL)arg1 ;
-(id)recipients;
-(void)_dismissPeoplePicker;
-(void)removeRecipient:(id)arg1 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2 ;
-(void)addRecipient:(id)arg1 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(const void*)arg2 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientViewDidBecomeFirstResponder:(id)arg1 ;
-(void)recipientViewDidResignFirstResponder:(id)arg1 ;
-(BOOL)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2 ;
-(id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)composeRecipientViewReturnPressed:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(CKPendingConversation *)conversation;
-(void)searchListControllerDidScroll:(id)arg1 ;
-(BOOL)isSearchResultsHidden;
-(void)searchListControllerDidFinishSearch:(id)arg1 ;
-(void)searchListController:(id)arg1 destinationsUpdated:(id)arg2 ;
-(long long)searchListController:(id)arg1 idStatusForIDSID:(id)arg2 ;
-(void)invalidateOutstandingIDStatusRequests;
-(void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
-(CKComposeRecipientView *)toField;
-(CKRecipientSearchListController *)searchListController;
-(UIScrollView *)toFieldScrollingView;
-(UIEdgeInsets)_navigationBarInsets;
-(UIView *)toFieldContainerView;
-(void)setPeoplePickerHidden:(BOOL)arg1 ;
-(void)_handleRecipientViewChanged:(id)arg1 ;
-(void)_keyboardWillShowOrHide:(id)arg1 ;
-(void)_handleConversationPreferredServiceDidChangeNotification:(id)arg1 ;
-(void)_updateAddressBookProperties;
-(BOOL)homogenizePreferredServiceForiMessage;
-(void)setSearchListController:(CKRecipientSearchListController *)arg1 ;
-(void)_updateToField;
-(void)_resetSearchResultsInsets;
-(void)setPreventAtomization:(BOOL)arg1 ;
-(void)recipientSelectionControllerDidChange;
-(void)_adjustToFieldPositionIfNecessary;
-(void)_updateSearchResultsTable;
-(BOOL)isGameCenterRecipient:(id)arg1 ;
-(void)_updateShowingSearch;
-(unsigned long long)_atomPresentationOptionsForRecipient:(id)arg1 ;
-(void)_updateRecipientViewLayouts;
-(ABPeoplePickerNavigationController *)peoplePickerController;
-(void)_showDetailsForRecipient:(id)arg1 canDelete:(BOOL)arg2 ;
-(void)_showActionSheetForRecipient:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)preventAtomization;
-(void)_showDetailsForGroup:(id)arg1 ;
-(NSMutableDictionary *)recipientAvailabilities;
-(void)setRecentContactForPresentedABCard:(MFComposeRecipient *)arg1 ;
-(void)_removeRecent;
-(void)setToFieldPlaceholderLabel:(UILabel *)arg1 ;
-(void)addRecipients:(id)arg1 ;
-(id)_canonicalRecipientAddresses;
-(void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setSearchResultsHidden:(BOOL)arg1 ;
-(BOOL)isPeoplePickerHidden;
-(void)_showSearchField;
-(void)_hideSearchField;
-(char)_availibilityForRecipient:(id)arg1 onService:(id)arg2 ;
-(BOOL)finishedComposingRecipients;
-(NSMutableDictionary *)recipientAvailibityTimers;
-(void)recipientAvailibilitiesDidUpdate;
-(void)_showOneTimeErrorAlertForAddedRecipient:(id)arg1 service:(id)arg2 withError:(char)arg3 ;
-(void)_removeAvailabilityTimeoutTimerForRecipient:(id)arg1 ;
-(id)_toFieldCollapsedTextColor;
-(void)_refreshActionSheet;
-(void)_startAvailabilityTimeoutTimerForRecipient:(id)arg1 ;
-(id)_alternateAddressesForRecipient:(id)arg1 ;
-(BOOL)hasFailediMessageRecipients;
-(BOOL)hasTimedOutRecipients;
-(BOOL)hasPendingiMessageRecipients;
-(void)setRecipientAvailibityTimers:(NSMutableDictionary *)arg1 ;
-(void)_handleRecipientAvailabilityTimeout:(id)arg1 ;
-(id)_recipientCausingTooManyRecipientsError;
-(id)_alternateiMessagableAddressesForRecipient:(id)arg1 ;
-(MFComposeRecipient *)recentContactForPresentedABCard;
-(BOOL)shouldSuppressSearchResultsTable;
-(void)setAddressBookProperties:(NSArray *)arg1 ;
-(void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2 ;
-(unsigned long long)presentationOptionsForRecipient:(id)arg1 ;
-(void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2 ;
-(void)groupDetailViewController:(id)arg1 didTapComposeRecipient:(id)arg2 ;
-(void)groupDetailViewController:(id)arg1 didAskToRemoveGroup:(id)arg2 ;
-(void)groupDetailViewControllerDidCancel:(id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)setGameCenterPickerBlock:(id)arg1 ;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2 ;
-(void)setConversation:(CKPendingConversation *)arg1 ;
-(BOOL)toFieldIsFirstResponder;
-(BOOL)hasUnreachableEmergencyRecipient;
-(double)collapsedHeight;
-(BOOL)_isToFieldPushedUp;
-(void)setToField:(CKComposeRecipientView *)arg1 ;
-(BOOL)forceMMS;
-(void)setForceMMS:(BOOL)arg1 ;
-(id)gameCenterPickerBlock;
-(void)setToFieldScrollingView:(UIScrollView *)arg1 ;
-(UILabel *)toFieldPlaceholderLabel;
-(void)setPeoplePickerController:(ABPeoplePickerNavigationController *)arg1 ;
-(NSArray *)addressBookProperties;
-(BOOL)didShowOneTimeErrorAlert;
-(void)setDidShowOneTimeErrorAlert:(BOOL)arg1 ;
-(void)setRecipientAvailabilities:(NSMutableDictionary *)arg1 ;
@end

