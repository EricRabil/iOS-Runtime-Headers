/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music-Structs.h>
#import <UIKit/UIControl.h>

@class NSString;

@interface Music.IndexBar : UIControl {

	 contentEdgeInsets;
	 hitTestEdgeInsets;
	 dataSource;
	 delegate;
	 selectionManager;
	 previousHeight;
	 _entries;
	 _selection;
	 _visibleEntries;
	 accessibilityPositionKey;
	 accessibilityTraitTableIndex;
	 accessibilityKeyboardKeySelectedNotification;
	 _accessibilityTitlePosted;
	 _accessibilityLastSelectedPosition;

}

@property (assign,nonatomic) UIEdgeInsets contentEdgeInsets; 
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets; 
@property (readonly,nonatomic) NSString * accessibilityPositionKey; 
@property (readonly,nonatomic) unsigned long long accessibilityTraitTableIndex; 
@property (readonly,nonatomic) unsigned accessibilityKeyboardKeySelectedNotification; 
@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (assign,nonatomic) CGPoint accessibilityActivationPoint; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
+(CGSize)dotSize;
-(unsigned)accessibilityKeyboardKeySelectedNotification;
-(unsigned long long)accessibilityTraitTableIndex;
-(NSString *)accessibilityPositionKey;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(UIEdgeInsets)contentEdgeInsets;
-(NSString *)accessibilityLabel;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
@end

