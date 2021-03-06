/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:05 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUIStatusOverlayProvider;
@class UINavigationController, SKUIClientContext, UIView, _UINavigationControllerPalette, UIViewController;

@interface SKUINavigationControllerAssistant : NSObject {

	BOOL _hidesShadow;
	UINavigationController* _navigationController;
	SKUIClientContext* _clientContext;
	id<SKUIStatusOverlayProvider> _statusOverlayProvider;
	UIView* _childPaletteView;
	_UINavigationControllerPalette* _paletteBackgroundView;
	UIViewController* _statusOverlayViewController;

}

@property (nonatomic,retain) UIView * childPaletteView;                                           //@synthesize childPaletteView=_childPaletteView - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;                //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) _UINavigationControllerPalette * paletteBackgroundView;              //@synthesize paletteBackgroundView=_paletteBackgroundView - In the implementation block
@property (nonatomic,retain) UIViewController * statusOverlayViewController;                      //@synthesize statusOverlayViewController=_statusOverlayViewController - In the implementation block
@property (nonatomic,readonly) SKUIClientContext * clientContext;                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic) BOOL hidesShadow;                                                    //@synthesize hidesShadow=_hidesShadow - In the implementation block
@property (nonatomic,retain) id<SKUIStatusOverlayProvider> statusOverlayProvider;                 //@synthesize statusOverlayProvider=_statusOverlayProvider - In the implementation block
+(id)existingAssistantForNavigationController:(id)arg1 ;
+(id)assistantForNavigationController:(id)arg1 clientContext:(id)arg2 ;
-(void)dealloc;
-(BOOL)hidesShadow;
-(void)setHidesShadow:(BOOL)arg1 ;
-(UINavigationController *)navigationController;
-(void)willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)setPalettePinningBarHidden:(BOOL)arg1 ;
-(void)setPaletteView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setStatusOverlayProvider:(id<SKUIStatusOverlayProvider>)arg1 ;
-(id<SKUIStatusOverlayProvider>)statusOverlayProvider;
-(void)setStatusOverlayProvider:(id)arg1 animated:(BOOL)arg2 ;
-(void)_previewDocumentChangeNotification:(id)arg1 ;
-(id)_initWithNavigationController:(id)arg1 clientContext:(id)arg2 ;
-(_UINavigationControllerPalette *)paletteBackgroundView;
-(void)_transitionToPaletteView:(id)arg1 animated:(BOOL)arg2 operation:(long long)arg3 ;
-(void)_setStatusOverlayProvider:(id)arg1 animated:(BOOL)arg2 ;
-(UIView *)childPaletteView;
-(UIViewController *)statusOverlayViewController;
-(void)setStatusOverlayViewController:(UIViewController *)arg1 ;
-(void)_hideOverlayView:(id)arg1 animated:(BOOL)arg2 ;
-(void)_showOverlayView:(id)arg1 previousOverlayView:(id)arg2 animated:(BOOL)arg3 ;
-(void)setChildPaletteView:(UIView *)arg1 ;
-(void)_hideChildPaletteView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPaletteBackgroundView:(_UINavigationControllerPalette *)arg1 ;
@end

