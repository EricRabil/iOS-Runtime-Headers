/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class MTEpisode;


@protocol MTEpisodeCellProtocol
@property (nonatomic,retain) MTEpisode * episode; 
@property (assign,getter=isCurrentPlayerItem,nonatomic) BOOL currentPlayerItem; 
@required
-(MTEpisode *)episode;
-(void)setCurrentPlayerItem:(BOOL)arg1;
-(void)setEpisode:(id)arg1;
-(BOOL)isCurrentPlayerItem;

@end

