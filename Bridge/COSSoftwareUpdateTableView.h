/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 2:44:28 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSoftwareUpdateTableView.h>

@class UILabel, UIProgressView, NSTimer;

@interface COSSoftwareUpdateTableView : PSSoftwareUpdateTableView {

	BOOL _isDisplayingRevLockBootProgressIndicator;
	double _revLockBootProgressIndicatorElapsedDuration;
	double _revLockBootProgressIndicatorTotalDuration;
	UILabel* _updateCompletingLabel;
	UIProgressView* _progressBar;
	NSTimer* _progressTimer;

}

@property (nonatomic,retain) UILabel * updateCompletingLabel;                                   //@synthesize updateCompletingLabel=_updateCompletingLabel - In the implementation block
@property (nonatomic,retain) UIProgressView * progressBar;                                      //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) NSTimer * progressTimer;                                           //@synthesize progressTimer=_progressTimer - In the implementation block
@property (nonatomic,readonly) BOOL isDisplayingRevLockBootProgressIndicator;                   //@synthesize isDisplayingRevLockBootProgressIndicator=_isDisplayingRevLockBootProgressIndicator - In the implementation block
@property (nonatomic,readonly) double revLockBootProgressIndicatorElapsedDuration;              //@synthesize revLockBootProgressIndicatorElapsedDuration=_revLockBootProgressIndicatorElapsedDuration - In the implementation block
@property (nonatomic,readonly) double revLockBootProgressIndicatorTotalDuration;                //@synthesize revLockBootProgressIndicatorTotalDuration=_revLockBootProgressIndicatorTotalDuration - In the implementation block
-(void)displayRevLockBootProgressIndicatorWithElapsedDuration:(double)arg1 totalDuration:(double)arg2 ;
-(void)progressTimerFired:(id)arg1 ;
-(BOOL)isDisplayingRevLockBootProgressIndicator;
-(double)revLockBootProgressIndicatorElapsedDuration;
-(double)revLockBootProgressIndicatorTotalDuration;
-(UILabel *)updateCompletingLabel;
-(void)setUpdateCompletingLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(UIProgressView *)progressBar;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(void)setProgressTimer:(NSTimer *)arg1 ;
-(NSTimer *)progressTimer;
@end
