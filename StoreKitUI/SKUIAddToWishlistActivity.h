/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:59 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class SKUIClientContext, SKUIProductPageItem;

@interface SKUIAddToWishlistActivity : UIActivity {

	SKUIClientContext* _clientContext;
	SKUIProductPageItem* _item;

}
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(id)_beforeActivity;
-(id)initWithItem:(id)arg1 clientContext:(id)arg2 ;
@end

