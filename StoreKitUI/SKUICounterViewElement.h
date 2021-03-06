/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:56 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSDate, NSString, SKUIImageViewElement;

@interface SKUICounterViewElement : SKUIViewElement {

	double _changeRatePerSecond;
	long long _counterType;
	long long _dateFormatType;
	NSDate* _endDate;
	NSString* _numberFormat;
	long long _startValue;
	NSDate* _startValueDate;
	long long _stopValue;

}

@property (nonatomic,readonly) long long counterType;                                      //@synthesize counterType=_counterType - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * backgroundImageElement; 
@property (nonatomic,readonly) long long dateFormatType;                                   //@synthesize dateFormatType=_dateFormatType - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) double changeRatePerSecond;                                 //@synthesize changeRatePerSecond=_changeRatePerSecond - In the implementation block
@property (nonatomic,readonly) NSString * numberFormat;                                    //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,readonly) NSDate * startValueDate;                                    //@synthesize startValueDate=_startValueDate - In the implementation block
@property (nonatomic,readonly) long long startValue;                                       //@synthesize startValue=_startValue - In the implementation block
@property (nonatomic,readonly) long long stopValue;                                        //@synthesize stopValue=_stopValue - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)numberFormat;
-(SKUIImageViewElement *)backgroundImageElement;
-(long long)stopValue;
-(NSDate *)startValueDate;
-(double)changeRatePerSecond;
-(long long)counterType;
-(long long)dateFormatType;
-(long long)currentNumberValue;
-(NSDate *)endDate;
-(long long)startValue;
@end

