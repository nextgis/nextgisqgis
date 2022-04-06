################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017-2022, NextGIS <info@nextgis.com>
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

# set the default locations where the targets (executables, libraries) will land when compiled
# this is to allow running qgis from the source tree without having to actually do a "make install"
set (QGIS_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${QGIS_OUTPUT_DIRECTORY}/bin)
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${QGIS_OUTPUT_DIRECTORY}/lib)

get_property(IS_MULTI_CONFIG GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
if (IS_MULTI_CONFIG)
    set (BINARY_DIR ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${CMAKE_BUILD_TYPE})
else()
    set (BINARY_DIR ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
endif()

include(util)
check_version(NGQGIS_MAJOR_VERSION NGQGIS_MINOR_VERSION NGQGIS_PATCH_VERSION CPACK_PACKAGE_VERSION_MAJOR CPACK_PACKAGE_VERSION_MINOR CPACK_PACKAGE_VERSION_PATCH RELEASE_NAME)
set(VERSION ${NGQGIS_MAJOR_VERSION}.${NGQGIS_MINOR_VERSION}.${NGQGIS_PATCH_VERSION})
set(QGIS_VERSION ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})

if(OSX_FRAMEWORK)
    set(FRAMEWORK_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}")
endif()

# For configure

include(GenerateExportHeader)
include(configure)

include_directories ( ${CMAKE_CURRENT_SOURCE_DIR} )
include_directories ( ${CMAKE_CURRENT_BINARY_DIR} )

report_version("${NG_PREFIX}${PROJECT_NAME}" ${VERSION})

option(PREPARE_ONLY "Only generate flex and bison files" OFF)

include(FindAnyProject)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_AUTOUIC_SEARCH_PATHS}
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/symbollayer
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/editorwidgets
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/effects
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/labeling
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/layout
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/processing
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/auth
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/raster
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/styledock
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/mesh
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/pointcloud
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/3d
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/callouts
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/numericformats
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/attributeformconfig
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/georeferencer
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ui/annotations
)
set(CMAKE_AUTOMOC ON)

file(MAKE_DIRECTORY ${PROJECT_BINARY_DIR}/symlinks)

################################################################################
# Find Qt5 packages
set(QT_REQUIRED_COMPONENTS Core Gui Widgets Network Xml Svg Concurrent Test UiTools Sql PrintSupport)
if (WITH_3D)
    set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} 3DCore 3DRender 3DInput 3DLogic 3DExtras)
endif()
if (MSVC)
    set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} WinExtras)
endif()
if (APPLE)
    set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} MacExtras)
endif()
if (UNIX AND NOT APPLE)
    set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} DBus)
endif()

option(WITH_QTWEBKIT "Build support QT Webkit" OFF)
if(WITH_QTWEBKIT)
    set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} WebKit WebKitWidgets)
    add_definitions(-DWITH_QTWEBKIT)
endif()

set_property(DIRECTORY APPEND PROPERTY COMPILE_DEFINITIONS $<$<NOT:$<CONFIG:Debug>>:QT_NO_DEBUG>)

# Need for synccrsdb
find_anyproject(PROJ REQUIRED)
if (PROJ_FOUND)
    string(REPLACE "." ";" VERSION_LIST ${PROJ_VERSION_STR})
    list(GET VERSION_LIST 0 PROJ_VERSION_MAJOR)
    list(GET VERSION_LIST 1 PROJ_VERSION_MINOR)
    list(GET VERSION_LIST 2 PROJ_VERSION_PATCH)
endif()

find_anyproject(GDAL REQUIRED)
find_anyproject(GEOS REQUIRED)
find_anyproject(Qca REQUIRED)
find_anyproject(QtKeychain REQUIRED)
find_anyproject(SpatialIndex REQUIRED)
find_anyproject(SQLite3 REQUIRED)
find_anyproject(LIBZIP REQUIRED)
# find_anyproject(EXIV REQUIRED)
find_anyproject(EXPAT REQUIRED)
find_anyproject(ZLIB REQUIRED)

# if (APPLE)
#     # Libtasn1 is for DER-encoded PKI ASN.1 parsing/extracting workarounds
#     find_anyproject(Libtasn1 REQUIRED)
# endif()

