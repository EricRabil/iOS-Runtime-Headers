/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTCollectionReusableView.h>

@class MTSectionHeaderView, UILabel, NSString;

@interface MTCollectionSectionHeaderView : MTCollectionReusableView {

	MTSectionHeaderView* _sectionHeaderView;

}

@property (nonatomic,retain) MTSectionHeaderView * sectionHeaderView;              //@synthesize sectionHeaderView=_sectionHeaderView - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,retain) NSString * backdropGroupName; 
@property (assign,nonatomic) double maxWidth; 
+(id)font;
+(double)height;
-(MTSectionHeaderView *)sectionHeaderView;
-(void)setSectionHeaderView:(MTSectionHeaderView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(UILabel *)textLabel;
-(BOOL)isFloating;
-(void)applyLayoutAttributes:(id)arg1 ;
-(double)maxWidth;
-(void)setMaxWidth:(double)arg1 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
@end
