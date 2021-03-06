/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:23 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CKBrowserViewControllerProtocol.h>

@protocol CKBrowserViewControllerSendDelegate;
@class NSObject, IMBalloonPlugin, NSString, IMBalloonPluginDataSource, UIViewController, UIView, CKBrowserDragManager, NSNumber;

@interface CKBrowserViewController : UIViewController <CKBrowserViewControllerProtocol> {

	BOOL _isiMessage;
	BOOL _isTransitioningToExpandedPresentation;
	NSObject*<CKBrowserViewControllerSendDelegate> _sendDelegate;
	IMBalloonPlugin* _balloonPlugin;
	NSString* _conversationID;
	IMBalloonPluginDataSource* _balloonPluginDataSource;
	UIViewController* _presentationViewController;
	long long _currentBrowserConsumer;
	UIView* _dragTargetView;
	CKBrowserDragManager* _browserDragManager;

}

@property (assign,nonatomic) BOOL isTransitioningToExpandedPresentation;                                                  //@synthesize isTransitioningToExpandedPresentation=_isTransitioningToExpandedPresentation - In the implementation block
@property (assign,nonatomic,__weak) UIView * dragTargetView;                                                              //@synthesize dragTargetView=_dragTargetView - In the implementation block
@property (nonatomic,retain) CKBrowserDragManager * browserDragManager;                                                   //@synthesize browserDragManager=_browserDragManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * presentationViewController;                                               //@synthesize presentationViewController=_presentationViewController - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKBrowserViewControllerSendDelegate> sendDelegate;                          //@synthesize sendDelegate=_sendDelegate - In the implementation block
@property (nonatomic,readonly) IMBalloonPlugin * balloonPlugin;                                                           //@synthesize balloonPlugin=_balloonPlugin - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * balloonPluginDataSource;                                         //@synthesize balloonPluginDataSource=_balloonPluginDataSource - In the implementation block
@property (assign,nonatomic) BOOL isiMessage;                                                                             //@synthesize isiMessage=_isiMessage - In the implementation block
@property (assign,nonatomic) NSString * conversationID;                                                                   //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,readonly) BOOL wantsDarkUI; 
@property (nonatomic,readonly) BOOL wantsOpaqueUI; 
@property (nonatomic,readonly) BOOL supportsQuickView; 
@property (nonatomic,readonly) BOOL mayBeKeptInViewHierarchy; 
@property (nonatomic,readonly) long long browserPresentationStyle; 
@property (nonatomic,readonly) BOOL shouldShowChatChrome; 
@property (nonatomic,readonly) BOOL inExpandedPresentation; 
@property (nonatomic,readonly) unsigned long long badgeValue; 
@property (assign,nonatomic) long long currentBrowserConsumer;                                                            //@synthesize currentBrowserConsumer=_currentBrowserConsumer - In the implementation block
@property (nonatomic,readonly) BOOL canReplaceDataSource; 
@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,readonly) long long parentModalPresentationStyle; 
@property (nonatomic,__weak,readonly) id<UIViewControllerTransitioningDelegate> parentTransitioningDelegate; 
+(id)currentPPTTestName;
+(BOOL)supportsMessagesAppExtendedLaunchTest;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_updateContentOverlayInsetsForSelfAndChildren;
-(void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismiss;
-(BOOL)isLoaded;
-(UIViewController *)presentationViewController;
-(void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2 ;
-(id)initWithBalloonPlugin:(id)arg1 ;
-(NSObject*<CKBrowserViewControllerSendDelegate>)sendDelegate;
-(id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2 ;
-(void)beginDisablingUserInteraction;
-(void)endDisablingUserInteraction;
-(void)viewWillTransitionToExpandedPresentation;
-(void)viewDidTransitionToExpandedPresentation;
-(void)viewWillTransitionToCompactPresentation;
-(void)viewDidTransitionToCompactPresentation;
-(void)setPresentationViewController:(UIViewController *)arg1 ;
-(void)setSendDelegate:(NSObject*<CKBrowserViewControllerSendDelegate>)arg1 ;
-(IMBalloonPlugin *)balloonPlugin;
-(IMBalloonPluginDataSource *)balloonPluginDataSource;
-(void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(BOOL)isiMessage;
-(void)setIsiMessage:(BOOL)arg1 ;
-(NSString *)conversationID;
-(void)setConversationID:(NSString *)arg1 ;
-(BOOL)wantsDarkUI;
-(BOOL)wantsOpaqueUI;
-(BOOL)supportsQuickView;
-(BOOL)mayBeKeptInViewHierarchy;
-(long long)browserPresentationStyle;
-(BOOL)shouldShowChatChrome;
-(BOOL)inExpandedPresentation;
-(CKBrowserDragManager *)browserDragManager;
-(long long)currentBrowserConsumer;
-(void)setCurrentBrowserConsumer:(long long)arg1 ;
-(id)initWithBalloonPlugin:(id)arg1 pluginPayloads:(id)arg2 ;
-(void)setDragTargetView:(UIView *)arg1 ;
-(void)finishedPPTTestNamed:(id)arg1 isCKLaunchTest:(BOOL)arg2 ;
-(BOOL)isTransitioningToExpandedPresentation;
-(void)setIsTransitioningToExpandedPresentation:(BOOL)arg1 ;
-(void)finishedPPTTestNamed:(id)arg1 ;
-(void)startPPTTestNamed:(id)arg1 ;
-(UIView *)dragTargetView;
-(void)setBrowserDragManager:(CKBrowserDragManager *)arg1 ;
@end

