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

cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)

project(qgis)

if(NOT SKIP_PREFIX)
    set(NG_PREFIX ng)
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
  set(INSTALL_BIN_DIR "${CMAKE_INSTALL_PREFIX}/Applications" CACHE INTERNAL "Installation directory for executables" FORCE)
  set(INSTALL_LIB_DIR "${INSTALL_BIN_DIR}/${NG_PREFIX}${PROJECT_NAME}.app/Contents/Frameworks" CACHE INTERNAL "Installation directory for libraries" FORCE)
  set(SKIP_INSTALL_HEADERS ON)
  set(SKIP_INSTALL_EXECUTABLES ON)
  set(SKIP_INSTALL_FILES ON)
  set(SKIP_INSTALL_EXPORT ON)
  set(CMAKE_MACOSX_RPATH ON)
else()
    include(GNUInstallDirs)

    set(INSTALL_BIN_DIR ${CMAKE_INSTALL_FULL_BINDIR} CACHE INTERNAL "Installation directory for executables" FORCE)
    set(INSTALL_LIB_DIR ${CMAKE_INSTALL_FULL_LIBDIR} CACHE INTERNAL "Installation directory for libraries" FORCE)
    set(INSTALL_INC_DIR ${CMAKE_INSTALL_FULL_INCLUDEDIR}/${NG_PREFIX}${PROJECT_NAME} CACHE INTERNAL "Installation directory for headers" FORCE)
    set(INSTALL_SHARE_DIR ${CMAKE_INSTALL_FULL_DATADIR}/${NG_PREFIX}${PROJECT_NAME} CACHE INTERNAL "Installation directory for share data" FORCE)
    set(INSTALL_PKGCONFIG_DIR ${INSTALL_LIB_DIR}/pkgconfig CACHE INTERNAL "Installation directory for pkgconfig (.pc) files" FORCE)
    set(INSTALL_MAN_DIR ${CMAKE_INSTALL_FULL_MANDIR} CACHE INTERNAL "Installation directory for manual pages" FORCE)
    set(INSTALL_DOC_DIR ${CMAKE_INSTALL_FULL_DOCDIR} CACHE INTERNAL "Installation directory for doc pages" FORCE)
    set(INSTALL_PLUGIN_DIR ${INSTALL_LIB_DIR}/${NG_PREFIX}${PROJECT_NAME}/plugins CACHE INTERNAL "Installation directory for plugins" FORCE)
endif()

if(CMAKE_GENERATOR_TOOLSET MATCHES "v([0-9]+)_xp")
    add_definitions(-D_WIN32_WINNT=0x0501)
endif()

include(util)
check_version(NGQGIS_MAJOR_VERSION NGQGIS_MINOR_VERSION NGQGIS_PATCH_VERSION CPACK_PACKAGE_VERSION_MAJOR CPACK_PACKAGE_VERSION_MINOR CPACK_PACKAGE_VERSION_PATCH RELEASE_NAME)
set(VERSION ${NGQGIS_MAJOR_VERSION}.${NGQGIS_MINOR_VERSION}.${NGQGIS_PATCH_VERSION})

if(OSX_FRAMEWORK)
    set(FRAMEWORK_VERSION "${NGQGIS_MAJOR_VERSION}")
endif()

include(configure)

include_directories ( ${CMAKE_CURRENT_SOURCE_DIR} )
include_directories ( ${CMAKE_CURRENT_BINARY_DIR} )

report_version("${NG_PREFIX}${PROJECT_NAME}" ${VERSION})

include(FindAnyProject)

# Search dependencies
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_anyproject(Qt4 REQUIRED COMPONENTS QtCore QtGui QtXml QtNetwork QtSvg QtSql)

option(WITH_QTWEBKIT "Build support QT Webkit" ON)
if(WITH_QTWEBKIT)
    find_anyproject(Qt4 REQUIRED COMPONENTS QtWebKit)
endif()

#create a variable to specify where our test data is
#so that unit tests can use TEST_DATA_DIR to locate
#the test data. See CMakeLists in test dirs for more info
#TEST_DATA_DIR is also used by QgsRenderChecker currently in core
set (TEST_DATA_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tests/testdata")

# Add binaries and libraries
add_subdirectory(src)
add_subdirectory(translations)

add_custom_target(prepare_parser DEPENDS ${PREPARE_PARSER_TARGETS})
add_custom_target(uninstall COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
