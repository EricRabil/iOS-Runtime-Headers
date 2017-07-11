/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementContainerView.h>

@class SBAppView;

@interface SBAppContainerView : SBLayoutElementContainerView {

	SBAppView* _appView;

}

@property (nonatomic,retain) SBAppView * appView; 
-(SBAppView *)appView;
-(void)setLayoutElementViewAlpha:(double)arg1 ;
-(unsigned long long)_supportedOrientations;
-(void)setAppView:(SBAppView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)snapshotView;
-(void)prepareForReuse;
-(long long)displayMode;
-(void)setDisplayMode:(long long)arg1 ;
@end
