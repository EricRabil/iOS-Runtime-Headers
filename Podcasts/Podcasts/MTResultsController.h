/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTResultsControllerDelegate;
@class NSString;

@interface MTResultsController : NSObject {

	NSString* title;
	id<MTResultsControllerDelegate> delegate;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic,__weak) id<MTResultsControllerDelegate> delegate; 
-(unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(void)setDelegate:(id<MTResultsControllerDelegate>)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)reloadData;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(id<MTResultsControllerDelegate>)delegate;
-(NSString *)title;
-(id)allObjects;
-(unsigned long long)numberOfObjects;
-(id)objectAtIndexPath:(id)arg1 ;
-(BOOL)hasObjects;
@end

