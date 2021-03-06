/*
* This header is generated by classdump-dyld 1.0
* on Saturday, April 22, 2017 at 12:26:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel;

@interface WADeleteConfirmationButton : UIButton {

	UILabel* _titleLabel;
	double _idealWidth;

}

@property (assign,nonatomic) double idealWidth;              //@synthesize idealWidth=_idealWidth - In the implementation block
+(id)confirmationButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 backgroundColor:(id)arg4 ;
-(void)setIdealWidth:(double)arg1 ;
-(double)idealWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

