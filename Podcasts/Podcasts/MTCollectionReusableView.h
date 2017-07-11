/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface MTCollectionReusableView : UICollectionReusableView {

	BOOL _floating;
	UIView* _contentView;
	UIView* _backgroundView;

}

@property (assign,nonatomic) BOOL floating;                        //@synthesize floating=_floating - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;               //@synthesize contentView=_contentView - In the implementation block
-(void)configureSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setFloating:(BOOL)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(BOOL)floating;
@end
