/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:10 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol COSFileTransferControllerDelegate <NSObject>
@required
-(void)beganAwaitingPasskey;
-(void)timeoutAwaitingPasskey;
-(void)pairingFailed;
-(void)pairingFailedWithIncorrectPasskey;
-(void)didCompletePairing;
-(void)didConnectPeripheral;
-(void)didDisconnectPeripheral;
-(void)didUnpair;
-(void)transferDone;
-(void)transferFailed;
-(void)extractionProgressChanged:(double)arg1;

@end

