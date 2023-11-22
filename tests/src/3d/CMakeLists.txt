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

# Standard includes and utils to compile into all tests.
set (util_SRCS)

#####################################################
# Don't forget to include output directory, otherwise
# the UI file won't be wrapped!
include_directories(${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_SOURCE_DIR}/tests/core #for render checker class
  ${CMAKE_SOURCE_DIR}/src/test
  ${CMAKE_BINARY_DIR}/src/ui
  ${CMAKE_BINARY_DIR}/src/native
  ${CMAKE_CURRENT_BINARY_DIR}
)
include_directories(SYSTEM
  ${QT_INCLUDE_DIR}
  ${GDAL_INCLUDE_DIR}
  ${${QT_VERSION_BASE}_3DEXTRA_INCLUDE_DIR}
)


add_subdirectory(sandbox)

set(TESTS
  testqgs3dmaterial.cpp
#  testqgs3drendering.cpp
#  testqgs3dsymbolregistry.cpp
  testqgs3dutils.cpp
  testqgsaabb.cpp
#  testqgslayout3dmap.cpp
  testqgsmaterialregistry.cpp
#  testqgspointcloud3drendering.cpp
  testqgstessellator.cpp
  testqgstilingscheme.cpp

  testqgs3dutils.cpp
  #testqgs3drendering.cpp
  #testqgslayout3dmap.cpp
  testqgsmaterialregistry.cpp
  testqgs3dmaterial.cpp
  testqgstessellator.cpp
  testqgs3dsymbolregistry.cpp
)


foreach(TESTSRC ${TESTS})
  add_qgis_test(${TESTSRC} MODULE 3d LINKEDLIBRARIES ${NG_PREFIX}qgis_3d)
endforeach(TESTSRC)

