/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, February 7, 2017 at 4:52:27 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKManualUpdater : NSObject {

	BOOL _needsUpdate;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) BOOL needsUpdate;              //@synthesize needsUpdate=_needsUpdate - In the implementation block
@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(SEL)action;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)updateIfNeeded;
-(void)setAction:(SEL)arg1 ;
-(void)setNeedsUpdate;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end
