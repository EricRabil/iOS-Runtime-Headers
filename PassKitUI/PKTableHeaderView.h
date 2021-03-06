/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIButton, UIActivityIndicatorView;

@interface PKTableHeaderView : UIView {

	CGSize _originalImageViewSize;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _actionButton;
	UIActivityIndicatorView* _activityIndicator;
	UIImageView* _checkmarkView;
	BOOL _shouldResizeImageToFit;
	BOOL _accessoryViewsDisabled;
	unsigned long long _style;
	double _topPadding;
	double _bottomPadding;

}

@property (assign,nonatomic) unsigned long long style;                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldResizeImageToFit;                                       //@synthesize shouldResizeImageToFit=_shouldResizeImageToFit - In the implementation block
@property (assign,nonatomic) double topPadding;                                                 //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) double bottomPadding;                                              //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) BOOL accessoryViewsDisabled;                                       //@synthesize accessoryViewsDisabled=_accessoryViewsDisabled - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * titleLabel; 
@property (nonatomic,retain,readonly) UILabel * subtitleLabel; 
@property (nonatomic,retain,readonly) UIButton * actionButton; 
@property (nonatomic,retain,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain,readonly) UIImageView * checkmarkView;                              //@synthesize checkmarkView=_checkmarkView - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)tintColorDidChange;
-(void)setStyle:(unsigned long long)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)checkmarkView;
-(id)_titleFont;
-(UIActivityIndicatorView *)activityIndicator;
-(id)_subtitleFont;
-(double)topPadding;
-(double)bottomPadding;
-(UILabel *)subtitleLabel;
-(UIButton *)actionButton;
-(void)setShouldResizeImageToFit:(BOOL)arg1 ;
-(void)setTopPadding:(double)arg1 ;
-(void)setBottomPadding:(double)arg1 ;
-(void)_updateAccessoryViews;
-(CGSize)_sizeThatFitsExcludingImage:(CGSize)arg1 ;
-(void)setAccessoryViewsDisabled:(BOOL)arg1 ;
-(BOOL)shouldResizeImageToFit;
-(BOOL)accessoryViewsDisabled;
@end

