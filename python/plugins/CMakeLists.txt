################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
################################################################################
# Copyright (C) 2022, NextGIS <info@nextgis.com>
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

# See ../CMakeLists.txt for info on staged-plugins* and clean-staged-plugins targets
#
# When developing on a plugin, use the following make targets:
#   staged-[plugin_dir_name] - stage specific plugin, regenerating any changed resources
#   clean-staged-[plugin_dir_name] - removes the plugin directory and its contents
#
# NOTE: regular project 'make install' is unaffected

file(WRITE ${CMAKE_BINARY_DIR}/stagecount 0)
set(QGIS_PYPLUGINS_DIR ${QGIS_DATA_SUBDIR}/python/plugins)

macro (PLUGIN_INSTALL plugin subdir )
  file(READ ${CMAKE_BINARY_DIR}/stagecount n)
  math(EXPR n "${n}+1")
  file(WRITE ${CMAKE_BINARY_DIR}/stagecount ${n})

  # regular project build's install command and target
  install(FILES ${ARGN} DESTINATION ${QGIS_PYPLUGINS_DIR}/${plugin}/${subdir})

  set(_cmake ${CMAKE_BINARY_DIR}/python/plugins/${plugin}/stageinstall.cmake)

  if(NOT TARGET zzz-${plugin}-stageinstall)
    add_custom_target(zzz-${plugin}-stageinstall)
    add_custom_target(zzz-${plugin}-depend)
    add_dependencies(zzz-${plugin}-stageinstall zzz-${plugin}-depend)

    add_custom_command(TARGET zzz-${plugin}-stageinstall
      COMMAND ${CMAKE_COMMAND} -P ${_cmake}
    )

    add_custom_target(clean-staged-${plugin}
      COMMAND ${CMAKE_COMMAND} -E remove_directory ${PYTHON_OUTPUT_DIRECTORY}/plugins/${plugin}
    )

    add_dependencies(staged-plugins zzz-${plugin}-stageinstall)
    add_custom_target(staged-${plugin} DEPENDS zzz-${plugin}-stageinstall)
    file(WRITE ${_cmake} "")
  endif()

  add_custom_target(zzz-${plugin}-${n}-depend DEPENDS ${ARGN})
  add_dependencies(zzz-${plugin}-depend zzz-${plugin}-${n}-depend)

  file(APPEND ${_cmake} "file(MAKE_DIRECTORY \"${PYTHON_OUTPUT_DIRECTORY}/plugins/${plugin}/${subdir}\")
")

  foreach(file ${ARGN})
    get_filename_component(_file "${file}" ABSOLUTE)
    file(APPEND ${_cmake} "file(COPY \"${_file}\" DESTINATION \"${PYTHON_OUTPUT_DIRECTORY}/plugins/${plugin}/${subdir}\")
")
  endforeach(file)
endmacro (PLUGIN_INSTALL)

add_subdirectory(processing)

PY_COMPILE(staged-plugins "${PYTHON_OUTPUT_DIRECTORY}/plugins")

# NOTE: Keep in sync with opt/ppa_prepare.py
set(REMOTE_PLUGINS
    "QuickMapServices"
    "QTiles"
    "NextGIS Connect"
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
