/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/IMCloudSyncErrorHandle.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface IMAlertCloudSyncErrorHandle : IMCloudSyncErrorHandle <UIAlertViewDelegate> {

	UIAlertView* _alertView;

}

@property (nonatomic,retain) UIAlertView * alertView;               //@synthesize alertView=_alertView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_acceptButtonTitle;
-(void)resolveError;
-(id)init;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)_title;
-(id)_message;
-(id)_cancelButtonTitle;
-(UIAlertView *)alertView;
-(void)setAlertView:(UIAlertView *)arg1 ;
@end

