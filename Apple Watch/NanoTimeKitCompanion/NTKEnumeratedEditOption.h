/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:52 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKValueEditOption.h>

@interface NTKEnumeratedEditOption : NTKValueEditOption
+(unsigned long long)numberOfOptions;
+(id)optionAtIndex:(unsigned long long)arg1 ;
+(unsigned long long)indexOfOption:(id)arg1 ;
+(BOOL)_valueIsValid:(unsigned long long)arg1 ;
+(id)_orderedValues;
+(id)_orderedValuesRestrictedByCurrentDeviceCollection;
+(id)optionsRestrictedByCurrentDeviceCollection;
@end

