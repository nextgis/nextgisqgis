################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
################################################################################
# Copyright (C) 2017-2022, NextGIS <info@nextgis.com>
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

#####################################################
# Don't forget to include output directory, otherwise
# the UI file won't be wrapped!
get_filename_component(PARENT_DIR ../ ABSOLUTE)

include_directories(
  ${PARENT_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/src/test
  ${CMAKE_CURRENT_BINARY_DIR}
)

#############################################################
# Tests:

set(TESTS
  testqgscircle.cpp
  testqgscircularstring.cpp
  testqgscompoundcurve.cpp
  testqgscurvepolygon.cpp
  testqgsellipse.cpp
  testqgslinestring.cpp
  testqgsmulticurve.cpp
  testqgsmultilinestring.cpp
  testqgsmultipoint.cpp
  testqgsmultipolygon.cpp
  testqgsmultisurface.cpp
  testqgspoint.cpp
  testqgspointxy.cpp
  testqgspolygon.cpp
  testqgsquadrilateral.cpp
  testqgsrectangle.cpp
  testqgsregularpolygon.cpp
  testqgstriangle.cpp
  )

foreach(TESTSRC ${TESTS})
  add_qgis_test(${TESTSRC} MODULE core_geometry LINKEDLIBRARIES ${NG_PREFIX}qgis_core)
endforeach(TESTSRC)

add_qgis_test(testqgsgeometry.cpp MODULE core LINKEDLIBRARIES ${NG_PREFIX}qgis_core)
add_qgis_test(testqgsgeometrycollection.cpp MODULE core LINKEDLIBRARIES ${NG_PREFIX}qgis_core)
add_qgis_test(testqgsgeometryutils.cpp MODULE core LINKEDLIBRARIES ${NG_PREFIX}qgis_core)
