/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Bridge/COSGizmoWristSelectionViewDelegate.h>
#import <Bridge/COSInternalManualPairingDelegate.h>
#import <Bridge/COSManualPairingDelegate.h>
#import <Bridge/COSMagicCodeScannerDelegate.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class COSMagicCodeScanner, UIImageView, NSTimer, NSString, UILabel, UIButton, COSScannerActivityView, COSSecurePairingFlowViewController, COSInternalManualPairingViewController, RUIObjectModel, COSGizmoWristSelectionView, UINavigationBar, _UIFeedbackEventBehavior;

@interface COSGizmoCaptureViewController : UIViewController <COSGizmoWristSelectionViewDelegate, COSInternalManualPairingDelegate, COSManualPairingDelegate, COSMagicCodeScannerDelegate, COSBuddyController> {

	BOOL _scanningForQRCode;
	BOOL _noCameraMode;
	id<COSBuddyControllerDelegate> _delegate;
	COSMagicCodeScanner* _magicCodeScanner;
	UIImageView* _overlayiew;
	NSTimer* _discoveryExpiryTimer;
	NSTimer* _scannerExpiryTimer;
	NSString* _scannedCode;
	NSString* _versionString;
	NSString* _pairingVersionString;
	unsigned long long _pairingVersion;
	NSString* _osVersionString;
	NSString* _deviceSetupName;
	NSString* _oobIdentifier;
	UILabel* _gizmoMessage;
	UILabel* _instruction;
	UILabel* _instructionDetail;
	UIButton* _havingTroubleButton;
	COSScannerActivityView* _activityView;
	COSSecurePairingFlowViewController* _manualPairingController;
	COSInternalManualPairingViewController* _internalPairingController;
	RUIObjectModel* _objectModel;
	COSGizmoWristSelectionView* _wristSelectionView;
	UINavigationBar* _transparentNavigationBar;
	_UIFeedbackEventBehavior* _successBehavior;

}

