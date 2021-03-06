/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:24 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>

@protocol CKTranscriptPluginView;
@class UIView, IMBalloonPluginDataSource, CKInteractiveBalloonImageView, CKBalloonImageView;

@interface CKTranscriptPluginBalloonView : CKBalloonView {

	BOOL _isInteractive;
	BOOL _mayReparentPluginViews;
	BOOL _suppressMask;
	UIView*<CKTranscriptPluginView> _pluginView;
	IMBalloonPluginDataSource* _dataSource;
	CKInteractiveBalloonImageView* _tailMask;
	CKBalloonImageView* _outlineMask;

}

@property (nonatomic,retain) CKInteractiveBalloonImageView * tailMask;                //@synthesize tailMask=_tailMask - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * outlineMask;                        //@synthesize outlineMask=_outlineMask - In the implementation block
@property (assign,nonatomic) BOOL suppressMask;                                       //@synthesize suppressMask=_suppressMask - In the implementation block
@property (nonatomic,retain) UIView*<CKTranscriptPluginView> pluginView;              //@synthesize pluginView=_pluginView - In the implementation block
@property (nonatomic,retain) IMBalloonPluginDataSource * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL isInteractive;                                      //@synthesize isInteractive=_isInteractive - In the implementation block
@property (nonatomic,readonly) CGRect maskFrame; 
@property (nonatomic,readonly) BOOL shouldMaskWhenOpaque; 
@property (assign,nonatomic) BOOL mayReparentPluginViews;                             //@synthesize mayReparentPluginViews=_mayReparentPluginViews - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDataSource:(IMBalloonPluginDataSource *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(IMBalloonPluginDataSource *)dataSource;
-(BOOL)isInteractive;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(UIView*<CKTranscriptPluginView>)pluginView;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(id)imageForInvisibleInkEffectView;
-(void)setMayReparentPluginViews:(BOOL)arg1 ;
-(BOOL)mayReparentPluginViews;
-(void)configureForComposition:(id)arg1 ;
-(void)setPluginView:(UIView*<CKTranscriptPluginView>)arg1 ;
-(void)setTailMask:(CKInteractiveBalloonImageView *)arg1 ;
-(void)setOutlineMask:(CKBalloonImageView *)arg1 ;
-(CKInteractiveBalloonImageView *)tailMask;
-(CKBalloonImageView *)outlineMask;
-(BOOL)suppressMask;
-(void)setSuppressMask:(BOOL)arg1 ;
-(void)configureForTranscriptPlugin:(id)arg1 ;
-(CGRect)maskFrame;
-(BOOL)shouldMaskWhenOpaque;
-(void)_pluginViewReadyForSnapshot:(id)arg1 ;
-(void)setIsInteractive:(BOOL)arg1 ;
@end

