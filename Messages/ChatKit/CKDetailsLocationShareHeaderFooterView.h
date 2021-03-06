/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:26 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/CKDetailsHeaderFooterView.h>

@class UITextView, NSString;

@interface CKDetailsLocationShareHeaderFooterView : UITableViewHeaderFooterView <CKDetailsHeaderFooterView> {

	UITextView* _locationSharingTextView;

}

@property (nonatomic,retain) UITextView * locationSharingTextView;              //@synthesize locationSharingTextView=_locationSharingTextView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(UITextView *)locationSharingTextView;
-(void)setLocationSharingTextView:(UITextView *)arg1 ;
@end

