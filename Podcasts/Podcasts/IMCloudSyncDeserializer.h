/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMCloudsyncDeserializeOperationDelegate;
@class IMCloudSyncTransaction, NSDictionary, NSObject, IMCloudSyncController, NSMutableArray;

@interface IMCloudSyncDeserializer : NSObject {

	IMCloudSyncTransaction* _transaction;
	NSDictionary* _serverResponse;
	NSObject*<IMCloudsyncDeserializeOperationDelegate> _delegate;
	long long _status;
	unsigned long long _retrySeconds;
	BOOL _isDirty;
	IMCloudSyncController* _cloudSyncController;
	NSMutableArray* _pendingDeserializations;

}

@property (retain) NSMutableArray * pendingDeserializations;                                           //@synthesize pendingDeserializations=_pendingDeserializations - In the implementation block
@property (nonatomic,retain) IMCloudSyncTransaction * transaction;                                     //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,retain) IMCloudSyncController * cloudSyncController;                              //@synthesize cloudSyncController=_cloudSyncController - In the implementation block
@property (nonatomic,retain) NSDictionary * serverResponse;                                            //@synthesize serverResponse=_serverResponse - In the implementation block
@property (assign,nonatomic) NSObject*<IMCloudsyncDeserializeOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long status;                                                         //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) BOOL unsupportedClient; 
@property (nonatomic,readonly) BOOL authenticationError; 
@property (nonatomic,readonly) BOOL validationError; 
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) BOOL versionMismatch; 
@property (nonatomic,readonly) BOOL genericError; 
@property (nonatomic,readonly) BOOL hasBackoff; 
@property (nonatomic,readonly) unsigned long long retrySeconds;                                        //@synthesize retrySeconds=_retrySeconds - In the implementation block
-(id)initWithTransaction:(id)arg1 response:(id)arg2 ;
-(BOOL)versionMismatch;
-(void)deserialize;
-(BOOL)hasBackoff;
-(BOOL)unsupportedClient;
-(BOOL)validationError;
-(BOOL)authenticationError;
-(void)setPendingDeserializations:(NSMutableArray *)arg1 ;
-(void)finishedDeserializationForKey:(id)arg1 ;
-(void)_delegateOperationDidFinish;
-(NSMutableArray *)pendingDeserializations;
-(void)setServerResponse:(NSDictionary *)arg1 ;
-(IMCloudSyncController *)cloudSyncController;
-(void)setCloudSyncController:(IMCloudSyncController *)arg1 ;
-(void)setDelegate:(NSObject*<IMCloudsyncDeserializeOperationDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<IMCloudsyncDeserializeOperationDelegate>)delegate;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(IMCloudSyncTransaction *)transaction;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(BOOL)genericError;
-(BOOL)success;
-(NSDictionary *)serverResponse;
-(unsigned long long)retrySeconds;
@end

