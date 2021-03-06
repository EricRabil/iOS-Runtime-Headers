/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:34 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoGlanceSettings/NanoGlanceSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NGSGlance : NSObject <NSCopying> {

	BOOL _cannotBeDisabled;
	BOOL _active;
	BOOL _defaultGlance;
	BOOL _systemGlance;
	BOOL _prelaunch;
	NSString* _name;
	NSString* _appBundleIdentifier;
	NSString* _glanceBundleIdentifier;
	NSString* _sockPuppetIdentifier;
	unsigned long long _installState;
	NSString* _glanceBundlePath;
	unsigned long long _watchKitVersion;

}

@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                           //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * glanceBundleIdentifier;                        //@synthesize glanceBundleIdentifier=_glanceBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sockPuppetIdentifier;                          //@synthesize sockPuppetIdentifier=_sockPuppetIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * glanceIdentifier; 
@property (assign,nonatomic) BOOL cannotBeDisabled;                                  //@synthesize cannotBeDisabled=_cannotBeDisabled - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (assign,getter=isDefaultGlance,nonatomic) BOOL defaultGlance;              //@synthesize defaultGlance=_defaultGlance - In the implementation block
@property (assign,getter=isSystemGlance,nonatomic) BOOL systemGlance;                //@synthesize systemGlance=_systemGlance - In the implementation block
@property (assign,nonatomic) BOOL prelaunch;                                         //@synthesize prelaunch=_prelaunch - In the implementation block
@property (assign,nonatomic) unsigned long long installState;                        //@synthesize installState=_installState - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled; 
@property (nonatomic,copy) NSString * glanceBundlePath;                              //@synthesize glanceBundlePath=_glanceBundlePath - In the implementation block
@property (assign,nonatomic) unsigned long long watchKitVersion;                     //@synthesize watchKitVersion=_watchKitVersion - In the implementation block
-(unsigned long long)watchKitVersion;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isActive;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)_localizedName;
-(BOOL)isInstalled;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(NSString *)glanceIdentifier;
-(NSString *)sockPuppetIdentifier;
-(NSString *)glanceBundleIdentifier;
-(BOOL)prelaunch;
-(BOOL)cannotBeDisabled;
-(BOOL)isDefaultGlance;
-(NSString *)glanceBundlePath;
-(void)setGlanceBundleIdentifier:(NSString *)arg1 ;
-(void)setCannotBeDisabled:(BOOL)arg1 ;
-(void)setSockPuppetIdentifier:(NSString *)arg1 ;
-(void)setDefaultGlance:(BOOL)arg1 ;
-(BOOL)isSystemGlance;
-(void)setSystemGlance:(BOOL)arg1 ;
-(void)setPrelaunch:(BOOL)arg1 ;
-(void)setGlanceBundlePath:(NSString *)arg1 ;
-(void)setWatchKitVersion:(unsigned long long)arg1 ;
-(unsigned long long)installState;
-(void)setInstallState:(unsigned long long)arg1 ;
@end

