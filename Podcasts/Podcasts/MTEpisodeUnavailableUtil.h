/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTSingleton.h>

@interface MTEpisodeUnavailableUtil : MTSingleton
+(unsigned long long)unavailableReasonForEpisode:(id)arg1 ;
+(id)longStringForUnavailableReason:(unsigned long long)arg1 podcastTitle:(id)arg2 ;
+(id)longReasonTextForNoInternet;
+(id)stringForUnavailableReason:(unsigned long long)arg1 ;
-(BOOL)showDialogForReason:(unsigned long long)arg1 podcastTitle:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentRestrictedDialogWithHandler:(/*^block*/id)arg1 ;
-(void)_presentErrorDialogWithTitle:(id)arg1 message:(id)arg2 handler:(/*^block*/id)arg3 ;
@end

