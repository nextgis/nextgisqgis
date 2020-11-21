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
    ${CMAKE_SOURCE_DIR}/src/core/composer
    ${CMAKE_SOURCE_DIR}/src/gui
    ${CMAKE_SOURCE_DIR}/src/gui/auth
    ${CMAKE_SOURCE_DIR}/src/gui/editorwidgets
    ${CMAKE_SOURCE_DIR}/src/gui/layertree
    ${CMAKE_BINARY_DIR}/src/ui
    ${CMAKE_SOURCE_DIR}/src/analysis
    ${CMAKE_SOURCE_DIR}/src/analysis/vector
    ${CMAKE_SOURCE_DIR}/src/analysis/raster
    ${CMAKE_SOURCE_DIR}/src/analysis/interpolation
)

set(PLG_PLUGINS
#    compass
    coordinate_capture
    geometry_checker
    geometry_snapper
#    gps_importer
    heatmap
    interpolation
    raster_terrain_analysis
    spatialquery
    topology
    zonal_statistics
)

find_anyproject(GSL DEFAULT ON)
if(GSL_FOUND)
    set(PLG_PLUGINS ${PLG_PLUGINS}
        georeferencer
    )
endif()

find_anyproject(OpenCV DEFAULT ON)
if(OPENCV_FOUND AND NGSTD_FOUND)
    set(PLG_PLUGINS ${PLG_PLUGINS}
        dtclassifier
    )
endif()

if(OCI_FOUND)
    set(PLG_PLUGINS ${PLG_PLUGINS}
        oracle_raster
    )
endif()

macro(add_plugin PLUGIN_NAME)
    include_directories (${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME})

    file(GLOB_RECURSE PLG_${PLUGIN_NAME}_HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*/*.h" "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.h")
    file(GLOB_RECURSE PLG_${PLUGIN_NAME}_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.cpp")
    file(GLOB_RECURSE PLG_${PLUGIN_NAME}_UIS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*/*.ui" "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.ui")
    file(GLOB_RECURSE PLG_${PLUGIN_NAME}_RCS "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*/*.qrc" "${CMAKE_CURRENT_SOURCE_DIR}/${PLUGIN_NAME}/*.qrc")

    if(NOT PREPARE_ONLY)
        if(PLG_${PLUGIN_NAME}_RCS)
            qt4_add_resources(PLG_${PLUGIN_NAME}_RCC ${PLG_${PLUGIN_NAME}_RCS})
        endif()

        qt4_wrap_cpp(PLG_${PLUGIN_NAME}_MOC_SRCS ${PLG_${PLUGIN_NAME}_HEADERS})

        if(PLG_${PLUGIN_NAME}_UIS)
            qt4_wrap_ui(PLG_${PLUGIN_NAME}_UI_H ${PLG_${PLUGIN_NAME}_UIS})
        endif()

    endif()

    add_library(${PLUGIN_NAME}plugin MODULE ${PLG_${PLUGIN_NAME}_SOURCES} ${PLG_${PLUGIN_NAME}_HEADERS} ${PLG_${PLUGIN_NAME}_MOC_SRCS} ${PLG_${PLUGIN_NAME}_RCC} ${PLG_${PLUGIN_NAME}_UI_H})

    # target_link_extlibraries(${PLUGIN_NAME}plugin)
    target_link_libraries(${PLUGIN_NAME}plugin PRIVATE
        ${NG_PREFIX}qgis_analysis
        ${NG_PREFIX}qgis_core
        ${NG_PREFIX}qgis_gui
    )

    if("${PLUGIN_NAME}" STREQUAL "georeferencer")
        target_link_libraries(${PLUGIN_NAME}plugin PRIVATE ${GSL_LIBRARIES})
    endif()

    if("${PLUGIN_NAME}" STREQUAL "dtclassifier")
        target_link_libraries(${PLUGIN_NAME}plugin PRIVATE ${OPENCV_LIBRARIES} ${NGSTD_LIBRARIES})
    endif()

    if("${PLUGIN_NAME}" STREQUAL "oracle_raster")
        target_link_libraries(${PLUGIN_NAME}plugin PRIVATE ${OCI_LIBRARIES})
    endif()

    if(OSX_FRAMEWORK)
        set_target_properties(${PLUGIN_NAME}plugin PROPERTIES
            INSTALL_RPATH "@loader_path/../../../Frameworks/"
            SUFFIX ".so" # ".dylib" <- /src/app/qgspluginregistry.cpp:462
        )
    endif()

    # set_target_properties(${PLUGIN_NAME}plugin PROPERTIES CXX_STANDARD 11)

    target_compile_definitions (${PLUGIN_NAME}plugin PRIVATE "APP_EXPORT=${DLLIMPORT}")
    target_compile_definitions (${PLUGIN_NAME}plugin PRIVATE "CORE_EXPORT=${DLLIMPORT}")
    target_compile_definitions (${PLUGIN_NAME}plugin PRIVATE "GUI_EXPORT=${DLLIMPORT}")
    target_compile_definitions (${PLUGIN_NAME}plugin PRIVATE "PYTHON_EXPORT=${DLLIMPORT}")
    target_compile_definitions (${PLUGIN_NAME}plugin PRIVATE "ANALYSIS_EXPORT=${DLLIMPORT}")


    install(TARGETS ${PLUGIN_NAME}plugin
        RUNTIME DESTINATION ${INSTALL_PLUGIN_DIR}
        LIBRARY DESTINATION ${INSTALL_PLUGIN_DIR}
    )
endmacro()

foreach(PLG_PLUGIN ${PLG_PLUGINS})
    info_msg("Add plugin ${PLG_PLUGIN}")
    add_plugin(${PLG_PLUGIN})
endforeach()
