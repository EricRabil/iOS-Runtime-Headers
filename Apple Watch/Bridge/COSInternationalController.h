/*
* This header is generated by classdump-dyld 1.0
* on Sunday, February 5, 2017 at 3:48:11 PM Eastern Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSDictionary, COSLanguageSelector, COSLocaleSelector, NSSManager, PSSpecifier;

@interface COSInternationalController : PSListController {

	BOOL _hasFetchedLocalesInfo;
	BOOL _errorHasOccurred;
	BOOL _shouldReloadSpecifiers;
	NSArray* _systemLanguages;
	NSArray* _availableLocaleIdentifiers;
	NSArray* _supportedCalendars;
	NSDictionary* _defaultCalendars;
	COSLanguageSelector* _languageSelector;
	COSLocaleSelector* _localeSelector;
	NSDictionary* _numberingSystems;
	NSSManager* _nssManager;
	PSSpecifier* _remoteLoadingSpecifier;

}

@property (assign,nonatomic) BOOL hasFetchedLocalesInfo;                          //@synthesize hasFetchedLocalesInfo=_hasFetchedLocalesInfo - In the implementation block
@property (assign,nonatomic) BOOL errorHasOccurred;                               //@synthesize errorHasOccurred=_errorHasOccurred - In the implementation block
@property (nonatomic,retain) NSArray * systemLanguages;                           //@synthesize systemLanguages=_systemLanguages - In the implementation block
@property (nonatomic,retain) NSArray * availableLocaleIdentifiers;                //@synthesize availableLocaleIdentifiers=_availableLocaleIdentifiers - In the implementation block
@property (retain) NSDictionary * numberingSystems;                               //@synthesize numberingSystems=_numberingSystems - In the implementation block
@property (nonatomic,retain) COSLanguageSelector * languageSelector;              //@synthesize languageSelector=_languageSelector - In the implementation block
@property (nonatomic,retain) COSLocaleSelector * localeSelector;                  //@synthesize localeSelector=_localeSelector - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                             //@synthesize nssManager=_nssManager - In the implementation block
@property (assign,nonatomic) BOOL shouldReloadSpecifiers;                         //@synthesize shouldReloadSpecifiers=_shouldReloadSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * remoteLoadingSpecifier;                //@synthesize remoteLoadingSpecifier=_remoteLoadingSpecifier - In the implementation block
@property (nonatomic,readonly) NSArray * supportedCalendars;                      //@synthesize supportedCalendars=_supportedCalendars - In the implementation block
@property (nonatomic,readonly) NSDictionary * defaultCalendars;                   //@synthesize defaultCalendars=_defaultCalendars - In the implementation block
-(void)startSpinnerInCellForSpecifier:(id)arg1 ;
-(BOOL)errorHasOccurred;
-(void)setErrorHasOccurred:(BOOL)arg1 ;
-(PSSpecifier *)remoteLoadingSpecifier;
-(void)setRemoteLoadingSpecifier:(PSSpecifier *)arg1 ;
-(void)setLanguageWithNewRegion:(id)arg1 ;
-(void)queryGizmoForLocalesInfo;
-(void)handleLocalesInfo:(id)arg1 error:(id)arg2 ;
-(void)reloadNumberingSystemSpecifier;
-(id)numberingSystemsValues;
-(id)numberingSystemSpecifier;
-(void)setNumberingSystem:(id)arg1 specifier:(id)arg2 ;
-(id)numberingSystem:(id)arg1 ;
-(void)addNumberingSystemSpecifier:(id)arg1 ;
-(NSDictionary *)numberingSystems;
-(id)gizmoLanguage:(id)arg1 ;
-(void)setGizmoLanguage:(id)arg1 specifier:(id)arg2 ;
-(void)showLanguageSheet:(id)arg1 ;
-(id)countryForCurrentLocale:(id)arg1 ;
-(void)setCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)calendar:(id)arg1 ;
-(id)numberingSystemsTitles;
-(void)setAvailableLocaleIdentifiers:(NSArray *)arg1 ;
-(NSDictionary *)defaultCalendars;
-(BOOL)hasFetchedLocalesInfo;
-(void)setHasFetchedLocalesInfo:(BOOL)arg1 ;
-(void)setNumberingSystems:(NSDictionary *)arg1 ;
-(BOOL)shouldReloadSpecifiers;
-(void)setShouldReloadSpecifiers:(BOOL)arg1 ;
-(void)setSystemLanguages:(NSArray *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)stopSpinner;
-(id)defaultCalendarForLocaleID:(id)arg1 ;
-(id)validateLocale:(id)arg1 ;
-(id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1 ;
-(NSArray *)systemLanguages;
-(BOOL)shouldReloadSpecifiersOnResume;
-(COSLanguageSelector *)languageSelector;
-(COSLocaleSelector *)localeSelector;
-(void)setLanguageSelector:(COSLanguageSelector *)arg1 ;
-(void)setLocaleSelector:(COSLocaleSelector *)arg1 ;
-(NSArray *)availableLocaleIdentifiers;
-(NSArray *)supportedCalendars;
-(NSSManager *)nssManager;
-(void)setNssManager:(NSSManager *)arg1 ;
-(id)specifiers;
@end
