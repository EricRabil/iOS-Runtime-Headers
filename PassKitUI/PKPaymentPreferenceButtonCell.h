/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentPreferenceCell.h>

@class UIButton, NSString;

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {

	UIButton* _button;
	/*^block*/id _handler;
	NSString* _buttonTitle;

}

@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) NSString * buttonTitle;              //@synthesize buttonTitle=_buttonTitle - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(void)buttonTapped:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(id)pk_childrenForAppearance;
@end
