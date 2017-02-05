/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:49 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/_TimelineNode.h>

@protocol CLKTimelineEntry;
@class NSDate;

@interface _TimelineEntryNode : _TimelineNode {

	id<CLKTimelineEntry> _entry;

}

@property (nonatomic,retain) id<CLKTimelineEntry> entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
-(NSDate *)date;
-(id<CLKTimelineEntry>)entry;
-(void)setEntry:(id<CLKTimelineEntry>)arg1 ;
@end

