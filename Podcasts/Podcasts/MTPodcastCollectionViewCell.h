/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMGridCollectionViewCell.h>

@class UIView, UILabel;

@interface MTPodcastCollectionViewCell : IMGridCollectionViewCell {

	BOOL _needsAttention;
	UIView* _coverUpView;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIView * coverUpView;              //@synthesize coverUpView=_coverUpView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic) BOOL needsAttention;               //@synthesize needsAttention=_needsAttention - In the implementation block
-(void)configureMotionEffects;
-(void)setNeedsAttention:(BOOL)arg1 ;
-(CGRect)imageRectForBounds:(CGRect)arg1 ;
-(void)hideContent;
-(BOOL)needsAttention;
-(UIView *)coverUpView;
-(void)setCoverUpView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)titleLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(id)badgeView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)showContent;
@end

