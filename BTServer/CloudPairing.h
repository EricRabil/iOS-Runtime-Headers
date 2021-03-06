/*
* This header is generated by classdump-dyld 1.0
* on Saturday, February 25, 2017 at 6:58:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/sbin/BTServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BTServer/BTServer-Structs.h>
#import <BTServer/IDSServiceDelegate.h>

@class IDSAccount, IDSService, NSArray, NSString;

@interface CloudPairing : NSObject <IDSServiceDelegate> {

	unsigned char _identityResolvingKey[16];
	unsigned char _encryptionRootKey[16];
	unsigned char _diversifierHidingKey[16];
	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _keysGenerated;
	BOOL _processingPush;
	IDSAccount* _account;
	IDSService* _service;
	NSArray* _associatedDevices;
	NSString* _cloudIdentifier;
	NSString* _publicAddress;
	NSString* _localDeviceName;
	NSArray* _requestedKeyTypes;
	unsigned long long _keyLength;

}

@property (nonatomic,retain) IDSAccount * account;                        //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) IDSService * service;                        //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSArray * associatedDevices;                   //@synthesize associatedDevices=_associatedDevices - In the implementation block
@property (nonatomic,retain) NSString * cloudIdentifier;                  //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (nonatomic,retain) NSString * publicAddress;                    //@synthesize publicAddress=_publicAddress - In the implementation block
@property (nonatomic,retain) NSString * localDeviceName;                  //@synthesize localDeviceName=_localDeviceName - In the implementation block
@property (nonatomic,readonly) NSArray * requestedKeyTypes;               //@synthesize requestedKeyTypes=_requestedKeyTypes - In the implementation block
@property (nonatomic,readonly) unsigned long long keyLength;              //@synthesize keyLength=_keyLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)printDebug;
-(void)registerWithCloudPairedDevices:(id)arg1 identifiers:(id)arg2 ;
-(void)hostnameChanged:(id)arg1 ;
-(void)sendCloudKitPush;
-(BOOL)getAccountStatus;
-(void)updateActiveAccount:(id)arg1 ;
-(id)filteredDevicesForIDSDevices:(id)arg1 ;
-(void)setAssociatedDevices:(NSArray *)arg1 ;
-(NSArray *)associatedDevices;
-(id)devicesDescription:(id)arg1 ;
-(NSString *)localDeviceName;
-(NSString *)publicAddress;
-(id)updateCloudPairings:(id)arg1 newDevices:(id)arg2 ;
-(void)setLocalDeviceName:(NSString *)arg1 ;
-(unsigned long long)roleWithDevice:(id)arg1 ;
-(void)sendCloudPairingMessage:(id)arg1 toDevice:(id)arg2 ;
-(void)handleCloudPairingMessage:(id)arg1 from:(id)arg2 ;
-(void)handleSecurityRequest:(id)arg1 from:(id)arg2 ;
-(void)handleRepairRequest:(id)arg1 from:(id)arg2 ;
-(void)handlePairingRequest:(id)arg1 from:(id)arg2 ;
-(void)handlePairingResponse:(id)arg1 from:(id)arg2 ;
-(void)handleKeyDistribution:(id)arg1 from:(id)arg2 ;
-(void)handlePairingFailure:(id)arg1 from:(id)arg2 ;
-(void)handleUnpairCommand:(id)arg1 from:(id)arg2 ;
-(void)initiatePairing:(id)arg1 ;
-(BOOL)validateMessage:(id)arg1 from:(id)arg2 ;
-(id)generateKeyDictForTypes:(id)arg1 keyLength:(unsigned long long)arg2 ;
-(NSArray *)requestedKeyTypes;
-(void)cloudPairingCompletedWithResponse:(id)arg1 localKeys:(id)arg2 from:(id)arg3 ;
-(void)sendErrorMessageToDevice:(id)arg1 reason:(id)arg2 ;
-(BOOL)validateKeys:(id)arg1 requestedTypes:(id)arg2 from:(id)arg3 ;
-(BOOL)generateKeys;
-(void)testPairing;
-(void)setPublicAddress:(NSString *)arg1 ;
-(NSString *)cloudIdentifier;
-(void)setCloudIdentifier:(NSString *)arg1 ;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(IDSAccount *)account;
-(void)setAccount:(IDSAccount *)arg1 ;
-(void)setService:(IDSService *)arg1 ;
-(IDSService *)service;
-(id)deviceForIDSDevice:(id)arg1 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(BOOL)startNotifier;
-(void)stopNotifier;
-(unsigned long long)keyLength;
@end

