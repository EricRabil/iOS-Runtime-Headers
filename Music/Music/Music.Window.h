/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UIWindow.h>

@class UITraitCollection;

@interface Music.Window : UIWindow {

	 screenDimensionsDidChangeHandler;
	 boundsSizeDidChangeHandler;
	 lastSeenDimensions;

}

@property (copy,nonatomic) id boundsSizeDidChangeHandler; 
@property (readonly,nonatomic) UITraitCollection * traitCollection; 
-(id)boundsSizeDidChangeHandler;
-(void)setBoundsSizeDidChangeHandler:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UITraitCollection *)traitCollection;
-(id)initWithCoder:(id)arg1 ;
@end