# try` to configure and build POLY2TRI support
set (WITH_INTERNAL_POLY2TRI TRUE CACHE BOOL "Determines whether POLY2TRI should be built from internal copy")

if (NOT WITH_INTERNAL_POLY2TRI)
    find_anyproject(Poly2Tri REQUIRED)
endif()

if(PREPARE_ONLY)
    set(SKIP_INSTALL_LIBRARIES ON)
    set(SKIP_INSTALL_ALL ON)

    set(WITH_GUI OFF)
    set(WITH_AUTH OFF)
    set(WITH_ANALYSIS ON)
    set(WITH_DESKTOP OFF)
    set(WITH_3D OFF)
    set(WITH_QGIS_PROCESS OFF)
    set(WITH_BINDINGS OFF)
    set(ENABLE_TESTS OFF)
    set(WITH_THREAD_LOCAL OFF)
else()
    option(WITH_GUI "Determines whether QGIS GUI library (and everything built on top of it) should be built" ON)
    option(WITH_AUTH "Determines whether QGIS authentication methods should be built" ON)
    option(WITH_ANALYSIS "Determines whether QGIS analysis library should be built" ON)
    option(WITH_DESKTOP "Determines whether QGIS desktop should be built" ON)
    option(WITH_3D "Determines whether QGIS 3D library should be built" OFF)
    option(WITH_QGIS_PROCESS "Determines whether the standalone \"qgis_process\" tool should be built" ON)
    option(WITH_BINDINGS "Determines whether python bindings should be built" ON)
    option(ENABLE_TESTS "Build unit tests?" OFF)

    option(WITH_THREAD_LOCAL "Determines whether std::thread_local should be used" ON)
    if (WITH_THREAD_LOCAL)
        set (USE_THREAD_LOCAL TRUE)  # used in qgsconfig.h
    endif()
   
    # find_anyproject(ZLIB REQUIRED)

    if (WITH_GUI)
        find_anyproject(Qwt REQUIRED)
        find_anyproject(QScintilla REQUIRED)
        set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} Qml QuickWidgets)
        add_definitions(-DWITH_QML)
        set(HAVE_GUI TRUE)
    endif()
    set(QT_REQUIRED_COMPONENTS ${QT_REQUIRED_COMPONENTS} LinguistTools)
   
    find_package(OpenCL)
    if(${OpenCL_FOUND})
        set(USE_OPENCL TRUE)
        set(HAVE_OPENCL TRUE)
        # Fixup for standard FindOpenCL module not assigning proper framework headers directory
        if (APPLE AND "${OpenCL_INCLUDE_DIR}" MATCHES "OpenCL\\.framework/?$")
            set(OpenCL_INCLUDE_DIR "${OpenCL_INCLUDE_DIR}/Headers" CACHE PATH "" FORCE)
            set(OpenCL_INCLUDE_DIRS ${OpenCL_INCLUDE_DIR})
        endif()
        find_package(OpenCLhpp)
        if(NOT OPENCL_HPP_FOUND)
            # Use internal headers copied from OpenCL-CLHPP project
            set(OPENCL_HPP_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/external/opencl-clhpp/include CACHE PATH "" FORCE)
            message(STATUS "Couldn't find OpenCL C++ headers, using internal: ${OPENCL_HPP_INCLUDE_DIR}")
        endif()
        set(OpenCL_INCLUDE_DIRS ${OpenCL_INCLUDE_DIRS} ${OPENCL_HPP_INCLUDE_DIR})
    else()
        message(STATUS "Couldn't find OpenCL: support DISABLED")
    endif()
endif()

# set(QT5_3DEXTRA_LIBRARY "/usr/lib/x86_64-linux-gnu/libQt53DExtras.so")
# set(QT5_3DEXTRA_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/qt3dextra-headers")
# set(Qt53DExtras_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/qt3dextra-headers/cmake/Qt53DExtras")
# set(CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/external/qt3dextra-headers")

find_anyproject(Qt5 REQUIRED COMPONENTS ${QT_REQUIRED_COMPONENTS})
# if (WITH_QT6)
set(QT_VERSION_BASE Qt5)

