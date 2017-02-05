/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:55:06 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/NACRoutingController.h>

@protocol NACRoutingControllerDelegate;
@class NACAudioRoute, NSArray, MPAVRoutingController, NSString;

@interface NACRoutingControllerLocal : NSObject <MPAVRoutingControllerDelegate, NACRoutingController> {

	MPAVRoutingController* _routingController;
	NSString* _audioCategory;
	id<NACRoutingControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NACAudioRoute * pickedRoute; 
@property (nonatomic,readonly) NSArray * availableAudioRoutes; 
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(id<NACRoutingControllerDelegate>)delegate;
-(NACAudioRoute *)pickedRoute;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
@end

