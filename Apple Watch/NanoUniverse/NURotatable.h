/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:56:40 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NURotatable <NSObject>
@property (assign,nonatomic) CLLocationCoordinate2D homeCoordinate; 
@property (assign,nonatomic) CLLocationCoordinate2D centerCoordinate; 
@required
-(CLLocationCoordinate2D)centerCoordinate;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 animated:(BOOL)arg2;
-(CLLocationCoordinate2D)homeCoordinate;
-(void)setHomeCoordinate:(CLLocationCoordinate2D)arg1;

@end

