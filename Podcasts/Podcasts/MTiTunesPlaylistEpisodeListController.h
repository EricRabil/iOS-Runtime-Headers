/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTOTGPlaylistEpisodeListViewController.h>

@class UIButton, UIBarButtonItem;

@interface MTiTunesPlaylistEpisodeListController : MTOTGPlaylistEpisodeListViewController {

	UIButton* _deleteButton;
	UIBarButtonItem* _deleteButtonItem;
	BOOL _isSmart;
	BOOL _inInitializeFrc;

}
-(void)markSelectedItemsAsSaved:(BOOL)arg1 ;
-(void)setPlaylistUuid:(id)arg1 ;
-(id)emptyListMessage;
-(id)toolbarButtonItems;
-(void)clearPlaylist;
-(id)deletePlaylistButtonItem;
-(id)deletePlaylistButton;
-(void)popToRootView;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)delete:(id)arg1 ;
-(id)footerView;
-(id)rightButtonItems;
@end
