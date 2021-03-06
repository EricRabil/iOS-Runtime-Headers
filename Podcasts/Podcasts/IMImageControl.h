/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImageView, UIView, UIImage;

@interface IMImageControl : NSObject {

	UIImageView* _view;
	UIImageView* _reflection;
	UIView* _leftStroke;
	UIView* _rightStroke;
	UIView* _bottomStroke;
	UIView* _topStroke;
	BOOL _showsReflection;
	BOOL _showStroke;
	id _value;

}

@property (assign,nonatomic) BOOL showsReflection;              //@synthesize showsReflection=_showsReflection - In the implementation block
@property (assign,nonatomic) BOOL showStroke;                   //@synthesize showStroke=_showStroke - In the implementation block
@property (nonatomic,readonly) UIImageView * view; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,retain) id value;                          //@synthesize value=_value - In the implementation block
-(void)updateStroke;
-(void)updateReflection;
-(id)reflectedImageRepresentationWithHeight:(double)arg1 ;
-(void)setShowsReflection:(BOOL)arg1 ;
-(BOOL)showsReflection;
-(BOOL)showStroke;
-(void)setShowStroke:(BOOL)arg1 ;
-(void)dealloc;
-(UIImageView *)view;
-(id)value;
-(void)setValue:(id)arg1 ;
-(UIImage *)image;
-(id)reflection;
@end

