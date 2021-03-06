/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTCoreDataResultsController.h>
#import <Podcasts/MTResultsChangeGeneratorDelegate.h>

@class MTResultsChangeGenerator, NSString;

@interface MTCoreDataResultsWithExtrasController : MTCoreDataResultsController <MTResultsChangeGeneratorDelegate> {

	unsigned long long _numberOfExtraObjects;
	MTResultsChangeGenerator* _changeGenerator;
	unsigned long long _numberOfResults;

}

@property (nonatomic,retain) MTResultsChangeGenerator * changeGenerator;              //@synthesize changeGenerator=_changeGenerator - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfResults;                      //@synthesize numberOfResults=_numberOfResults - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfExtraObjects;                 //@synthesize numberOfExtraObjects=_numberOfExtraObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_initializeFrc;
-(id)_extraObjects;
-(MTResultsChangeGenerator *)changeGenerator;
-(void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)setChangeGenerator:(MTResultsChangeGenerator *)arg1 ;
-(BOOL)_hasResults;
-(unsigned long long)numberOfExtraObjects;
-(void)setNumberOfExtraObjects:(unsigned long long)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)allObjects;
-(void)setNumberOfResults:(unsigned long long)arg1 ;
-(unsigned long long)numberOfResults;
@end

