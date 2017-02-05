/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:36 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIAnimationStepping <NSObject>
@property (getter=isStepped,nonatomic,readonly) BOOL stepped; 
@property (assign,nonatomic) double stepPercentage; 
@required
-(double)stepPercentage;
-(void)setStepPercentage:(double)arg1;
-(void)finishSteppingForwardToEnd;
-(void)finishSteppingBackwardToStart;
-(BOOL)isStepped;

@end

