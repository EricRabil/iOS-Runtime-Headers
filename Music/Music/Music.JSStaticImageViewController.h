/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class _TtC5Music22JSStaticImageViewModel, NSString, NSData;

@interface Music.JSStaticImageViewController : UIViewController {

	 staticImageViewModel;
	 tapGestureRecognizerHandler;
	 imageView;
	 artworkCatalog;
	 image;
	 expectedImageAspectRatio;

}

@property (readonly,nonatomic) _TtC5Music22JSStaticImageViewModel * staticImageViewModel; 
@property (copy,nonatomic) NSString * playActivityFeatureName; 
@property (readonly,nonatomic) NSData * playActivityRecommendationData; 
-(_TtC5Music22JSStaticImageViewModel *)staticImageViewModel;
-(id)initWithStaticImageViewModel:(id)arg1 ;
-(void)staticImageViewModelDidChangeImageResource:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
@end

