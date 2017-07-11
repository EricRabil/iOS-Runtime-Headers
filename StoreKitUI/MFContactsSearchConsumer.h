/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:03 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFContactsSearchConsumer <NSObject>
@optional
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
-(void)finishedSearchingForAutocompleteResults;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
-(void)finishedSearchingForCorecipients;
-(void)finishedTaskWithID:(id)arg1;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3;
-(void)finishedSearchingForType:(unsigned long long)arg1;

@end
