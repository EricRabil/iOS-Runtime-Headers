/*
* This header is generated by classdump-dyld 1.0
* on Monday, February 20, 2017 at 11:22:59 AM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Music.app/Music
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Music/Music.JSObject.h>

@class NSArray, NSString;

@interface Music.JSMenuSection : Music.JSObject {

	 items;
	 title;

}

@property (copy,nonatomic) NSArray * items; 
@property (copy,nonatomic) NSString * title; 
@property (readonly,nonatomic) NSString * description; 
-(void)invokeMethod:(id)arg1 arguments:(id)arg2 ;
-(void)updateProperty:(id)arg1 value:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

