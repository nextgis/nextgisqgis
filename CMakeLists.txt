################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017-2018, NextGIS <info@nextgis.com>
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

option(QT4_BUILD "Build with Qt4" ON)

if(OSX_FRAMEWORK)
    set(QGIS_APP_NAME ${PROJECT_NAME}-${NG_PREFIX})
else()
    set(QGIS_APP_NAME ${NG_PREFIX}${PROJECT_NAME})
endif()

if(OSX_FRAMEWORK)
    set(QGIS_DATA_SUBDIR "Applications/${QGIS_APP_NAME}.app/Contents/Resources")
    set(INSTALL_BIN_DIR "Applications" CACHE INTERNAL "Installation directory for executables" FORCE)
    set(INSTALL_LIB_DIR "${INSTALL_BIN_DIR}/${QGIS_APP_NAME}.app/Contents/Frameworks" CACHE INTERNAL "Installation directory for libraries" FORCE)
    if(QT4_BUILD)
        set(_PLUGIN_SUBDIR "Library/Plugins/Qt4")
    else()
        set(_PLUGIN_SUBDIR "Library/Plugins/Qt5")
    endif()
    set(QT4_PLUGINS_DIR Library/Plugins/Qt4)
    set(QT4_TRANSLATION_DIR Library/Translations/Qt4)
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
    if(QT4_BUILD)
        set(QT_PLUGIN_SUBDIR "${INSTALL_LIB_DIR}/qt4/plugins" )
    else()
        set(QT_PLUGIN_SUBDIR "${INSTALL_LIB_DIR}/qt5/plugins" )
    endif()

    # On Windows qt.conf will be common for several applications so we need to have paths for qt4/5
    set(QT4_PLUGINS_DIR FIXME)
    set(QT4_TRANSLATION_DIR FIXME)
    set(QT5_PLUGINS_DIR FIXME)
    set(QT5_TRANSLATION_DIR FIXME)

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

if(WITH_BINDINGS)
    set(HAVE_PYTHON TRUE)
endif()

include(configure)

include_directories ( ${CMAKE_CURRENT_SOURCE_DIR} )
include_directories ( ${CMAKE_CURRENT_BINARY_DIR} )

report_version("${NG_PREFIX}${PROJECT_NAME}" ${VERSION})

option(PREPARE_ONLY "Only generate flex and bison files" OFF)
option(WITH_DESKTOP "Build desktop components" ON)
option(WITH_BINDINGS "Build python bindings" ON)
include(FindAnyProject)

