/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:35 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBWallpaperStyleTransitionStateWrapper : NSObject {

	SCD_Struct_SB24 _state;

}

@property (assign,nonatomic) SCD_Struct_SB24 state;              //@synthesize state=_state - In the implementation block
+(id)wrapperWithState:(SCD_Struct_SB24)arg1 ;
-(id)description;
-(SCD_Struct_SB24)state;
-(void)setState:(SCD_Struct_SB24)arg1 ;
@end
