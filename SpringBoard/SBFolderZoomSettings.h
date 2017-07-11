/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBScaleZoomSettings.h>

@class SBAnimationSettings;

@interface SBFolderZoomSettings : SBScaleZoomSettings {

	SBAnimationSettings* _innerFolderFadeSettings;

}

@property (retain) SBAnimationSettings * innerFolderFadeSettings;              //@synthesize innerFolderFadeSettings=_innerFolderFadeSettings - In the implementation block
+(id)settingsControllerModule;
-(SBAnimationSettings *)innerFolderFadeSettings;
-(void)setInnerFolderFadeSettings:(SBAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end
