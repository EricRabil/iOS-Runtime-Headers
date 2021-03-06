/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSetting.h>

@class MTOptionsDescription, NSString;

@interface MTOptionSetting : MTSetting {

	MTOptionsDescription* _options;
	NSString* _headerTitle;

}

@property (nonatomic,copy) NSString * headerTitle;                        //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,retain) MTOptionsDescription * options;              //@synthesize options=_options - In the implementation block
-(id)currentShortTitle;
-(MTOptionsDescription *)options;
-(void)setOptions:(MTOptionsDescription *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end

