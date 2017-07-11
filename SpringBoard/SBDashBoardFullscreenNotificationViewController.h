/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardModalViewControllerBase.h>
#import <SpringBoard/SBDashBoardModalViewDelegate.h>
#import <SpringBoard/SBDashBoardNotificationDestination.h>

@protocol SBDashBoardNotificationDispatcher;
@class NCNotificationRequest, NCNotificationAction, NSString;

@interface SBDashBoardFullscreenNotificationViewController : SBDashBoardModalViewControllerBase <SBDashBoardModalViewDelegate, SBDashBoardNotificationDestination> {

	NCNotificationRequest* _request;
	NCNotificationAction* _primaryAction;
	NCNotificationAction* _secondaryAction;
	NCNotificationAction* _silenceAction;
	NCNotificationAction* _dismissAction;
	id<SBDashBoardNotificationDispatcher> _dispatcher;

}

@property (nonatomic,readonly) NCNotificationRequest * notificationRequest;                        //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (assign,nonatomic,__weak) id<SBDashBoardNotificationDispatcher> dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
-(void)aggregateBehavior:(id)arg1 ;
-(long long)presentationPriority;
-(BOOL)isNotificationContentExtensionVisible:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)handleSecondaryActionForView:(id)arg1 ;
-(void)handlePrimaryActionForView:(id)arg1 ;
-(void)updateNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)lockButtonPressed:(id)arg1 ;
-(void)_handleAction:(id)arg1 withName:(id)arg2 ;
-(void)_dismissFromSignificantUserInteraction;
-(void)_handleSilenceAction;
-(void)_handlePrimaryAction;
-(void)_handleDismissAction;
-(void)_handleSecondaryAction;
-(void)dealloc;
-(void)volumeChanged:(id)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)presentationType;
-(id<SBDashBoardNotificationDispatcher>)dispatcher;
-(void)setDispatcher:(id<SBDashBoardNotificationDispatcher>)arg1 ;
-(NCNotificationRequest *)notificationRequest;
-(id)initWithNotificationRequest:(id)arg1 ;
-(void)updateNotificationSectionSettings:(id)arg1 ;
-(void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
-(void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2 ;
@end
