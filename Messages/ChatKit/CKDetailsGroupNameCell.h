/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:19 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKDetailsCell.h>
#import <libobjc.A.dylib/CKDetailsCell.h>

@class CKDetailsAddGroupNameView, NSString;

@interface CKDetailsGroupNameCell : CKDetailsCell <CKDetailsCell> {

	CKDetailsAddGroupNameView* _groupNameView;

}

@property (nonatomic,retain) CKDetailsAddGroupNameView * groupNameView;              //@synthesize groupNameView=_groupNameView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
+(BOOL)shouldHighlight;
-(void)layoutSubviews;
-(void)dealloc;
-(CKDetailsAddGroupNameView *)groupNameView;
-(void)setGroupNameView:(CKDetailsAddGroupNameView *)arg1 ;
@end

