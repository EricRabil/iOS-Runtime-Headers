/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:23:00 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/MPCPlayerPlaybackErrorObserving.h>
#import <Music/MPCPlayerPlaybackIntentObserving.h>

@interface Music.PlaybackErrorDisplayController : NSObject <MPCPlayerPlaybackErrorObserving, MPCPlayerPlaybackIntentObserving> {

	 allowedPlaybackErrorPlayerItem;
	 allowsNewPlaybackErrorItem;
	 currentPlayerObserver;
	 currentItemObserver;
	 currentErrorAlertController;
	 currentLeaseEndAlertController;
	 lastPlaybackContainer;

}
-(id)init;
-(void)dealloc;
-(void)player:(id)arg1 willAddPlaybackIntent:(id)arg2 withOptions:(unsigned long long)arg3 ;
-(void)player:(id)arg1 didAddPlaybackIntent:(id)arg2 withOptions:(unsigned long long)arg3 error:(id)arg4 ;
-(void)playerDidPauseForLeaseEnd:(id)arg1 ;
-(void)player:(id)arg1 didFailToPlayItem:(id)arg2 error:(id)arg3 ;
@end

