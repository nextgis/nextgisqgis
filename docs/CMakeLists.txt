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

if(NOT OSX_FRAMEWORK)
    add_subdirectory(man)
endif()

if(NOT SKIP_INSTALL_DOCS AND NOT SKIP_INSTALL_ALL)
    set(DOC_FILES
        NEWS
        ${CMAKE_SOURCE_DIR}/COPYING
        BUGS
        CODING
        Exception_to_GPL_for_Qt.txt
    )
    install(FILES ${DOC_FILES} DESTINATION ${INSTALL_DOC_DIR})

    file(DOWNLOAD http://docs.nextgis.ru/_downloads/NextGISQGIS.pdf ${CMAKE_CURRENT_BINARY_DIR}/NextGIS_QGIS_ru.pdf)
    file(DOWNLOAD http://docs.nextgis.com/_downloads/NextGISQGIS.pdf ${CMAKE_CURRENT_BINARY_DIR}/NextGIS_QGIS_en.pdf)

    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/NextGIS_QGIS_ru.pdf ${CMAKE_CURRENT_BINARY_DIR}/NextGIS_QGIS_en.pdf
            DESTINATION ${INSTALL_DOC_DIR})
endif()
