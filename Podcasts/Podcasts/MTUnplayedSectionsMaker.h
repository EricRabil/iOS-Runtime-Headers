/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray, NSCalendar;

@interface MTUnplayedSectionsMaker : NSObject {

	NSDate* _oldestEpisodeDate;
	NSDate* _currentDate;
	NSArray* _sectionTitles;
	NSArray* _dateRanges;
	NSArray* _fetchedResultsControllers;
	NSCalendar* _gregorian;
	unsigned long long _numberOfNullEntries;

}

@property (nonatomic,retain) NSCalendar * gregorian;                              //@synthesize gregorian=_gregorian - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfNullEntries;              //@synthesize numberOfNullEntries=_numberOfNullEntries - In the implementation block
@property (nonatomic,copy) NSDate * oldestEpisodeDate;                            //@synthesize oldestEpisodeDate=_oldestEpisodeDate - In the implementation block
@property (nonatomic,readonly) NSDate * strippedToday; 
@property (nonatomic,copy) NSDate * currentDate;                                  //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,copy) NSArray * dateRanges;                                  //@synthesize dateRanges=_dateRanges - In the implementation block
@property (nonatomic,copy) NSArray * fetchedResultsControllers;                   //@synthesize fetchedResultsControllers=_fetchedResultsControllers - In the implementation block
-(NSDate *)oldestEpisodeDate;
-(id)initWithNumberOfNullEntries:(unsigned long long)arg1 ;
-(id)fetchedResultsControllerForOldestEpisodeDate:(id)arg1 currentDate:(id)arg2 ;
-(void)setNumberOfNullEntries:(unsigned long long)arg1 ;
-(void)makeDateRanges;
-(id)makeFetchedResultsControllers;
-(id)pastWeekDateRanges;
-(id)monthsDateRanges;
-(id)thisYearDateRange;
-(id)pastYearDateRanges;
-(unsigned long long)numberOfNullEntries;
-(id)predicateForDateRange:(id)arg1 ;
-(NSCalendar *)gregorian;
-(id)unmodifiedPastYearDateRanges;
-(NSDate *)strippedToday;
-(id)offsetDate:(id)arg1 byDays:(long long)arg2 ;
-(BOOL)date:(id)arg1 isEarlierThanDate:(id)arg2 ;
-(id)dayRangeForDate:(id)arg1 ;
-(void)setOldestEpisodeDate:(NSDate *)arg1 ;
-(NSArray *)fetchedResultsControllers;
-(void)setFetchedResultsControllers:(NSArray *)arg1 ;
-(void)setGregorian:(NSCalendar *)arg1 ;
-(id)sectionTitles;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(NSDate *)currentDate;
-(NSArray *)dateRanges;
-(void)setDateRanges:(NSArray *)arg1 ;
-(long long)yearFromDate:(id)arg1 ;
@end
