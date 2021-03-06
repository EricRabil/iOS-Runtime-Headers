/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTGenericCell.h>

@protocol MTStationCellDelegate;
@class MTPlayButton, MTChevronView, UILabel;

@interface MTStationCell : MTGenericCell {

	id<MTStationCellDelegate> _delegate;
	MTPlayButton* _playButton;
	MTChevronView* _chevronView;
	UILabel* _moreLabel;

}

@property (nonatomic,retain) MTPlayButton * playButton;                              //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,retain) MTChevronView * chevronView;                            //@synthesize chevronView=_chevronView - In the implementation block
@property (nonatomic,retain) UILabel * moreLabel;                                    //@synthesize moreLabel=_moreLabel - In the implementation block
@property (assign,nonatomic,__weak) id<MTStationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)configureSubviews;
-(void)updateWithObject:(id)arg1 ;
-(id)_titleForStation:(id)arg1 ;
-(id)_subtitleForStation:(id)arg1 ;
-(id)_sideViewForStation:(id)arg1 ;
-(id)_moreEpisodesTextForStation:(id)arg1 ;
-(BOOL)_playButtonEnabledForStation:(id)arg1 ;
-(void)setPlayButtonEnabled:(BOOL)arg1 ;
-(BOOL)_isStationFolder:(id)arg1 ;
-(id)_titleTextForStationFolder:(id)arg1 ;
-(id)_upNextTextForStation:(id)arg1 ;
-(BOOL)_isTopLevelStationFromITunes:(id)arg1 ;
-(void)playTapped:(id)arg1 ;
-(void)setPlayButtonHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MTStationCellDelegate>)arg1 ;
-(id<MTStationCellDelegate>)delegate;
-(UILabel *)moreLabel;
-(void)setMoreLabel:(UILabel *)arg1 ;
-(MTPlayButton *)playButton;
-(MTChevronView *)chevronView;
-(void)setChevronView:(MTChevronView *)arg1 ;
-(void)updateFonts;
-(void)updateColors;
-(void)setPlayButton:(MTPlayButton *)arg1 ;
@end

