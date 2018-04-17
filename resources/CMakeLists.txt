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

configure_file(ngqgis.desktop.in ${CMAKE_CURRENT_BINARY_DIR}/ngqgis.desktop @ONLY)

if(NOT SKIP_INSTALL_FILES AND NOT SKIP_INSTALL_ALL)
    install(FILES srs.db qgis.db symbology-ng-style.db spatialite.db customization.xml
            DESTINATION ${INSTALL_SHARE_DIR}/resources)
    install(DIRECTORY cpt-city-qgis-min DESTINATION ${INSTALL_SHARE_DIR}/resources)
    install(DIRECTORY themes DESTINATION ${INSTALL_SHARE_DIR}/resources)
    install(DIRECTORY fonts DESTINATION ${INSTALL_SHARE_DIR})
    install(DIRECTORY composer_templates DESTINATION ${INSTALL_SHARE_DIR})
    install(FILES ${CMAKE_BINARY_DIR}/qt.conf DESTINATION ${INSTALL_SHARE_DIR})

    if(UNIX AND NOT OSX_FRAMEWORK)
        install(FILES ${CMAKE_CURRENT_BINARY_DIR}/ngqgis.desktop DESTINATION ${CMAKE_INSTALL_DATADIR}/applications)
    endif()
endif()
