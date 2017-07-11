/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIAlertController.h>
#import <libobjc.A.dylib/MPAVRoutingViewControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class IMAVPlayer, MPAVRoutingViewController, NSString;

@interface IMAVRoutingViewController : UIAlertController <MPAVRoutingViewControllerDelegate, UIPopoverPresentationControllerDelegate> {

	IMAVPlayer* _player;
	MPAVRoutingViewController* _routingViewController;
	CGSize _preferredSize;

}

@property (nonatomic,retain) MPAVRoutingViewController * routingViewController;              //@synthesize routingViewController=_routingViewController - In the implementation block
@property (assign,nonatomic) CGSize preferredSize;                                           //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,retain) IMAVPlayer * player;                                            //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRoutingViewController:(MPAVRoutingViewController *)arg1 ;
-(MPAVRoutingViewController *)routingViewController;
-(void)updateContentViewController;
-(CGSize)computedPreferredContentSize;
-(id)initWithType:(long long)arg1 ;
-(CGSize)preferredContentSize;
-(CGSize)preferredSize;
-(void)routingViewController:(id)arg1 didPickRoute:(id)arg2 ;
-(void)routingViewControllerDidUpdateContents:(id)arg1 ;
-(void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1 ;
-(id)initWithType:(long long)arg1 includeMirroring:(BOOL)arg2 ;
-(IMAVPlayer *)player;
-(void)setPlayer:(IMAVPlayer *)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
@end
