/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:15 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CKAttachmentSaver : NSObject {

	unsigned long long _errorCount;
	NSMutableArray* _attachments;

}
-(void)_pop;
-(void)_saveNextAttachment;
-(void)_saveCompletionForVideoWithPath:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)popAndSaveNextAttachment;
-(void)_saveCompletionForImage:(id)arg1 error:(id)arg2 context:(void*)arg3 ;
-(void)_saveCompletion:(id)arg1 ;
-(id)initWithAttachments:(id)arg1 ;
-(void)runToCompletion;
@end

