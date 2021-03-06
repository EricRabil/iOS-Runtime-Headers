/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTDetailViewController.h>
#import <Podcasts/MTEpisodeListViewControllerDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>

@class NSString;

@interface MTPlaylistSettingsUpcomingViewController : MTDetailViewController <MTEpisodeListViewControllerDelegate, UIViewControllerRestoration> {

	NSString* _settingsUuid;
	NSString* _playlistUuid;
	BOOL _subscribed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(id)newListController;
-(void)_setupWithSettingsUuid:(id)arg1 ;
-(void)setupNewListController:(id)arg1 ;
-(id)previewPlayAction;
-(id)initWithSettingsUuid:(id)arg1 ;
-(BOOL)metricsEnabled;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)previewActionItems;
@end

