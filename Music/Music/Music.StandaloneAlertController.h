/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@class MusicAlertPresentationWindow;

@interface Music.StandaloneAlertController : UIAlertController {

	 didDismissHandler;
	 presentationWindow;

}

@property (copy,nonatomic) id didDismissHandler; 
@property (retain,nonatomic) MusicAlertPresentationWindow * presentationWindow; 
-(void)presentStandaloneWithAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAfterDelay:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setPresentationWindow:(MusicAlertPresentationWindow *)arg1 ;
-(MusicAlertPresentationWindow *)presentationWindow;
-(id)didDismissHandler;
-(void)setDidDismissHandler:(id)arg1 ;
@end

