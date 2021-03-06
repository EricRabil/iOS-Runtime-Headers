/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <Music/Music.VerticalLockupCollectionViewCell.h>

@class NSString, NSDate;

@interface Music.RankedMusicVideoVerticalCell : Music.VerticalLockupCollectionViewCell {

	 rank;
	 title;
	 artistName;
	 releaseDate;
	 isExplicit;
	 textComponents;
	 explicitBadgeTextStackView;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * artistName; 
@property (copy,nonatomic) NSDate * releaseDate; 
@property (assign,nonatomic) BOOL isExplicit; 
+(double)preferredHeightWithTraitCollection:(id)arg1 width:(double)arg2 ;
+(UIEdgeInsets)visualContentInsets;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(void)setIsExplicit:(BOOL)arg1 ;
-(BOOL)isExplicit;
-(NSString *)artistName;
-(void)setArtistName:(NSString *)arg1 ;
@end

