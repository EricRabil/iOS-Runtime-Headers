/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, _MusicDownloadProgressRingView, UIImage, UIColor;

@interface MusicDownloadProgressView : UIView {

	UIImageView* _centerImageView;
	UIView* _outerRingView;
	_MusicDownloadProgressRingView* _progressView;
	double _downloadProgress;
	UIImage* _centerImage;
	UIColor* _outerRingColor;

}

@property (assign,nonatomic) double downloadProgress;               //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) UIImage * centerImage;                 //@synthesize centerImage=_centerImage - In the implementation block
@property (nonatomic,retain) UIColor * outerRingColor;              //@synthesize outerRingColor=_outerRingColor - In the implementation block
-(void)setOuterRingColor:(UIColor *)arg1 ;
-(UIColor *)outerRingColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(void)setCenterImage:(UIImage *)arg1 ;
-(UIImage *)centerImage;
@end

