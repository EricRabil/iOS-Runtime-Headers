/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 14, 2017 at 5:17:20 PM Greenwich Mean Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKPickerItem : NSObject {

	NSString* _title;
	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id selectionHandler;              //@synthesize selectionHandler=_selectionHandler - In the implementation block
+(id)itemWithTitle:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(void)handleSelectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

