/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBUIProgressiveBlur.h>

@class SBBackdropView, SBWallpaperEffectView, UIView, _UIBackdropViewSettings, NSString;

@interface SBSearchBackdropView : UIView <SBUIProgressiveBlur> {

	SBBackdropView* _backdropView;
	SBWallpaperEffectView* _effectView;
	UIView* _reduceTransparencyView;
	UIView* _tintView;
	double _backupProgress;
	_UIBackdropViewSettings* _settingsForPrivateStyle;
	NSString* _privateGroupName;
	BOOL _usesTint;
	unsigned long long _lowQualityStyle;
	BOOL _needToEnsureThatWeUpdateBackdropAtLeastOnce;

}

@property (nonatomic,retain) NSString * groupName;                            //@synthesize privateGroupName=_privateGroupName - In the implementation block
@property (assign,nonatomic) BOOL usesTint;                                   //@synthesize usesTint=_usesTint - In the implementation block
@property (assign,nonatomic) unsigned long long lowQualityStyle;              //@synthesize lowQualityStyle=_lowQualityStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)completeIncrementalTransition;
-(void)setUsesTint:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 backdropViewSettings:(id)arg2 ;
-(void)reduceTransparencyStatusDidChange:(id)arg1 ;
-(BOOL)useHighQualityTransition;
-(void)completeTransitionToBlurred:(BOOL)arg1 ;
-(BOOL)useHighQualityGraphics;
-(BOOL)usesTint;
-(unsigned long long)lowQualityStyle;
-(void)setLowQualityStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)prepareForTransition;
-(id)initWithFrame:(CGRect)arg1 privateStyle:(long long)arg2 ;
-(void)setTransitionProgress:(double)arg1 ;
@end

