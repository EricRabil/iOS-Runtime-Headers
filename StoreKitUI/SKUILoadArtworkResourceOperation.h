/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:02 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVLoadURLOperation, SKUIArtworkRequest;

@interface SKUILoadArtworkResourceOperation : SKUILoadResourceOperation {

	SSVLoadURLOperation* _underlyingOperation;

}

@property (__weak) SSVLoadURLOperation * underlyingOperation;                //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (copy,readonly) SKUIArtworkRequest * resourceRequest; 
-(void)cancel;
-(void)main;
-(id)initWithResourceRequest:(id)arg1 ;
-(void)setUnderlyingOperation:(SSVLoadURLOperation *)arg1 ;
-(SSVLoadURLOperation *)underlyingOperation;
@end

