/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class CADisplayLink, NSMutableDictionary, NSCalendar;

@interface SBPreciseClockTimer : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _minuteUpdateHandlers;
	unsigned long long _nextToken;
	NSCalendar* _calendar;
	long long _lastHour;
	long long _lastMinute;

}
+(id)sharedInstance;
+(id)now;
-(void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_updateDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)stopMinuteUpdatesForToken:(NSNumber*)arg1 ;
-(void)_handleTimePassed;
-(NSNumber*)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
@end
