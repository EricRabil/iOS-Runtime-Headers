/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:37:22 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKCCGalleryCollectionDelegate;
@class NSString;

@interface NTKCCGalleryCollection : NSObject {

	NSString* _title;
	/*^block*/id _calloutName;
	NSString* _descriptionText;
	id<NTKCCGalleryCollectionDelegate> _delegate;

}

@property (nonatomic,copy) NSString * title;                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * descriptionText;                                        //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,copy) id calloutName;                                                    //@synthesize calloutName=_calloutName - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCCGalleryCollectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_daytonaFaces;
+(id)_victoryFaces;
+(id)_zeusFaces;
+(id)_activityFaces;
+(id)_numeralsFaces;
+(id)_utilityFaces;
+(id)_modularFaces;
+(id)_simpleFaces;
+(id)_motionFaces;
+(id)_astronomyFaces;
+(id)_colorFaces;
+(id)_solarFaces;
+(id)_timelapseFaces;
+(id)_photoFaces;
+(id)_complicationFaces;
+(id)_mickeyAndMinnieFaces;
+(id)_chronographFaces;
+(id)_extraLargeFaces;
+(id)galleryCollections;
+(id)sampleFacesWithApp:(id)arg1 ;
+(id)sampleFacesWithApp:(id)arg1 notIncludingFaceStyle:(long long)arg2 ;
+(id)_galleryCollectionWithCollectionIdentifier:(id)arg1 title:(id)arg2 calloutName:(/*^block*/id)arg3 ;
-(id)calloutName;
-(void)setCalloutName:(id)arg1 ;
-(void)setDelegate:(id<NTKCCGalleryCollectionDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id<NTKCCGalleryCollectionDelegate>)delegate;
-(NSString *)title;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(unsigned long long)numberOfFaces;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfFace:(id)arg1 ;
@end

