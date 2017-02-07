/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:27 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol CKTypingIndicatorLayerProtocol;
@class CALayer;

@interface CKTypingView : UIView {

	CALayer*<CKTypingIndicatorLayerProtocol> _indicatorLayer;

}

@property (nonatomic,retain) CALayer*<CKTypingIndicatorLayerProtocol> indicatorLayer;              //@synthesize indicatorLayer=_indicatorLayer - In the implementation block
-(CALayer*<CKTypingIndicatorLayerProtocol>)indicatorLayer;
-(void)setIndicatorLayer:(CALayer*<CKTypingIndicatorLayerProtocol>)arg1 ;
@end