if(NOT PREPARE_ONLY)
    find_anyproject(ZLIB REQUIRED)
    find_anyproject(SQLite3 REQUIRED)
    find_anyproject(EXPAT REQUIRED)
    find_anyproject(GEOS REQUIRED)
    find_anyproject(PROJ REQUIRED)
    if(PROJ_FOUND)
        string(REPLACE "." ";" VERSION_LIST ${PROJ_VERSION_STR})
        list(GET VERSION_LIST 0 PROJ_VERSION_MAJOR)
        add_definitions(-DACCEPT_USE_OF_DEPRECATED_PROJ_API_H -DPROJ_VERSION_MAJOR=${PROJ_VERSION_MAJOR})
    endif()
    find_anyproject(GDAL REQUIRED)

    # if(POLICY CMP0071)
    #     cmake_policy(SET CMP0071 NEW)
    # endif()
    #
    # # Search dependencies
    # set(CMAKE_AUTOMOC ON)
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
    set(QT_REQUIRED_COMPONENTS QtCore QtGui QtXml QtNetwork QtSvg QtSql QtUiTools QtScript)
    option(WITH_QTWEBKIT "Build support QT Webkit" ON)
    if(WITH_QTWEBKIT)
        set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} QtWebKit)
        add_definitions(-DWITH_QTWEBKIT)
    endif()

    find_anyproject(Qt4 REQUIRED COMPONENTS ${QT_REQUIRED_COMPONENTS})
    set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS $<$<NOT:$<CONFIG:Debug>>:QT_NO_DEBUG>)
    if(WIN32)
        add_definitions(-DQT_DLL) # Only for shared libraries on win32
    endif()

    find_anyproject(Qca REQUIRED VERSION 2.2.0 EXACT)
    find_anyproject(Qscintilla REQUIRED VERSION 2.10.4 EXACT)
    if(QSCINTILLA_FOUND)
        add_definitions(-DQSCINTILLA_VERSION_STR="${QSCINTILLA_VERSION}")
        include_directories(${QSCINTILLA_INCLUDE_DIRS}/qscintilla)
    endif()

    find_anyproject(Qwt REQUIRED VERSION 6.1.3 EXACT)
    if(QWT_FOUND)
        add_definitions(-DQWT_VERSION_STR="${QWT_VERSION}")
        include_directories(${QWT_INCLUDE_DIRS}/qwt)
    endif()

    #create a variable to specify where our test data is
    #so that unit tests can use TEST_DATA_DIR to locate
    #the test data. See CMakeLists in test dirs for more info
    #TEST_DATA_DIR is also used by QgsRenderChecker currently in core
    set (TEST_DATA_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tests/testdata")

    # Copy zlib to qt bin directory
    if(WIN32)
        get_target_property(ZLIB_IMPORTED_LOCATION ${ZLIB_LIBRARIES} IMPORTED_LOCATION_RELEASE)
        get_filename_component(PATH_DIR ${ZLIB_IMPORTED_LOCATION} PATH)
        set(ENV{PATH} "$ENV{PATH};${PATH_DIR}")
        get_target_property(RCC_PATH Qt4::rcc IMPORTED_LOCATION)
        get_filename_component(QT_BIN_DIR ${RCC_PATH} PATH)
        file(COPY ${ZLIB_IMPORTED_LOCATION} DESTINATION ${QT_BIN_DIR})
    endif()
endif()

if(WITH_BINDINGS)
    # This is here as src/python
    find_package(PythonInterp REQUIRED)
    find_package(PythonLibs REQUIRED)

    if(OSX_FRAMEWORK)
        set(QGIS_PYTHON_DIR "Library/Python/${PYTHON_VERSION_MAJOR}.${PYTHON_VERSION_MINOR}/site-packages/${PROJECT_NAME}")
    elseif(WIN32)
        set(QGIS_PYTHON_DIR "${INSTALL_LIB_DIR}/Python${PYTHON_VERSION_MAJOR}${PYTHON_VERSION_MINOR}/site-packages/${PROJECT_NAME}")
    else()
        set(QGIS_PYTHON_DIR "lib/python${PYTHON_VERSION_MAJOR}.${PYTHON_VERSION_MINOR}/dist-packages/${PROJECT_NAME}")
    endif()
endif()

# Add binaries and libraries
IF(MSVC)
  # disable macros that offend std::numeric_limits<T>::min()/max()
  ADD_DEFINITIONS(-DNOMINMAX)

  IF (MSVC_VERSION LESS 1900)
    ADD_DEFINITIONS(-D_ALLOW_KEYWORD_MACROS)
    ADD_DEFINITIONS("-Dnoexcept=")
  ENDIF()
ENDIF(MSVC)

include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

if(${CMAKE_CXX_COMPILER_ID} MATCHES "Clang")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-return-type-c-linkage -Wno-overloaded-virtual")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Qunused-arguments")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Qunused-arguments")
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Qunused-arguments")
    set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -Qunused-arguments")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Qunused-arguments")
endif()

# Disable automatic conversion from QString to ASCII 8-bit strings (char *)
# (Keeps code compatible with Qt/Mac/64bit)
add_definitions(-DQT_NO_CAST_TO_ASCII)

# install
if(OSX_FRAMEWORK)
    execute_process(
        COMMAND ${CMAKE_COMMAND} -E make_directory ${PROJECT_BINARY_DIR}/symlinks
    )
endif()

add_subdirectory(src)
if(NOT PREPARE_ONLY)
    add_subdirectory(translations)
    add_subdirectory(images)
    add_subdirectory(resources)
    add_subdirectory(docs)
endif()

if(WITH_BINDINGS)
    add_subdirectory(python)
endif()

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
