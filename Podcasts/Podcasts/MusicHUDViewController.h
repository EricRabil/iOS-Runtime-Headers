/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIView, NSString;

@interface MusicHUDViewController : UIViewController {

	UIView* _contentView;
	UIView* _hudView;
	BOOL _didPlayAnimation;
	BOOL _shouldDismissHUDWhenPossible;
	long long _type;
	BOOL _shouldWaitForExplicitDismissal;
	double _dismissalDelay;
	NSString* _text;

}

@property (assign,nonatomic) double dismissalDelay;                            //@synthesize dismissalDelay=_dismissalDelay - In the implementation block
@property (assign,nonatomic) BOOL shouldWaitForExplicitDismissal;              //@synthesize shouldWaitForExplicitDismissal=_shouldWaitForExplicitDismissal - In the implementation block
@property (nonatomic,copy) NSString * text;                                    //@synthesize text=_text - In the implementation block
+(void)showAddToSavedHUD:(unsigned long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dismiss;
-(id)initWithHUDType:(long long)arg1 ;
-(void)presentFromRootViewController;
-(void)_playAnimation;
-(void)_dismissHUDAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(double)dismissalDelay;
-(void)setDismissalDelay:(double)arg1 ;
-(BOOL)shouldWaitForExplicitDismissal;
-(void)setShouldWaitForExplicitDismissal:(BOOL)arg1 ;
@end
