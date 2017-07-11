/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMUIUtil/IMActionController.h>

@class MTColorTheme;

@interface MTActionController : IMActionController {

	MTColorTheme* _colorTheme;

}

@property (nonatomic,retain) MTColorTheme * colorTheme;              //@synthesize colorTheme=_colorTheme - In the implementation block
-(id)createMoreAction;
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
-(void)setAvailableActions:(id)arg1 ;
-(void)setupActions;
@end
