/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music.JSObject.h>

@class NSString, _TtC5Music9JSArtwork, MPStoreItemMetadata, _TtC5Music14JSUpsellBanner, _TtC5Music15JSBarButtonItem;

@interface Music.JSHeaderItem : Music.JSObject {

	 headerItemDelegate;
	 subtitle;
	 supertitle;
	 title;
	 showsLargeTitleHeader;
	 promotionalBackgroundArtwork;
	 promotionalThumbnailArtwork;
	 storeItemMetadata;
	 upsellBanner;
	 trailingBarButtonItem;
	 isUpdatingFromJS;

}

@property (copy,nonatomic) NSString * subtitle; 
@property (copy,nonatomic) NSString * supertitle; 
@property (copy,nonatomic) NSString * title; 
@property (assign,nonatomic) BOOL showsLargeTitleHeader; 
@property (retain,nonatomic) _TtC5Music9JSArtwork * promotionalBackgroundArtwork; 
@property (retain,nonatomic) _TtC5Music9JSArtwork * promotionalThumbnailArtwork; 
@property (retain,nonatomic) MPStoreItemMetadata * storeItemMetadata; 
@property (retain,nonatomic) _TtC5Music14JSUpsellBanner * upsellBanner; 
@property (retain,nonatomic) _TtC5Music15JSBarButtonItem * trailingBarButtonItem; 
-(void)invokeMethod:(id)arg1 arguments:(id)arg2 ;
-(void)updateProperty:(id)arg1 value:(id)arg2 ;
-(_TtC5Music9JSArtwork *)promotionalBackgroundArtwork;
-(void)setPromotionalBackgroundArtwork:(_TtC5Music9JSArtwork *)arg1 ;
-(_TtC5Music9JSArtwork *)promotionalThumbnailArtwork;
-(void)setPromotionalThumbnailArtwork:(_TtC5Music9JSArtwork *)arg1 ;
-(NSString *)supertitle;
-(void)setSupertitle:(NSString *)arg1 ;
-(BOOL)showsLargeTitleHeader;
-(void)setShowsLargeTitleHeader:(BOOL)arg1 ;
-(_TtC5Music14JSUpsellBanner *)upsellBanner;
-(void)setUpsellBanner:(_TtC5Music14JSUpsellBanner *)arg1 ;
-(_TtC5Music15JSBarButtonItem *)trailingBarButtonItem;
-(void)setTrailingBarButtonItem:(_TtC5Music15JSBarButtonItem *)arg1 ;
-(void)artworkDidChange:(id)arg1 ;
-(void)barButtonItemDidChange:(id)arg1 ;
-(void)upsellBannerDidChange:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setStoreItemMetadata:(MPStoreItemMetadata *)arg1 ;
-(MPStoreItemMetadata *)storeItemMetadata;
@end
