/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:20 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class CKBrowserSwitcherFooterView, CKMessageEntryView;

@interface CKBrowserFooterTransitionView : UIView {

	CKBrowserSwitcherFooterView* _switcherFooterView;
	CKMessageEntryView* _entryView;

}

@property (nonatomic,retain) CKBrowserSwitcherFooterView * switcherFooterView;              //@synthesize switcherFooterView=_switcherFooterView - In the implementation block
@property (nonatomic,retain) CKMessageEntryView * entryView;                                //@synthesize entryView=_entryView - In the implementation block
-(void)layoutSubviews;
-(CKMessageEntryView *)entryView;
-(void)setEntryView:(CKMessageEntryView *)arg1 ;
-(void)setSwitcherFooterView:(CKBrowserSwitcherFooterView *)arg1 ;
-(CKBrowserSwitcherFooterView *)switcherFooterView;
-(id)initWithFrame:(CGRect)arg1 footerView:(id)arg2 entryView:(id)arg3 ;
-(void)prepareForTransitionFromFooterViewToEntryView;
-(void)transitionFromFooterViewToEntryView;
-(void)prepareForTransitionFromEntryViewToFooterView;
-(void)transitionFromEntryViewToFooterView;
-(void)prepareForTransitionFromTransparentToEntryView;
-(void)transitionFromTransparentToEntryView;
-(void)prepareForTransitionFromEntryViewToTransparent;
-(void)transitionFromEntryViewToTransparent;
@end

