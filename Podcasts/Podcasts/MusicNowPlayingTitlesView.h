/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIControl.h>

@class NSMutableArray, NSArray;

@interface MusicNowPlayingTitlesView : UIControl {

	NSMutableArray* _labels;
	NSMutableArray* _marqueeViews;
	BOOL _needsViewUpdate;
	BOOL _marqueeEnabled;
	BOOL _clampLabels;
	NSArray* _attributedTexts;
	UIEdgeInsets _contentInset;
	UIEdgeInsets _marqueeFadeEdgeInsets;

}

@property (nonatomic,copy) NSArray * attributedTexts;                                    //@synthesize attributedTexts=_attributedTexts - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                  //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) double firstBaselineOffsetFromTop; 
@property (getter=isMarqueeEnabled,nonatomic,readonly) BOOL marqueeEnabled;              //@synthesize marqueeEnabled=_marqueeEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marqueeFadeEdgeInsets;                         //@synthesize marqueeFadeEdgeInsets=_marqueeFadeEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL clampLabels;                                           //@synthesize clampLabels=_clampLabels - In the implementation block
-(void)setMarqueeFadeEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setAttributedTexts:(NSArray *)arg1 ;
-(void)_updateViewsIfNeeded;
-(void)_layoutLabel:(id)arg1 withMarqueeView:(id)arg2 previousLabelBaselineOffsetFromBottom:(double)arg3 previousMarqueeViewFrame:(CGRect)arg4 ;
-(double)_baselineOffsetForAttributedText:(id)arg1 returningFont:(out id*)arg2 ;
-(void)_reloadVisualHighlightStateAnimated:(BOOL)arg1 ;
-(void)_setupLabel:(inout id*)arg1 marqueeView:(inout id*)arg2 withAttributedText:(id)arg3 ;
-(void)setClampLabels:(BOOL)arg1 ;
-(NSArray *)attributedTexts;
-(UIEdgeInsets)marqueeFadeEdgeInsets;
-(BOOL)clampLabels;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_applyMarqueeFade;
-(BOOL)isMarqueeEnabled;
-(void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2 ;
-(void)resetMarqueePosition;
-(double)firstBaselineOffsetFromTop;
@end

