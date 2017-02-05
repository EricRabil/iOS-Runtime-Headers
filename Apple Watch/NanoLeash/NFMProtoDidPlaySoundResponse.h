/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:39 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoLeash/NanoLeash-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NFMProtoDidPlaySoundResponse : PBCodable <NSCopying> {

	BOOL _didPlay;

}

@property (assign,nonatomic) BOOL didPlay;              //@synthesize didPlay=_didPlay - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)didPlay;
-(void)setDidPlay:(BOOL)arg1 ;
@end

