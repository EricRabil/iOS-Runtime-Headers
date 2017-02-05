/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:50 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
@interface NTKBezierPathElement : NSObject {

	int _type;
	unsigned long long _pointCount;
	CGPoint* _points;
	double _length;

}

@property (assign,nonatomic) int type;                                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
@property (assign,nonatomic) CGPoint* points;                            //@synthesize points=_points - In the implementation block
@property (assign,nonatomic) double length;                              //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) CGPoint startPoint; 
@property (nonatomic,readonly) CGPoint endPoint; 
-(void)dealloc;
-(double)length;
-(void)setType:(int)arg1 ;
-(int)type;
-(CGPoint)startPoint;
-(void)setLength:(double)arg1 ;
-(unsigned long long)pointCount;
-(CGPoint*)points;
-(void)setPoints:(CGPoint*)arg1 ;
-(CGPoint)endPoint;
-(id)initWithStartPoint:(CGPoint)arg1 pathElement:(const CGPathElement*)arg2 ;
-(unsigned long long)numberOfPointsForCGPathElementType:(int)arg1 ;
-(double)computeLength;
-(CGPoint)pointOnPathForX:(double)arg1 ;
-(void)setPointCount:(unsigned long long)arg1 ;
@end

