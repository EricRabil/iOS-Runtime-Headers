/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImage, NSString;

@interface Music.CircleView : UIView {

	 edgeInsets;
	 fillColor;
	 backgroundImage;
	 backgroundImageAlpha;
	 minimumDiameter;
	 titleLabel.storage;
	 titleText;
	 titlePosition;
	 backgroundImageView;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets; 
@property (retain,nonatomic) UIColor * fillColor; 
@property (retain,nonatomic) UIImage * backgroundImage; 
@property (assign,nonatomic) double minimumDiameter; 
@property (copy,nonatomic) NSString * titleText; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(NSString *)titleText;
-(void)setMinimumDiameter:(double)arg1 ;
-(double)minimumDiameter;
@end

