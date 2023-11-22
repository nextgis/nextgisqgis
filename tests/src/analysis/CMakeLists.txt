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
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
  ${CMAKE_SOURCE_DIR}/src/test
)

if(HAVE_OPENCL)
    include_directories(SYSTEM ${OpenCL_INCLUDE_DIRS})
endif()

#############################################################
# Tests:
set(TESTS
 testqgsgeometrysnapper.cpp
 testqgsinterpolator.cpp
# testqgsprocessingalgspt1.cpp
# testqgsprocessingalgspt2.cpp
# testqgsprocessingmodelalgorithm.cpp
 testqgszonalstatistics.cpp
 #testqgsrastercalculator.cpp
 testqgsreclassifyutils.cpp
 #testqgsalignraster.cpp
 testqgsnetworkanalysis.cpp
 testqgsninecellfilters.cpp
 #testqgsmeshcalculator.cpp
 #testqgsmeshcontours.cpp
 testqgstriangulation.cpp
)
if(HAVE_GSL)
  set(TESTS ${TESTS} testqgsgcptransformer.cpp)
endif()

foreach(TESTSRC ${TESTS})
    add_qgis_test(${TESTSRC} MODULE analysis LINKEDLIBRARIES ${NG_PREFIX}qgis_analysis)
endforeach(TESTSRC)
#add_qgis_test(testqgsprocessing.cpp MODULE analysis LINKEDLIBRARIES ${NG_PREFIX}qgis_analysis LABELS "POSTGRES")
