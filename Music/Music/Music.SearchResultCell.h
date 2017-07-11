/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <Music/Music.HorizontalLockupCollectionViewCell.h>

@class NSString, UIColor;

@interface Music.SearchResultCell : Music.HorizontalLockupCollectionViewCell {

	 title;
	 subtitle;
	 additionalDescription;
	 wantsAddButton;
	 isExplicit;
	 isAddButtonSelected;
	 addButtonHandler;
	 addButton.storage;
	 sectionLocationObserver;
	 textComponents;
	 explicitBadgeTextStackView;

}

@property (copy,nonatomic) NSString * title; 
@property (copy,nonatomic) NSString * subtitle; 
@property (copy,nonatomic) NSString * additionalDescription; 
@property (assign,nonatomic) BOOL wantsAddButton; 
@property (assign,nonatomic) BOOL isExplicit; 
@property (assign,nonatomic) BOOL isAddButtonSelected; 
@property (copy,nonatomic) id addButtonHandler; 
@property (retain,nonatomic) UIColor * backgroundColor; 
+(CGSize)defaultSizeWithTraitCollection:(id)arg1 containerSize:(CGSize)arg2 ;
+(CGSize)defaultItemArtworkSize;
+(CGSize)defaultVideoArtworkSize;
+(double)defaultMinimumHeight;
+(id)reuseIdentifier;
-(BOOL)wantsAddButton;
-(void)setWantsAddButton:(BOOL)arg1 ;
-(BOOL)isAddButtonSelected;
-(void)setIsAddButtonSelected:(BOOL)arg1 ;
-(id)addButtonHandler;
-(void)setAddButtonHandler:(id)arg1 ;
-(void)setAdditionalDescription:(NSString *)arg1 ;
-(void)updateSeparatorAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTitle:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)additionalDescription;
-(void)setIsExplicit:(BOOL)arg1 ;
-(BOOL)isExplicit;
@end
