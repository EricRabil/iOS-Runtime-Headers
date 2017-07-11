/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:34 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@protocol SBUIPasscodeLockView;
@class UIView, SBDashBoardBackgroundView;

@interface SBUIPasscodeViewWithLockScreenStyle : UIView {

	UIView*<SBUIPasscodeLockView> _passcodeView;
	SBDashBoardBackgroundView* _backgroundView;

}

@property (nonatomic,readonly) UIView*<SBUIPasscodeLockView> passcodeView;              //@synthesize passcodeView=_passcodeView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 includeBlur:(BOOL)arg2 passcodeViewGenerator:(/*^block*/id)arg3 ;
-(void)setBlurEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIView*<SBUIPasscodeLockView>)passcodeView;
@end
