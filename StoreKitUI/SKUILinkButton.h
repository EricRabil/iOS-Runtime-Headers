/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:03 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIButton.h>

@interface SKUILinkButton : UIButton {

	long long _arrowStyle;

}

@property (nonatomic,readonly) long long arrowStyle;              //@synthesize arrowStyle=_arrowStyle - In the implementation block
+(id)buttonWithArrowStyle:(long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)sizeToFit;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithArrowStyle:(long long)arg1 ;
-(void)_reloadIcons;
-(double)_linkImagePaddingLeft;
-(long long)arrowStyle;
@end

