/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPPlayableContentDataSource <NSObject>
@optional
-(void)beginLoadingChildItemsAtIndexPath:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)childItemsDisplayPlaybackProgressAtIndexPath:(id)arg1;
-(void)contentItemForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2;

@required
-(id)contentItemAtIndexPath:(id)arg1;
-(long long)numberOfChildItemsAtIndexPath:(id)arg1;

@end
