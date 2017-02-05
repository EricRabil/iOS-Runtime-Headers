/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:15 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PBBridgeSupport/PBBridgeSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PBBProtoDidMakeAutoLockChoice : PBCodable <NSCopying> {

	BOOL _accept;
	SCD_Struct_PB1 _has;

}

@property (assign,nonatomic) BOOL hasAccept; 
@property (assign,nonatomic) BOOL accept;                 //@synthesize accept=_accept - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAccept:(BOOL)arg1 ;
-(void)setHasAccept:(BOOL)arg1 ;
-(BOOL)hasAccept;
-(BOOL)accept;
@end

