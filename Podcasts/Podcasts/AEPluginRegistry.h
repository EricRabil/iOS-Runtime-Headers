/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AEPluginRegistry : NSObject {

	NSMutableDictionary* _extensionPlugins;
	NSMutableDictionary* _schemePlugins;
	NSMutableDictionary* _assetTypePlugins;

}
+(id)sharedInstance;
-(void)registerAssetEnginePlugin:(id)arg1 forExtension:(id)arg2 ;
-(void)registerAssetEnginePlugin:(id)arg1 ;
-(void)unregisterAssetEnginePlugin:(id)arg1 ;
-(id)pluginForURL:(id)arg1 ;
-(id)pluginForAssetType:(id)arg1 ;
-(id)pluginForExtension:(id)arg1 ;
-(id)init;
@end

