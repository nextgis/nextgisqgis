/******************************************************************************
 * Project: NextGIS QGIS
 * Purpose: NextGIS QGIS force select input
 * Author:  Dmitry Baryshnikov, dmitry.baryshnikov@nextgis.com
 ******************************************************************************
 *   Copyright (c) 2017 NextGIS, <info@nextgis.com>
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU Lesser General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Input switch get from https://github.com/vovkasm/input-source-switcher
 * Author: Vladimir Timofeev
 * License: Licensed under the terms of the MIT license.
 ****************************************************************************/
#ifndef NGADDONS_H
#define NGADDONS_H

#include <string>

#ifdef Q_OS_MAC

#include <Carbon/Carbon.h>
#include <CoreFoundation/CoreFoundation.h>

class CFStringWrap {
public:
    CFStringWrap(const std::string& str) {
        _cfStr = CFStringCreateWithBytes(NULL, (const UInt8*)str.c_str(), str.length(), kCFStringEncodingUTF8, FALSE);
    }

    CFStringRef cfString() const { return _cfStr; }

    ~CFStringWrap() {
        CFRelease(_cfStr);
        _cfStr = NULL;
    }

private:
    CFStringRef _cfStr;

};

class CFDictionaryWrap {
public:
    CFDictionaryWrap() {
        _cfDict = CFDictionaryCreateMutable(NULL, 0, NULL, NULL);
    }

    CFMutableDictionaryRef cfDict() const { return _cfDict; }

    void set(CFStringRef key, CFTypeRef val) {
        CFDictionarySetValue(_cfDict, key, val);
    }

    ~CFDictionaryWrap() {
        CFRelease(_cfDict);
        _cfDict = NULL;
    }

private:
    CFMutableDictionaryRef _cfDict;
};

static TISInputSourceRef findInputSourceByLang(const std::string& lang) {
    CFDictionaryWrap filter;
    filter.set(kTISPropertyInputSourceIsEnabled, kCFBooleanTrue);
    filter.set(kTISPropertyInputSourceIsSelectCapable, kCFBooleanTrue);

    CFArrayRef sourceList = TISCreateInputSourceList(filter.cfDict(), false);
    if (sourceList == NULL)
        return NULL;

    CFStringWrap requiredLangName(lang);

    TISInputSourceRef is = NULL;

    CFIndex cnt = CFArrayGetCount(sourceList);
    for (CFIndex i = 0; i < cnt; ++i) {
        TISInputSourceRef inputSource = (TISInputSourceRef)CFArrayGetValueAtIndex(sourceList, i);
        CFArrayRef inputSourceLanguages = (CFArrayRef)TISGetInputSourceProperty(inputSource, kTISPropertyInputSourceLanguages);
        CFIndex inputSourceLanguagesCount = CFArrayGetCount(inputSourceLanguages);
        for (CFIndex langIdx = 0; langIdx < inputSourceLanguagesCount; ++langIdx) {
            CFStringRef langName = (CFStringRef)CFArrayGetValueAtIndex(inputSourceLanguages, langIdx);
            if (CFStringCompare(langName, requiredLangName.cfString(), 0) == kCFCompareEqualTo) {
                is = inputSource;
                goto found;
            }
        }
    }
found:

    if (is) CFRetain(is);
    CFRelease(sourceList);

    return is;
}

inline void selectInput(std::string lang)
{
    TISInputSourceRef is = findInputSourceByLang(lang);
    if (is != NULL) {
        TISSelectInputSource(is);
        CFRelease(is);
    }
}

#endif // Q_OS_MAC

#ifdef Q_OS_WIN

#include <windows.h>

// Solution is form here: https://stackoverflow.com/q/9685560/2901140

inline void selectInput(std::string lang)
{
    int nCode = 0x0009;
    if("en" == lang)
        nCode = 0x0009;
    else if("ru" == lang)
        nCode = 0x0019;
    // codes are from https://msdn.microsoft.com/en-us/library/cc233982.aspx

    SendMessage(GetActiveWindow(), WM_INPUTLANGCHANGEREQUEST, 0, nCode);
}

#endif // Q_OS_WIN

#endif // NGADDONS_H
