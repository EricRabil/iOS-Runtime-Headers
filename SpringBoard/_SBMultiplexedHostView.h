/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@protocol _SBMultiplexedHostViewScreenRectObserver;
@class NSString, UIView;

@interface _SBMultiplexedHostView : SBFTouchPassThroughView {

	NSString* _contextHostRequester;
	UIView* _hostView;
	UIView* _snapshotView;
	BOOL _clippingDisabled;
	NSString* _requester;
	id<_SBMultiplexedHostViewScreenRectObserver> _frameObserver;

}

@property (nonatomic,copy,readonly) NSString * requester;                                                    //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain) UIView * hostView;                                                              //@synthesize hostView=_hostView - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;                                                          //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic,__weak) id<_SBMultiplexedHostViewScreenRectObserver> frameObserver;              //@synthesize frameObserver=_frameObserver - In the implementation block
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled;                                //@synthesize clippingDisabled=_clippingDisabled - In the implementation block
-(id)initWithRequester:(id)arg1 ;
-(void)setFrameObserver:(id<_SBMultiplexedHostViewScreenRectObserver>)arg1 ;
-(void)_notifyFrameObserverThatScreenRectDidChange;
-(id<_SBMultiplexedHostViewScreenRectObserver>)frameObserver;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)snapshotView;
-(void)_didScroll;
-(UIView *)hostView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(NSString *)requester;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(BOOL)isClippingDisabled;
-(void)setHostView:(UIView *)arg1 ;
@end

