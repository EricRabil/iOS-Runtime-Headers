/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSNavigationController.h>

@protocol COSManualPairingDelegate;
@class COSManualPairingViewController;

@interface COSManualPairingFlowViewController : COSNavigationController {

	id<COSManualPairingDelegate> _pairingDelegate;
	COSManualPairingViewController* _securePairingController;

}

@property (assign,nonatomic,__weak) id<COSManualPairingDelegate> pairingDelegate;                     //@synthesize pairingDelegate=_pairingDelegate - In the implementation block
@property (nonatomic,readonly) COSManualPairingViewController * securePairingController;              //@synthesize securePairingController=_securePairingController - In the implementation block
-(id<COSManualPairingDelegate>)pairingDelegate;
-(void)controllerCancelled:(id)arg1 ;
-(Class)pairingControllerClass;
-(COSManualPairingViewController *)securePairingController;
-(id)init;
-(void)setPairingDelegate:(id<COSManualPairingDelegate>)arg1 ;
@end
