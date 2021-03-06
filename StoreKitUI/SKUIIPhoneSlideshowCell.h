/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:02 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UIImage;

@interface SKUIIPhoneSlideshowCell : UICollectionViewCell {

	UIImageView* _imageView;
	UIImageView* _playIcon;
	CGSize _imageSize;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (assign,getter=isVideo,nonatomic) BOOL video; 
@property (assign,nonatomic) CGSize imageSize;                       //@synthesize imageSize=_imageSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(CGSize)imageSize;
-(void)prepareForReuse;
-(BOOL)isVideo;
-(CGRect)imageFrame;
-(void)setVideo:(BOOL)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
@end

