/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MusicModelConnectUser : MPModelPerson {

	NSString* _connectID;
	NSString* _displayName;
	/*^block*/id _artworkCatalogBlock;

}

@property (nonatomic,copy) NSString * connectID;                //@synthesize connectID=_connectID - In the implementation block
@property (nonatomic,copy) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) id artworkCatalogBlock;              //@synthesize artworkCatalogBlock=_artworkCatalogBlock - In the implementation block
+(id)__connectID__KEY;
+(id)__MusicModelPropertyConnectUserID__PROPERTY;
+(id)__displayName__KEY;
+(id)__MusicModelPropertyConnectUserDisplayName__PROPERTY;
+(id)__MusicModelPropertyConnectUserArtwork__PROPERTY;
+(id)__artworkCatalogBlock__KEY;
-(NSString *)connectID;
-(void)setConnectID:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)artworkCatalog;
-(void)setArtworkCatalogBlock:(id)arg1 ;
-(id)artworkCatalogBlock;
@end