@property (nonatomic,retain) COSMagicCodeScanner * magicCodeScanner;                                          //@synthesize magicCodeScanner=_magicCodeScanner - In the implementation block
@property (nonatomic,retain) UIImageView * overlayiew;                                                        //@synthesize overlayiew=_overlayiew - In the implementation block
@property (nonatomic,retain) NSTimer * discoveryExpiryTimer;                                                  //@synthesize discoveryExpiryTimer=_discoveryExpiryTimer - In the implementation block
@property (nonatomic,retain) NSTimer * scannerExpiryTimer;                                                    //@synthesize scannerExpiryTimer=_scannerExpiryTimer - In the implementation block
@property (nonatomic,copy) NSString * scannedCode;                                                            //@synthesize scannedCode=_scannedCode - In the implementation block
@property (nonatomic,copy) NSString * versionString;                                                          //@synthesize versionString=_versionString - In the implementation block
@property (nonatomic,copy) NSString * pairingVersionString;                                                   //@synthesize pairingVersionString=_pairingVersionString - In the implementation block
@property (assign,nonatomic) unsigned long long pairingVersion;                                               //@synthesize pairingVersion=_pairingVersion - In the implementation block
@property (nonatomic,copy) NSString * osVersionString;                                                        //@synthesize osVersionString=_osVersionString - In the implementation block
@property (nonatomic,copy) NSString * deviceSetupName;                                                        //@synthesize deviceSetupName=_deviceSetupName - In the implementation block
@property (nonatomic,copy) NSString * oobIdentifier;                                                          //@synthesize oobIdentifier=_oobIdentifier - In the implementation block
@property (assign,nonatomic) BOOL scanningForQRCode;                                                          //@synthesize scanningForQRCode=_scanningForQRCode - In the implementation block
@property (nonatomic,retain) UILabel * gizmoMessage;                                                          //@synthesize gizmoMessage=_gizmoMessage - In the implementation block
@property (nonatomic,retain) UILabel * instruction;                                                           //@synthesize instruction=_instruction - In the implementation block
@property (nonatomic,retain) UILabel * instructionDetail;                                                     //@synthesize instructionDetail=_instructionDetail - In the implementation block
@property (nonatomic,retain) UIButton * havingTroubleButton;                                                  //@synthesize havingTroubleButton=_havingTroubleButton - In the implementation block
@property (nonatomic,retain) COSScannerActivityView * activityView;                                           //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) COSSecurePairingFlowViewController * manualPairingController;                    //@synthesize manualPairingController=_manualPairingController - In the implementation block
@property (nonatomic,retain) COSInternalManualPairingViewController * internalPairingController;              //@synthesize internalPairingController=_internalPairingController - In the implementation block
@property (nonatomic,retain) RUIObjectModel * objectModel;                                                    //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) COSGizmoWristSelectionView * wristSelectionView;                                 //@synthesize wristSelectionView=_wristSelectionView - In the implementation block
@property (nonatomic,retain) UINavigationBar * transparentNavigationBar;                                      //@synthesize transparentNavigationBar=_transparentNavigationBar - In the implementation block
@property (assign,nonatomic) BOOL noCameraMode;                                                               //@synthesize noCameraMode=_noCameraMode - In the implementation block
@property (nonatomic,retain) _UIFeedbackEventBehavior * successBehavior;                                      //@synthesize successBehavior=_successBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)donePickedLeftArm:(BOOL)arg1 ;
-(void)proceedToRestore;
-(void)selectedUpdateChoice;
-(void)selectedRestoreChoice;
-(void)cancelledManualPairing;
-(void)setManualPairingScannedCode:(id)arg1 ;
-(void)processScannedCodeForManualPairing;
-(void)doneManualPairing;
-(void)nanoRegistryStatusChanged:(id)arg1 ;
-(void)presentUnpairingViewControllerAnimated:(BOOL)arg1 ;
-(void)didCancelManualPairing;
-(void)invalidateTimers;
-(BOOL)hasStartedPairing;
-(void)enteredCompatibilityState:(id)arg1 ;
-(void)beganActivating;
-(void)deviceDidBeginActivation:(id)arg1 ;
-(void)presentNoCameraMode;
-(void)alternatePathBeganConnecting:(id)arg1 ;
-(void)deviceDidDecode:(id)arg1 ;
-(void)_presentInternalManualMode:(id)arg1 ;
-(void)dismissSetupFlow:(id)arg1 ;
-(void)presentSecurePairingMode;
-(void)_cancelDiscoveryExpiryTimer;
-(void)_cancelScannerTimeout;
-(void)dismissCaptureViews;
-(void)setupScanningEngine;
-(void)returnToRestoreChoice;
-(void)_extendScannerTimeout;
-(void)processScannedCode;
-(NSString *)deviceSetupName;
-(void)setupWristSelectionView;
-(BOOL)checkIfShouldUpdateInRevLockFlowForWatchPairingVersion:(unsigned long long)arg1 ;
-(void)didBeginToPair:(id)arg1 ;
-(void)pairingRequestAttempted:(id)arg1 ;
-(void)timedoutInDiscoveryPhase:(id)arg1 ;
-(void)showBackToPairingButton;
-(void)_fireLockOnAnimation;
-(void)abortPairingForEvent:(unsigned long long)arg1 ;
-(void)_scannerSatTooLong:(id)arg1 ;
-(void)didCompleteManualPairing;
-(void)_popToCaptureView;
-(COSMagicCodeScanner *)magicCodeScanner;
-(void)setMagicCodeScanner:(COSMagicCodeScanner *)arg1 ;
-(UIImageView *)overlayiew;
-(void)setOverlayiew:(UIImageView *)arg1 ;
-(NSTimer *)discoveryExpiryTimer;
-(void)setDiscoveryExpiryTimer:(NSTimer *)arg1 ;
-(NSTimer *)scannerExpiryTimer;
-(void)setScannerExpiryTimer:(NSTimer *)arg1 ;
-(NSString *)scannedCode;
-(void)setScannedCode:(NSString *)arg1 ;
-(NSString *)pairingVersionString;
-(void)setPairingVersionString:(NSString *)arg1 ;
-(unsigned long long)pairingVersion;
-(void)setPairingVersion:(unsigned long long)arg1 ;
-(NSString *)osVersionString;
-(void)setOsVersionString:(NSString *)arg1 ;
-(void)setDeviceSetupName:(NSString *)arg1 ;
-(NSString *)oobIdentifier;
-(void)setOobIdentifier:(NSString *)arg1 ;
-(BOOL)scanningForQRCode;
-(void)setScanningForQRCode:(BOOL)arg1 ;
-(UILabel *)gizmoMessage;
-(void)setGizmoMessage:(UILabel *)arg1 ;
-(UILabel *)instructionDetail;
-(void)setInstructionDetail:(UILabel *)arg1 ;
-(UIButton *)havingTroubleButton;
-(void)setHavingTroubleButton:(UIButton *)arg1 ;
-(COSSecurePairingFlowViewController *)manualPairingController;
-(void)setManualPairingController:(COSSecurePairingFlowViewController *)arg1 ;
-(COSInternalManualPairingViewController *)internalPairingController;
-(void)setInternalPairingController:(COSInternalManualPairingViewController *)arg1 ;
-(COSGizmoWristSelectionView *)wristSelectionView;
-(void)setWristSelectionView:(COSGizmoWristSelectionView *)arg1 ;
-(UINavigationBar *)transparentNavigationBar;
-(void)setTransparentNavigationBar:(UINavigationBar *)arg1 ;
-(BOOL)noCameraMode;
-(void)setNoCameraMode:(BOOL)arg1 ;
-(_UIFeedbackEventBehavior *)successBehavior;
-(void)setSuccessBehavior:(_UIFeedbackEventBehavior *)arg1 ;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<COSBuddyControllerDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)reset;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(UILabel *)instruction;
-(void)setInstruction:(UILabel *)arg1 ;
-(COSScannerActivityView *)activityView;
-(void)setActivityView:(COSScannerActivityView *)arg1 ;
-(void)receivedData:(id)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(RUIObjectModel *)objectModel;
-(NSString *)versionString;
-(void)setVersionString:(NSString *)arg1 ;
-(void)back:(id)arg1 ;
-(void)pair;
@end
