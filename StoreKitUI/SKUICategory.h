/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:02 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIArtworkProviding;
@class NSArray, NSString, NSURL;

@interface SKUICategory : NSObject {

	long long _categoryIdentifier;
	NSArray* _children;
	NSString* _name;
	NSString* _parentLabel;
	NSURL* _url;
	id<SKUIArtworkProviding> _artworkProvider;

}

@property (nonatomic,readonly) id<SKUIArtworkProviding> artworkProvider;              //@synthesize artworkProvider=_artworkProvider - In the implementation block
@property (nonatomic,readonly) long long categoryIdentifier;                          //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * children;                                    //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * parentLabel;                                //@synthesize parentLabel=_parentLabel - In the implementation block
-(NSString *)name;
-(NSURL *)URL;
-(long long)categoryIdentifier;
-(id<SKUIArtworkProviding>)artworkProvider;
-(NSArray *)children;
-(id)initWithCategoryDictionary:(id)arg1 ;
-(BOOL)containsURL:(id)arg1 ;
-(id)subcategoryContainingURL:(id)arg1 ;
-(NSString *)parentLabel;
@end

