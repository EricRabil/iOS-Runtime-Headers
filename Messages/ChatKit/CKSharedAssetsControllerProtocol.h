/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:16 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSharedAssetsControllerProtocol <NSObject>
@property (assign,nonatomic,__weak) id<CKSharedAssetsControllerDelegate> delegate; 
@required
-(CGSize*)contentSize;
-(void)setDelegate:(id)arg1;
-(id<CKSharedAssetsControllerDelegate>)delegate;
-(unsigned long long)assetType;
-(void)parentScrollViewDidScroll:(CGPoint)arg1;
-(void)updateAttachmentItems:(id)arg1;

@end
