/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music.NavigationController.h>

@class NSString;

@interface Music.MediaPickerNavigationController : Music.NavigationController {

	 mediaPickerDelegate;
	 playlistTitle;
	 selectedSongs;
	 selectedItemIdentifiersSet;

}

@property (assign,__weak,nonatomic) id<_TtP5Music19MediaPickerDelegate_> mediaPickerDelegate; 
@property (copy,nonatomic) NSString * playlistTitle; 
@property (readonly,nonatomic) BOOL hasSelectedSongs; 
+(id)defaultMediaPickerNavigationController;
-(void)pushViewController:(id)arg1 overrideTraitCollection:(id)arg2 animated:(BOOL)arg3 ;
-(NSString *)playlistTitle;
-(void)setPlaylistTitle:(NSString *)arg1 ;
-(BOOL)hasSelectedSongs;
-(void)selectWithSongs:(id)arg1 withIdentifierSets:(id)arg2 ;
-(BOOL)containsItemForIdentifierSet:(id)arg1 ;
-(void)doneTapped;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(void)finish;
-(void)cancelTapped;
-(void)setMediaPickerDelegate:(id<_TtP5Music19MediaPickerDelegate_>)arg1 ;
-(id<_TtP5Music19MediaPickerDelegate_>)mediaPickerDelegate;
@end
