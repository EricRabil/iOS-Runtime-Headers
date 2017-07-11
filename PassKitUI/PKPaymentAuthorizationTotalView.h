/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:20 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSLayoutConstraint, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationTotalView : UIView {

	UILabel* _labelView;
	UILabel* _valueView;
	UIView* _separatorView;
	NSLayoutConstraint* _leftMarginConstraint;
	NSLayoutConstraint* _rightMarginConstraint;
	NSLayoutConstraint* _labelBaselineConstraint;
	BOOL _isPendingTotal;
	PKPaymentAuthorizationLayout* _layout;
	long long _style;

}

@property (assign,nonatomic) PKPaymentAuthorizationLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) long long style;                                    //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL isPendingTotal;                                //@synthesize isPendingTotal=_isPendingTotal - In the implementation block
-(id)init;
-(void)dealloc;
-(long long)style;
-(void)updateConstraints;
-(void)setStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(PKPaymentAuthorizationLayout *)layout;
-(void)setLayout:(PKPaymentAuthorizationLayout *)arg1 ;
-(void)_prepareConstraints;
-(void)_createSubviews;
-(id)_labelAttributedStringWithString:(id)arg1 ;
-(id)_valueAttributedStringWithString:(id)arg1 ;
-(double)_initialLeading;
-(void)setLabel:(id)arg1 value:(id)arg2 ;
-(BOOL)isPendingTotal;
-(void)setIsPendingTotal:(BOOL)arg1 ;
@end
