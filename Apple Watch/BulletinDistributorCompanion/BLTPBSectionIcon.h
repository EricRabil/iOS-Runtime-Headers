/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:57:30 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BLTPBSectionIcon : PBCodable <NSCopying> {

	NSMutableArray* _variants;

}

@property (nonatomic,retain) NSMutableArray * variants;              //@synthesize variants=_variants - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)variants;
-(void)clearVariants;
-(unsigned long long)variantsCount;
-(void)setVariants:(NSMutableArray *)arg1 ;
-(id)variantAtIndex:(unsigned long long)arg1 ;
-(void)addVariant:(id)arg1 ;
@end

