/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFLegibilitySettingsProviderDelegate.h>
#import <SpringBoard/SBFWallpaperViewInternalObserver.h>
#import <SpringBoard/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBFWallpaperConfigurationManagerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <SpringBoard/SBWallpaperServerDelegate.h>
#import <UIKit/UIWindowDelegate.h>
#import <SpringBoard/SBDashBoardWallpaperOverlayHosting.h>

@protocol SBDashBoardWallpaperOverlay;
@class UIWindow, UIView, SBFWallpaperView, NSHashTable, NSMutableSet, UIImage, SBWallpaperPreviewSnapshotCache, SBWallpaperControllerCoordinator, SBFFileCache, SBFWallpaperConfigurationManager, SBComposedWallpaperSpecification, SBWallpaperStyleInfo, SBWallpaperAggdLogger, NSString;

@interface SBWallpaperController : NSObject <SBFLegibilitySettingsProviderDelegate, SBFWallpaperViewInternalObserver, SBUIActiveOrientationObserver, _UISettingsKeyObserver, SBFWallpaperConfigurationManagerDelegate, BSDescriptionProviding, SBWallpaperServerDelegate, UIWindowDelegate, SBDashBoardWallpaperOverlayHosting> {

	UIWindow* _wallpaperWindow;
	UIView* _wallpaperContainerView;
	UIView* _wallpaperOverlayContainerView;
	long long _orientation;
	SBFWallpaperView* _lockscreenWallpaperView;
	SBFWallpaperView* _homescreenWallpaperView;
	SBFWallpaperView* _sharedWallpaperView;
	NSHashTable* _lockscreenObservers;
	NSHashTable* _homescreenObservers;
	NSMutableSet* _suspendColorSamplingReasons;
	NSMutableSet* _suspendWallpaperAnimationReasons;
	NSMutableSet* _requireWallpaperReasons;
	NSMutableSet* _hideHomescreenWallpaperReasons;
	NSMutableSet* _hideLockscreenWallpaperReasons;
	long long _displayedVariant;
	double _lockscreenOnlyWallpaperAlpha;
	NSHashTable* _lockscreenBlurViews;
	NSHashTable* _homescreenBlurViews;
	long long _disallowRasterizationBlockCount;
	NSMutableSet* _disallowRasterizationReasonsHomeVariant;
	NSMutableSet* _disallowRasterizationReasonsLockVariant;
	UIImage* _homescreenLightForegroundBlurImage;
	CGRect _homescreenLightForegroundBlurImageDisplayRect;
	BOOL _creatingHomescreenLightForegroundBlurImage;
	BOOL _isSuspendingMotionEffectsForBlur;
	SBWallpaperPreviewSnapshotCache* _previewCache;
	long long _activeOrientationSource;
	BOOL _coalescingGeometryChanges;
	long long _locationsWithCoalescedGeometryChanges;
	SBWallpaperControllerCoordinator* _coordinator;
	NSMutableSet* _homescreenStyleChangeDelayReasons;
	SBFFileCache* _downloadedWallpaperCache;
	SBFWallpaperConfigurationManager* _wallpaperConfigurationManager;
	UIView*<SBDashBoardWallpaperOverlay> _wallpaperOverlay;
	double _homescreenWallpaperScale;
	double _lockscreenWallpaperScale;
	SBComposedWallpaperSpecification* _overriddenComposedWallpaperSpecification;
	SBWallpaperStyleInfo* _homescreenStyleInfo;
	SBWallpaperStyleInfo* _lockscreenStyleInfo;
	SBWallpaperAggdLogger* _wallpaperAggdLogger;

}

