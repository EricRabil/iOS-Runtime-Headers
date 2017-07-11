/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAlertItem.h>

@protocol OS_dispatch_source, NSCopying;
@class NSString, BSAuditToken, NSObject, NSDictionary, NSTimer, NSURL, _SBRemoteAlertContentHostViewController, SBUISound, BKSProcessAssertion, NSExtension, UIViewController;

@interface SBUserNotificationAlert : SBAlertItem {

	NSString* _alertSource;
	BSAuditToken* _auditToken;
	unsigned _replyPort;
	NSObject*<OS_dispatch_source> _portWatcher;
	NSObject*<OS_dispatch_source> _expirationTimer;
	BOOL _sentResponse;
	BOOL _cleanedUp;
	int _token;
	int _timeout;
	unsigned long long _requestFlags;
	NSString* _alertHeader;
	id _alertMessage;
	NSString* _alertMessageDelimiter;
	NSString* _lockScreenAlertHeader;
	id _lockScreenAlertMessage;
	NSString* _lockScreenAlertMessageDelimiter;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	NSString* _otherButtonTitle;
	NSString* _soundPath;
	unsigned _soundID;
	unsigned _soundIDBehavior;
	NSDictionary* _vibrationPattern;
	long long _soundAlertType;
	NSString* _soundAlertTopic;
	NSDictionary* _avControllerAttributes;
	NSDictionary* _avItemAttributes;
	double _soundRepeatDuration;
	NSTimer* _soundStopTimer;
	id _keyboardTypes;
	id _autocapitalizationTypes;
	id _autocorrectionTypes;
	id _textFieldTitles;
	id _textFieldValues;
	double _creationTime;
	int _defaultButtonTag;
	int _unlockActionButtonTag;
	unsigned _replyFlags;
	NSString* _defaultResponseLaunchBundleID;
	NSURL* _defaultResponseLaunchURL;
	NSString* _remoteViewControllerClassName;
	NSString* _remoteServiceBundleIdentifier;
	_SBRemoteAlertContentHostViewController* _contentViewControllerForAlertController;
	unsigned _allowedInLoginWindow : 1;
	unsigned _canceled : 1;
	unsigned _isActivated : 1;
	unsigned _aboveLock : 1;
	unsigned _displayActionButtonOnLockScreen : 1;
	unsigned _dismissOnLock : 1;
	unsigned _dontDismissOnUnlock : 1;
	unsigned _behavesSuperModally : 1;
	unsigned _allowMenuButtonDismissal : 1;
	unsigned _forcesModalAlertAppearance : 1;
	unsigned _dismissesOverlaysOnLockScreen : 1;
	unsigned _configuredLocked : 1;
	unsigned _configuredNeedsPasscode : 1;
	unsigned _defaultResponseAppLaunchWaitingForPasscode : 1;
	unsigned _deactivatingForPresentationUpdate : 1;
	SBUISound* _sound;
	BKSProcessAssertion* _processAssertion;
	unsigned _allowLockscreenDismissal : 1;
	NSString* _extensionIdentifier;
	NSExtension* _alertExtension;
	id<NSCopying> _extensionRequest;

}

