//
//  MSHFUtils.h
//  Mitsuha
//
//  Created by c0ldra1n on 2/6/17.
//  Copyright © 2017 c0ldra1n. All rights reserved.
//

#import <Foundation/Foundation.h>

#define MSHFPreferencesIdentifier @"com.ryannair05.mitsuhaforever"
#define MSHFColorsIdentifier @"com.ryannair05.mitsuhaforever.colors"
#define MSHFPreferencesChanged @"com.ryannair05.mitsuhaforever/ReloadPrefs"
// #define MSHFPrefsFile                                                          \
//   @"/var/mobile/Library/Preferences/"                                          \
//   @"com.ryannair05.mitsuhaforever.plist"
#define MSHFColorsFile                                                         \
  @"/var/mobile/Library/Preferences/"                                          \
  @"com.ryannair05.mitsuhaforever.colors.plist"
#define MSHFAppSpecifiersDirectory                                             \
  @"/Library/PreferenceBundles/MitsuhaForeverPrefs.bundle/Apps"
#define SylphPreferencesFile                                                   \
  @"/var/mobile/Library/Preferences/ch.mdaus.sylph.plist"
#define SylphTweakDylibFile                                                    \
  @"/var/jb/Library/MobileSubstrate/DynamicLibraries/Sylph.dylib"
#define SylphTweakPlistFile                                                    \
  @"/var/jb/Library/MobileSubstrate/DynamicLibraries/Sylph.plist"
#define ArtsyPreferencesFile                                                   \
  @"/var/mobile/Library/Preferences/ch.mdaus.artsy.plist"
#define ArtsyTweakDylibFile                                                    \
  @"/var/jb/Library/MobileSubstrate/DynamicLibraries/Artsy.dylib"
#define ArtsyTweakPlistFile                                                    \
  @"/var/jb/Library/MobileSubstrate/DynamicLibraries/Artsy.plist"
#define MSHFAudioBufferSize 1024

#ifndef ASSPORT
#define ASSPort 44333
#endif

@interface NSUserDefaults (mshfPrivate)
- (instancetype)_initWithSuiteName:(NSString *)suiteName
                         container:(NSURL *)container;
@end