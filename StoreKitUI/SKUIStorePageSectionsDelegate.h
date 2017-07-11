/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:51 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIStorePageSectionsDelegate <NSObject>
@optional
-(void)sectionsViewControllerDidScroll:(id)arg1;
-(void)sectionsViewController:(id)arg1 willScrollToOffset:(CGPoint)arg2 visibleRange:(SKUIIndexPathRange)arg3;
-(void)sectionsViewControllerDidDismissOverlayController:(id)arg1;
-(BOOL)sectionsViewController:(id)arg1 showProductPageForItem:(id)arg2;
-(BOOL)sectionsViewController:(id)arg1 showStorePageForURL:(id)arg2;

@end
