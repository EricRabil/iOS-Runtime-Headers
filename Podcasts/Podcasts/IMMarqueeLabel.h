/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UILabel.h>

@class UIImageView;

@interface IMMarqueeLabel : UILabel {

	BOOL _noDelay;
	BOOL _needsAnimation;
	UIImageView* _marquee;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) BOOL needsAnimation;                  //@synthesize needsAnimation=_needsAnimation - In the implementation block
@property (nonatomic,retain) UIImageView * marquee;                //@synthesize marquee=_marquee - In the implementation block
@property (assign,nonatomic) BOOL running; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(void)setNeedsAnimation:(BOOL)arg1 ;
-(id)siblingMarqueeLabels;
-(UIImageView *)marquee;
-(void)setMarquee:(UIImageView *)arg1 ;
-(double)maximumMarqueeTextWidth;
-(void)coordinateBeginTimeForMarqueeAnimations:(double)arg1 ;
-(void)startMarquee;
-(void)stopMarqueeWithRedisplay:(BOOL)arg1 ;
-(void)startMarqueeIfNecessary;
-(void)runOnceWithoutDelay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setText:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)drawTextInRect:(CGRect)arg1 ;
-(CGSize)textSizeForWidth:(float)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)runOnce;
-(BOOL)needsAnimation;
-(BOOL)running;
-(void)setRunning:(BOOL)arg1 ;
@end

