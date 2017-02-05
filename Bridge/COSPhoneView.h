/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSString, UILabel;

@interface COSPhoneView : UIView {

	long long _style;
	UIImageView* _deviceImageView;
	UIImageView* _screenImageView;
	NSString* _screenImageName;
	UILabel* _internalErrorLabel;

}

@property (nonatomic,retain) UILabel * internalErrorLabel;              //@synthesize internalErrorLabel=_internalErrorLabel - In the implementation block
@property (nonatomic,copy) NSString * screenImageName;                  //@synthesize screenImageName=_screenImageName - In the implementation block
-(UILabel *)internalErrorLabel;
-(void)setInternalErrorLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setScreenImageName:(NSString *)arg1 ;
-(NSString *)screenImageName;
@end
