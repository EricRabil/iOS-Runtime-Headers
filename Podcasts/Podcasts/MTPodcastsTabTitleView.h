/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface MTPodcastsTabTitleView : UIView {

	UILabel* _titleLabel;
	UILabel* _updatedLabel;

}

@property (nonatomic,copy) NSString * updated; 
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setUpdated:(NSString *)arg1 ;
-(NSString *)updated;
@end

