/*
* This header is generated by classdump-dyld 1.0
* on Saturday, April 22, 2017 at 12:26:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIView.h>

@class WUIDynamicWeatherBackground, WAWeatherCityView;

@interface WAPlaceholderCell : UIView {

	WUIDynamicWeatherBackground* _backgroundView;
	WAWeatherCityView* _cityView;

}

@property (nonatomic,retain) WUIDynamicWeatherBackground * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) WAWeatherCityView * cityView;                              //@synthesize cityView=_cityView - In the implementation block
-(WAWeatherCityView *)cityView;
-(void)setCityView:(WAWeatherCityView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundView:(WUIDynamicWeatherBackground *)arg1 ;
-(WUIDynamicWeatherBackground *)backgroundView;
-(void)setParallaxOffset:(double)arg1 ;
@end

