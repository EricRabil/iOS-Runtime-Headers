/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music.JSObject.h>

@class NSString, _TtC5Music9JSArtwork;

@interface Music.JSConnectUser : Music.JSObject {

	 connectID;
	 name;
	 displayName;
	 artwork;

}

@property (copy,nonatomic) NSString * connectID; 
@property (copy,nonatomic) NSString * name; 
@property (copy,nonatomic) NSString * displayName; 
@property (retain,nonatomic) _TtC5Music9JSArtwork * artwork; 
-(NSString *)connectID;
-(void)setConnectID:(NSString *)arg1 ;
-(void)invokeMethod:(id)arg1 arguments:(id)arg2 ;
-(void)updateProperty:(id)arg1 value:(id)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(_TtC5Music9JSArtwork *)artwork;
-(void)setArtwork:(_TtC5Music9JSArtwork *)arg1 ;
@end
