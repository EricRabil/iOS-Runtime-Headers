/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class NSString;

@interface Music.ConnectColdStartView : UICollectionReusableView {

	 detailText;
	 systemButtonText;
	 systemButtonHandler;
	 textDrawingCache;
	 detailTextDrawingView;
	 systemStyleButton.storage;
	 detailTextLabelProperties;

}

@property (copy,nonatomic) NSString * detailText; 
@property (copy,nonatomic) NSString * systemButtonText; 
@property (copy,nonatomic) id systemButtonHandler; 
+(double)maximumTextWidth;
+(id)reuseIdentifier;
+(void)setReuseIdentifier:(id)arg1 ;
-(id)systemButtonHandler;
-(void)setSystemButtonHandler:(id)arg1 ;
-(NSString *)systemButtonText;
-(void)setSystemButtonText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(void)music_inheritedLayoutInsetsDidChange;
@end

