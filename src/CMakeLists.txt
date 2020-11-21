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
    find_anyproject(Spatialite REQUIRED)
    if(SPATIALITE_FOUND)
        set(HAVE_SPATIALITE TRUE)
    endif()

    find_anyproject(SpatialIndex REQUIRED)
    if(SPATIALINDEX_FOUND)
        include_directories(${SPATIALINDEX_INCLUDE_DIRS}/spatialindex)
    endif()

    if(SPATIALITE_VERSION_GE_4_0_0)
        add_definitions(-DSPATIALITE_VERSION_GE_4_0_0)
    elseif(SPATIALITE_VERSION)
    	if(${SPATIALITE_VERSION} VERSION_GREATER "4.0.0")
            add_definitions(-DSPATIALITE_VERSION_GE_4_0_0)
        endif()
    endif()

    if(SPATIALITE_VERSION_G_4_1_1)
        add_definitions(-DSPATIALITE_VERSION_G_4_1_1)
    elseif(SPATIALITE_VERSION)
    	if(${SPATIALITE_VERSION} VERSION_GREATER "4.1.1")
            add_definitions(-DSPATIALITE_VERSION_G_4_1_1)
        endif()
    endif()

    if(SPATIALITE_HAS_INIT_EX)
        add_definitions(-DSPATIALITE_HAS_INIT_EX)
    elseif(SPATIALITE_VERSION)
    	if(${SPATIALITE_VERSION} VERSION_GREATER "4.1.1")
            add_definitions(-DSPATIALITE_HAS_INIT_EX)
        endif()
    endif()

    find_anyproject(PostgreSQL DEFAULT ON NAMES PQ pq libpq)
    if(POSTGRESQL_FOUND)
        add_definitions(-DHAVE_PGCONFIG=1 -DHAVE_POSTGRESQL)
    endif()

    find_anyproject(OCI DEFAULT ON)
    if(OCI_FOUND)
        include_directories(${OCI_INCLUDE_DIRS}/oci)
        add_definitions(-DHAVE_ORACLE=1)
    endif()

    find_anyproject(NGSTD REQUIRED COMPONENTS core4 framework4)
    if(NGSTD_FOUND)
        add_definitions(-DNGSTD_USING)
    endif()
endif()

add_definitions(-DSUPPORT_GEOPACKAGE=1)

# add_definitions(-DWITH_ARCGIS) required QJson

add_subdirectory(core)
add_subdirectory(analysis)

if(NOT PREPARE_ONLY)
    add_subdirectory(ui)
    add_subdirectory(gui)
    add_subdirectory(auth)
    add_subdirectory(providers)

    if(WITH_DESKTOP)
      add_subdirectory(app)
      add_subdirectory(plugins)
    endif()

    if(WITH_BINDINGS)
        add_definitions(-DHAVE_PYTHON)
        add_subdirectory(python)
    endif()

endif()

set(PREPARE_PARSER_TARGETS ${PREPARE_PARSER_TARGETS} PARENT_SCOPE)
# set(TARGET_LINK_LIB ${TARGET_LINK_LIB} PARENT_SCOPE)
