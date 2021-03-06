/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol COSGetStartedDelegate;
@class NSTimer, UILabel, UIButton, NSMutableArray, UIImageView, MCProfileConnection, NSString;

@interface COSGetStartedView : UIView <MCProfileConnectionObserver> {

	BOOL _pairingInfrastructureIsBusy;
	BOOL _isAutomationUIEnabled;
	BOOL _animating;
	BOOL _isFadeAnimationInFlight;
	BOOL _playWhenEnteringViewHierarchy;
	id<COSGetStartedDelegate> _delegate;
	unsigned long long _mode;
	unsigned long long _timeOfDay;
	NSTimer* _welcomeTextUpdater;
	UILabel* _welcomeLabel;
	UILabel* _titleLabel;
	UIButton* _acceptButton;
	UIButton* _submitRadarButton;
	UIButton* _automationButton;
	UIButton* _learnMoreButton;
	unsigned long long _radioState;
	NSMutableArray* _animationImageQueue;
	UIImageView* _animationImageView;
	MCProfileConnection* _mcConnection;

}

@property (assign,nonatomic) BOOL isAutomationUIEnabled;                             //@synthesize isAutomationUIEnabled=_isAutomationUIEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long timeOfDay;                           //@synthesize timeOfDay=_timeOfDay - In the implementation block
@property (nonatomic,retain) NSTimer * welcomeTextUpdater;                           //@synthesize welcomeTextUpdater=_welcomeTextUpdater - In the implementation block
@property (nonatomic,retain) UILabel * welcomeLabel;                                 //@synthesize welcomeLabel=_welcomeLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * acceptButton;                                //@synthesize acceptButton=_acceptButton - In the implementation block
@property (nonatomic,retain) UIButton * submitRadarButton;                           //@synthesize submitRadarButton=_submitRadarButton - In the implementation block
@property (nonatomic,retain) UIButton * automationButton;                            //@synthesize automationButton=_automationButton - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                             //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (assign,nonatomic) unsigned long long radioState;                          //@synthesize radioState=_radioState - In the implementation block
@property (nonatomic,retain) NSMutableArray * animationImageQueue;                   //@synthesize animationImageQueue=_animationImageQueue - In the implementation block
@property (nonatomic,retain) UIImageView * animationImageView;                       //@synthesize animationImageView=_animationImageView - In the implementation block
@property (assign,nonatomic) BOOL animating;                                         //@synthesize animating=_animating - In the implementation block
@property (assign,nonatomic) BOOL isFadeAnimationInFlight;                           //@synthesize isFadeAnimationInFlight=_isFadeAnimationInFlight - In the implementation block
@property (assign,nonatomic) BOOL playWhenEnteringViewHierarchy;                     //@synthesize playWhenEnteringViewHierarchy=_playWhenEnteringViewHierarchy - In the implementation block
@property (nonatomic,retain) MCProfileConnection * mcConnection;                     //@synthesize mcConnection=_mcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<COSGetStartedDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL pairingInfrastructureIsBusy;                       //@synthesize pairingInfrastructureIsBusy=_pairingInfrastructureIsBusy - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopUpdatingWelcomeText;
-(void)updateWelcomeText;
-(void)setPairingInfrastructureIsBusy:(BOOL)arg1 ;
-(void)learnMoreTapped:(id)arg1 ;
-(void)updateContinueState;
-(void)tappedStart:(id)arg1 ;
-(void)tappedSubmitRadar:(id)arg1 ;
-(void)_tappedInternalManualMode:(id)arg1 ;
-(void)updateRadioStateForNotification:(id)arg1 ;
-(void)startUpdatingWelcomeText;
-(void)updateProblemState;
-(void)_startNextAnimation;
-(UIImageView *)animationImageView;
-(void)_logConnectionDescription;
-(float)detailTextSidePadding;
-(void)_prepareForSetupAndDismiss;
-(BOOL)pairingInfrastructureIsBusy;
-(BOOL)isAutomationUIEnabled;
-(void)setIsAutomationUIEnabled:(BOOL)arg1 ;
-(unsigned long long)timeOfDay;
-(void)setTimeOfDay:(unsigned long long)arg1 ;
-(NSTimer *)welcomeTextUpdater;
-(void)setWelcomeTextUpdater:(NSTimer *)arg1 ;
-(UILabel *)welcomeLabel;
-(void)setWelcomeLabel:(UILabel *)arg1 ;
-(UIButton *)submitRadarButton;
-(void)setSubmitRadarButton:(UIButton *)arg1 ;
-(UIButton *)automationButton;
-(void)setAutomationButton:(UIButton *)arg1 ;
-(unsigned long long)radioState;
-(void)setRadioState:(unsigned long long)arg1 ;
-(NSMutableArray *)animationImageQueue;
-(void)setAnimationImageQueue:(NSMutableArray *)arg1 ;
-(void)setAnimationImageView:(UIImageView *)arg1 ;
-(BOOL)isFadeAnimationInFlight;
-(void)setIsFadeAnimationInFlight:(BOOL)arg1 ;
-(BOOL)playWhenEnteringViewHierarchy;
-(void)setPlayWhenEnteringViewHierarchy:(BOOL)arg1 ;
-(MCProfileConnection *)mcConnection;
-(void)setMcConnection:(MCProfileConnection *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<COSGetStartedDelegate>)arg1 ;
-(void)dealloc;
-(id<COSGetStartedDelegate>)delegate;
-(void)didMoveToSuperview;
-(UILabel *)titleLabel;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(BOOL)animating;
-(void)_dismiss;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(UIButton *)learnMoreButton;
-(UIButton *)acceptButton;
-(void)setAcceptButton:(UIButton *)arg1 ;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
@end

