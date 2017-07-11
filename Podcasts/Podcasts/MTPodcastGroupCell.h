/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTGenericCell.h>

@protocol MTPodcastGroupCellDelegate;
@class NSArray, MTCountInfoButton;

@interface MTPodcastGroupCell : MTGenericCell {

	BOOL _networkIsReachable;
	BOOL _currentEpisodeDownloaded;
	id<MTPodcastGroupCellDelegate> _delegate;
	NSArray* _episodeUUIDs;
	MTCountInfoButton* _countInfoButton;

}

@property (nonatomic,retain) NSArray * episodeUUIDs;                                                       //@synthesize episodeUUIDs=_episodeUUIDs - In the implementation block
@property (assign,getter=isCurrentEpisodeDownloaded,nonatomic) BOOL currentEpisodeDownloaded;              //@synthesize currentEpisodeDownloaded=_currentEpisodeDownloaded - In the implementation block
@property (nonatomic,retain) MTCountInfoButton * countInfoButton;                                          //@synthesize countInfoButton=_countInfoButton - In the implementation block
@property (assign,nonatomic,__weak) id<MTPodcastGroupCellDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL networkIsReachable;                                                      //@synthesize networkIsReachable=_networkIsReachable - In the implementation block
+(BOOL)showsArtwork;
-(void)configureSubviews;
-(void)updateWithObject:(id)arg1 ;
-(void)setEpisodeUUIDs:(NSArray *)arg1 ;
-(id)_currentEpisodeForPodcastGroup:(id)arg1 ;
-(id)_titleForPodcastGroup:(id)arg1 currentEpisode:(id)arg2 ;
-(id)_subtitleForPodcastGroup:(id)arg1 currentEpisode:(id)arg2 ;
-(unsigned long long)_indexOfEpisodeUUID:(id)arg1 ;
-(NSArray *)episodeUUIDs;
-(MTCountInfoButton *)countInfoButton;
-(void)setCurrentEpisodeDownloaded:(BOOL)arg1 ;
-(void)updateEnabled;
-(BOOL)networkIsReachable;
-(BOOL)isCurrentEpisodeDownloaded;
-(void)setNetworkIsReachable:(BOOL)arg1 ;
-(void)setCountInfoButton:(MTCountInfoButton *)arg1 ;
-(void)setDelegate:(id<MTPodcastGroupCellDelegate>)arg1 ;
-(id<MTPodcastGroupCellDelegate>)delegate;
-(void)infoButtonTapped:(id)arg1 ;
-(void)updateFonts;
-(void)updateColors;
@end
