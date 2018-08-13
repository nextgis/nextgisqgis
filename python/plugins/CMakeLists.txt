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

FILE(WRITE ${CMAKE_BINARY_DIR}/stagecount 0)

macro(build_plugin SUBDIR)
    FILE(READ ${CMAKE_BINARY_DIR}/stagecount n)
    MATH(EXPR n "${n}+1")
    FILE(WRITE ${CMAKE_BINARY_DIR}/stagecount ${n})

    string(REPLACE "/" "_" NAME ${SUBDIR})
    #string(MD5 SUBDIR_HASH ${SUBDIR})

    string(REPLACE "/" ";" DIRS ${SUBDIR})
    list(GET DIRS 0 PLUGIN_NAME)

    file(GLOB ${NAME}_PY_FILES *.py terrain.txt)
    file(GLOB ${NAME}_UI_FILES *.ui)
    file(GLOB ${NAME}_QRC_FILES *.qrc)
    file(GLOB ${NAME}_IMAGE_FILES *.png *.svg *.gif)
    file(GLOB ${NAME}_META_FILES metadata* LICENSE* AUTHORS* requirements* *.htmp *.xml)
    file(GLOB ${NAME}_QML_FILES *.qml)

    if(${NAME}_UI_FILES)
        PYQT_WRAP_UI(${NAME}_PYUI_FILES ${${NAME}_UI_FILES})
    endif()

    if(${NAME}_QRC_FILES)
        PYQT_ADD_RESOURCES(${NAME}_PYRC_FILES ${${NAME}_QRC_FILES})
    endif()

    if(NOT TARGET ${PLUGIN_NAME}-installer)
        message(">>> New ${PLUGIN_NAME}-installer")
        add_custom_target(${PLUGIN_NAME}-installer)
    endif()

    if(${NAME}_PYUI_FILES OR ${NAME}_PYRC_FILES)
        message(">>>     Sub ${PLUGIN_NAME}-installer-${n}")
        add_custom_target(${PLUGIN_NAME}-installer-${n} ALL DEPENDS ${${NAME}_PYUI_FILES} ${${NAME}_PYRC_FILES})
        add_dependencies(${PLUGIN_NAME}-installer ${PLUGIN_NAME}-installer-${n})
    endif()


    foreach(INSTALL_FILE ${${NAME}_PY_FILES} ${${NAME}_IMAGE_FILES} ${${NAME}_META_FILES} ${${NAME}_PYUI_FILES} ${${NAME}_PYRC_FILES} ${${NAME}_UI_FILES} ${${NAME}_QML_FILES})
        install(FILES ${INSTALL_FILE} DESTINATION "${QGIS_PYPLUGINS_DIR}/${SUBDIR}/")
    endforeach()
endmacro()

set(LOCAL_PLUGINS
    fTools
    GdalTools
    processing
    db_manager
)

foreach(PLUGIN ${LOCAL_PLUGINS})
    info_msg("Add local py plugin ${PLUGIN}")
    add_subdirectory(${PLUGIN})
endforeach()

# NOTE: Keep in sync with opt/ppa_prepare.py
set(REMOTE_PLUGINS
#    "MetaSearch Catalogue Client"
    "QuickMapServices"
    "QTiles"
#    "RuGeocoder"
    "NextGIS Connect"
#    "QNetwork"
#    "IdentifyPlus"
)

# 1. get xml
file(DOWNLOAD http://plugins.qgis.org/plugins/plugins.xml?qgis=${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR} ${CMAKE_CURRENT_BINARY_DIR}/repos/0.qgis_repo.xml)
file(DOWNLOAD http://nextgis.ru/programs/qgis/qgis-repo.xml?qgis=${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR} ${CMAKE_CURRENT_BINARY_DIR}/repos/1.nextgis_repo.xml)

file(REMOVE_RECURSE ${CMAKE_CURRENT_BINARY_DIR}/remote_plugins)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/remote_plugins)

foreach(PLUGIN ${REMOTE_PLUGINS})
    info_msg("Add remote py plugin ${PLUGIN}")

    string(REPLACE " " "_" OUT_NAME ${PLUGIN})

    # Check local copy of plugins
    if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${OUT_NAME}.zip)
        file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/${OUT_NAME}.zip DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/zip_files)
    else()

        # 2. parse xml and get url to zips
        execute_process(COMMAND ${PYTHON_EXECUTABLE}
            ${CMAKE_SOURCE_DIR}/scripts/process_repo_xml.py ${PLUGIN} ${CMAKE_CURRENT_BINARY_DIR}/repos
            OUTPUT_VARIABLE PACKAGE_DETAILS
            OUTPUT_STRIP_TRAILING_WHITESPACE
        )

        list(GET PACKAGE_DETAILS 0 DOWNLOAD_URL)
        list(GET PACKAGE_DETAILS 1 PLG_VERSION)

        if(DOWNLOAD_URL)
            # 3. download zips
            if(NOT EXISTS ${CMAKE_CURRENT_BINARY_DIR}/zip_files/${OUT_NAME}.zip)
                warning_msg("Download ${DOWNLOAD_URL} ...")
                file(DOWNLOAD ${DOWNLOAD_URL} ${CMAKE_CURRENT_BINARY_DIR}/zip_files/${OUT_NAME}.zip SHOW_PROGRESS)
            endif()
        endif()
    endif()

    if(EXISTS ${CMAKE_CURRENT_BINARY_DIR}/zip_files/${OUT_NAME}.zip)
        execute_process(COMMAND ${CMAKE_COMMAND} -E tar xzf "${CMAKE_CURRENT_BINARY_DIR}/zip_files/${OUT_NAME}.zip"
            WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/remote_plugins)
    endif()

endforeach()

# 4. extract zips to install directory via install
install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/remote_plugins/ DESTINATION ${QGIS_PYPLUGINS_DIR})
