################################################################################
# Project:  external projects
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, <dmitry.baryshnikov@nextgis.com>
################################################################################
# Copyright (C) 2017-2019, NextGIS <info@nextgis.com>
#
# This script is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This script is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this script.  If not, see <http://www.gnu.org/licenses/>.
################################################################################
function(check_version major minor patch qgis_major qgis_minor qgis_patch qgis_name)

    string(TIMESTAMP CURRENT_YEAR "%y")
    string(TIMESTAMP CURRENT_MONTH "%m")
    math(EXPR CURRENT_MONTH "${CURRENT_MONTH}*1")
    # QGIS release version
    set(VERSION_MAJOR ${CURRENT_YEAR})
    set(VERSION_MINOR ${CURRENT_MONTH})
    set(VERSION_PATCH 0)

    # QGIS_PORT is the version of QGIS this release is bound to
    set(QGIS_MAJOR 2)
    set(QGIS_MINOR 18)
    set(QGIS_PATCH 28)
    set(QGIS_NAME "Las Palmas")


    set(${major} ${VERSION_MAJOR} PARENT_SCOPE)
    set(${minor} ${VERSION_MINOR} PARENT_SCOPE)
    set(${patch} ${VERSION_PATCH} PARENT_SCOPE)
    set(${qgis_major} ${QGIS_MAJOR} PARENT_SCOPE)
    set(${qgis_minor} ${QGIS_MINOR} PARENT_SCOPE)
    set(${qgis_patch} ${QGIS_PATCH} PARENT_SCOPE)
    set(${qgis_name} ${QGIS_NAME} PARENT_SCOPE)

    # Store version string in file for installer needs
    file(TIMESTAMP ${CMAKE_CURRENT_SOURCE_DIR}/src/core/qgis.h VERSION_DATETIME "%Y-%m-%d %H:%M:%S" UTC)
    set(VERSION ${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH})
    get_cpack_filename(${VERSION} PROJECT_CPACK_FILENAME)
    file(WRITE ${CMAKE_BINARY_DIR}/version.str "${VERSION}\n${VERSION_DATETIME}\n${PROJECT_CPACK_FILENAME}")

endfunction(check_version)

function(warning_msg text)
    if(NOT SUPPRESS_VERBOSE_OUTPUT)
        string(ASCII 27 Esc)
        set(Red         "${Esc}[31m")
        set(ColourReset "${Esc}[m")

        message(STATUS "${Red}${text}${ColourReset}")
    endif()
endfunction()

function(info_msg text)
    if(NOT SUPPRESS_VERBOSE_OUTPUT)
        string(ASCII 27 Esc)
        set(Red         "${Esc}[36m")
        set(ColourReset "${Esc}[m")

        message(STATUS "${Red}${text}${ColourReset}")
    endif()
endfunction()

function(report_version name ver)
    string(ASCII 27 Esc)
    set(BoldYellow  "${Esc}[1;33m")
    set(ColourReset "${Esc}[m")

    message("${BoldYellow}${name} version ${ver}${ColourReset}")
endfunction()

# macro to find packages on the host OS
macro( find_exthost_package )
    if(CMAKE_CROSSCOMPILING)
        set( CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER )
        set( CMAKE_FIND_ROOT_PATH_MODE_LIBRARY NEVER )
        set( CMAKE_FIND_ROOT_PATH_MODE_INCLUDE NEVER )

        find_package( ${ARGN} )

        set( CMAKE_FIND_ROOT_PATH_MODE_PROGRAM ONLY )
        set( CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY )
        set( CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY )
    else()
        find_package( ${ARGN} )
    endif()
endmacro()


# macro to find programs on the host OS
macro( find_exthost_program )
    if(CMAKE_CROSSCOMPILING)
        set( CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER )
        set( CMAKE_FIND_ROOT_PATH_MODE_LIBRARY NEVER )
        set( CMAKE_FIND_ROOT_PATH_MODE_INCLUDE NEVER )

        find_program( ${ARGN} )

        set( CMAKE_FIND_ROOT_PATH_MODE_PROGRAM ONLY )
        set( CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY )
        set( CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY )
    else()
        find_program( ${ARGN} )
    endif()
endmacro()


function(get_prefix prefix IS_STATIC)
  if(IS_STATIC)
    set(STATIC_PREFIX "static-")
      if(ANDROID)
        set(STATIC_PREFIX "${STATIC_PREFIX}android-${ANDROID_ABI}-")
      elseif(IOS)
        set(STATIC_PREFIX "${STATIC_PREFIX}ios-${IOS_ARCH}-")
      endif()
    endif()
  set(${prefix} ${STATIC_PREFIX} PARENT_SCOPE)
endfunction()


function(get_cpack_filename ver name)
    get_compiler_version(COMPILER)
    
    if(NOT DEFINED BUILD_STATIC_LIBS)
      set(BUILD_STATIC_LIBS OFF)
    endif()

    get_prefix(STATIC_PREFIX ${BUILD_STATIC_LIBS})

    set(${name} ${PROJECT_NAME}-${ver}-${STATIC_PREFIX}${COMPILER} PARENT_SCOPE)
endfunction()

function(get_compiler_version ver)
    ## Limit compiler version to 2 or 1 digits
    string(REPLACE "." ";" VERSION_LIST ${CMAKE_C_COMPILER_VERSION})
    list(LENGTH VERSION_LIST VERSION_LIST_LEN)
    if(VERSION_LIST_LEN GREATER 2 OR VERSION_LIST_LEN EQUAL 2)
        list(GET VERSION_LIST 0 COMPILER_VERSION_MAJOR)
        list(GET VERSION_LIST 1 COMPILER_VERSION_MINOR)
        set(COMPILER ${CMAKE_C_COMPILER_ID}-${COMPILER_VERSION_MAJOR}.${COMPILER_VERSION_MINOR})
    else()
        set(COMPILER ${CMAKE_C_COMPILER_ID}-${CMAKE_C_COMPILER_VERSION})
    endif()

    if(WIN32)
        if(CMAKE_CL_64)
            set(COMPILER "${COMPILER}-64bit")
        endif()
    endif()

    # DEBUG:
    # set(COMPILER Clang-9.0)

    set(${ver} ${COMPILER} PARENT_SCOPE)
endfunction()
