/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:56:40 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NUAnimatable, NUAnimationObserver;
@interface NUAnimation : NSObject {

	 _from;
	 _to;
	 _ctrl1;
	 _ctrl2;
	[75 _values];
	int _valuesCount;
	int _frameInterval;
	float _startTime;
	float _duration;
	float _prevTime;
	float _pauseTime;
	float _delay;
	unsigned long long _key;
	id<NUAnimatable> _animatable;
	BOOL _repeat;
	BOOL _paused;
	id<NUAnimationObserver> _observer;
	unsigned long long _function;

}

@property (assign,nonatomic) float startTime;                                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) float duration;                                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float delay;                                          //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) int frameInterval;                                    //@synthesize frameInterval=_frameInterval - In the implementation block
@property (assign,nonatomic)  from;                                                //@synthesize from=_from - In the implementation block
@property (assign,nonatomic)  to;                                                  //@synthesize to=_to - In the implementation block
@property (assign,nonatomic) BOOL repeat;                                          //@synthesize repeat=_repeat - In the implementation block
@property (assign,nonatomic) BOOL pause; 
@property (assign,nonatomic) unsigned long long function;                          //@synthesize function=_function - In the implementation block
@property (assign,nonatomic) unsigned long long key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) id<NUAnimatable> animatable;                          //@synthesize animatable=_animatable - In the implementation block
@property (assign,nonatomic,__weak) id<NUAnimationObserver> observer;              //@synthesize observer=_observer - In the implementation block
-(float)duration;
-(unsigned long long)key;
-(float)delay;
-(void)setDuration:(float)arg1 ;
-(void)setDelay:(float)arg1 ;
-(void)setStartTime:(float)arg1 ;
-(void)setFrameInterval:(int)arg1 ;
-(float)startTime;
-(BOOL)update:(float)arg1 ;
-(void)setKey:(unsigned long long)arg1 ;
-(BOOL)pause;
-(void)setObserver:(id<NUAnimationObserver>)arg1 ;
-(id<NUAnimationObserver>)observer;
-(void)setFrom:;
-(void)setTo:;
-()from;
-()to;
-(void)setFunction:(unsigned long long)arg1 ;
-(void)setPause:(BOOL)arg1 ;
-(int)frameInterval;
-(unsigned long long)function;
-(BOOL)repeat;
-(id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 ;
-(void)setRepeat:(BOOL)arg1 ;
-(id)initWithAnimatable:(id)arg1 value:(unsigned long long)arg2 ;
-(id)initWithAnimatable:(id)arg1 from:(unsigned long long)arg2 ;
-(id<NUAnimatable>)animatable;
-(id)initWithAnimatable:(id)arg1 values:(2*)arg2 count:(int)arg3 key:(unsigned long long)arg4 ;
-(void)setAnimatable:(id<NUAnimatable>)arg1 ;
@end

