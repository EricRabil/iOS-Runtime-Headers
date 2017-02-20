/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class MusicStoreBrowseContentItem, NSString;

@interface MusicModelFlowcaseItem : MPModelObject {

	MusicStoreBrowseContentItem* _contentItem;
	NSString* _descriptionTitleText;
	NSString* _descriptionText;
	NSString* _headlineText;
	NSString* _subtitleText;
	NSString* _titleText;
	long long _thumbnailHorizontalAlignment;
	/*^block*/id _backgroundArtworkCatalogBlock;
	/*^block*/id _thumbnailArtworkCatalogBlock;

}

@property (nonatomic,retain) MusicStoreBrowseContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
@property (nonatomic,copy) NSString * descriptionTitleText;                          //@synthesize descriptionTitleText=_descriptionTitleText - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                               //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) NSString * headlineText;                                  //@synthesize headlineText=_headlineText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                  //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                     //@synthesize titleText=_titleText - In the implementation block
@property (assign,nonatomic) long long thumbnailHorizontalAlignment;                 //@synthesize thumbnailHorizontalAlignment=_thumbnailHorizontalAlignment - In the implementation block
@property (nonatomic,copy) id backgroundArtworkCatalogBlock;                         //@synthesize backgroundArtworkCatalogBlock=_backgroundArtworkCatalogBlock - In the implementation block
@property (nonatomic,copy) id thumbnailArtworkCatalogBlock;                          //@synthesize thumbnailArtworkCatalogBlock=_thumbnailArtworkCatalogBlock - In the implementation block
+(id)__contentItem__KEY;
+(id)__titleText__KEY;
+(id)__subtitleText__KEY;
+(id)__headlineText__KEY;
+(id)__backgroundArtworkCatalogBlock__KEY;
+(id)__MusicModelRelationshipFlowcaseItemContentItem__PROPERTY;
+(id)__descriptionTitleText__KEY;
+(id)__MusicModelPropertyFlowcaseItemDescriptionTitleText__PROPERTY;
+(id)__MusicModelPropertyFlowcaseItemDescriptionText__PROPERTY;
+(id)__MusicModelPropertyFlowcaseItemHeadlineText__PROPERTY;
+(id)__MusicModelPropertyFlowcaseItemSubtitleText__PROPERTY;
+(id)__MusicModelPropertyFlowcaseItemTitleText__PROPERTY;
+(id)__thumbnailHorizontalAlignment__KEY;
+(id)__MusicModelPropertyFlowcaseItemThumbnailHorizontalAlignment__PROPERTY;
+(id)__MusicModelPropertyFlowcaseItemBackgroundArtwork__PROPERTY;
+(id)__thumbnailArtworkCatalogBlock__KEY;
+(id)__MusicModelPropertyFlowcaseItemThumbnailArtwork__PROPERTY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__descriptionText__KEY;
-(id)backgroundArtworkCatalogBlock;
-(id)backgroundArtworkCatalog;
-(NSString *)headlineText;
-(void)setHeadlineText:(NSString *)arg1 ;
-(void)setBackgroundArtworkCatalogBlock:(id)arg1 ;
-(id)thumbnailArtworkCatalogBlock;
-(id)thumbnailArtworkCatalog;
-(NSString *)descriptionTitleText;
-(void)setDescriptionTitleText:(NSString *)arg1 ;
-(long long)thumbnailHorizontalAlignment;
-(void)setThumbnailHorizontalAlignment:(long long)arg1 ;
-(void)setThumbnailArtworkCatalogBlock:(id)arg1 ;
-(id)storeContentItemObject;
-(id)storeContentItemObjectPropertiesFor:(id)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(MusicStoreBrowseContentItem *)contentItem;
-(void)setContentItem:(MusicStoreBrowseContentItem *)arg1 ;
-(NSString *)subtitleText;
@end

