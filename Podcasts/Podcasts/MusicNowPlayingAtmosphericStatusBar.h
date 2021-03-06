/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UIView, MusicStatusBar, MPUPinningView, MusicNowPlayingAtmosphericEffectView, NSString;

@interface MusicNowPlayingAtmosphericStatusBar : UIView {

	UIView* _containerView;
	MusicStatusBar* _statusBar;
	MPUPinningView* _atmosphericContentView;
	MusicNowPlayingAtmosphericEffectView* _effectView;

}

@property (nonatomic,retain) MusicNowPlayingAtmosphericEffectView * effectView;                            //@synthesize effectView=_effectView - In the implementation block
@property (assign,nonatomic) long long effect; 
@property (nonatomic,copy) NSString * backdropGroupName; 
@property (nonatomic,readonly) MPUPinningView * atmosphericContentView;                                    //@synthesize atmosphericContentView=_atmosphericContentView - In the implementation block
@property (assign,nonatomic,__weak) id<MusicNowPlayingAtmosphericStatusBarDelegate> delegate; 
-(MPUPinningView *)atmosphericContentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MusicNowPlayingAtmosphericStatusBarDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<MusicNowPlayingAtmosphericStatusBarDelegate>)delegate;
-(void)setEffect:(long long)arg1 ;
-(MusicNowPlayingAtmosphericEffectView *)effectView;
-(void)setEffectView:(MusicNowPlayingAtmosphericEffectView *)arg1 ;
-(long long)effect;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
@end

