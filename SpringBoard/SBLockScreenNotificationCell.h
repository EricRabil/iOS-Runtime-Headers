/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationCell.h>

@protocol SBAwayListCellButtonHandler, UIScrollViewDelegate;
@class SBLockScreenNotificationScrollView, SBLockScreenActionContext, UILabel, UIScrollView;

@interface SBLockScreenNotificationCell : SBNotificationCell {

	BOOL _isTopCell;
	double _currentContentAlpha;
	id<SBAwayListCellButtonHandler> _actionButtonHandler;
	SBLockScreenNotificationScrollView* _contentScrollView;
	SBLockScreenActionContext* _lockScreenActionContext;
	UILabel* _unlockTextLabel;
	id<UIScrollViewDelegate> _delegate;
	BOOL _resetsScrollOnPluginWillDisable;
	double _contentScrollViewWidth;

}

@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isTopCell;                                                   //@synthesize isTopCell=_isTopCell - In the implementation block
@property (assign,nonatomic) double contentScrollViewWidth;                                    //@synthesize contentScrollViewWidth=_contentScrollViewWidth - In the implementation block
@property (nonatomic,retain) SBLockScreenActionContext * lockScreenActionContext;              //@synthesize lockScreenActionContext=_lockScreenActionContext - In the implementation block
@property (nonatomic,readonly) UIScrollView * contentScrollView;                               //@synthesize contentScrollView=_contentScrollView - In the implementation block
@property (assign,nonatomic) BOOL resetsScrollOnPluginWillDisable;                             //@synthesize resetsScrollOnPluginWillDisable=_resetsScrollOnPluginWillDisable - In the implementation block
+(id)defaultColorForRelevanceDate;
+(id)defaultColorForEventDate;
+(id)defaultColorForPrimaryText;
+(id)defaultColorForSubtitleText;
+(id)defaultColorForSecondaryText;
+(BOOL)wantsUnlockActionText;
+(double)unlockLineBaselineOffsetFromPreviousLine;
+(double)rowHeightForTitle:(id)arg1 subtitle:(id)arg2 body:(id)arg3 maxLines:(unsigned long long)arg4 attachmentSize:(CGSize)arg5 secondaryContentSize:(CGSize)arg6 datesVisible:(BOOL)arg7 rowWidth:(double)arg8 includeUnlockActionText:(BOOL)arg9 ;
+(double)lastLineBottomPadding;
-(BOOL)shouldVerticallyCenterContent;
-(void)setRelevanceDateLabel:(id)arg1 ;
-(SBLockScreenActionContext *)lockScreenActionContext;
-(void)setLockScreenActionContext:(SBLockScreenActionContext *)arg1 ;
-(id)_secondaryContentView;
-(void)setResetsScrollOnPluginWillDisable:(BOOL)arg1 ;
-(void)_notePluginDisabled:(id)arg1 ;
-(void)scrollToOriginAnimated:(BOOL)arg1 ;
-(id)_vibrantTextColor;
-(void)_updateUnlockText:(id)arg1 ;
-(id)_buttonWithLabel:(id)arg1 ;
-(void)_handleActionButtonPress:(id)arg1 ;
-(double)_unlockTextOriginY;
-(void)resetScrollView;
-(void)setContentScrollViewWidth:(double)arg1 ;
-(void)setIsTopCell:(BOOL)arg1 ;
-(void)setButtonLabel:(id)arg1 handler:(id)arg2 ;
-(BOOL)shouldAnimateHintForTouchInCell:(CGPoint)arg1 ;
-(double)contentScrollViewWidth;
-(BOOL)resetsScrollOnPluginWillDisable;
-(void)layoutSubviews;
-(void)setDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<UIScrollViewDelegate>)delegate;
-(void)prepareForReuse;
-(long long)_separatorBackdropOverlayBlendMode;
-(void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1 ;
-(UIScrollView *)contentScrollView;
-(BOOL)isTopCell;
-(void)setContentAlpha:(double)arg1 ;
@end

