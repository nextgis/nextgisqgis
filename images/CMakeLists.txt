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

if(WITH_DESKTOP)
    if(OSX_FRAMEWORK)
        file(GLOB ICONS "icons/*.icns")
        install(FILES ${ICONS} DESTINATION ${INSTALL_SHARE_DIR})
    endif()

    set(SVG_DIRS
        svg/accommodation
        svg/amenity
        svg/arrows
        svg/backgrounds
        svg/components
        svg/crosses
        svg/emergency
        svg/entertainment
        svg/food
        svg/geometric
        svg/gpsicons
        svg/health
        svg/icon
        svg/landmark
        svg/money
        svg/religion
        svg/services
        svg/shopping
        svg/sport
        svg/symbol
        svg/tourist
        svg/transport
        svg/wind_roses
    )

    foreach(SVG_DIR ${SVG_DIRS})
        file(GLOB IMAGES "${SVG_DIR}/*.svg")
        install(FILES ${IMAGES} DESTINATION ${INSTALL_SHARE_DIR}/${SVG_DIR})
    endforeach()
endif()
