/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:53 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIMetricsImpressionSession, UICollectionView, SKUIColorScheme, SKUIItemOfferButtonAppearance, SKUIMetricsController, SKUIStorePageSectionsViewController, UIColor, SKUIResourceLoader, SKUILayoutCache, SKUIClientContext;

@interface SKUIStorePageSectionContext : NSObject {

	SKUIMetricsImpressionSession* _activeMetricsImpressionSession;
	double _activePageWidth;
	UICollectionView* _collectionView;
	SKUIColorScheme* _colorScheme;
	long long _defaultPinningTransitionStyle;
	SKUIItemOfferButtonAppearance* _itemOfferButtonAppearance;
	double _landscapePageWidth;
	SKUIMetricsController* _metricsController;
	SKUIStorePageSectionsViewController* _parentViewController;
	UIColor* _placeholderColor;
	double _portraitPageWidth;
	SKUIResourceLoader* _resourceLoader;
	SKUILayoutCache* _textLayoutCache;
	long long _layoutStyle;

}

@property (nonatomic,readonly) SKUIMetricsImpressionSession * activeMetricsImpressionSession;                  //@synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext; 
@property (nonatomic,readonly) UICollectionView * collectionView;                                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) SKUIColorScheme * colorScheme;                                                  //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,readonly) UIColor * placeholderColor; 
@property (nonatomic,readonly) long long defaultPinningTransitionStyle;                                        //@synthesize defaultPinningTransitionStyle=_defaultPinningTransitionStyle - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance; 
@property (nonatomic,readonly) double activePageWidth;                                                         //@synthesize activePageWidth=_activePageWidth - In the implementation block
@property (nonatomic,readonly) double landscapePageWidth;                                                      //@synthesize landscapePageWidth=_landscapePageWidth - In the implementation block
@property (nonatomic,readonly) double portraitPageWidth;                                                       //@synthesize portraitPageWidth=_portraitPageWidth - In the implementation block
@property (nonatomic,readonly) double horizontalPadding; 
@property (nonatomic,readonly) long long layoutStyle;                                                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) SKUIMetricsController * metricsController;                                      //@synthesize metricsController=_metricsController - In the implementation block
@property (nonatomic,__weak,readonly) SKUIStorePageSectionsViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,readonly) SKUIResourceLoader * resourceLoader;                                            //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,readonly) SKUILayoutCache * textLayoutCache;                                              //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
-(id)init;
-(SKUIStorePageSectionsViewController *)parentViewController;
-(UICollectionView *)collectionView;
-(double)horizontalPadding;
-(void)_setCollectionView:(id)arg1 ;
-(long long)layoutStyle;
-(SKUIColorScheme *)colorScheme;
-(SKUIClientContext *)clientContext;
-(SKUIResourceLoader *)resourceLoader;
-(SKUILayoutCache *)textLayoutCache;
-(void)_setParentViewController:(id)arg1 ;
-(void)_setTextLayoutCache:(id)arg1 ;
-(void)_setColorScheme:(id)arg1 ;
-(void)_setActiveMetricsImpressionSession:(id)arg1 ;
-(void)_setDefaultPinningTransitionStyle:(long long)arg1 ;
-(void)_setMetricsController:(id)arg1 ;
-(double)activePageWidth;
-(void)_setActivePageWidth:(double)arg1 ;
-(SKUIMetricsController *)metricsController;
-(SKUIMetricsImpressionSession *)activeMetricsImpressionSession;
-(void)_setLayoutStyle:(long long)arg1 ;
-(void)_setLandscapePageWidth:(double)arg1 ;
-(void)_setPortraitPageWidth:(double)arg1 ;
-(long long)defaultPinningTransitionStyle;
-(SKUIItemOfferButtonAppearance *)itemOfferButtonAppearance;
-(double)landscapePageWidth;
-(double)portraitPageWidth;
-(void)_setResourceLoader:(id)arg1 ;
-(UIColor *)placeholderColor;
@end
