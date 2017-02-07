/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:18 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@class NSAttributedString;

@interface CKMessageStatusChatItem : CKChatItem {

	BOOL _buttonSizeLoaded;
	NSAttributedString* _transcriptButtonText;
	CGSize _buttonSize;
	UIEdgeInsets _buttonTextAlignmentInsets;

}

@property (nonatomic,copy) NSAttributedString * transcriptButtonText;                      //@synthesize transcriptButtonText=_transcriptButtonText - In the implementation block
@property (assign,getter=isButtonSizeLoaded,nonatomic) BOOL buttonSizeLoaded;              //@synthesize buttonSizeLoaded=_buttonSizeLoaded - In the implementation block
@property (nonatomic,readonly) CGSize buttonSize;                                          //@synthesize buttonSize=_buttonSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets buttonTextAlignmentInsets;                     //@synthesize buttonTextAlignmentInsets=_buttonTextAlignmentInsets - In the implementation block
@property (nonatomic,readonly) long long buttonType; 
@property (nonatomic,readonly) BOOL allowsEffectAutoPlayback; 
+(id)thePastDateFormatter;
+(id)thisWeekRelativeDateFormatter;
+(id)todayDateFormatter;
+(id)createImageAsTextAttachment;
-(unsigned long long)count;
-(UIEdgeInsets)contentInsets;
-(long long)buttonType;
-(Class)cellClass;
-(id)time;
-(CGSize)buttonSize;
-(BOOL)isFromMe;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(char)transcriptOrientation;
-(void)unloadTranscriptText;
-(void)unloadSize;
-(UIEdgeInsets)transcriptTextAlignmentInsets;
-(UIEdgeInsets)buttonTextAlignmentInsets;
-(BOOL)wantsDrawerLayout;
-(long long)statusType;
-(long long)expireStatusType;
-(NSAttributedString *)transcriptButtonText;
-(id)loadTranscriptButtonText;
-(CGSize)loadButtonSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
-(BOOL)allowsEffectAutoPlayback;
-(id)effectsControlStatusTextForEffectStyleID:(id)arg1 ;
-(void)setTranscriptButtonText:(NSAttributedString *)arg1 ;
-(BOOL)isButtonSizeLoaded;
-(void)setButtonSizeLoaded:(BOOL)arg1 ;
-(id)now;
@end

