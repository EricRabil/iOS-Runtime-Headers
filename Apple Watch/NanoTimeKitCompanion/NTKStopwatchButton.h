/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:55 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, NTKColoringImageView, UIColor;

@interface NTKStopwatchButton : UIControl {

	UIView* _innerView;
	NTKColoringImageView* _glyphView;
	UIColor* _glyphColor;
	UIColor* _glyphBackgroundColor;
	UIEdgeInsets _touchEdgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets touchEdgeInsets;                //@synthesize touchEdgeInsets=_touchEdgeInsets - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                        //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,retain) UIColor * glyphBackgroundColor;              //@synthesize glyphBackgroundColor=_glyphBackgroundColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(void)setTouchEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)glyphBackgroundColor;
-(void)setGlyphBackgroundColor:(UIColor *)arg1 ;
-(UIEdgeInsets)touchEdgeInsets;
@end

