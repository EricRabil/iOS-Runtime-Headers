/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music.JSMediaItem.h>

@class NSString;

@interface Music.JSBrickItem : Music.JSMediaItem {

	 headlineText;
	 titleText;
	 subtitleText;

}

@property (copy,nonatomic) NSString * headlineText; 
@property (copy,nonatomic) NSString * titleText; 
@property (copy,nonatomic) NSString * subtitleText; 
-(NSString *)headlineText;
-(void)setHeadlineText:(NSString *)arg1 ;
-(void)updateProperty:(id)arg1 value:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)subtitleText;
@end

