################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017-2020, NextGIS <info@nextgis.com>
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

cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)
project(qgis)

if(NOT SKIP_PREFIX)
    set(NG_PREFIX ng)
    set(PACKAGE_VENDOR "NextGIS")
    set(PACKAGE_VENDOR_DOMAIN "nextgis.com")
endif()

# Some init settings
set(CMAKE_COLOR_MAKEFILE ON)
# Set path to additional CMake modules
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

if(OSX_FRAMEWORK AND (BUILD_SHARED_LIBS OR BUILD_STATIC_LIBS))
  message(FATAL_ERROR "Only OSX_FRAMEWORK key or any or both BUILD_SHARED_LIBS
                       and BUILD_STATIC_LIBS keys are permitted")
endif()

if(OSX_FRAMEWORK)
    set(QGIS_APP_NAME ${PROJECT_NAME}-${NG_PREFIX})
else()
    set(QGIS_APP_NAME ${NG_PREFIX}${PROJECT_NAME})
endif()

if(OSX_FRAMEWORK)
    set(QGIS_DATA_SUBDIR "Applications/${QGIS_APP_NAME}.app/Contents/Resources")
    set(INSTALL_BIN_DIR "Applications" CACHE INTERNAL "Installation directory for executables" FORCE)
    set(INSTALL_LIB_DIR "${INSTALL_BIN_DIR}/${QGIS_APP_NAME}.app/Contents/Frameworks" CACHE INTERNAL "Installation directory for libraries" FORCE)
    set(_PLUGIN_SUBDIR "Library/Plugins/Qt5")
    set(QT5_PLUGINS_DIR Library/Plugins/Qt5)
    set(QT5_TRANSLATION_DIR Library/Translations/Qt5)

    set(INSTALL_PLUGIN_DIR ${_PLUGIN_SUBDIR}/${NG_PREFIX}${PROJECT_NAME} CACHE INTERNAL "Installation directory for plugins" FORCE)
    set(INSTALL_SHARE_DIR ${QGIS_DATA_SUBDIR} CACHE INTERNAL "Installation directory for share data" FORCE)
    set(INSTALL_MAN_DIR ${INSTALL_SHARE_DIR}/man CACHE INTERNAL "Installation directory for manual pages" FORCE)
    set(INSTALL_DOC_DIR ${INSTALL_SHARE_DIR}/doc CACHE INTERNAL "Installation directory for doc pages" FORCE)
    set(QT_PLUGIN_SUBDIR ${_PLUGIN_SUBDIR})
    set(QGIS_PLUGIN_SUBDIR ${_PLUGIN_SUBDIR}/${NG_PREFIX}${PROJECT_NAME})
    set(QGIS_LIB_SUBDIR "Applications/${QGIS_APP_NAME}.app/Contents/Frameworks")
    set(INSTALL_LIB_DIR2 Library/Frameworks CACHE INTERNAL "Installation directory for symlinks" FORCE)

    set(QGIS_MACAPP_BUNDLE 1)

    set(SKIP_INSTALL_HEADERS ON)
    set(SKIP_INSTALL_EXECUTABLES OFF)
    set(SKIP_INSTALL_FILES OFF)
    set(SKIP_INSTALL_EXPORT ON)
    set(CMAKE_MACOSX_RPATH ON)
else()
    include(GNUInstallDirs)

    set(QGIS_DATA_SUBDIR "${CMAKE_INSTALL_DATADIR}/${NG_PREFIX}${PROJECT_NAME}")
    set(INSTALL_BIN_DIR ${CMAKE_INSTALL_BINDIR} CACHE INTERNAL "Installation directory for executables" FORCE)
    set(INSTALL_LIB_DIR ${CMAKE_INSTALL_LIBDIR} CACHE INTERNAL "Installation directory for libraries" FORCE)
    set(INSTALL_INC_DIR ${CMAKE_INSTALL_INCLUDEDIR}/${NG_PREFIX}${PROJECT_NAME} CACHE INTERNAL "Installation directory for headers" FORCE)
    set(INSTALL_SHARE_DIR ${CMAKE_INSTALL_DATADIR}/${NG_PREFIX}${PROJECT_NAME} CACHE INTERNAL "Installation directory for share data" FORCE)
    set(INSTALL_PKGCONFIG_DIR ${INSTALL_LIB_DIR}/pkgconfig CACHE INTERNAL "Installation directory for pkgconfig (.pc) files" FORCE)
    set(INSTALL_MAN_DIR ${CMAKE_INSTALL_MANDIR} CACHE INTERNAL "Installation directory for manual pages" FORCE)
    set(INSTALL_DOC_DIR ${CMAKE_INSTALL_DOCDIR} CACHE INTERNAL "Installation directory for doc pages" FORCE)
    # TODO: solve the qt and qgis plugins paths
    set(INSTALL_PLUGIN_DIR ${INSTALL_LIB_DIR}/${NG_PREFIX}${PROJECT_NAME}/plugins CACHE INTERNAL "Installation directory for plugins" FORCE)
    set(QT_PLUGIN_SUBDIR "${INSTALL_LIB_DIR}/qt5/plugins" )

    set(QGIS_PLUGIN_SUBDIR "${INSTALL_LIB_DIR}/${NG_PREFIX}${PROJECT_NAME}/plugins")
    set(QGIS_LIB_SUBDIR ${INSTALL_LIB_DIR})
    set(QGIS_MACAPP_BUNDLE 0)
endif()

set(QT_PREFIX ${CMAKE_INSTALL_PREFIX})
set(CMAKE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

if(CMAKE_GENERATOR_TOOLSET MATCHES "v([0-9]+)_xp")
    add_definitions(-D_WIN32_WINNT=0x0501)
endif()

include(util)
check_version(NGQGIS_MAJOR_VERSION NGQGIS_MINOR_VERSION NGQGIS_PATCH_VERSION CPACK_PACKAGE_VERSION_MAJOR CPACK_PACKAGE_VERSION_MINOR CPACK_PACKAGE_VERSION_PATCH RELEASE_NAME)
set(VERSION ${NGQGIS_MAJOR_VERSION}.${NGQGIS_MINOR_VERSION}.${NGQGIS_PATCH_VERSION})
set(QGIS_VERSION ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})

if(OSX_FRAMEWORK)
    set(FRAMEWORK_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}")
endif()

# For configure

set(HAVE_SPATIALITE TRUE)
#cmakedefine HAVE_MSSQL
set(HAVE_ORACLE TRUE)


include(configure)

include_directories ( ${CMAKE_CURRENT_SOURCE_DIR} )
include_directories ( ${CMAKE_CURRENT_BINARY_DIR} )

report_version("${NG_PREFIX}${PROJECT_NAME}" ${VERSION})

option(PREPARE_ONLY "Only generate flex and bison files" OFF)

include(FindAnyProject)

if(NOT PREPARE_ONLY)

    find_anyproject(PROJ REQUIRED)
    if(PROJ_FOUND)
        add_definitions(-DACCEPT_USE_OF_DEPRECATED_PROJ_API_H)
    endif()
    
    find_anyproject(GEOS REQUIRED)
    find_anyproject(GDAL REQUIRED)
    find_anyproject(EXPAT REQUIRED)
    find_anyproject(SPATIALINDEX REQUIRED)
    find_anyproject(SQLITE3 REQUIRED)
    find_anyproject(SPATIALITE REQUIRED)
    find_anyproject(QCA REQUIRED)
    find_anyproject(LIBZIP REQUIRED)
    find_anyproject(QTKEYCHAIN REQUIRED)

    set(CMAKE_INCLUDE_CURRENT_DIR ON)
    SET(CMAKE_AUTOMOC ON)
    
    set(QT_REQUIRED_COMPONENTS Core Gui Widgets Network Xml Svg Concurrent PrintSupport Sql)
    
    option(WITH_QTWEBKIT "Build support QT Webkit" OFF)
    if(WITH_QTWEBKIT)
        set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} WebKit)
        add_definitions(-DWITH_QTWEBKIT)
    endif()

    find_anyproject(Qt5 REQUIRED COMPONENTS ${QT_REQUIRED_COMPONENTS})
    set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS $<$<NOT:$<CONFIG:Debug>>:QT_NO_DEBUG>)

    string(SUBSTRING ${QT5_VERSION} 0 1 Qt5Core_VERSION_MAJOR)
