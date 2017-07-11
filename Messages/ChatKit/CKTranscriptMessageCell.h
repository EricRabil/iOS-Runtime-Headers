/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:26 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKTranscriptCell.h>

@class UIButton;

@interface CKTranscriptMessageCell : CKTranscriptCell {

	BOOL _wantsContactImageLayout;
	UIButton* _failureButton;

}

@property (nonatomic,retain) UIButton * failureButton;                                     //@synthesize failureButton=_failureButton - In the implementation block
@property (assign,nonatomic) BOOL wantsContactImageLayout;                                 //@synthesize wantsContactImageLayout=_wantsContactImageLayout - In the implementation block
@property (assign,nonatomic) BOOL failed; 
@property (nonatomic,readonly) BOOL failureButtonAdjustsContentAlignmentRect; 
+(double)failureButtonWidthPlusSpacing;
-(id)description;
-(BOOL)failed;
-(void)layoutSubviewsForContents;
-(id)contactImageView;
-(UIButton *)failureButton;
-(void)setWantsContactImageLayout:(BOOL)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(BOOL)wantsContactImageLayout;
-(BOOL)failureButtonAdjustsContentAlignmentRect;
-(void)setFailureButton:(UIButton *)arg1 ;
@end
