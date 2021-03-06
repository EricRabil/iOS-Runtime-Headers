/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSTimeZone;

@interface SBNotificationDateLabelDescription : NSObject {

	NSDate* _startDate;
	NSTimeZone* _startDateTimeZone;
	NSDate* _endDate;
	NSTimeZone* _endDateTimeZone;

}

@property (nonatomic,copy) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * startDateTimeZone;              //@synthesize startDateTimeZone=_startDateTimeZone - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * endDateTimeZone;                //@synthesize endDateTimeZone=_endDateTimeZone - In the implementation block
-(void)setStartDateTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)startDateTimeZone;
-(NSTimeZone *)endDateTimeZone;
-(void)setEndDateTimeZone:(NSTimeZone *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

