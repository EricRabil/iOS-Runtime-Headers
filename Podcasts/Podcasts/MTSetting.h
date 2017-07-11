/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 18, 2017 at 7:56:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, MTSettingsGroup;

@interface MTSetting : NSObject {

	BOOL _enabled;
	int _type;
	NSDictionary* _userInfo;
	NSString* _identifier;
	id _value;
	/*^block*/id _changeHandler;
	NSString* _title;
	/*^block*/id _generator;
	MTSettingsGroup* _group;

}

@property (nonatomic,copy) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id generator;                                  //@synthesize generator=_generator - In the implementation block
@property (assign,nonatomic,__weak) MTSettingsGroup * group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                     //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) id value;                                    //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) id changeHandler;                              //@synthesize changeHandler=_changeHandler - In the implementation block
+(id)optionSettingWithTitle:(id)arg1 headerTitle:(id)arg2 initialValue:(unsigned long long)arg3 optionDescription:(id)arg4 identifier:(id)arg5 changeHandler:(/*^block*/id)arg6 ;
+(id)radioOptionWithTitle:(id)arg1 radioGroup:(id)arg2 value:(unsigned long long)arg3 identifier:(id)arg4 ;
+(id)switchSettingWithTitle:(id)arg1 initialValue:(BOOL)arg2 identifier:(id)arg3 changeHandler:(/*^block*/id)arg4 ;
+(id)buttonSettingWithTitle:(id)arg1 detailText:(id)arg2 identifier:(id)arg3 changeHandler:(/*^block*/id)arg4 ;
+(id)buttonSettingWithTitle:(id)arg1 identifier:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
+(id)textSettingWithInitialValue:(id)arg1 placeholder:(id)arg2 identifier:(id)arg3 changeHandler:(/*^block*/id)arg4 ;
+(id)drilldownSettingWithTitle:(id)arg1 valueLabel:(id)arg2 identifier:(id)arg3 viewControllerGenerator:(/*^block*/id)arg4 ;
+(id)optionSettingWithTitle:(id)arg1 initialValue:(unsigned long long)arg2 optionDescription:(id)arg3 identifier:(id)arg4 changeHandler:(/*^block*/id)arg5 ;
-(id)init;
-(BOOL)enabled;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSDictionary *)userInfo;
-(NSString *)title;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setEnabled:(BOOL)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setGroup:(MTSettingsGroup *)arg1 ;
-(MTSettingsGroup *)group;
-(void)setChangeHandler:(id)arg1 ;
-(id)changeHandler;
-(id)generator;
-(void)setGenerator:(id)arg1 ;
@end
