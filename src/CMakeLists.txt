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

include(prepare_parser)

if(NOT PREPARE_ONLY)
    find_anyproject(PROJ4 REQUIRED)
    find_anyproject(Spatialite REQUIRED)
    find_anyproject(SpatialIndex REQUIRED)
    find_anyproject(PostgreSQL DEFAULT ON)
    if(POSTGRESQL_FOUND)
        add_definitions(-DHAVE_PGCONFIG=1 -DHAVE_POSTGRESQL)
    endif()
endif()

add_subdirectory(core)
add_subdirectory(analysis)
add_subdirectory(ui)
add_subdirectory(gui)
add_subdirectory(auth)
add_subdirectory(providers)

if(WITH_DESKTOP)
  add_subdirectory(app)
#TODO:  add_subdirectory(helpviewer)
  add_subdirectory(plugins)
endif()

if(WITH_BINDINGS)
    add_subdirectory(python)
endif()

set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} PARENT_SCOPE)
# set(TARGET_LINK_LIB ${TARGET_LINK_LIB} PARENT_SCOPE)
