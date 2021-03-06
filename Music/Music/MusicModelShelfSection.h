/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MusicModelShelfSection : MPModelObject {

	BOOL _featured;
	BOOL _rankedList;
	NSString* _title;
	long long _heightClass;
	long long _uniformCellType;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,getter=isFeatured,nonatomic) BOOL featured;                  //@synthesize featured=_featured - In the implementation block
@property (assign,nonatomic) long long heightClass;                            //@synthesize heightClass=_heightClass - In the implementation block
@property (assign,getter=isRankedList,nonatomic) BOOL rankedList;              //@synthesize rankedList=_rankedList - In the implementation block
@property (assign,nonatomic) long long uniformCellType;                        //@synthesize uniformCellType=_uniformCellType - In the implementation block
+(id)__MusicModelPropertyShelfSectionTitle__PROPERTY;
+(id)__featured__KEY;
+(id)__MusicModelPropertyShelfSectionFeatured__PROPERTY;
+(id)__heightClass__KEY;
+(id)__MusicModelPropertyShelfSectionHeightClass__PROPERTY;
+(id)__rankedList__KEY;
+(id)__MusicModelPropertyShelfSectionRankedList__PROPERTY;
+(id)__uniformCellType__KEY;
+(id)__MusicModelPropertyShelfSectionUniformCellType__PROPERTY;
+(id)__title__KEY;
-(long long)heightClass;
-(void)setHeightClass:(long long)arg1 ;
-(BOOL)isRankedList;
-(long long)uniformCellType;
-(void)setUniformCellType:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isFeatured;
-(void)setFeatured:(BOOL)arg1 ;
-(void)setRankedList:(BOOL)arg1 ;
@end

