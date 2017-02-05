/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/FBUISceneDelegate.h>
#import <SpringBoard/SBLoginAppSceneHoster.h>
@class UIView, NSString, SBApplication;


@protocol SBLoginAppSceneHoster <NSObject>
@property (assign,nonatomic,__weak) id<SBLoginAppSceneHosterDelegate> delegate; 
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) NSString * hostedAppBundleID; 
@property (nonatomic,readonly) NSString * hostedSceneIdentifier; 
@property (nonatomic,readonly) SBApplication * hostedApp; 
@property (assign,nonatomic) BOOL deferHIDEvents; 
@required
-(SBApplication *)hostedApp;
-(void)setDeferHIDEvents:(BOOL)arg1;
-(void)killLoginApp;
-(NSString *)hostedAppBundleID;
-(NSString *)hostedSceneIdentifier;
-(void)launchLoginAppWithCompletion:(/*^block*/id)arg1;
-(BOOL)deferHIDEvents;
-(UIView *)contentView;
-(void)setDelegate:(id)arg1;
-(id<SBLoginAppSceneHosterDelegate>)delegate;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2;

@end


@protocol SBLoginAppSceneHosterDelegate;
@class UIView, NSString, SBApplication, FBUISceneWorkspace, FBUIScene, SBSUILoginUISceneClientSettingsDiffInspector;

@interface SBLoginAppSceneHoster : NSObject <FBUISceneDelegate, SBLoginAppSceneHoster> {

	FBUISceneWorkspace* _sceneWorkspace;
	FBUIScene* _loginScene;
	long long _cachedActivationOrientationForInitialClientSettings;
	SBSUILoginUISceneClientSettingsDiffInspector* _appClientSettingsDiffInspector;
	BOOL _deferHIDEvents;
	BOOL _hidEventDeferralsInstalled;
	id<SBLoginAppSceneHosterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLoginAppSceneHosterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) NSString * hostedAppBundleID; 
@property (nonatomic,readonly) NSString * hostedSceneIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBApplication * hostedApp; 
@property (assign,nonatomic) BOOL deferHIDEvents;                                            //@synthesize deferHIDEvents=_deferHIDEvents - In the implementation block
-(SBApplication *)hostedApp;
-(id)_appClientSettingsDiffInspector;
-(void)setDeferHIDEvents:(BOOL)arg1 ;
-(void)killLoginApp;
-(NSString *)hostedAppBundleID;
-(NSString *)hostedSceneIdentifier;
-(void)launchLoginAppWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateHIDEventDeferralsIfNecessary;
-(BOOL)deferHIDEvents;
-(id)init;
-(UIView *)contentView;
-(void)setDelegate:(id<SBLoginAppSceneHosterDelegate>)arg1 ;
-(id<SBLoginAppSceneHosterDelegate>)delegate;
-(void)scene:(id)arg1 configureInitialClientSettings:(id)arg2 ;
-(void)scene:(id)arg1 willActivateWithTransitionContext:(id)arg2 ;
-(void)updateSettingsWithTransitionBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 ;
-(BOOL)scene:(id)arg1 handleIncomingActions:(id)arg2 ;
-(void)scene:(id)arg1 didDeactivateWithError:(id)arg2 ;
@end

