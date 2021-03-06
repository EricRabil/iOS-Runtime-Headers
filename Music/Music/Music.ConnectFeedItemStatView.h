/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@interface Music.ConnectFeedItemStatView : UICollectionViewCell {

	 numberOfLikes;
	 numberOfComments;
	 displayComponents;
	 isTopHairlineHidden;
	 isBottomHairlineHidden;
	 isDisclosureIndicatorHidden;
	 shouldApplyLayoutInsets;
	 layoutType;
	 textDrawingCache;
	 numberOfLikesTextStackView;
	 numberOfCommentsTextStackView;
	 textComponents;
	 disclosureIndicatorImageView;
	 topHairlineView;
	 bottomHairlineView;

}

@property (assign,nonatomic) long long numberOfLikes; 
@property (assign,nonatomic) long long numberOfComments; 
@property (assign,nonatomic) BOOL isTopHairlineHidden; 
@property (assign,nonatomic) BOOL isBottomHairlineHidden; 
@property (assign,nonatomic) BOOL isDisclosureIndicatorHidden; 
@property (assign,nonatomic) BOOL shouldApplyLayoutInsets; 
+(id)reuseIdentifier;
-(long long)numberOfComments;
-(void)setNumberOfComments:(long long)arg1 ;
-(void)setIsTopHairlineHidden:(BOOL)arg1 ;
-(void)setIsBottomHairlineHidden:(BOOL)arg1 ;
-(double)heightWithTraitCollection:(id)arg1 fittingWidth:(double)arg2 numberOfComments:(long long)arg3 numberOfLikes:(long long)arg4 ;
-(BOOL)isDisclosureIndicatorHidden;
-(void)setIsDisclosureIndicatorHidden:(BOOL)arg1 ;
-(BOOL)shouldApplyLayoutInsets;
-(void)setShouldApplyLayoutInsets:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isBottomHairlineHidden;
-(BOOL)isTopHairlineHidden;
-(long long)numberOfLikes;
-(void)setNumberOfLikes:(long long)arg1 ;
@end

