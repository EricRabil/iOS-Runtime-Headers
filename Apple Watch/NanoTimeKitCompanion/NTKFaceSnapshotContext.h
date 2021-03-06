/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:50 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSDate, NSCalendar, NSString, NSNumber;

@interface NTKFaceSnapshotContext : NSObject <NSSecureCoding> {

	CLLocation* _location;
	NSDate* _date;
	NSCalendar* _calendar;
	NSString* _monogram;
	NSString* _locale;
	NSNumber* _uses24hTime;
	NSString* _buildVersion;
	NSString* _tzVersion;
	NSNumber* _enhanceTextLegibilityEnabled;
	NSString* _lunarCalendarLocaleID;

}

@property (nonatomic,retain) CLLocation * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) NSString * monogram;                                  //@synthesize monogram=_monogram - In the implementation block
@property (nonatomic,retain) NSString * locale;                                    //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSNumber * uses24hTime;                               //@synthesize uses24hTime=_uses24hTime - In the implementation block
@property (nonatomic,retain) NSString * buildVersion;                              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSString * tzVersion;                                 //@synthesize tzVersion=_tzVersion - In the implementation block
@property (nonatomic,retain) NSNumber * enhanceTextLegibilityEnabled;              //@synthesize enhanceTextLegibilityEnabled=_enhanceTextLegibilityEnabled - In the implementation block
@property (nonatomic,retain) NSString * lunarCalendarLocaleID;                     //@synthesize lunarCalendarLocaleID=_lunarCalendarLocaleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)buildVersion;
-(void)setDate:(NSDate *)arg1 ;
-(CLLocation *)location;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(NSString *)locale;
-(void)setMonogram:(NSString *)arg1 ;
-(NSString *)monogram;
-(void)setLocation:(CLLocation *)arg1 ;
-(BOOL)calendarDateMatchesContext:(id)arg1 ;
-(BOOL)localeMatchesContext:(id)arg1 ;
-(BOOL)timeZoneMatchesContext:(id)arg1 ;
-(BOOL)locationSignificantlyDiffersFromContext:(id)arg1 ;
-(id)_yearMonthDay;
-(NSString *)tzVersion;
-(NSNumber *)uses24hTime;
-(NSNumber *)enhanceTextLegibilityEnabled;
-(double)distanceInKilometersFromContext:(id)arg1 ;
-(NSString *)lunarCalendarLocaleID;
-(void)setUses24hTime:(NSNumber *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)setTzVersion:(NSString *)arg1 ;
-(void)setEnhanceTextLegibilityEnabled:(NSNumber *)arg1 ;
-(void)setLunarCalendarLocaleID:(NSString *)arg1 ;
-(BOOL)buildVersionMatchesContext:(id)arg1 ;
-(BOOL)enhanceTextLegibilityEnabledMatchesContext:(id)arg1 ;
-(BOOL)lunarCalendarLocaleIDMatchesContext:(id)arg1 ;
@end

