/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/_UITableViewCellActionButton.h>

@class UIImageView, SBNotificationSeparatorView;

@interface SBTableViewCellDismissActionButton : _UITableViewCellActionButton {

	UIImageView* _dismissImageView;
	SBNotificationSeparatorView* _topSeparatorView;
	SBNotificationSeparatorView* _bottomSeparatorView;
	BOOL _shouldUseNarrowWidth;
	BOOL _drawsTopSeparator;
	BOOL _drawsBottomSeparator;
	Class _separatorClass;

}

@property (nonatomic,retain) SBNotificationSeparatorView * topSeparatorView;                 //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) SBNotificationSeparatorView * bottomSeparatorView;              //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (assign,nonatomic) BOOL shouldUseNarrowWidth;                                      //@synthesize shouldUseNarrowWidth=_shouldUseNarrowWidth - In the implementation block
@property (nonatomic,retain) Class separatorClass;                                           //@synthesize separatorClass=_separatorClass - In the implementation block
@property (assign,nonatomic) BOOL drawsTopSeparator;                                         //@synthesize drawsTopSeparator=_drawsTopSeparator - In the implementation block
@property (assign,nonatomic) BOOL drawsBottomSeparator;                                      //@synthesize drawsBottomSeparator=_drawsBottomSeparator - In the implementation block
-(void)setDrawsBottomSeparator:(BOOL)arg1 ;
-(void)setDrawsTopSeparator:(BOOL)arg1 ;
-(BOOL)shouldUseNarrowWidth;
-(void)setShouldUseNarrowWidth:(BOOL)arg1 ;
-(Class)separatorClass;
-(void)setSeparatorClass:(Class)arg1 ;
-(BOOL)drawsTopSeparator;
-(BOOL)drawsBottomSeparator;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SBNotificationSeparatorView *)topSeparatorView;
-(SBNotificationSeparatorView *)bottomSeparatorView;
-(void)setTopSeparatorView:(SBNotificationSeparatorView *)arg1 ;
-(void)setBottomSeparatorView:(SBNotificationSeparatorView *)arg1 ;
@end
