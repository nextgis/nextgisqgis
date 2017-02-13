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

set(QGIS_PYPLUGINS_DIR ${QGIS_DATA_SUBDIR}/python/plugins)
set(QGIS_SOURCE_PYPLUGINS_DIR ${CMAKE_CURRENT_SOURCE_DIR})

macro(build_plugin SUBDIR)
    string(REPLACE "/" "_" NAME ${SUBDIR})
    file(GLOB ${NAME}_PY_FILES *.py)
    file(GLOB ${NAME}_UI_FILES *.ui)
    file(GLOB ${NAME}_QRC_FILES *.qrc)
    file(GLOB ${NAME}_IMAGE_FILES *.png *.svg *.gif)
    file(GLOB ${NAME}_META_FILES metadata* LICENSE* AUTHORS* requirements* *.htmp *.xml)

    if(${NAME}_UI_FILES)
        PYQT_WRAP_UI(${NAME}_PYUI_FILES ${${NAME}_UI_FILES})
    endif()

    if(${NAME}_QRC_FILES)
        PYQT_ADD_RESOURCES(${NAME}_PYRC_FILES ${${NAME}_QRC_FILES})
    endif()

    if(${NAME}_PYUI_FILES OR ${NAME}_PYRC_FILES)
        add_custom_target(${NAME}-installer ALL DEPENDS ${${NAME}_PYUI_FILES} ${${NAME}_PYRC_FILES})
    endif()

    foreach(INSTALL_FILE ${${NAME}_PY_FILES} ${${NAME}_IMAGE_FILES} ${${NAME}_META_FILES} ${${NAME}_PYUI_FILES} ${${NAME}_PYRC_FILES})
        install(FILES ${INSTALL_FILE} DESTINATION "${QGIS_PYPLUGINS_DIR}/${SUBDIR}/")
    endforeach()
endmacro()

set(LOCAL_PLUGINS
    fTools
    GdalTools
    MetaSearch
)

set(REMOTE_CORE_PLUGINS
    processing
    qms
    qtiles
    rugeocoder
    ngconnect
)

set(REMOTE_NG_PLUGINS
    identifyplus
)

foreach(PLUGIN ${LOCAL_PLUGINS})
    info_msg("Add local py plugin ${PLUGIN}")
    add_subdirectory(${PLUGIN})
endforeach()

foreach(PLUGIN ${REMOTE_CORE_PLUGINS})
    info_msg("Add remote core py plugin ${PLUGIN}")
endforeach()

foreach(PLUGIN ${REMOTE_NG_PLUGINS})
    info_msg("Add remote NextGIS py plugin ${PLUGIN}")
endforeach()
