/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPassFooterContentView.h>
#import <libobjc.A.dylib/PKPaymentVerificationControllerDelegate.h>

@class UILabel, UIButton, UIActivityIndicatorView, UIView, PKPaymentVerificationController, NSString;

@interface PKPassPaymentVerificationView : PKPassFooterContentView <PKPaymentVerificationControllerDelegate> {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _button;
	UIActivityIndicatorView* _activityIndicator;
	UIButton* _alternateButton;
	UIView* _bottomRule;
	PKPaymentVerificationController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)dealloc;
-(id)_button;
-(id)_titleLabel;
-(id)_bodyLabel;
-(id)_activityIndicator;
-(void)_updateButton;
-(void)presentVerificationViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)didChangeVerificationPresentation;
-(id)_bottomRule;
-(id)_alternateButton;
-(id)initWithPass:(id)arg1 passView:(id)arg2 ;
@end

