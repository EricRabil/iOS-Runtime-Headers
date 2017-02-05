/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:37:22 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCustomization-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NTKCCFaceContainerView, UIView, UILabel, NSString;

@interface _NTKCCAppCollectionCell : UICollectionViewCell {

	NTKCCFaceContainerView* _faceContainerView;
	UIView* _highlightedView;
	UILabel* _nameLabel;

}

@property (nonatomic,retain) UIView * faceView; 
@property (nonatomic,copy) NSString * calloutName; 
+(id)reuseIdentifier;
+(CGSize)itemSize;
-(NSString *)calloutName;
-(void)setFaceView:(UIView *)arg1 ;
-(void)setCalloutName:(NSString *)arg1 ;
-(void)_highlight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIView *)faceView;
@end

