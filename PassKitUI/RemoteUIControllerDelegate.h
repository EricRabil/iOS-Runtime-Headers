/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:22 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RemoteUIControllerDelegate <NSObject>
@optional
-(BOOL)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
-(BOOL)remoteUIController:(id)arg1 objectModel:(id)arg2 shouldDisplayNamedElement:(id)arg3 page:(id)arg4;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
-(void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
-(void)remoteUIController:(id)arg1 didPresentObjectModel:(id)arg2 modally:(BOOL)arg3;
-(void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
-(void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
-(void)remoteUIControllerDidDismiss:(id)arg1;
-(id)remoteUIController:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2;

@end

