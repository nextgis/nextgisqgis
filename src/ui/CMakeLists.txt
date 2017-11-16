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

file(GLOB QGIS_UIS "${CMAKE_CURRENT_SOURCE_DIR}/*.ui")
file(GLOB SYMBOLLAYER_UIS "${CMAKE_CURRENT_SOURCE_DIR}/symbollayer/*.ui")
file(GLOB EDITORWIDGET_UIS "${CMAKE_CURRENT_SOURCE_DIR}/editorwidgets/*.ui")
file(GLOB PAINTEFFECT_UIS "${CMAKE_CURRENT_SOURCE_DIR}/effects/*.ui")
file(GLOB COMPOSER_UIS "${CMAKE_CURRENT_SOURCE_DIR}/composer/*.ui")
file(GLOB AUTH_UIS "${CMAKE_CURRENT_SOURCE_DIR}/auth/*.ui")
FILE(GLOB RASTER_UIS "${CMAKE_CURRENT_SOURCE_DIR}/raster/*.ui")
FILE(GLOB STYLEDOCK_UIS "${CMAKE_CURRENT_SOURCE_DIR}/styledock/*.ui")

QT4_WRAP_UI(QGIS_UIS_H ${QGIS_UIS} ${SYMBOLLAYER_UIS} ${EDITORWIDGET_UIS} ${PAINTEFFECT_UIS} ${COMPOSER_UIS} ${AUTH_UIS} ${RASTER_UIS} ${STYLEDOCK_UIS})

add_custom_target(ui ALL DEPENDS ${QGIS_UIS_H})
