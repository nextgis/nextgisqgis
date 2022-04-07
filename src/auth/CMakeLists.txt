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
    ${CMAKE_BINARY_DIR}/src/gui
)

set(AUTH_PLUGINS
    apiheader
    basic
    esritoken
    identcert
    maptiler_hmacsha256
    pkipaths
    pkipkcs12
)

if(WITH_OAUTH2_PLUGIN)
    set(AUTH_PLUGINS ${AUTH_PLUGINS} oauth2)
endif()

macro(add_provider PLUGIN_NAME)
    include_directories (${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/core)
    file(GLOB PROV_${PLUGIN_NAME}_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/core/*.h")
    file(GLOB PROV_${PLUGIN_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/core/*.cpp")
    # file(GLOB PROV_${PLUGIN_NAME}_UIS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/core/*.ui")
    file(GLOB PROV_${PLUGIN_NAME}_RCS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/core/*.qrc")

    if(WITH_GUI)
        include_directories (${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/gui)
        file(GLOB PROV_${PLUGIN_NAME}_HEADERS_G "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/gui/*.h")
        file(GLOB PROV_${PLUGIN_NAME}_SOURCES_G "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/gui/*.cpp")
        # file(GLOB PROV_${PLUGIN_NAME}_UIS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/gui/*.ui")
        file(GLOB PROV_${PLUGIN_NAME}_RCS_G "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/gui/*.qrc")
        file(GLOB PROV_${PLUGIN_NAME}_RCS_H "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/resources/*.qrc")

        set(PROV_${PLUGIN_NAME}_HEADERS ${PROV_${PLUGIN_NAME}_HEADERS} ${PROV_${PLUGIN_NAME}_HEADERS_G})
        set(PROV_${PLUGIN_NAME}_SOURCES ${PROV_${PLUGIN_NAME}_SOURCES} ${PROV_${PLUGIN_NAME}_SOURCES_G})
        set(PROV_${PLUGIN_NAME}_RCS ${PROV_${PLUGIN_NAME}_RCS} ${PROV_${PLUGIN_NAME}_RCS_G} ${PROV_${PLUGIN_NAME}_RCS_H})
    endif()

    set(LIB_NAME authmethod_${PLUGIN_NAME})

    # message("_SOURCES : ${PROV_${PLUGIN_NAME}_SOURCES}\n_HEADERS : ${PROV_${PLUGIN_NAME}_HEADERS}")
    add_library(${LIB_NAME} MODULE ${PROV_${PLUGIN_NAME}_SOURCES} ${PROV_${PLUGIN_NAME}_HEADERS} ${PROV_${PLUGIN_NAME}_RCS})

    # if("${PLUGIN_NAME}" MATCHES "postgres*")
    #     target_link_libraries(${LIB_NAME} PRIVATE ${POSTGRESQL_LIBRARIES})
    # endif()

    target_link_libraries(${LIB_NAME} PRIVATE
        ${NG_PREFIX}qgis_core
    )

    if(WITH_GUI)
        target_link_libraries(${LIB_NAME} PRIVATE
            ${NG_PREFIX}qgis_gui
        )
    endif()

    if(OSX_FRAMEWORK)
        set_target_properties(${LIB_NAME} PROPERTIES
            INSTALL_RPATH "@loader_path/../../../Frameworks/"
            SUFFIX ".so"
        )
    endif()

    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_PLUGIN_DIR}
        LIBRARY DESTINATION ${INSTALL_PLUGIN_DIR}
    )
endmacro()

foreach(AUTH_PLUGIN ${AUTH_PLUGINS})
    info_msg("Add auth ${AUTH_PLUGIN}")
    add_provider(${AUTH_PLUGIN})
endforeach()
