/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:54 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItem.h>

@protocol SKUIArtworkProviding;
@class NSString;

@interface SKUIRedeemItem : SKUIItem {

	id<SKUIArtworkProviding> _artworks;

}

@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) long long itemIdentifier; 
@property (nonatomic,retain) id<SKUIArtworkProviding> artworks;              //@synthesize artworks=_artworks - In the implementation block
@property (assign,nonatomic) long long itemKind; 
-(id<SKUIArtworkProviding>)artworks;
-(void)setArtworks:(id<SKUIArtworkProviding>)arg1 ;
-(id)artworkURLForSize:(long long)arg1 ;
-(NSRange)ageBandRange;
-(id)largestArtworkURL;
@end

