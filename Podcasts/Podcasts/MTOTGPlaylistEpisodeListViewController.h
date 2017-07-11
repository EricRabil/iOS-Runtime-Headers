/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTBasePlaylistEpisodeListViewController.h>

@class MTOTGPlaylistDetailListAddButton, UIButton, UIBarButtonItem, MTAllPropertyChangesQueryObserver;

@interface MTOTGPlaylistEpisodeListViewController : MTBasePlaylistEpisodeListViewController {

	MTOTGPlaylistDetailListAddButton* _addButton;
	UIButton* _clearButton;
	UIButton* _downloadButton;
	UIBarButtonItem* _clearButtonItem;
	MTAllPropertyChangesQueryObserver* _downloadedQuery;
	BOOL _downloadButtonEnabled;
	BOOL _downloadsAvailable;

}

@property (assign,nonatomic) BOOL downloadButtonEnabled;              //@synthesize downloadButtonEnabled=_downloadButtonEnabled - In the implementation block
@property (assign,nonatomic) BOOL downloadsAvailable;                 //@synthesize downloadsAvailable=_downloadsAvailable - In the implementation block
-(id)emptyListMessage;
-(id)downloadButton;
-(id)toolbarButtonItems;
-(void)downloadAll:(id)arg1 ;
-(void)setDownloadButtonEnabled:(BOOL)arg1 ;
-(void)setDownloadsAvailable:(BOOL)arg1 ;
-(void)updateDownloadButtonState;
-(BOOL)downloadButtonEnabled;
-(BOOL)downloadsAvailable;
-(id)clearButtonItem;
-(void)clearPlaylist;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(void)clear:(id)arg1 ;
-(id)footerView;
-(id)clearButton;
-(void)transitionToState:(long long)arg1 animated:(BOOL)arg2 ;
@end
