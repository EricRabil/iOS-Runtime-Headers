/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:20:38 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@interface SBTouchTemplatePinchGestureRecognizer : SBTouchTemplateGestureRecognizer
-(BOOL)hasSignificantMotionToBegin;
-(double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2 ;
-(double)_computeNonlinearSpeedGain:(double)arg1 ;
-(double)_computeHandSizeCompensationGain:(double)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
@end
