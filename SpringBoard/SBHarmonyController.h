/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBClient;

@interface SBHarmonyController : NSObject {

	CBClient* _client;
	BOOL _supportsWhitePointAdaptation;
	BOOL _supportsBlueLightReduction;

}

@property (nonatomic,readonly) BOOL supportsWhitePointAdaptation;                                                //@synthesize supportsWhitePointAdaptation=_supportsWhitePointAdaptation - In the implementation block
@property (assign,getter=isWhitePointAdaptationEnabled,nonatomic) BOOL whitePointAdaptationEnabled; 
@property (assign,nonatomic) long long whitePointAdaptivityStyle; 
@property (nonatomic,readonly) BOOL supportsBlueLightReduction;                                                  //@synthesize supportsBlueLightReduction=_supportsBlueLightReduction - In the implementation block
+(id)sharedInstance;
-(float)whitePointAdaptationStrengthForWhitePointAdaptivityStyle:(long long)arg1 ;
-(void)setWhitePointAdaptationStrength:(float)arg1 forWhitePointAdaptivityStyle:(long long)arg2 ;
-(BOOL)supportsWhitePointAdaptation;
-(void)setWhitePointAdaptivityStyleWithStyles:(id)arg1 animationSettings:(id)arg2 ;
-(void)transitionFromWhitePointAdaptivityStyleWithStyles:(id)arg1 toWhitePointAdaptivityStyleWithStyles:(id)arg2 fromPercentage:(double)arg3 toPercentage:(double)arg4 animationSettings:(id)arg5 ;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 animationSettings:(id)arg2 ;
-(BOOL)isWhitePointAdaptationEnabled;
-(void)setWhitePointAdaptationEnabled:(BOOL)arg1 ;
-(id)init;
-(void)setWhitePointAdaptivityStyle:(long long)arg1 ;
-(long long)whitePointAdaptivityStyle;
-(BOOL)supportsBlueLightReduction;
@end

