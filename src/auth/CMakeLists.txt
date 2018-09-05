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
    ${CMAKE_SOURCE_DIR}/src/gui
    ${CMAKE_SOURCE_DIR}/src/gui/auth
)

set(AUTH_PLUGINS
    basic
    identcert
    pkipaths
    pkipkcs12
)

macro(add_auth_plugin PLUGIN_NAME)
    file(GLOB AUTH_${PLUGIN_NAME}_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.h")
    file(GLOB AUTH_${PLUGIN_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.cpp")
    file(GLOB AUTH_${PLUGIN_NAME}_UIS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.ui")

    if(NOT PREPARE_ONLY)
        qt4_wrap_ui(AUTH_${PLUGIN_NAME}_UIS_H ${AUTH_${PLUGIN_NAME}_UIS})
        qt4_wrap_cpp(AUTH_${PLUGIN_NAME}_MOC_SRCS ${AUTH_${PLUGIN_NAME}_HEADERS})
    endif()

    add_library(${PLUGIN_NAME}authmethod MODULE ${AUTH_${PLUGIN_NAME}_SOURCES} ${AUTH_${PLUGIN_NAME}_HEADERS} ${AUTH_${PLUGIN_NAME}_MOC_SRCS} ${AUTH_${PLUGIN_NAME}_UIS_H})
    target_link_libraries(${PLUGIN_NAME}authmethod PRIVATE
        ${NG_PREFIX}qgis_core
        ${NG_PREFIX}qgis_gui
        ${QCA_LIBRARIES}
    )

    # target_link_extlibraries(${PLUGIN_NAME}authmethod)

    if(OSX_FRAMEWORK)
        set_target_properties(${PLUGIN_NAME}authmethod PROPERTIES
            INSTALL_RPATH "@loader_path/../../../Frameworks/"
            SUFFIX ".so" # ".dylib" <- /src/app/qgspluginregistry.cpp:462
        )
    endif()

    # set_target_properties(${PLUGIN_NAME}authmethod PROPERTIES CXX_STANDARD 11)

    install(TARGETS ${PLUGIN_NAME}authmethod
        RUNTIME DESTINATION ${INSTALL_PLUGIN_DIR}
        LIBRARY DESTINATION ${INSTALL_PLUGIN_DIR}
    )
endmacro()

foreach(AUTH_PLUGIN ${AUTH_PLUGINS})
    info_msg("Add auth plugin ${AUTH_PLUGIN}")
    add_auth_plugin(${AUTH_PLUGIN})
endforeach()
