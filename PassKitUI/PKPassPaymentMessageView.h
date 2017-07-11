/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPassFooterContentView.h>

@class UILabel, UIButton, UIImageView, UIView;

@interface PKPassPaymentMessageView : PKPassFooterContentView {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _button;
	UIImageView* _alertImageView;
	UIView* _bottomRule;

}
-(void)layoutSubviews;
-(void)dealloc;
-(id)_titleLabel;
-(id)_bodyLabel;
-(id)_actionButton;
-(id)initWithStyle:(long long)arg1 pass:(id)arg2 title:(id)arg3 body:(id)arg4 buttonTitle:(id)arg5 action:(SEL)arg6 isImportant:(BOOL)arg7 ;
-(id)_bottomRule;
-(id)_alertImage;
-(void)_layoutPaymentSubviews;
-(void)_layoutValueAddedServiceSubviews;
-(id)initWithStyle:(long long)arg1 pass:(id)arg2 title:(id)arg3 body:(id)arg4 ;
@end
