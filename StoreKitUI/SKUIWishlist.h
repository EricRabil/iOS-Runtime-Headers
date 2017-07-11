/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:59 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSWishlist, NSArray;

@interface SKUIWishlist : NSObject {

	SSWishlist* _database;

}

@property (nonatomic,readonly) long long accountIdentifier; 
@property (nonatomic,copy,readonly) NSArray * items; 
+(id)activeWishlist;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(BOOL)containsItemWithIdentifier:(long long)arg1 ;
-(void)postChangeNotification;
-(id)initWithAccountIdentifier:(long long)arg1 ;
-(long long)accountIdentifier;
-(void)removeItemsWithItemIdentifiers:(id)arg1 ;
@end
