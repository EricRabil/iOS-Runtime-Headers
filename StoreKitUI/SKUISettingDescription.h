/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 4:17:50 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKUIViewElement, SKUISettingsGroupDescription;

@interface SKUISettingDescription : NSObject {

	SKUIViewElement* _viewElement;
	BOOL _editsValid;
	SKUISettingsGroupDescription* _parent;

}

@property (nonatomic,readonly) BOOL allowsSelection; 
@property (assign,nonatomic,__weak) SKUISettingsGroupDescription * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) BOOL editsValid; 
@property (nonatomic,retain) SKUIViewElement * viewElement;                             //@synthesize viewElement=_viewElement - In the implementation block
+(Class)_viewClassForSettingDescription:(id)arg1 ;
+(BOOL)allowsEdit;
+(Class)viewClassForSettingDescription:(id)arg1 ;
-(void)reloadData;
-(id)indexPath;
-(BOOL)allowsSelection;
-(void)beginEditing;
-(void)_presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_isHidden;
-(SKUIViewElement *)viewElement;
-(void)_dismissViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)cancelEdits;
-(BOOL)commitEdits:(/*^block*/id)arg1 ;
-(void)discardEdits;
-(BOOL)editsValid;
-(void)handleSelectionOnCompletion:(/*^block*/id)arg1 ;
-(void)reloadWithViewElement:(id)arg1 parent:(id)arg2 ;
-(void)_deleteSetting;
-(void)_dispatchUpdate:(id)arg1 ;
-(void)_hideSetting;
-(BOOL)_initiallyHidden;
-(void)_reloadSetting;
-(void)_revealSetting;
-(void)_setEditsValid:(BOOL)arg1 ;
-(SKUISettingsGroupDescription *)parent;
-(void)setParent:(SKUISettingsGroupDescription *)arg1 ;
-(void)setViewElement:(SKUIViewElement *)arg1 ;
@end
