/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockOverlayView.h>

@class CNContact, _UILegibilityView;

@interface SBLockScreenUserPictureView : SBLockOverlayView {

	CNContact* _contact;
	double _strength;
	_UILegibilityView* _monogramLegibilityView;
	double _diameter;

}

@property (nonatomic,copy) CNContact * contact;              //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) double diameter;                //@synthesize diameter=_diameter - In the implementation block
+(id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2 ;
-(void)_regenerateImage;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
@end

