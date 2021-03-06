/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:18:00 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IKEntityValueProviding <NSObject>
@optional
-(id)nativeValueForStringValue:(id)arg1 forProperty:(id)arg2;
-(id)stringValueWithNativeValue:(id)arg1 forProperty:(id)arg2;

@required
-(id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(CGSize)arg2 destinationScale:(double)arg3;
-(id)entityUniqueIdentifier;
-(id)valueForEntityProperty:(id)arg1;
-(id)valuesForEntityProperties:(id)arg1;

@end

