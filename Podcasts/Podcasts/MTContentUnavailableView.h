/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>
#import <Podcasts/MTColorThemeable.h>

@class MTColorTheme, UILabel, UIView, UIImageView, UIButton, NSString, UIImage;

@interface MTContentUnavailableView : UIView <MTColorThemeable> {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIView* _containerView;
	UIImageView* _imageView;
	UIButton* _button;
	NSString* _title;
	NSString* _message;
	UIImage* _placeholderImage;
	NSString* _buttonText;
	/*^block*/id _buttonCallback;
	MTColorTheme* _colorTheme;

}

@property (nonatomic,retain) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                      //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;              //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) NSString * buttonText;                   //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) id buttonCallback;                         //@synthesize buttonCallback=_buttonCallback - In the implementation block
@property (nonatomic,retain) MTColorTheme * colorTheme;               //@synthesize colorTheme=_colorTheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageLabelWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 message:(id)arg3 ;
-(void)_sizeCategoryDidChange:(id)arg1 ;
-(void)_buttonClick;
-(id)buttonCallback;
-(void)setButtonCallback:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
@end

