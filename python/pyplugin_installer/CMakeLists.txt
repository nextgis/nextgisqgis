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

set(QGIS_PLUGININSTALLER_DIR ${QGIS_DATA_SUBDIR}/python/pyplugin_installer)

set(PY_PLUGININSTALLER_FILES
    __init__.py
    installer.py
    installer_data.py
    qgsplugininstallerinstallingdialog.py
    qgsplugininstallerpluginerrordialog.py
    qgsplugininstallerfetchingdialog.py
    qgsplugininstallerrepositorydialog.py
    qgsplugindependenciesdialog.py
    plugindependencies.py
    unzip.py
    version_compare.py
)

# file(GLOB UI_FILES *.ui)
# PYQT_WRAP_UI(PYUI_FILES ${UI_FILES})

PYQT_WRAP_UI(PYUI_FILES
    qgsplugininstallerfetchingbase.ui
    qgsplugininstallerinstallingbase.ui
    qgsplugininstallerpluginerrorbase.ui
    qgsplugininstallerrepositorybase.ui
    qgsplugindependenciesdialogbase.ui
)

add_custom_target(pyplugin-installer ALL DEPENDS ${PYUI_FILES})

add_custom_command(TARGET pyplugin-installer
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E make_directory ${PYTHON_OUTPUT_DIRECTORY}/pyplugin_installer
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
)

foreach(pyfile ${PY_PLUGININSTALLER_FILES} ${PYUI_FILES})
  add_custom_command(TARGET pyplugin-installer
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy ${pyfile} ${PYTHON_OUTPUT_DIRECTORY}/pyplugin_installer
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDS ${pyfile}
  )
endforeach(pyfile)
PY_COMPILE(pyplugin-installer "${PYTHON_OUTPUT_DIRECTORY}/pyplugin_installer")

install(FILES ${PY_PLUGININSTALLER_FILES} ${PYUI_FILES} DESTINATION "${QGIS_PLUGININSTALLER_DIR}")
