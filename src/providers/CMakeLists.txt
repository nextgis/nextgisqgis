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

include_directories (
    ${CMAKE_SOURCE_DIR}/src/core
    ${CMAKE_SOURCE_DIR}/src/gui
    ${CMAKE_SOURCE_DIR}/src/analysis/raster
    ${CMAKE_BINARY_DIR}/src/gui
    ${CMAKE_BINARY_DIR}/src/gui/${NG_PREFIX}qgis_gui_autogen/include
    ${CMAKE_BINARY_DIR}/src/analysis
)

set(PROV_PLUGINS
    # arcgisrest
    # db2
    # geonode
    # grass
    # hana
    # mdal
    # pdal
)

if(WITH_ANALYSIS)
    set(PROV_PLUGINS ${PROV_PLUGINS}
        virtualraster
)
endif()

if(WITH_GUI)
    set(PROV_PLUGINS ${PROV_PLUGINS}
        delimitedtext
        wfs
        wms
        wcs
        virtual
        gpx
    )
endif()

if(SPATIALITE_FOUND AND WITH_GUI)
    set(PROV_PLUGINS ${PROV_PLUGINS}
        spatialite
    )
endif()

if(POSTGRESQL_FOUND)
    set(PROV_PLUGINS ${PROV_PLUGINS}
        postgres
        postgres/raster
    )
endif()

if(OCI_FOUND)
    set(PROV_PLUGINS ${PROV_PLUGINS}
        oracle
    )
endif()

if(WIN32)
    info_msg("Add provider mssql")
    add_subdirectory(mssql)
endif()

macro(add_provider PLUGIN_NAME)
    include_directories (${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME})
    file(GLOB PROV_${PLUGIN_NAME}_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.h")
    file(GLOB PROV_${PLUGIN_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.cpp")
    # file(GLOB PROV_${PLUGIN_NAME}_UIS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.ui")
    file(GLOB PROV_${PLUGIN_NAME}_RCS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.qrc")

    # if(NOT PREPARE_ONLY)
        # if(PROV_${PLUGIN_NAME}_RCS)
        #     qt5_add_resources(PROV_${PLUGIN_NAME}_RCC ${PROV_${PLUGIN_NAME}_RCS})
        # endif()

        # qt5_wrap_cpp(PROV_${PLUGIN_NAME}_MOC_SRCS ${PROV_${PLUGIN_NAME}_HEADERS})

        # if(PROV_${PLUGIN_NAME}_UIS)
        #     qt5_wrap_ui(PROV_${PLUGIN_NAME}_UI_H ${PROV_${PLUGIN_NAME}_UIS})
        # endif()

    # endif()

    if("${PLUGIN_NAME}" STREQUAL "wcs")
        set(PROV_${PLUGIN_NAME}_SOURCES ${PROV_${PLUGIN_NAME}_SOURCES}
            ${CMAKE_SOURCE_DIR}/src/core/providers/gdal/qgsgdalproviderbase.cpp
        )
    endif()

    if("${PLUGIN_NAME}" STREQUAL "postgres")
    #     set(PROV_${PLUGIN_NAME}_HEADERS ${PROV_${PLUGIN_NAME}_HEADERS}
    #         ${CMAKE_SOURCE_DIR}/src/gui/auth/qgsauthsettingswidget.h
    #     )
        set(PROV_${PLUGIN_NAME}_SOURCES ${PROV_${PLUGIN_NAME}_SOURCES} 
            ${CMAKE_CURRENT_SOURCE_DIR}/postgres/raster/qgspostgresrastertemporalsettingswidget.cpp
        )
        set(LIB_NAME provider_${PLUGIN_NAME})
    elseif("${PLUGIN_NAME}" MATCHES "postgres/raster")
        set(LIB_NAME "provider_postgres_raster")
        set(PROV_${PLUGIN_NAME}_SOURCES ${PROV_${PLUGIN_NAME}_SOURCES} 
            ${CMAKE_CURRENT_SOURCE_DIR}/postgres/qgspostgresconn.cpp
            ${CMAKE_CURRENT_SOURCE_DIR}/postgres/qgspostgresconnpool.cpp
        )
    else()
        set(LIB_NAME provider_${PLUGIN_NAME})
    endif()

    # message("_SOURCES : ${PROV_${PLUGIN_NAME}_SOURCES}\n_HEADERS : ${PROV_${PLUGIN_NAME}_HEADERS}")
    add_library(${LIB_NAME} MODULE ${PROV_${PLUGIN_NAME}_SOURCES} ${PROV_${PLUGIN_NAME}_HEADERS} ${PROV_${PLUGIN_NAME}_RCS}) # ${PROV_${PLUGIN_NAME}_MOC_SRCS} ${PROV_${PLUGIN_NAME}_RCC} ${PROV_${PLUGIN_NAME}_UI_H})

    if("${PLUGIN_NAME}" MATCHES "postgres*")
        target_link_libraries(${LIB_NAME} PRIVATE ${POSTGRESQL_LIBRARIES})
    endif()

    if("${PLUGIN_NAME}" STREQUAL "oracle" OR "${PLUGIN_NAME}" STREQUAL "mssql")
        target_link_libraries(${LIB_NAME} PRIVATE Qt5::Sql)
    endif()

    if("${PLUGIN_NAME}" STREQUAL "virtual")
        target_link_libraries(${LIB_NAME} PRIVATE ${QSCINTILLA_LIBRARIES})
    endif()

    # if("${PLUGIN_NAME}" STREQUAL "virtualraster")
    #     target_link_libraries(${LIB_NAME} PRIVATE ${NG_PREFIX}qgis_analysis)
    # endif()

    target_link_libraries(${LIB_NAME} PRIVATE
        ${NG_PREFIX}qgis_core
        ${NG_PREFIX}qgis_gui 
        ${NG_PREFIX}qgis_analysis
    )

    # target_link_extlibraries(${PLUGIN_NAME}provider)

    if(OSX_FRAMEWORK)
        set_target_properties(${LIB_NAME} PROPERTIES
            INSTALL_RPATH "@loader_path/../../../Frameworks/"
            SUFFIX ".so" # ".dylib" <- /src/app/qgspluginregistry.cpp:462
        )
    endif()

    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_PLUGIN_DIR}
        LIBRARY DESTINATION ${INSTALL_PLUGIN_DIR}
    )
endmacro()

foreach(PROV_PLUGIN ${PROV_PLUGINS})
    info_msg("Add provider ${PROV_PLUGIN}")
    add_provider(${PROV_PLUGIN})
endforeach()