if(WIN32)
    get_target_property(RCC_PATH Qt5::lrelease IMPORTED_LOCATION)
    get_filename_component(QT_BIN_DIR ${RCC_PATH} PATH)
    
    set(QT5_PLUGINS_DIR "${QT_BIN_DIR}/../plugins")
    set(QT5_TRANSLATION_DIR "${QT_BIN_DIR}/../translation")
    
    # Copy zlib1.dll to make  moc.exe, rcc.exe, etc. working
    if(${ZLIB_FOUND})
        get_target_property(ZLIB_IMPORTED_LOCATION ${ZLIB_LIBRARIES} IMPORTED_LOCATION_RELEASE)
        if(EXISTS ${ZLIB_IMPORTED_LOCATION})
            file(COPY ${ZLIB_IMPORTED_LOCATION} DESTINATION ${QT_BIN_DIR})
        endif()
    endif()
endif()


configure_file(${CMAKE_SOURCE_DIR}/cmake/qt.conf.cmake.in ${BINARY_DIR}/qt.conf IMMEDIATE @ONLY)

############################################
if (ENABLE_TESTS)
    set(QT_USE_QTTEST TRUE)
    enable_testing()

    #create a variable to specify where our test data is
    #so that unit tests can use TEST_DATA_DIR to locate
    #the test data. See CMakeLists in test dirs for more info
    #TEST_DATA_DIR is also used by QgsRenderChecker currently in core
    set (TEST_DATA_DIR "${CMAKE_CURRENT_SOURCE_DIR}/tests/testdata")

    add_subdirectory(tests)
    set (CTEST_BINARY_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/output/bin" )
    message (STATUS "Ctest Binary Directory set to: ${CTEST_BINARY_DIRECTORY}")
endif()

# Add binaries and libraries
set(CMAKE_CXX_STANDARD 17)
if(MSVC)
    # disable warnings
    set(_warnings "${_warnings} /wd4091 ")  # 'typedef': ignored on left of '' when no variable is declared (occurs in MS DbgHelp.h header)
    set(_warnings "${_warnings} /wd4100 ")  # unused formal parameters
    set(_warnings "${_warnings} /wd4127 ")  # constant conditional expressions (used in Qt template classes)
    set(_warnings "${_warnings} /wd4190 ")  # 'identifier' has C-linkage specified, but returns UDT 'identifier2' which is incompatible with C
    set(_warnings "${_warnings} /wd4231 ")  # nonstandard extension used : 'identifier' before template explicit instantiation (used in Qt template classes)
    set(_warnings "${_warnings} /wd4244 ")  # conversion from '...' to '...' possible loss of data
    set(_warnings "${_warnings} /wd4251 ")  # needs to have dll-interface to be used by clients of class (occurs in Qt template classes)
    set(_warnings "${_warnings} /wd4267 ")  # 'argument': conversion from 'size_t' to 'int', possible loss of data
    set(_warnings "${_warnings} /wd4275 ")  # non dll-interface class '...' used as base for dll-interface class '...'
    set(_warnings "${_warnings} /wd4290 ")  # c++ exception specification ignored except to indicate a function is not __declspec(nothrow) (occurs in sip generated bindings)
    set(_warnings "${_warnings} /wd4456 ")  # declaration of '...' hides previous local declaration
    set(_warnings "${_warnings} /wd4457 ")  # declaration of '...' hides a function parameter
    set(_warnings "${_warnings} /wd4458 ")  # declaration of '...' hides class member
    set(_warnings "${_warnings} /wd4505 ")  # unreferenced local function has been removed (QgsRasterDataProvider::extent)
    set(_warnings "${_warnings} /wd4510 ")  # default constructor could not be generated (sqlite3_index_info, QMap)
    set(_warnings "${_warnings} /wd4512 ")  # assignment operator could not be generated (sqlite3_index_info)
    set(_warnings "${_warnings} /wd4610 ")  # user defined constructor required (sqlite3_index_info)
    set(_warnings "${_warnings} /wd4706 ")  # assignment within conditional expression (pal)
    set(_warnings "${_warnings} /wd4714 ")  # function '...' marked as __forceinline not inlined (QString::toLower/toUpper/trimmed)
    set(_warnings "${_warnings} /wd4800 ")  # 'int' : forcing value to bool 'true' or 'false' (performance warning)
    set(_warnings "${_warnings} /wd4996 ")  # '...': was declared deprecated (unfortunately triggered when implementing deprecated interfaces even when it is deprecated too)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${_warnings} /utf-8")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${_warnings} /utf-8")

    # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /utf-8 /std:c++17")
    # set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /utf-8 /std:c++17")
    # set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO}")
    # set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG}")
    # disable macros that offend std::numeric_limits<T>::min()/max()
    add_definitions(-DNOMINMAX)
else()
   # add warnings via flags (not as definitions as on Mac -Wall can not be overridden per language )
   set(_warnings "-Wall -Wextra -Wno-long-long -Wformat-security -Wno-strict-aliasing")
    # c++ only warnings

    set(_warnings "${_warnings} -Wnon-virtual-dtor")

    # unavoidable - we can't avoid these, as older, supported compilers do not support removing the redundant move
    set(_warnings "${_warnings} -Wno-redundant-move")

    if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU" AND CMAKE_CXX_COMPILER_VERSION VERSION_GREATER 7.9.999)
        # heaps of these thrown by Qt headers at the moment (sep 2019)
        set(_warnings "${_warnings} -Wno-deprecated-copy")
    endif()

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${_warnings}")

    # Qt produces lots of warnings with strict aliasing (as of Qt 4.4.0 & GCC 4.3)
    # There are redundant declarations in Qt and GDAL
    # add_definitions( -fstrict-aliasing -Wstrict-aliasing=1 -Wredundant-decls )

    if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wreturn-type-c-linkage -Woverloaded-virtual -Wimplicit-fallthrough")
    endif()

    # add any extra CXXFLAGS flags set by user. can be -D CXX_EXTRA_FLAGS or environment variable
    # command line -D option overrides environment variable
    # e.g. useful for suppressing transient upstream warnings in dependencies, like Qt
    set(CXX_EXTRA_FLAGS "" CACHE STRING "Additional appended CXXFLAGS")
    if ("${CXX_EXTRA_FLAGS}" STREQUAL "" AND DEFINED $ENV{CXX_EXTRA_FLAGS})
        set(CXX_EXTRA_FLAGS "$ENV{CXX_EXTRA_FLAGS}")
    endif()
    if (NOT "${CXX_EXTRA_FLAGS}" STREQUAL "")
        message (STATUS "Appending CXX_EXTRA_FLAGS")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CXX_EXTRA_FLAGS}")
    endif()

    if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Qunused-arguments")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Qunused-arguments")
        set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Qunused-arguments")
        set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -Qunused-arguments")
        set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Qunused-arguments")
    endif()