@property (nonatomic,retain) SBFWallpaperView * lockscreenWallpaperView;                                             //@synthesize lockscreenWallpaperView=_lockscreenWallpaperView - In the implementation block
@property (nonatomic,retain) SBFWallpaperView * homescreenWallpaperView;                                             //@synthesize homescreenWallpaperView=_homescreenWallpaperView - In the implementation block
@property (nonatomic,retain) SBFWallpaperView * sharedWallpaperView;                                                 //@synthesize sharedWallpaperView=_sharedWallpaperView - In the implementation block
@property (nonatomic,readonly) SBWallpaperStyleInfo * homescreenStyleInfo;                                           //@synthesize homescreenStyleInfo=_homescreenStyleInfo - In the implementation block
@property (nonatomic,readonly) SBWallpaperStyleInfo * lockscreenStyleInfo;                                           //@synthesize lockscreenStyleInfo=_lockscreenStyleInfo - In the implementation block
@property (nonatomic,retain) SBWallpaperAggdLogger * wallpaperAggdLogger;                                            //@synthesize wallpaperAggdLogger=_wallpaperAggdLogger - In the implementation block
@property (assign,nonatomic) long long variant; 
@property (assign,nonatomic) double windowLevel; 
@property (assign,nonatomic) double homescreenWallpaperScale;                                                        //@synthesize homescreenWallpaperScale=_homescreenWallpaperScale - In the implementation block
@property (assign,nonatomic) double lockscreenWallpaperScale;                                                        //@synthesize lockscreenWallpaperScale=_lockscreenWallpaperScale - In the implementation block
@property (nonatomic,readonly) id<SBFIrisWallpaperView> irisWallpaperView; 
@property (nonatomic,readonly) SCD_Struct_SB24 currentHomescreenStyleTransitionState; 
@property (nonatomic,readonly) long long activeOrientationSource;                                                    //@synthesize activeOrientationSource=_activeOrientationSource - In the implementation block
@property (nonatomic,readonly) SBFFileCache * downloadedWallpaperCache; 
@property (nonatomic,copy) SBComposedWallpaperSpecification * overriddenComposedWallpaperSpecification;              //@synthesize overriddenComposedWallpaperSpecification=_overriddenComposedWallpaperSpecification - In the implementation block
@property (nonatomic,readonly) SBFWallpaperConfigurationManager * wallpaperConfigurationManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_batterySaverModeChanged:(id)arg1 ;
-(void)removeObserver:(id)arg1 forVariant:(long long)arg2 ;
-(void)addObserver:(id)arg1 forVariant:(long long)arg2 ;
-(void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)legibilitySettingsForVariant:(long long)arg1 ;
-(BOOL)setWallpaperStyle:(long long)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4 ;
-(BOOL)removeWallpaperStyleForPriority:(long long)arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3 ;
-(void)beginRequiringWithReason:(id)arg1 ;
-(void)endRequiringWithReason:(id)arg1 ;
-(void)suspendWallpaperAnimationForReason:(id)arg1 ;
-(void)resumeWallpaperAnimationForReason:(id)arg1 ;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(id)averageColorForVariant:(long long)arg1 ;
-(double)contrastForVariant:(long long)arg1 ;
-(void)beginDelayingHomescreenStyleChangesForReason:(id)arg1 ;
-(BOOL)setWallpaperStyleTransitionState:(SCD_Struct_SB24)arg1 forPriority:(long long)arg2 forVariant:(long long)arg3 withAnimationFactory:(id)arg4 ;
-(void)endDelayingHomescreenStyleChangesForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)startHostingWallpaperOverlay:(id)arg1 ;
-(id)relinquishHostingOfWallpaperOverlay;
-(SCD_Struct_SB24)currentHomescreenStyleTransitionState;
-(BOOL)setHomescreenStyleTransitionState:(SCD_Struct_SB24)arg1 forBundleIdentifier:(id)arg2 withPriority:(long long)arg3 animationFactory:(id)arg4 ;
-(BOOL)setHomescreenStyle:(long long)arg1 forBundleIdentifier:(id)arg2 withPriority:(long long)arg3 animationFactory:(id)arg4 ;
-(BOOL)removeHomescreenStyleForBundleIdentifier:(id)arg1 withPriority:(long long)arg2 animationFactory:(id)arg3 ;
-(void)setHomescreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2 ;
-(double)contrastInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 ;
-(void)setDisallowsRasterization:(BOOL)arg1 forVariant:(long long)arg2 withReason:(id)arg3 ;
-(SBWallpaperAggdLogger *)wallpaperAggdLogger;
-(id<SBFIrisWallpaperView>)irisWallpaperView;
-(void)setWallpaperAggdLogger:(SBWallpaperAggdLogger *)arg1 ;
-(void)_reloadWallpaperAndFlushCaches:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setActiveOrientationSource:(long long)arg1 andUpdateToOrientation:(long long)arg2 usingCrossfadeToBlack:(BOOL)arg3 ;
-(void)suspendColorSamplingForReason:(id)arg1 ;
-(void)resumeColorSamplingForReason:(id)arg1 ;
-(void)setOverriddenComposedWallpaperSpecification:(SBComposedWallpaperSpecification *)arg1 ;
-(SBFFileCache *)downloadedWallpaperCache;
-(id)initWithOrientation:(long long)arg1 variant:(long long)arg2 ;
-(void)_updateWallpaperForLocations:(long long)arg1 options:(unsigned long long)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_checkForComposedWallpapersAtLaunch;
-(void)_updateScreenBlanked;
-(void)_motionEffectsChanged;
-(void)_accessibilityReduceTransparencyChanged:(id)arg1 ;
-(void)_endSuspendingMotionEffectsForBlurIfNeeded;
-(BOOL)_shouldSuspendMotionEffectsForState:(SCD_Struct_SB24)arg1 ;
-(void)_updateMotionEffectsForState:(SCD_Struct_SB24)arg1 ;
-(void)_updateWallpaperHidden;
-(void)_updateWallpaperParallax;
-(void)setLockscreenWallpaperScale:(double)arg1 withAnimationFactory:(id)arg2 ;
-(SBWallpaperStyleInfo *)homescreenStyleInfo;
-(SBWallpaperStyleInfo *)lockscreenStyleInfo;
-(id)wallpaperStyleInfoForVariant:(long long)arg1 ;
-(BOOL)_updateEffectViewForVariant:(long long)arg1 withFactory:(id)arg2 ;
-(BOOL)shouldDelayHomescreenStyleUpdates;
-(void)_suspendOrResumeColorSampling;
-(void)_suspendOrResumeWallpaperAnimation;
-(id)averageColorInRect:(CGRect)arg1 forVariant:(long long)arg2 withSmudgeRadius:(double)arg3 ;
-(id)_wallpaperViewForVariant:(long long)arg1 ;
-(void)_createHomescreenLightForegroundBlurImageIfNecessary;
-(BOOL)_setDisallowRasterization:(BOOL)arg1 withReason:(id)arg2 reasons:(id)arg3 ;
-(unsigned long long)_bestStaticWallpaperViewInitializationOptionsForVariant:(long long)arg1 shared:(BOOL)arg2 options:(unsigned long long)arg3 ;
-(long long)variantsThatDarkenWallpaperToEnsureLegibilityForWallpaperType:(long long)arg1 ;
-(BOOL)_isWallpaperHiddenForVariant:(long long)arg1 ;
-(SBComposedWallpaperSpecification *)overriddenComposedWallpaperSpecification;
-(void)_rebuildComposedWallpapers;
-(id)_lockScreenWallpaperSpecificationFromProfile;
-(id)_homeScreenWallpaperSpecificationFromProfile;
-(void)_background_setWallpaperForLocations:(long long)arg1 fromImage:(id)arg2 name:(id)arg3 ;
-(BOOL)variantsShareWallpaper;
-(void)_updateSharedWallpaperWithOptions:(unsigned long long)arg1 ;
-(void)_updateSeparateWallpaperForVariants:(long long)arg1 options:(unsigned long long)arg2 ;
-(void)setHomescreenWallpaperScale:(double)arg1 ;
-(void)setLockscreenWallpaperScale:(double)arg1 ;
-(void)setLockscreenOnlyWallpaperAlpha:(double)arg1 ;
-(void)_updateBlurGeneration;
-(BOOL)_isWallpaperView:(id)arg1 displayingWallpaperWithConfiguration:(id)arg2 forVariant:(long long)arg3 ;
-(void)_clearWallpaperView:(id)arg1 ;
-(void)setSharedWallpaperView:(SBFWallpaperView *)arg1 ;
-(void)setLockscreenWallpaperView:(SBFWallpaperView *)arg1 ;
-(void)setHomescreenWallpaperView:(SBFWallpaperView *)arg1 ;
-(id)_makeAndInsertWallpaperViewWithConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(void)_handleWallpaperChangedForVariant:(long long)arg1 ;
-(void)_saveWallpaperAggdKeysForLocations:(long long)arg1 withConfiguration:(id)arg2 ;
-(id)vendWallpaperViewForConfiguration:(id)arg1 forVariant:(long long)arg2 shared:(BOOL)arg3 options:(unsigned long long)arg4 ;
-(void)_setWallpaperHidden:(BOOL)arg1 variant:(long long)arg2 reason:(id)arg3 ;
-(void)_beginSuspendingMotionEffectsForBlurIfNeeded;
-(id)_newWallpaperEffectViewForVariant:(long long)arg1 transitionState:(SCD_Struct_SB24)arg2 ;
-(void)_clearWallpaperEffectView:(id)arg1 ;
-(void)_forceUpdateToSpringBoardInterfaceOrientationWithAnimationDuration:(double)arg1 ;
-(BOOL)_updateEffectViewForVariant:(long long)arg1 oldState:(SCD_Struct_SB24*)arg2 newState:(SCD_Struct_SB24*)arg3 oldEffectView:(id*)arg4 newEffectView:(id*)arg5 ;
-(id)_activeWallpaperView;
-(id)_observersForVariant:(long long)arg1 ;
-(void)_reconfigureBlurViewsForVariant:(long long)arg1 ;
-(void)_updateBlurImagesForVariant:(long long)arg1 ;
-(id)_blurViewsForVariant:(long long)arg1 ;
-(BOOL)_isRasterizationDisallowedForCurrentVariant;
-(BOOL)_isAcceptingOrientationChangesFromSource:(long long)arg1 ;
-(void)_handleWallpaperGeometryChangedForVariant:(long long)arg1 ;
-(void)orientationSource:(long long)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)orientationSource:(long long)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)orientationSource:(long long)arg1 didRotateFromInterfaceOrientation:(long long)arg2 ;
-(void)_handleWallpaperLegibilitySettingsChanged:(id)arg1 forVariant:(long long)arg2 ;
-(void)wallpaperServer:(id)arg1 fetchThumbnailDataForVariant:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)updateIrisWallpaperForUnlockedState;
-(void)updateIrisWallpaperForLockedState;
-(void)setLockscreenWallpaperContentsRect:(CGRect)arg1 ;
-(double)contrastInRect:(CGRect)arg1 contrastWithinBoxes:(double*)arg2 contrastBetweenBoxes:(double*)arg3 forVariant:(long long)arg4 ;
-(id)homescreenLightForegroundBlurImage;
-(CGRect)homescreenLightForegroundBlurImageContentsRectForWallpaperRelativeRect:(CGRect)arg1 ;
-(void)_registerFakeBlurView:(id)arg1 ;
-(void)_unregisterFakeBlurView:(id)arg1 ;
-(id)_sourceForFakeBlurView:(id)arg1 ;
-(id)_newFakeBlurViewForVariant:(long long)arg1 style:(long long)arg2 transformOptions:(unsigned long long)arg3 ;
-(id)_getImageInRect:(CGRect)arg1 withZoomFactor:(double)arg2 forVariant:(long long)arg3 style:(inout long long*)arg4 ;
-(double)homescreenWallpaperScale;
-(double)lockscreenWallpaperScale;
-(long long)activeOrientationSource;
-(SBFWallpaperView *)lockscreenWallpaperView;
-(SBFWallpaperView *)homescreenWallpaperView;
-(SBFWallpaperView *)sharedWallpaperView;
-(void)dealloc;
-(NSString *)description;
-(void)setWindowLevel:(double)arg1 ;
-(id)_window;
-(double)windowLevel;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_updateRasterizationState;
-(void)_beginDisallowRasterizationBlock;
-(void)wallpaperView:(id)arg1 didChangeZoomFactor:(double)arg2 ;
-(void)_endDisallowRasterizationBlock;
-(void)wallpaperViewDidInvalidateBlurs:(id)arg1 ;
-(void)wallpaperViewDidInvalidateGeometry:(id)arg1 ;
-(void)wallpaperViewDidChangeWantsRasterization:(id)arg1 ;
-(void)wallpaperConfigurationManager:(id)arg1 didChangeWallpaperConfigurationForVariants:(long long)arg2 ;
-(SBFWallpaperConfigurationManager *)wallpaperConfigurationManager;
-(void)providerLegibilitySettingsChanged:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)previewCache;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(long long)variant;
-(void)setVariant:(long long)arg1 ;
@end

