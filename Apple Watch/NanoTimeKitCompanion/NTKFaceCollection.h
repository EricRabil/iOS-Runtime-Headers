/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:54:50 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKFaceObserver.h>

@class NSString, NSUUID, NSMutableArray, NSMutableDictionary, NSMapTable, NSHashTable, NTKFace;

@interface NTKFaceCollection : NSObject <NTKFaceObserver> {

	NSString* _logIdentifier;
	NSUUID* _selectedUUID;
	NSMutableArray* _orderedUUIDs;
	NSMutableDictionary* _facesByUUID;
	NSMapTable* _UUIDsByFace;
	NSHashTable* _observers;
	NSString* _collectionIdentifier;
	NSUUID* _deviceUUID;
	NSString* _debugName;

}

@property (nonatomic,readonly) NSString * collectionIdentifier;                   //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * deviceUUID;                               //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (getter=hasLoaded,nonatomic,readonly) BOOL hasLoaded; 
@property (nonatomic,retain) NSString * debugName;                                //@synthesize debugName=_debugName - In the implementation block
@property (nonatomic,readonly) NTKFace * selectedFace; 
@property (nonatomic,readonly) unsigned long long selectedFaceIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)reset;
-(void)removeObserver:(id)arg1 ;
-(id)observers;
-(NSString *)collectionIdentifier;
-(BOOL)hasLoaded;
-(NSUUID *)deviceUUID;
-(id)logIdentifier;
-(unsigned long long)numberOfFaces;
-(void)_updateLogIdentifier;
-(id)selectedUUID;
-(id)facesByUUID;
-(id)orderedUUIDs;
-(void)_throwIfNotLoaded:(SEL)arg1 ;
-(void)setSelectedFace:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_setSelectedUUID:(id)arg1 notify:(BOOL)arg2 suppressingCallbackToObserver:(id)arg3 ;
-(void)_didSelectFaceUUID:(id)arg1 ;
-(void)addFace:(id)arg1 atIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3 ;
-(void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 suppressingCallbackToObserver:(id)arg4 ;
-(void)_didAddFace:(id)arg1 withUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_didMoveFace:(id)arg1 withUUID:(id)arg2 toIndex:(unsigned long long)arg3 ;
-(void)_notifyReorderedFacesOmittingObserver:(id)arg1 ;
-(id)faceAtIndex:(unsigned long long)arg1 ;
-(void)removeFace:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_removeFaceForUUID:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_didRemoveFace:(id)arg1 withUUID:(id)arg2 ;
-(void)_fixSelectionBecauseSelectedUUIDWillBeRemovedAtIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_notifyRemovedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3 ;
-(void)_notifyAddedFace:(id)arg1 atIndex:(unsigned long long)arg2 omitObserver:(id)arg3 ;
-(void)_notifySelectedFaceOmittingObserver:(id)arg1 ;
-(NTKFace *)selectedFace;
-(unsigned long long)selectedFaceIndex;
-(id)initWithCollectionIdentifier:(id)arg1 deviceUUID:(id)arg2 ;
-(unsigned long long)indexOfFace:(id)arg1 ;
-(BOOL)containsFace:(id)arg1 ;
-(void)enumerateFacesUsingBlock:(/*^block*/id)arg1 ;
-(void)setSelectedFaceIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)appendFace:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)moveFace:(id)arg1 toIndex:(unsigned long long)arg2 suppressingCallbackToObserver:(id)arg3 ;
-(void)removeFaceAtIndex:(unsigned long long)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(void)_setContentWithFaces:(id)arg1 order:(id)arg2 selection:(id)arg3 ;
-(void)_addFace:(id)arg1 forUUID:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_removeFaceForUUID:(id)arg1 ;
-(void)_selectFaceUUID:(id)arg1 notify:(BOOL)arg2 ;
-(void)_updateOrderedUUIDsFromReference:(id)arg1 andNotifyReordered:(BOOL)arg2 ;
-(void)replaceFaceLocallyByCopy:(id)arg1 suppressingCallbackToObserver:(id)arg2 ;
-(id)UUIDsByFace;
-(void)setDebugName:(NSString *)arg1 ;
-(NSString *)debugName;
@end

