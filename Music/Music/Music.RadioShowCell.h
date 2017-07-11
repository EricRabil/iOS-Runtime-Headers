/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <Music/Music.VerticalLockupCollectionViewCell.h>

@class NSString;

@interface Music.RadioShowCell : Music.VerticalLockupCollectionViewCell {

	 title;
	 subtitle;
	 overlayTitle;
	 overlaySubtitle;
	 backdropView;
	 textComponents;
	 overlayTextComponents;
	 overlayTextStackView;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * subtitle; 
@property (copy,nonatomic) NSString * overlayTitle; 
@property (copy,nonatomic) NSString * overlaySubtitle; 
+(double)preferredHeightWithTraitCollection:(id)arg1 width:(double)arg2 ;
+(UIEdgeInsets)visualContentInsets;
+(id)reuseIdentifier;
-(NSString *)overlayTitle;
-(void)setOverlayTitle:(NSString *)arg1 ;
-(NSString *)overlaySubtitle;
-(void)setOverlaySubtitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
@end
