/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCopying.h>
#import <Music/Music.GenericListConfigurable.h>

@class NSString, MPArtworkCatalog, NSArray, NSDictionary, SSLookupItemArtwork;

@interface Music.MediaSocialAuthor : NSObject <NSCopying, Music.GenericListConfigurable> {

	 name;
	 authorType;
	 dsid;
	 identifier;
	 permissions;
	 storePlatformData;
	 lookupItemArtwork;

}

@property (copy,nonatomic) NSString * name; 
@property (copy,nonatomic) NSString * authorType; 
@property (copy,nonatomic) NSString * dsid; 
@property (copy,nonatomic) NSString * identifier; 
@property (copy,nonatomic) NSArray * permissions; 
@property (copy,nonatomic) NSDictionary * storePlatformData; 
@property (retain,nonatomic) SSLookupItemArtwork * lookupItemArtwork; 
@property (readonly,nonatomic) long long hash; 
@property (readonly,nonatomic) NSString * title; 
@property (readonly,nonatomic) MPArtworkCatalog * lockupArtworkCatalog; 
-(MPArtworkCatalog *)lockupArtworkCatalog;
-(SSLookupItemArtwork *)lookupItemArtwork;
-(void)setLookupItemArtwork:(SSLookupItemArtwork *)arg1 ;
-(id)init;
-(long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(void*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithAuthorDictionary:(id)arg1 ;
-(void)setStorePlatformData:(NSDictionary *)arg1 ;
-(NSString *)dsid;
-(NSString *)authorType;
-(NSArray *)permissions;
-(NSDictionary *)storePlatformData;
-(void)setAuthorType:(NSString *)arg1 ;
-(void)setDsid:(NSString *)arg1 ;
-(void)setPermissions:(NSArray *)arg1 ;
@end

