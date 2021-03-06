/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTPodcastCellAccessoryView.h>

@class UIButton;

@interface MTAddPodcastCellAccessoryView : MTPodcastCellAccessoryView {

	UIButton* _button;
	BOOL _added;
	BOOL _enabled;

}

@property (assign,getter=isAdded,nonatomic) BOOL added;                  //@synthesize added=_added - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isAdded;
-(void)setAdded:(BOOL)arg1 ;
@end

