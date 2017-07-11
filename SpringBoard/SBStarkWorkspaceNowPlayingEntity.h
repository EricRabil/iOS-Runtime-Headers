/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>

@class SBWorkspaceApplication;

@interface SBStarkWorkspaceNowPlayingEntity : SBWorkspaceEntity {

	SBWorkspaceApplication* _application;

}

@property (nonatomic,readonly) SBWorkspaceApplication * application;              //@synthesize application=_application - In the implementation block
+(id)entityForApplication:(id)arg1 ;
-(BOOL)isStarkNowPlayingEntity;
-(id)workspaceApplication;
-(id)initWithDisplayChangeSettings:(id)arg1 ;
-(/*^block*/id)_generator;
-(BOOL)_supportsLayoutRole:(long long)arg1 ;
-(id)initWithApplication:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SBWorkspaceApplication *)application;
-(Class)viewControllerClass;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end