endif()

############################################

# Add binaries and libraries
if(MSVC)
  # disable macros that offend std::numeric_limits<T>::min()/max()
  add_definitions(-DNOMINMAX)

  if (MSVC_VERSION LESS 1900)
    add_definitions(-D_ALLOW_KEYWORD_MACROS)
    add_definitions("-Dnoexcept=")
  endif()
endif(MSVC)


math(EXPR QGIS_VERSION_INT "${CPACK_PACKAGE_VERSION_MAJOR}*10000+${CPACK_PACKAGE_VERSION_MINOR}*100+${CPACK_PACKAGE_VERSION_PATCH}")

# POLICIES
cmake_policy(SET CMP0071 NEW)

#############################################################

IF(MSVC)
  set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
  # disable macros that offend std::numeric_limits<T>::min()/max()
  add_definitions(-DNOMINMAX)
  
    # Turn on defines for non standard maths stuff
  add_definitions(-D_USE_MATH_DEFINES)

  # Turn off deprecation warnings
  add_definitions(-D_CRT_SECURE_NO_WARNINGS)
  add_definitions(-D_CRT_NONSTDC_NO_WARNINGS)
endif(MSVC)

add_subdirectory(src)

add_custom_target(prepare_parser DEPENDS ${PREPARE_PARSER_TARGETS})

set(PACKAGE_NAME ${PROJECT_NAME})
string(TOUPPER ${PACKAGE_NAME} PACKAGE_UPPER_NAME)

add_custom_target(uninstall COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)

# Archiving ====================================================================

set(CPACK_PACKAGE_NAME "${PACKAGE_NAME}")
set(CPACK_PACKAGE_VENDOR "${PACKAGE_VENDOR}")
set(CPACK_PACKAGE_VERSION "${VERSION}")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "${PACKAGE_NAME} Installation")
set(CPACK_PACKAGE_RELOCATABLE TRUE)
set(CPACK_ARCHIVE_COMPONENT_INSTALL ON)
set(CPACK_GENERATOR "ZIP")
set(CPACK_MONOLITHIC_INSTALL ON)
set(CPACK_STRIP_FILES TRUE)

# Get cpack zip archive name
get_cpack_filename(${VERSION} PROJECT_CPACK_FILENAME)
set(CPACK_PACKAGE_FILE_NAME ${PROJECT_CPACK_FILENAME})

include(CPack)
