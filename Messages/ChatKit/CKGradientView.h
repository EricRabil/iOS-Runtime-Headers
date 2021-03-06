/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:24 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@protocol CKGradientReferenceView;
@class UIView, NSArray, UIImage, CALayer, CATransformLayer;

@interface CKGradientView : UIView {

	UIView*<CKGradientReferenceView> _referenceView;
	NSArray* _colors;
	UIImage* _maskImage;
	CALayer* _gradientLayer;
	CATransformLayer* _trackingLayer;
	CGRect _gradientFrame;

}

@property (nonatomic,retain) CALayer * gradientLayer;                                            //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) CGRect gradientFrame;                                               //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (nonatomic,retain) CATransformLayer * trackingLayer;                                   //@synthesize trackingLayer=_trackingLayer - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CKGradientReferenceView> referenceView;              //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,retain) NSArray * colors;                                                   //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) UIImage * maskImage;                                                //@synthesize maskImage=_maskImage - In the implementation block
+(id)gradientViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setColors:(NSArray *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)description;
-(NSArray *)colors;
-(void)didMoveToSuperview;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(CALayer *)gradientLayer;
-(UIView*<CKGradientReferenceView>)referenceView;
-(void)setMaskImage:(UIImage *)arg1 ;
-(id)gradient;
-(void)setReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(void)setGradientFrame:(CGRect)arg1 ;
-(CGRect)gradientFrame;
-(void)updateAnimation;
-(void)setTrackingLayer:(CATransformLayer *)arg1 ;
-(void)setGradientLayer:(CALayer *)arg1 ;
-(UIImage *)maskImage;
-(CATransformLayer *)trackingLayer;
-(void)updateGradientImage;
@end

