/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTTableViewCell.h>

@class UILabel, UIView, MTColorTheme, NSString;

@interface MTNoContentTableViewCell : MTTableViewCell {

	UILabel* _messageLabel;
	UIView* _separatorView;
	MTColorTheme* _colorTheme;
	UIEdgeInsets _contentInset;
	UIEdgeInsets __layoutMargins;

}

@property (assign,nonatomic) UIEdgeInsets _layoutMargins;              //@synthesize _layoutMargins=__layoutMargins - In the implementation block
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) MTColorTheme * colorTheme;                //@synthesize colorTheme=_colorTheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                //@synthesize contentInset=_contentInset - In the implementation block
+(id)reuseIdentifier;
-(void)setupCell;
-(void)set_layoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_layoutMargins;
-(id)init;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
@end
