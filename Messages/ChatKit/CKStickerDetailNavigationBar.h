/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:17 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UINavigationBar.h>

@class UIButton, UILabel;

@interface CKStickerDetailNavigationBar : UINavigationBar {

	UIButton* _closeButton;
	UILabel* _titleLabel;
	UIEdgeInsets _parentLayoutMargins;

}

@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                        //@synthesize closeButton=_closeButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets parentLayoutMargins;              //@synthesize parentLayoutMargins=_parentLayoutMargins - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIEdgeInsets)parentLayoutMargins;
-(void)setParentLayoutMargins:(UIEdgeInsets)arg1 ;
@end

