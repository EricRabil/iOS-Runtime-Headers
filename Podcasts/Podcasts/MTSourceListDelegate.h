/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTSourceListDelegate <NSObject>
@optional
-(void)sourceList:(id)arg1 didChangeEditing:(BOOL)arg2 animated:(BOOL)arg3;

@required
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2;

@end