endif()

if (CMAKE_BUILD_TYPE MATCHES Debug OR CMAKE_BUILD_TYPE MATCHES RelWithDebInfo)
    message (STATUS "Debug output enabled")
    set(QGISDEBUG ON)
else()
    set(QGISDEBUG OFF)
endif()

# Prevent build when Qt api deprecated before this Qt version is used:
add_definitions(-DQT_DEPRECATED_WARNINGS)
# Unfortunately Qwt uses deprecated QString::null in headers, preventing this being raised above 5.8
add_definitions(-DQT_DISABLE_DEPRECATED_BEFORE=0x050800)

# For fast string concatenation
add_definitions(-DQT_USE_QSTRINGBUILDER)

if (WITH_ANALYSIS AND NOT PREPARE_ONLY)
    find_anyproject(GSL REQUIRED)
    set(HAVE_GSL TRUE)
    set(HAVE_GEOREFERENCER TRUE)
endif()

find_anyproject(Spatialite REQUIRED)
if(SPATIALITE_FOUND)
    set(HAVE_SPATIALITE TRUE)
endif()

find_anyproject(PostgreSQL DEFAULT ON NAMES PQ pq libpq)
if(POSTGRESQL_FOUND)
    set(HAVE_POSTGRESQL TRUE)
endif()

find_anyproject(OCI DEFAULT ON)
if(OCI_FOUND)
    include_directories(${OCI_INCLUDE_DIRS}/oci)
    set(HAVE_ORACLE TRUE)
endif()

math(EXPR QGIS_VERSION_INT "${CPACK_PACKAGE_VERSION_MAJOR}*10000+${CPACK_PACKAGE_VERSION_MINOR}*100+${CPACK_PACKAGE_VERSION_PATCH}")

