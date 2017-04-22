/*
* This header is generated by classdump-dyld 1.0
* on Saturday, April 22, 2017 at 12:26:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <Weather/WeatherView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Weather/HourlyScrollerBeltDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class WFTemperatureFormatter, WAWeatherCityViewLayoutOptions, UIView, WAWeatherCardView, UIScrollView, UILabel, WACityDetailsView, UITapGestureRecognizer, UILongPressGestureRecognizer, WADayForecastView, HourlyScrollerBeltView, NSMutableArray, NSDateFormatter, NSString;

@interface WAWeatherCityView : WeatherView <UIScrollViewDelegate, HourlyScrollerBeltDelegate, UIGestureRecognizerDelegate> {

	double _panOffset;
	BOOL _isBouncing;
	BOOL _isTallDevice;
	BOOL _hasExtendedWeatherData;
	WFTemperatureFormatter* _temperatureFormatter;
	long long _mode;
	WAWeatherCityViewLayoutOptions* _layoutOptions;
	double _transitionProgress;
	double _textTopMargin;
	UIView* _bottomDivider;
	WAWeatherCardView* _cardView;
	UIView* _cardMaskView;
	UIView* _pageView;
	UIView* _pageUpperView;
	UIView* _pageHeaderView;
	UIScrollView* _pageScrollView;
	UIView* _pinnedContainer;
	UIView* _overDivider;
	UIView* _underDivider;
	UIView* _afterDayForecastsDivider;
	UIView* _verticalDivider;
	UILabel* _pageCityName;
	UILabel* _pageConditionDescription;
	UILabel* _pageTemperature;
	UILabel* _naturalLanguageDescriptionLabel;
	UIView* _afterNaturalLanguageDivider;
	WACityDetailsView* _detailsView;
	UIView* _pageCityNameSnapshotView;
	UIView* _pageTemperatureSnapshotView;
	UITapGestureRecognizer* _detailedConditionsRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIView* _textTreatmentView;
	WADayForecastView* _todayForecastView;
	HourlyScrollerBeltView* _hourlyBelt;
	NSMutableArray* _dayForecastViews;
	double _deviceWidth;
	double _deviceHeight;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) WAWeatherCardView * cardView;                                           //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) UIView * cardMaskView;                                                  //@synthesize cardMaskView=_cardMaskView - In the implementation block
@property (nonatomic,retain) UIView * pageView;                                                      //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain) UIView * pageUpperView;                                                 //@synthesize pageUpperView=_pageUpperView - In the implementation block
@property (nonatomic,retain) UIView * pageHeaderView;                                                //@synthesize pageHeaderView=_pageHeaderView - In the implementation block
@property (nonatomic,retain) UIScrollView * pageScrollView;                                          //@synthesize pageScrollView=_pageScrollView - In the implementation block
@property (nonatomic,retain) UIView * pinnedContainer;                                               //@synthesize pinnedContainer=_pinnedContainer - In the implementation block
@property (nonatomic,retain) UIView * overDivider;                                                   //@synthesize overDivider=_overDivider - In the implementation block
@property (nonatomic,retain) UIView * underDivider;                                                  //@synthesize underDivider=_underDivider - In the implementation block
@property (nonatomic,retain) UIView * afterDayForecastsDivider;                                      //@synthesize afterDayForecastsDivider=_afterDayForecastsDivider - In the implementation block
@property (nonatomic,retain) UIView * verticalDivider;                                               //@synthesize verticalDivider=_verticalDivider - In the implementation block
@property (nonatomic,retain) UILabel * pageCityName;                                                 //@synthesize pageCityName=_pageCityName - In the implementation block
@property (nonatomic,retain) UILabel * pageConditionDescription;                                     //@synthesize pageConditionDescription=_pageConditionDescription - In the implementation block
@property (nonatomic,retain) UILabel * pageTemperature;                                              //@synthesize pageTemperature=_pageTemperature - In the implementation block
@property (nonatomic,retain) UILabel * naturalLanguageDescriptionLabel;                              //@synthesize naturalLanguageDescriptionLabel=_naturalLanguageDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIView * afterNaturalLanguageDivider;                                   //@synthesize afterNaturalLanguageDivider=_afterNaturalLanguageDivider - In the implementation block
@property (nonatomic,retain) WACityDetailsView * detailsView;                                        //@synthesize detailsView=_detailsView - In the implementation block
@property (nonatomic,retain) UIView * pageCityNameSnapshotView;                                      //@synthesize pageCityNameSnapshotView=_pageCityNameSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * pageTemperatureSnapshotView;                                   //@synthesize pageTemperatureSnapshotView=_pageTemperatureSnapshotView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * detailedConditionsRecognizer;                  //@synthesize detailedConditionsRecognizer=_detailedConditionsRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isBouncing;                                                        //@synthesize isBouncing=_isBouncing - In the implementation block
@property (nonatomic,retain) UIView * textTreatmentView;                                             //@synthesize textTreatmentView=_textTreatmentView - In the implementation block
@property (nonatomic,retain) WADayForecastView * todayForecastView;                                  //@synthesize todayForecastView=_todayForecastView - In the implementation block
@property (nonatomic,retain) HourlyScrollerBeltView * hourlyBelt;                                    //@synthesize hourlyBelt=_hourlyBelt - In the implementation block
@property (nonatomic,retain) NSMutableArray * dayForecastViews;                                      //@synthesize dayForecastViews=_dayForecastViews - In the implementation block
@property (assign,nonatomic) BOOL isTallDevice;                                                      //@synthesize isTallDevice=_isTallDevice - In the implementation block
@property (assign,nonatomic) double deviceWidth;                                                     //@synthesize deviceWidth=_deviceWidth - In the implementation block
@property (assign,nonatomic) double deviceHeight;                                                    //@synthesize deviceHeight=_deviceHeight - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                        //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,readonly) WFTemperatureFormatter * temperatureFormatter;                        //@synthesize temperatureFormatter=_temperatureFormatter - In the implementation block
@property (assign,nonatomic) BOOL hasExtendedWeatherData;                                            //@synthesize hasExtendedWeatherData=_hasExtendedWeatherData - In the implementation block
@property (assign,nonatomic) long long mode;                                                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) WAWeatherCityViewLayoutOptions * layoutOptions;                         //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic) double transitionProgress;                                              //@synthesize transitionProgress=_transitionProgress - In the implementation block
@property (assign,nonatomic) double textTopMargin;                                                   //@synthesize textTopMargin=_textTopMargin - In the implementation block
@property (nonatomic,retain) UIView * bottomDivider;                                                 //@synthesize bottomDivider=_bottomDivider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)windSpeedStringAttributes;
-(void)updateExtendedWeather;
-(void)willTransitionToSize:(CGSize)arg1 layoutOptions:(id)arg2 ;
-(void)animateTransitionToSize:(CGSize)arg1 layoutOptions:(id)arg2 ;
-(void)resetVerticalScrollOffset;
-(void)setStaggerOffset:(double)arg1 ;
-(void)setPanOffset:(double)arg1 ;
-(void)prepareForResuse;
-(void)setTextTopMargin:(double)arg1 ;
-(double)textTopMargin;
-(void)tappedCity:(id)arg1 ;
-(void)longPressedOnCity:(id)arg1 ;
-(void)_forceWeatherDescription:(id)arg1 ;
-(void)updateTimeUI;
-(double)_pageScrollViewOriginY;
-(void)_createPinnedContainerViews;
-(void)_createContentViewsForPageModeScrollView;
-(UIScrollView *)pageScrollView;
-(void)setPinnedContainer:(UIView *)arg1 ;
-(UIView *)pinnedContainer;
-(void)setTodayForecastView:(WADayForecastView *)arg1 ;
-(WADayForecastView *)todayForecastView;
-(void)setOverDivider:(UIView *)arg1 ;
-(UIView *)overDivider;
-(void)setHourlyBelt:(HourlyScrollerBeltView *)arg1 ;
-(HourlyScrollerBeltView *)hourlyBelt;
-(void)setUnderDivider:(UIView *)arg1 ;
-(UIView *)underDivider;
-(BOOL)_shouldShowExtendedWeather;
-(void)setContentSizeForExtendedWeatherVisible:(BOOL)arg1 ;
-(void)updateUIIncludingExtendedWeather:(BOOL)arg1 ;
-(void)cleanupTextTreatmentView;
-(UILabel *)pageCityName;
-(id)newTextTreatmentViewForCondition:(long long)arg1 ;
-(void)setTextTreatmentView:(UIView *)arg1 ;
-(UIView *)textTreatmentView;
-(NSMutableArray *)dayForecastViews;
-(UILabel *)pageConditionDescription;
-(UILabel *)pageTemperature;
-(id)degreeAttributedStringWithTemperatureObject:(id)arg1 progress:(double)arg2 ;
-(id)extendedDetailsStringWithName:(id)arg1 content:(id)arg2 ;
-(void)setPrecipitationsWithPrecipitationForecast:(unsigned long long)arg1 hourlyForecasts:(id)arg2 ;
-(void)setWindWithSpeed:(double)arg1 andDirection:(double)arg2 ;
-(void)setFeelsLikeWithTemperature:(id)arg1 ;
-(void)setPrecipitation:(double)arg1 ;
-(void)setPressure:(double)arg1 withDataCelsius:(BOOL)arg2 ;
-(void)setVisibility:(double)arg1 withDataCelsius:(BOOL)arg2 ;
-(void)setHasExtendedWeatherData:(BOOL)arg1 ;
-(void)setPageCityNameSnapshotView:(UIView *)arg1 ;
-(void)setPageTemperatureSnapshotView:(UIView *)arg1 ;
-(BOOL)isBouncing;
-(void)setIsBouncing:(BOOL)arg1 ;
-(void)bounceScrollView;
-(UITapGestureRecognizer *)detailedConditionsRecognizer;
-(void)_layoutPinnedContainer;
-(void)_layoutScrollViewContent;
-(BOOL)hasExtendedWeatherData;
-(void)_createCardModeViews;
-(void)_createPageModeViews;
-(id)currentTemperature;
-(long long)currentHourIndex;
-(long long)currentCondition;
-(void)didBeginScrolling;
-(void)didEndScrolling;
-(UIView *)cardMaskView;
-(void)setCardMaskView:(UIView *)arg1 ;
-(UIView *)pageUpperView;
-(void)setPageUpperView:(UIView *)arg1 ;
-(UIView *)pageHeaderView;
-(void)setPageHeaderView:(UIView *)arg1 ;
-(void)setPageScrollView:(UIScrollView *)arg1 ;
-(UIView *)afterDayForecastsDivider;
-(void)setAfterDayForecastsDivider:(UIView *)arg1 ;
-(void)setPageCityName:(UILabel *)arg1 ;
-(void)setPageConditionDescription:(UILabel *)arg1 ;
-(void)setPageTemperature:(UILabel *)arg1 ;
-(UILabel *)naturalLanguageDescriptionLabel;
-(void)setNaturalLanguageDescriptionLabel:(UILabel *)arg1 ;
-(UIView *)afterNaturalLanguageDivider;
-(void)setAfterNaturalLanguageDivider:(UIView *)arg1 ;
-(UIView *)pageCityNameSnapshotView;
-(UIView *)pageTemperatureSnapshotView;
-(void)setDetailedConditionsRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)setDayForecastViews:(NSMutableArray *)arg1 ;
-(BOOL)isTallDevice;
-(void)setIsTallDevice:(BOOL)arg1 ;
-(double)deviceWidth;
-(void)setDeviceWidth:(double)arg1 ;
-(double)deviceHeight;
-(void)setDeviceHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(void)setVerticalDivider:(UIView *)arg1 ;
-(UIView *)verticalDivider;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UIView *)pageView;
-(void)setTransitionProgress:(double)arg1 ;
-(double)transitionProgress;
-(id)hourlyForecasts;
-(int)temperatureUnit;
-(void)setPageView:(UIView *)arg1 ;
-(void)resetLocale;
-(WAWeatherCardView *)cardView;
-(void)setCardView:(WAWeatherCardView *)arg1 ;
-(void)updateUI;
-(void)setBottomDivider:(UIView *)arg1 ;
-(UIView *)bottomDivider;
-(NSDateFormatter *)dateFormatter;
-(void)setDetailsView:(WACityDetailsView *)arg1 ;
-(WACityDetailsView *)detailsView;
-(void)setHumidity:(double)arg1 ;
-(void)setUVIndex:(unsigned long long)arg1 ;
-(unsigned long long)observationTime;
-(void)showCity:(id)arg1 ;
-(BOOL)updateWeatherDisplayForCity:(id)arg1 ;
-(void)cityDidStartWeatherUpdate:(id)arg1 ;
-(void)refreshLocalization;
-(unsigned long long)sunriseTime;
-(void)setAirQualityCategory:(id)arg1 ;
-(void)setAirQualityIdx:(id)arg1 ;
-(void)setSunriseTime:(unsigned long long)arg1 ;
-(BOOL)isDay;
-(void)setSunsetTime:(unsigned long long)arg1 ;
-(unsigned long long)sunsetTime;
-(id)_percentFormatter;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(WAWeatherCityViewLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(WAWeatherCityViewLayoutOptions *)arg1 ;
-(WFTemperatureFormatter *)temperatureFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end

