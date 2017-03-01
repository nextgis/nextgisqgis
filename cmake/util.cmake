################################################################################
# Project:  external projects
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, <dmitry.baryshnikov@nextgis.com>
################################################################################
# Copyright (C) 2017, NextGIS <info@nextgis.com>
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
    set(QGIS_MINOR 14)
    set(QGIS_PATCH 12)
    set(QGIS_NAME "Essen")


    set(${major} ${VERSION_MAJOR} PARENT_SCOPE)
    set(${minor} ${VERSION_MINOR} PARENT_SCOPE)
    set(${patch} ${VERSION_PATCH} PARENT_SCOPE)
    set(${qgis_major} ${QGIS_MAJOR} PARENT_SCOPE)
    set(${qgis_minor} ${QGIS_MINOR} PARENT_SCOPE)
    set(${qgis_patch} ${QGIS_PATCH} PARENT_SCOPE)
    set(${qgis_name} ${QGIS_NAME} PARENT_SCOPE)

    # Store version string in file for installer needs
    file(TIMESTAMP ${CMAKE_CURRENT_SOURCE_DIR}/src/core/qgis.h VERSION_DATETIME "%Y-%m-%d %H:%M:%S" UTC)
    file(WRITE ${CMAKE_BINARY_DIR}/version.str "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}\n${VERSION_DATETIME}")

endfunction(check_version)

function(report_version name ver)

    string(ASCII 27 Esc)
    set(BoldYellow  "${Esc}[1;33m")
    set(ColourReset "${Esc}[m")

    message(STATUS "${BoldYellow}${name} version ${ver}${ColourReset}")

endfunction()

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
