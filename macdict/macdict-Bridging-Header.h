//
//  macdict.swift.h
//  macdict
//
//  Created by 钟建峰 on 2020/2/12.
//  Copyright © 2020 钟建峰. All rights reserved.
//

#ifndef macdict_Bridging_Header_h
#define macdict_Bridging_Header_h

#import <Foundation/Foundation.h>
#import <CoreServices/CoreServices.h>

typedef NS_ENUM(NSUInteger, DCSRecordVersion) {
    DCSRecordVersionHTML = 0,
    DCSRecordVersionHTMLWithAppCSS,
    DCSRecordVersionHTMLWithPopoverCSS,
    DCSRecordVersionText
};

extern DCSDictionaryRef DCSDictionaryCreate(CFURLRef url);
extern DCSDictionaryRef DCSRecordGetSubDictionary(CFTypeRef record);
extern CFDictionaryRef DCSCopyDefinitionMarkup(DCSDictionaryRef dictionary, CFStringRef record);
extern CFStringRef DCSDictionaryGetName(DCSDictionaryRef dictionary);
extern CFStringRef DCSDictionaryGetShortName(DCSDictionaryRef dictionary);
extern CFArrayRef DCSCopyAvailableDictionaries();
extern CFArrayRef DCSCopyRecordsForSearchString(DCSDictionaryRef dictionary, CFStringRef string, void *, void *);
extern CFStringRef DCSRecordCopyData(CFTypeRef record, long version);
extern CFStringRef DCSRecordCopyDataURL(CFTypeRef record);
extern CFStringRef DCSRecordGetAnchor(CFTypeRef record);
extern CFStringRef DCSRecordGetAssociatedObj(CFTypeRef record);
extern CFStringRef DCSRecordGetHeadword(CFTypeRef record);
extern CFStringRef DCSRecordGetRawHeadword(CFTypeRef record);
extern CFStringRef DCSRecordGetString(CFTypeRef record);
extern CFStringRef DCSRecordGetTitle(CFTypeRef record);

#endif /* macdict_Bridging_Header_h */
