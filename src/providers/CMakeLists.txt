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

include_directories (
    ${CMAKE_SOURCE_DIR}/src/core
    ${CMAKE_SOURCE_DIR}/src/core/auth
    ${CMAKE_SOURCE_DIR}/src/core/geometry
    ${CMAKE_SOURCE_DIR}/src/core/raster
    ${CMAKE_SOURCE_DIR}/src/core/symbology-ng
    ${CMAKE_SOURCE_DIR}/src/gui
    ${CMAKE_SOURCE_DIR}/src/gui/auth
    ${CMAKE_BINARY_DIR}/src/ui
)

set(PROV_PLUGINS
    # arcgisrest - need QJson library
    delimitedtext
    gdal
    gpx
    memory
    ogr
    ows
    spatialite
    virtual
    wcs
    wfs
    wms
)

if(POSTGRESQL_FOUND)
    set(PROV_PLUGINS ${PROV_PLUGINS}
        postgres
    )
endif()

if(OCI_FOUND)
    set(PROV_PLUGINS ${PROV_PLUGINS}
        oracle
    )
endif()

if(WIN32)
    set(PROV_PLUGINS ${PROV_PLUGINS}
        mssql
    )
endif()

macro(add_provider PLUGIN_NAME)
    include_directories (${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME})
    file(GLOB PROV_${PLUGIN_NAME}_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.h")
    file(GLOB PROV_${PLUGIN_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.cpp")
    file(GLOB PROV_${PLUGIN_NAME}_UIS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.ui")
    file(GLOB PROV_${PLUGIN_NAME}_RCS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.qrc")

    if(NOT PREPARE_ONLY)
        if(PROV_${PLUGIN_NAME}_RCS)
            qt4_add_resources(PROV_${PLUGIN_NAME}_RCC ${PROV_${PLUGIN_NAME}_RCS})
        endif()

        qt4_wrap_cpp(PROV_${PLUGIN_NAME}_MOC_SRCS ${PROV_${PLUGIN_NAME}_HEADERS})

        if(PROV_${PLUGIN_NAME}_UIS)
            qt4_wrap_ui(PROV_${PLUGIN_NAME}_UI_H ${PROV_${PLUGIN_NAME}_UIS})
        endif()

    endif()

    if("${PLUGIN_NAME}" STREQUAL "wcs")
        set(PROV_${PLUGIN_NAME}_SOURCES ${PROV_${PLUGIN_NAME}_SOURCES}
            ${CMAKE_CURRENT_SOURCE_DIR}/gdal/qgsgdalproviderbase.cpp
        )
        include_directories(../gdal)
    endif()

    add_library(${PLUGIN_NAME}provider MODULE ${PROV_${PLUGIN_NAME}_SOURCES} ${PROV_${PLUGIN_NAME}_HEADERS} ${PROV_${PLUGIN_NAME}_MOC_SRCS} ${PROV_${PLUGIN_NAME}_RCC} ${PROV_${PLUGIN_NAME}_UI_H})

    if("${PLUGIN_NAME}" STREQUAL "postgres")
        target_link_libraries(${PLUGIN_NAME}provider PRIVATE ${POSTGRESQL_LIBRARIES})
    endif()

    if("${PLUGIN_NAME}" STREQUAL "oracle" OR "${PLUGIN_NAME}" STREQUAL "mssql")
        target_link_libraries(${PLUGIN_NAME}provider PRIVATE Qt4::QtSql)
    endif()

    if("${PLUGIN_NAME}" STREQUAL "virtual")
        target_link_libraries(${PLUGIN_NAME}provider PRIVATE ${QSCINTILLA_LIBRARIES})
    endif()

    if("${PLUGIN_NAME}" STREQUAL "wms")
        target_link_libraries(${PLUGIN_NAME}provider PRIVATE Qt4::QtScript)
    endif()

    target_link_libraries(${PLUGIN_NAME}provider PRIVATE
        ${NG_PREFIX}qgis_core
        ${NG_PREFIX}qgis_gui
    )

    # target_link_extlibraries(${PLUGIN_NAME}provider)

    if(OSX_FRAMEWORK)
        set_target_properties(${PLUGIN_NAME}provider PROPERTIES
            INSTALL_RPATH "@loader_path/../../../Frameworks/"
            SUFFIX ".so" # ".dylib" <- /src/app/qgspluginregistry.cpp:462
        )
    endif()

    # set_target_properties(${PLUGIN_NAME}provider PROPERTIES CXX_STANDARD 11)

    install(TARGETS ${PLUGIN_NAME}provider
        RUNTIME DESTINATION ${INSTALL_PLUGIN_DIR}
        LIBRARY DESTINATION ${INSTALL_PLUGIN_DIR}
    )
endmacro()

foreach(PROV_PLUGIN ${PROV_PLUGINS})
    info_msg("Add provider ${PROV_PLUGIN}")
    add_provider(${PROV_PLUGIN})
endforeach()
