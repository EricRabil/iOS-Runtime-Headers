/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:06 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSModalDocumentController.h>
@class NSArray;


@protocol SKUIJSModalDocumentController <JSExport>
@property (nonatomic,retain,readonly) NSArray * documents; 
@required
-(NSArray *)documents;
-(void)popDocument;
-(void)popToDocument:(id)arg1;
-(void)pushDocument:(id)arg1 :(id)arg2;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3;

@end


@class NSArray, SKUIModalDocumentController;

@interface SKUIJSModalDocumentController : IKJSObject <SKUIJSModalDocumentController> {

	SKUIModalDocumentController* _modalDocumentController;

}

@property (__weak,readonly) SKUIModalDocumentController * modalDocumentController; 
@property (nonatomic,retain,readonly) NSArray * documents; 
-(NSArray *)documents;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 modalDocumentController:(id)arg2 ;
-(SKUIModalDocumentController *)modalDocumentController;
-(id)_adjustedOptionsWithOptions:(id)arg1 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
@end