# POLICIES
cmake_policy(SET CMP0048 NEW)
cmake_policy(SET CMP0053 NEW)
cmake_policy(SET CMP0063 NEW)
cmake_policy(SET CMP0071 NEW)
cmake_policy(SET CMP0094 NEW)

#############################################################

if(MSVC)
    # Turn on defines for non standard maths stuff
    add_definitions(-D_USE_MATH_DEFINES)

    # Turn off deprecation warnings
    add_definitions(-D_CRT_SECURE_NO_WARNINGS)
    add_definitions(-D_CRT_NONSTDC_NO_WARNINGS)
endif()

if("${CMAKE_SYSTEM_NAME}" MATCHES "Linux")
set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--no-undefined")
set(CMAKE_MODULE_LINKER_FLAGS "${CMAKE_MODULE_LINKER_FLAGS} -Wl,--no-undefined")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--no-undefined")
endif() #"${CMAKE_SYSTEM_NAME}"  MATCHES "Linux")

set(CMAKE_CXX_VISIBILITY_PRESET hidden)

if (WITH_BINDINGS)
    find_anyproject(Python3 REQUIRED COMPONENTS Interpreter Development)
    find_anyproject(SIP REQUIRED)
    find_anyproject(PyQt5 REQUIRED)
    set(PYQT_SIP_FLAGS ${PYQT5_SIP_FLAGS})
    set(PYQT_SIP_DIR ${PYQT5_SIP_DIR})
    separate_arguments(PYQT_SIP_FLAGS) # convert space separated values to a list

    find_anyproject(Qsci REQUIRED)
    include(PythonMacros)
    include(PyQtMacros)
    include(SIPMacros)

    add_subdirectory(python)

    if(NOT SUPPRESS_VERBOSE_OUTPUT)
        message("i Found Python executable: ${PYTHON_EXECUTABLE} (version ${PYTHON_VERSION})")
        message("i Python library: ${PYTHON_LIBRARIES}")
        message("i Python site-packages: ${PYTHON_SITEARCH}")
    endif()
else()
    find_anyproject(Python3 REQUIRED COMPONENTS Interpreter)
    message("i Found python executable: ${PYTHON_EXECUTABLE} (version ${PYTHON_VERSION})")
endif()

if (PYTHON3_FOUND)
    string(REPLACE "." ";" VERSION_LIST ${PYTHON_VERSION})
    list(GET VERSION_LIST 0 Python_VERSION_MAJOR)
    list(GET VERSION_LIST 1 Python_VERSION_MINOR)
    list(GET VERSION_LIST 2 Python_VERSION_PATCH)
    set(Python_VERSION ${PYTHON_VERSION})
endif()

#############################################################
# create qgsconfig.h
# installed with app target
configure_file(${CMAKE_SOURCE_DIR}/cmake_templates/qgsconfig.h.in ${CMAKE_BINARY_DIR}/qgsconfig.h)
include_directories(${CMAKE_BINARY_DIR})

#############################################################
# create qgsversion.h
include(CreateQgsVersion)
CREATE_QGSVERSION()

#############################################################
set(PACKAGE_NAME ${PROJECT_NAME})
string(TOUPPER ${PACKAGE_NAME} PACKAGE_UPPER_NAME)

add_subdirectory(src)

if (NOT PREPARE_ONLY)
    add_subdirectory(images)
    add_subdirectory(resources)
    add_subdirectory(i18n)
endif()

if (PREPARE_ONLY)
    add_custom_target(prepare_parser DEPENDS ${PREPARE_PARSER_TARGETS})
else()
    add_custom_target(uninstall COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)

    # Export package ===============================================================

    # Add all targets to the build-tree export set
    # export(TARGETS ${TARGETS} FILE ${PROJECT_BINARY_DIR}/${PACKAGE_UPPER_NAME}Targets.cmake)

    # if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    # # Install the export set for use with the install-tree
    # install(EXPORT ${PACKAGE_UPPER_NAME}Targets DESTINATION ${INSTALL_CMAKECONF_DIR} COMPONENT dev)
    # endif()

    # Create the Config.cmake file
    # configure_file(${CMAKE_SOURCE_DIR}/cmake/PackageConfig.cmake.in ${PROJECT_BINARY_DIR}/${PACKAGE_UPPER_NAME}Config.cmake @ONLY)

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
endif()
