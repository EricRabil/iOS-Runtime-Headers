/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIBannerItem.h>
#import <SpringBoard/SBDefaultBannerViewSource.h>
#import <libobjc.A.dylib/SBUIQuietModePlayability.h>

@protocol SBLockScreenActionHandler, SBLockScreenNotificationBannerItemDelegate;
@class SBAwayListItem, NSString;

@interface SBLockScreenNotificationBannerItem : SBUIBannerItem <SBDefaultBannerViewSource, SBUIQuietModePlayability> {

	SBAwayListItem* _listItem;
	id<SBLockScreenActionHandler> _lockedActionHandler;
	id<SBLockScreenNotificationBannerItemDelegate> _delegate;

}

@property (nonatomic,readonly) SBAwayListItem * listItem;                                                 //@synthesize listItem=_listItem - In the implementation block
@property (nonatomic,retain) id<SBLockScreenActionHandler> unlockActionHandler;                           //@synthesize lockedActionHandler=_lockedActionHandler - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenNotificationBannerItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithListItem:(id)arg1 ;
-(id)sourceDate;
-(id)lockScreenActionContext;
-(void)setUnlockActionHandler:(id<SBLockScreenActionHandler>)arg1 ;
-(id)suppressedMessage;
-(BOOL)showMessagePreview;
-(id<SBLockScreenActionHandler>)unlockActionHandler;
-(void)setDelegate:(id<SBLockScreenNotificationBannerItemDelegate>)arg1 ;
-(id<SBLockScreenNotificationBannerItemDelegate>)delegate;
-(id)title;
-(/*^block*/id)action;
-(id)subtitle;
-(id)message;
-(id)iconImage;
-(SBAwayListItem *)listItem;
-(id)accessoryIconMask;
-(BOOL)shouldPlayLightsAndSirens;
-(BOOL)overridesQuietMode;
-(BOOL)overridesPocketMode;
-(BOOL)canShowWhileLocked;
-(id)attachmentText;
-(id)sortDate;
-(BOOL)inertWhenLocked;
-(id)attachmentImage;
-(BOOL)isCritical;
@end
