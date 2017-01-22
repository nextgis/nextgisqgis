################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017, NextGIS <info@nextgis.com>
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
# OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.
################################################################################
include (CheckIncludeFile)
include (CheckIncludeFiles)
include (CheckCSourceCompiles)

if(NOT WIN32 AND NOT ANDROID)
    include(CheckFunctionExists)
    check_function_exists(openpty OPENPTY_IN_LIBC)
    if(NOT OPENPTY_IN_LIBC)
        set(CMAKE_REQUIRED_INCLUDES util.h)
        set(CMAKE_REQUIRED_LIBRARIES util)
        check_function_exists(openpty NEED_LIBUTIL)
        if(NEED_LIBUTIL)
            set(OPENPTY_LIBRARY util)
        else()
            message(SEND_ERROR "openpty not found!")
        endif()
    endif()
endif()

option (PEDANTIC "Determines if we should compile in pedantic mode." TRUE)
if (PEDANTIC)
    if(MSVC)
        set(_warnings "")
        if (NOT USING_NMAKE AND NOT USING_NINJA)
            set(_warnings "${_warnings} /W4" )
        endif ()

        # disable warnings
        set(_warnings "${_warnings} /wd4100 ")  # unused formal parameters
        set(_warnings "${_warnings} /wd4127 ")  # constant conditional expressions (used in Qt template classes)
        set(_warnings "${_warnings} /wd4190 ")  # 'identifier' has C-linkage specified, but returns UDT 'identifier2' which is incompatible with C
        set(_warnings "${_warnings} /wd4231 ")  # nonstandard extension used : 'identifier' before template explicit instantiation (used in Qt template classes)
        set(_warnings "${_warnings} /wd4244 ")  # conversion from '...' to '...' possible loss of data
        set(_warnings "${_warnings} /wd4251 ")  # needs to have dll-interface to be used by clients of class (occurs in Qt template classes)
        set(_warnings "${_warnings} /wd4275 ")  # non dll-interface class '...' used as base for dll-interface class '...'
        set(_warnings "${_warnings} /wd4505 ")  # unreferenced local function has been removed (QgsRasterDataProvider::extent)
        set(_warnings "${_warnings} /wd4510 ")  # default constructor could not be generated (sqlite3_index_info, QMap)
        set(_warnings "${_warnings} /wd4512 ")  # assignment operator could not be generated (sqlite3_index_info)
        set(_warnings "${_warnings} /wd4610 ")  # user defined constructor required (sqlite3_index_info)
        set(_warnings "${_warnings} /wd4706 ")  # assignment within conditional expression (pal)
        set(_warnings "${_warnings} /wd4800 ")  # 'int' : forcing value to bool 'true' or 'false' (performance warning)
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${_warnings}")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${_warnings}")
    else ()
        # add warnings via flags (not as definitions as on Mac -Wall can not be overridden per language )
        set(_warnings "-Wall -Wextra -Wno-long-long -Wformat-security -Wno-strict-aliasing")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${_warnings}")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${_warnings}")

        # Qt produces lots of warnings with strict aliasing (as of Qt 4.4.0 & GCC 4.3)
        # There are redundant declarations in Qt and GDAL
        # ADD_DEFINITIONS( -fstrict-aliasing -Wstrict-aliasing=1 -Wredundant-decls )

        if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
            set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-return-type-c-linkage -Wno-overloaded-virtual")
        endif ()

        # add any extra CXXFLAGS flags set by user. can be -D CXX_EXTRA_FLAGS or environment variable
        # command line -D option overrides environment variable
        # e.g. useful for suppressing transient upstream warnings in dependencies, like Qt
        set(CXX_EXTRA_FLAGS "" CACHE STRING "Additional appended CXXFLAGS")
        if (CXX_EXTRA_FLAGS STREQUAL "" AND DEFINED $ENV{CXX_EXTRA_FLAGS})
            set(CXX_EXTRA_FLAGS "$ENV{CXX_EXTRA_FLAGS}")
        endif ()
        if (NOT CXX_EXTRA_FLAGS STREQUAL "")
            set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CXX_EXTRA_FLAGS}")
        endif ()
    endif ()
endif ()

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Qunused-arguments")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Qunused-arguments")
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Qunused-arguments")
    set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -Qunused-arguments")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Qunused-arguments")
endif ()

if (CMAKE_BUILD_TYPE MATCHES "Debug" OR CMAKE_BUILD_TYPE MATCHES "RelWithDebInfo")
    add_definitions(-DQGISDEBUG=1)
endif ()

