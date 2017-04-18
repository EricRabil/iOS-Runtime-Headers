/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTiOSGenericSettingsViewController.h>
#import <Podcasts/MTSourceListDelegate.h>
#import <Podcasts/MTPlaylistSelectPodcastListViewControllerSaveDelegate.h>

@protocol MTPlaylistSettingsViewControllerDelegate;
@class UIAlertController, NSString, NSIndexPath;

@interface MTPlaylistSettingsViewController : MTiOSGenericSettingsViewController <MTSourceListDelegate, MTPlaylistSelectPodcastListViewControllerSaveDelegate> {

	id _addPodcastsViewController;
	UIAlertController* _deleteStationAlertController;
	BOOL _userDriven;
	id<MTPlaylistSettingsViewControllerDelegate> _delegate;
	NSString* _playlistUuid;
	/*^block*/id _deletePlaylistBlock;
	NSIndexPath* _appearanceSelectedPath;

}

@property (assign,nonatomic,__weak) id<MTPlaylistSettingsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * playlistUuid;                                                   //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (nonatomic,copy) id deletePlaylistBlock;                                                      //@synthesize deletePlaylistBlock=_deletePlaylistBlock - In the implementation block
@property (assign,nonatomic) BOOL userDriven;                                                           //@synthesize userDriven=_userDriven - In the implementation block
@property (nonatomic,retain) NSIndexPath * appearanceSelectedPath;                                      //@synthesize appearanceSelectedPath=_appearanceSelectedPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellClassForSettingType:(int)arg1 inGroupWithIdentifier:(id)arg2 ;
+(CGSize)podcastImageSize;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 withDescription:(id)arg3 inGroupWithIdentifier:(id)arg4 ;
-(void)deletePlaylist:(id)arg1 ;
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2 ;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(void)saveNewPlaylists;
-(NSString *)playlistUuid;
-(void)syncControllerOperationCompleted:(id)arg1 ;
-(id)initWithPlaylistUuid:(id)arg1 ;
-(id)newSettingsController;
-(void)selectAppearancePathIfNecessary;
-(NSIndexPath *)appearanceSelectedPath;
-(void)setAppearanceSelectedPath:(NSIndexPath *)arg1 ;
-(void)updateTitle:(id)arg1 ;
-(void)updateContainerOrder:(int)arg1 ;
-(void)_updateUngroupedListSetting:(BOOL)arg1 ;
-(void)updateSetting:(id)arg1 value:(id)arg2 ;
-(id)titleForCurrentPodcasts;
-(void)showAddPodcastsSheet;
-(void)updateShowSetting:(long long)arg1 forSettings:(id)arg2 ;
-(void)removePodcastAtIndex:(unsigned long long)arg1 ;
-(void)updatePodcastCount;
-(id)deletePlaylistBlock;
-(void)setDeletePlaylistBlock:(id)arg1 ;
-(id)metricsName;
-(id)metricDataSource;
-(id)init;
-(void)setDelegate:(id<MTPlaylistSettingsViewControllerDelegate>)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<MTPlaylistSettingsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(BOOL)userDriven;
-(void)setUserDriven:(BOOL)arg1 ;
@end

