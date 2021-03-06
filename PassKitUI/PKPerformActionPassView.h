/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:21 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIView.h>

@class PKPass, PKPassSnapshotter, UIImageView, UIView;

@interface PKPerformActionPassView : UIView {

	PKPass* _pass;
	PKPassSnapshotter* _snapshotter;
	UIImageView* _passView;
	UIView* _backdropView;

}
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_createSubviews;
-(CGSize)_passImageSize;
-(id)initWithPass:(id)arg1 frame:(CGRect)arg2 ;
-(void)shakeCard;
-(void)_loadSnapshotView;
@end

