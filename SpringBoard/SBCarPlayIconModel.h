/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:37 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconModel.h>

@class NSArray;

@interface SBCarPlayIconModel : SBIconModel {

	NSArray* _hiddenBundleIdentifiers;
	CGRect _screenBounds;

}

@property (nonatomic,retain) NSArray * hiddenBundleIdentifiers;              //@synthesize hiddenBundleIdentifiers=_hiddenBundleIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect screenBounds;                            //@synthesize screenBounds=_screenBounds - In the implementation block
@property (nonatomic,readonly) unsigned long long rowCount; 
@property (nonatomic,readonly) unsigned long long columnCount; 
-(BOOL)importState:(id)arg1 ;
-(void)didUnarchiveMetadata:(id)arg1 ;
-(id)iconModelMetadata;
-(void)resetCurrentIconState;
-(id)exportStateForCarKit;
-(void)setHiddenBundleIdentifiers:(NSArray *)arg1 ;
-(void)setScreenBounds:(CGRect)arg1 ;
-(CGRect)screenBounds;
-(unsigned long long)columnCount;
-(NSArray *)hiddenBundleIdentifiers;
-(BOOL)isIconVisible:(id)arg1 ;
-(unsigned long long)rowCount;
@end

