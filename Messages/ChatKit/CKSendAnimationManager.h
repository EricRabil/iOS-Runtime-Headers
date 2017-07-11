/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:22 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSendAnimationManager <NSObject>
@property (assign,nonatomic,__weak) id<CKSendAnimationManagerDelegate> sendAnimationManagerDelegate; 
@property (assign,nonatomic,__weak) id<CKSendAnimationBalloonProvider> sendAnimationBalloonProvider; 
@required
-(void)setSendAnimationManagerDelegate:(id)arg1;
-(void)setSendAnimationBalloonProvider:(id)arg1;
-(void)animateMessages:(id)arg1;
-(void)animationWillBeginWithContext:(id)arg1;
-(void)animationDidFinishWithContext:(id)arg1;
-(id<CKSendAnimationManagerDelegate>)sendAnimationManagerDelegate;
-(id<CKSendAnimationBalloonProvider>)sendAnimationBalloonProvider;

@end