@property (retain) id keyboardTypes;                                                        //@synthesize keyboardTypes=_keyboardTypes - In the implementation block
@property (retain) id autocapitalizationTypes;                                              //@synthesize autocapitalizationTypes=_autocapitalizationTypes - In the implementation block
@property (retain) id autocorrectionTypes;                                                  //@synthesize autocorrectionTypes=_autocorrectionTypes - In the implementation block
@property (retain) id textFieldTitles;                                                      //@synthesize textFieldTitles=_textFieldTitles - In the implementation block
@property (retain) id textFieldValues;                                                      //@synthesize textFieldValues=_textFieldValues - In the implementation block
@property (retain) NSString * soundPath;                                                    //@synthesize soundPath=_soundPath - In the implementation block
@property (assign) unsigned soundID;                                                        //@synthesize soundID=_soundID - In the implementation block
@property (assign) unsigned soundIDBehavior;                                                //@synthesize soundIDBehavior=_soundIDBehavior - In the implementation block
@property (retain) NSDictionary * vibrationPattern;                                         //@synthesize vibrationPattern=_vibrationPattern - In the implementation block
@property (assign) long long soundAlertType;                                                //@synthesize soundAlertType=_soundAlertType - In the implementation block
@property (retain) NSString * soundAlertTopic;                                              //@synthesize soundAlertTopic=_soundAlertTopic - In the implementation block
@property (retain) NSDictionary * avControllerAttributes;                                   //@synthesize avControllerAttributes=_avControllerAttributes - In the implementation block
@property (retain) NSDictionary * avItemAttributes;                                         //@synthesize avItemAttributes=_avItemAttributes - In the implementation block
@property (retain) NSString * alertHeader;                                                  //@synthesize alertHeader=_alertHeader - In the implementation block
@property (retain) NSString * alertMessage;                                                 //@synthesize alertMessage=_alertMessage - In the implementation block
@property (retain) NSString * alertMessageDelimiter;                                        //@synthesize alertMessageDelimiter=_alertMessageDelimiter - In the implementation block
@property (retain) NSString * lockScreenAlertHeader;                                        //@synthesize lockScreenAlertHeader=_lockScreenAlertHeader - In the implementation block
@property (retain) NSString * lockScreenAlertMessage;                                       //@synthesize lockScreenAlertMessage=_lockScreenAlertMessage - In the implementation block
@property (retain) NSString * lockScreenAlertMessageDelimiter;                              //@synthesize lockScreenAlertMessageDelimiter=_lockScreenAlertMessageDelimiter - In the implementation block
@property (retain) NSString * defaultButtonTitle;                                           //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (retain) NSString * alternateButtonTitle;                                         //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (retain) NSString * otherButtonTitle;                                             //@synthesize otherButtonTitle=_otherButtonTitle - In the implementation block
@property (retain) NSString * defaultResponseLaunchBundleID;                                //@synthesize defaultResponseLaunchBundleID=_defaultResponseLaunchBundleID - In the implementation block
@property (retain) NSURL * defaultResponseLaunchURL;                                        //@synthesize defaultResponseLaunchURL=_defaultResponseLaunchURL - In the implementation block
@property (retain) NSString * remoteViewControllerClassName;                                //@synthesize remoteViewControllerClassName=_remoteViewControllerClassName - In the implementation block
@property (retain) NSString * remoteServiceBundleIdentifier;                                //@synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier - In the implementation block
@property (retain) NSString * extensionIdentifier;                                          //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (retain) UIViewController * contentViewControllerForAlertController;              //@synthesize contentViewControllerForAlertController=_contentViewControllerForAlertController - In the implementation block
@property (retain) NSExtension * alertExtension;                                            //@synthesize alertExtension=_alertExtension - In the implementation block
@property (copy) id<NSCopying> extensionRequest;                                            //@synthesize extensionRequest=_extensionRequest - In the implementation block
-(void)updateWithMessage:(id)arg1 requestFlags:(int)arg2 ;
-(id)initWithMessage:(id)arg1 replyPort:(unsigned)arg2 requestFlags:(int)arg3 auditToken:(SCD_Struct_SB22)arg4 ;
-(void)setDefaultResponseLaunchBundleID:(NSString *)arg1 ;
-(void)setDefaultResponseLaunchURL:(NSURL *)arg1 ;
-(void)setKeyboardTypes:(id)arg1 ;
-(void)setAutocapitalizationTypes:(id)arg1 ;
-(void)setAutocorrectionTypes:(id)arg1 ;
-(void)setSoundPath:(NSString *)arg1 ;
-(void)setSoundIDBehavior:(unsigned)arg1 ;
-(void)setSoundAlertTopic:(NSString *)arg1 ;
-(void)setAvControllerAttributes:(NSDictionary *)arg1 ;
-(void)setAvItemAttributes:(NSDictionary *)arg1 ;
-(id)_safeLocalizedValue:(id)arg1 withBundle:(id)arg2 ;
-(void)setAlertMessageDelimiter:(NSString *)arg1 ;
-(void)setLockScreenAlertHeader:(NSString *)arg1 ;
-(void)setLockScreenAlertMessage:(NSString *)arg1 ;
-(void)setLockScreenAlertMessageDelimiter:(NSString *)arg1 ;
-(void)setOtherButtonTitle:(NSString *)arg1 ;
-(void)setTextFieldTitles:(id)arg1 ;
-(void)setAlertExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequest:(id<NSCopying>)arg1 ;
-(void)dismissIfNecessaryWithResponse:(int)arg1 ;
-(void)_sendResponseAndCleanUp:(int)arg1 ;
-(id)keyboardTypes;
-(id)autocapitalizationTypes;
-(id)autocorrectionTypes;
-(id)textFieldTitles;
-(NSString *)soundPath;
-(unsigned)soundIDBehavior;
-(NSString *)soundAlertTopic;
-(NSDictionary *)avControllerAttributes;
-(NSDictionary *)avItemAttributes;
-(NSString *)alertMessageDelimiter;
-(NSString *)lockScreenAlertHeader;
-(NSString *)lockScreenAlertMessage;
-(NSString *)lockScreenAlertMessageDelimiter;
-(NSString *)otherButtonTitle;
-(NSString *)defaultResponseLaunchBundleID;
-(NSURL *)defaultResponseLaunchURL;
-(UIViewController *)contentViewControllerForAlertController;
-(void)setContentViewControllerForAlertController:(UIViewController *)arg1 ;
-(NSExtension *)alertExtension;
-(id<NSCopying>)extensionRequest;
-(NSString *)extensionIdentifier;
-(void)setTextFieldValues:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(void)_cleanup;
-(id)sound;
-(int)token;
-(NSDictionary *)vibrationPattern;
-(void)setVibrationPattern:(NSDictionary *)arg1 ;
-(NSString *)alertHeader;
-(void)setAlertHeader:(NSString *)arg1 ;
-(void)setSoundID:(unsigned)arg1 ;
-(unsigned)soundID;
-(NSString *)remoteServiceBundleIdentifier;
-(NSString *)remoteViewControllerClassName;
-(void)setRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(void)_clearAlertController;
-(BOOL)allowLockScreenDismissal;
-(BOOL)undimsScreen;
-(BOOL)reappearsAfterLock;
-(BOOL)reappearsAfterUnlock;
-(void)didFailToActivate;
-(void)willDeactivateForReason:(int)arg1 ;
-(BOOL)behavesSuperModally;
-(BOOL)allowInLoginWindow;
-(BOOL)dismissesOverlaysOnLockScreen;
-(void)_noteVolumeOrLockPressed;
-(BOOL)_displayActionButtonOnLockScreen;
-(id)_publicDescription;
-(id)textFieldValues;
-(void)_setActivated:(BOOL)arg1 ;
-(void)didDeactivateForReason:(int)arg1 ;
-(void)willActivate;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(NSString *)alertMessage;
-(void)setAlertMessage:(NSString *)arg1 ;
-(void)setSoundAlertType:(long long)arg1 ;
-(long long)soundAlertType;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
-(NSString *)defaultButtonTitle;
-(NSString *)alternateButtonTitle;
@end
