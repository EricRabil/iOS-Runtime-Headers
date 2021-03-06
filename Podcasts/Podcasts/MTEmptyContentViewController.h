/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString, MTContentUnavailableView;

@interface MTEmptyContentViewController : UIViewController {

	NSString* _emptyTitle;
	NSString* _emptyMessage;
	MTContentUnavailableView* _emptyView;

}

@property (nonatomic,retain) MTContentUnavailableView * emptyView;              //@synthesize emptyView=_emptyView - In the implementation block
@property (nonatomic,copy) NSString * emptyTitle;                               //@synthesize emptyTitle=_emptyTitle - In the implementation block
@property (nonatomic,copy) NSString * emptyMessage;                             //@synthesize emptyMessage=_emptyMessage - In the implementation block
-(MTContentUnavailableView *)emptyView;
-(NSString *)emptyTitle;
-(NSString *)emptyMessage;
-(void)setEmptyTitle:(NSString *)arg1 ;
-(void)setEmptyMessage:(NSString *)arg1 ;
-(void)setEmptyView:(MTContentUnavailableView *)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
@end

