/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:04 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIImageView, _Badge, NSString, UIImage;

@interface SKUICrossFadingTabBarButton : UIControl {

	UILabel* _selectedTitleLabel;
	UIImageView* _selectedImageView;
	UILabel* _standardTitleLabel;
	UIImageView* _standardImageView;
	_Badge* _badge;
	NSString* _title;
	UIImage* _image;
	UIImage* _selectedImage;
	double _selectionProgress;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * image;                       //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;               //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) double selectionProgress;              //@synthesize selectionProgress=_selectionProgress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)tintColorDidChange;
-(UIImage *)selectedImage;
-(void)_setBadgeValue:(id)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)_positionBadge;
-(void)setSelectionProgress:(double)arg1 ;
-(double)selectionProgress;
@end

