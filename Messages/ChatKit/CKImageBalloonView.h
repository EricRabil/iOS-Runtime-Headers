/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:19 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonView.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@class CKAnimatedImage, CKBalloonImageView, UIImageView, NSArray, NSString;

@interface CKImageBalloonView : CKBalloonView <CKAnimationTimerObserver> {

	BOOL _isIrisAsset;
	BOOL _suppressMask;
	CKAnimatedImage* _animatedImage;
	CKBalloonImageView* _tailMask;
	CKBalloonImageView* _outlineMask;
	UIImageView* _irisBadgeView;
	NSArray* _frames;
	unsigned long long _animationFrameOffset;

}

@property (nonatomic,copy) NSArray * frames;                                       //@synthesize frames=_frames - In the implementation block
@property (nonatomic,retain) UIImageView * irisBadgeView;                          //@synthesize irisBadgeView=_irisBadgeView - In the implementation block
@property (assign,nonatomic) unsigned long long animationFrameOffset;              //@synthesize animationFrameOffset=_animationFrameOffset - In the implementation block
@property (assign,nonatomic) BOOL suppressMask;                                    //@synthesize suppressMask=_suppressMask - In the implementation block
@property (nonatomic,retain) CKAnimatedImage * animatedImage;                      //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * tailMask;                        //@synthesize tailMask=_tailMask - In the implementation block
@property (nonatomic,retain) CKBalloonImageView * outlineMask;                     //@synthesize outlineMask=_outlineMask - In the implementation block
@property (assign,nonatomic) BOOL isIrisAsset;                                     //@synthesize isIrisAsset=_isIrisAsset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(NSString *)description;
-(void)prepareForReuse;
-(void)prepareForDisplay;
-(void)clearFilters;
-(void)addFilter:(id)arg1 ;
-(id)overlayColor;
-(Class)invisibleInkEffectViewClass;
-(void)invisibleInkEffectViewWasUncovered;
-(void)attachInvisibleInkEffectView;
-(void)detachInvisibleInkEffectView;
-(BOOL)isIrisAsset;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)setIsIrisAsset:(BOOL)arg1 ;
-(void)updateAnimationTimerObserving;
-(void)setHasTail:(BOOL)arg1 ;
-(void)setCanUseOpaqueMask:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasResumed;
-(id)imageForInvisibleInkEffectView;
-(BOOL)needsGroupOpacity;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(UIImageView *)irisBadgeView;
-(void)setFrames:(NSArray *)arg1 ;
-(NSArray *)frames;
-(void)setIrisBadgeView:(UIImageView *)arg1 ;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(CKAnimatedImage *)animatedImage;
-(void)configureForComposition:(id)arg1 ;
-(void)setTailMask:(CKBalloonImageView *)arg1 ;
-(void)setOutlineMask:(CKBalloonImageView *)arg1 ;
-(CKBalloonImageView *)tailMask;
-(CKBalloonImageView *)outlineMask;
-(BOOL)suppressMask;
-(void)setSuppressMask:(BOOL)arg1 ;
-(void)setAnimationFrameOffset:(unsigned long long)arg1 ;
-(unsigned long long)animationFrameOffset;
-(void)configureForTranscriptPlugin:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
@end