check_c_source_compiles ("
#include <stdlib.h>
static void foo(void) __attribute__ ((unused));
int main(void) { return 0; }
" HAVE___ATTRIBUTE__)

check_c_source_compiles ("
#include <stdlib.h>
static void foo(void) __attribute__ ((visibility(\"default\")));
int main(void) { return 0; }
" HAVE___ATTRIBUTE__VISIBILITY_DEFAULT)

check_c_source_compiles ("
#include <stdlib.h>
static void foo(void) __attribute__ ((visibility(\"hidden\")));
int main(void) { return 0; }
" HAVE___ATTRIBUTE__VISIBILITY_HIDDEN)

check_c_source_compiles ("
__declspec(selectany) int a;
int main(void) { return 0; }
" HAVE___DECLSPEC)

set (CMAKE_CXX_VISIBILITY_PRESET default)
set (CMAKE_VISIBILITY_INLINES_HIDDEN 1)

if (HAVE___ATTRIBUTE__VISIBILITY_DEFAULT)
    set (DLLEXPORT "__attribute__((visibility(\"default\")))")
    set (DLLIMPORT "")
elseif (HAVE___DECLSPEC)
    set (DLLEXPORT "__declspec(dllexport)")
    set (DLLIMPORT "__declspec(dllimport)")
endif (HAVE___ATTRIBUTE__VISIBILITY_DEFAULT)

if (WIN32)
    if (MSVC)
        add_definitions(-D_USE_MATH_DEFINES)
        # Turn off deprecation warnings
        add_definitions(-D_CRT_SECURE_NO_WARNINGS)
        add_definitions(-D_CRT_NONSTDC_NO_WARNINGS)
    endif()
else ()
    if(PEDANTIC AND NOT APPLE)
        set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--no-undefined")
        set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -Wl,--no-undefined")
        set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--no-undefined")
    endif()

endif()

# TODO: Move to application where import needed
# add_definitions("-DCORE_EXPORT=${DLLIMPORT}")
# add_definitions("-DGUI_EXPORT=${DLLIMPORT}")
# add_definitions("-DPYTHON_EXPORT=${DLLIMPORT}")
# add_definitions("-DANALYSIS_EXPORT=${DLLIMPORT}")
# add_definitions("-DAPP_EXPORT=${DLLIMPORT}")
# add_definitions("-DCUSTOMWIDGETS_EXPORT=${DLLIMPORT}")
# add_definitions("-DSERVER_EXPORT=${DLLIMPORT}")


# Disable automatic conversion from QString to ASCII 8-bit strings (char *)
# (Keeps code compatible with Qt/Mac/64bit)
add_definitions(-DQT_NO_CAST_TO_ASCII)

find_package(Threads)
if(Threads_FOUND)
    add_definitions(-D_HAVE_PTHREAD_)
    set(TARGET_LINK_LIB ${TARGET_LINK_LIB} ${CMAKE_THREAD_LIBS_INIT})
endif()

check_include_file("windows.h" HAVE_WINDOWS_H)
if(HAVE_WINDOWS_H)
    add_definitions(-D_HAVE_WINDOWS_H_)
endif()

#define QGIS_PLUGIN_SUBDIR "${QGIS_PLUGIN_SUBDIR}"
#define QGIS_DATA_SUBDIR "${QGIS_DATA_SUBDIR}"
#define QGIS_LIBEXEC_SUBDIR "${QGIS_LIBEXEC_SUBDIR}"
#define QGIS_LIB_SUBDIR "${QGIS_LIB_SUBDIR}"

#?define CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}"
#?define CMAKE_SOURCE_DIR "${CMAKE_SOURCE_DIR}"

#define QSCINTILLA_VERSION_STR "${QSCINTILLA_VERSION_STR}"
#define QGIS_MACAPP_BUNDLE ${QGIS_MACAPP_BUNDLE}

#define QT_PLUGINS_DIR "${QT_PLUGINS_DIR}"
#define OSG_PLUGINS_PATH "${OSG_PLUGINS_PATH}"

math(EXPR QGIS_VERSION_INT "${CPACK_PACKAGE_VERSION_MAJOR}*10000+${CPACK_PACKAGE_VERSION_MINOR}*100+${CPACK_PACKAGE_VERSION_PATCH}")

configure_file(${CMAKE_SOURCE_DIR}/cmake/qgsconfig.h.in ${CMAKE_CURRENT_BINARY_DIR}/qgsconfig.h)
configure_file(${CMAKE_SOURCE_DIR}/cmake/cmake_uninstall.cmake.in ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake IMMEDIATE @ONLY)
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/qgsversion.h "#define QGSVERSION \"${VERSION}\"
#define QGS_GIT_REMOTE_URL \"https://github.com/nextgis/nextgisqgis\" "
)
