/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:19 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, UIWindow, UIScreen;

@interface CKStarkManager : NSObject {

	BOOL _isStarkConnected;
	UIViewController* _starkRootViewController;
	UIWindow* _starkWindow;
	UIScreen* _starkScreen;

}

@property (nonatomic,retain) UIViewController * starkRootViewController;              //@synthesize starkRootViewController=_starkRootViewController - In the implementation block
@property (nonatomic,retain) UIWindow * starkWindow;                                  //@synthesize starkWindow=_starkWindow - In the implementation block
@property (nonatomic,retain) UIScreen * starkScreen;                                  //@synthesize starkScreen=_starkScreen - In the implementation block
@property (nonatomic,readonly) BOOL isStarkConnected;                                 //@synthesize isStarkConnected=_isStarkConnected - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isStarkConnected;
-(void)startListeningForScreenNotifications;
-(void)attachStarkToScreen:(id)arg1 ;
-(void)screenDidConnectNotification:(id)arg1 ;
-(void)screenDidDisconnectNotification:(id)arg1 ;
-(void)detachStarkScreen:(id)arg1 ;
-(void)setStarkScreen:(UIScreen *)arg1 ;
-(void)setStarkWindow:(UIWindow *)arg1 ;
-(void)setStarkRootViewController:(UIViewController *)arg1 ;
-(UIScreen *)starkScreen;
-(void)activateForConversation:(id)arg1 ;
-(void)activateForRecipient:(id)arg1 ;
-(UIViewController *)starkRootViewController;
-(UIWindow *)starkWindow;
@end

