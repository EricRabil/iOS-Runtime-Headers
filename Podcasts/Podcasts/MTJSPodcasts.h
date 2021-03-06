/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <Podcasts/MTJSPodcasts.h>

@protocol MTJSPodcasts <JSExport>
@required
-(BOOL)isSubscribed:(id)arg1;
-(void)unsubscribe:(id)arg1;
-(void)subscribe:(id)arg1;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2;

@end


@interface MTJSPodcasts : IKJSObject <MTJSPodcasts>
-(BOOL)isSubscribed:(id)arg1 ;
-(id)identifierForDictionary:(id)arg1 ;
-(void)unsubscribe:(id)arg1 ;
-(void)subscribe:(id)arg1 ;
-(void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1 :(id)arg2 ;
@end

