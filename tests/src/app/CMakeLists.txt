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

# Don't forget to include output directory, otherwise
# the UI file won't be wrapped!
include_directories(
  ${CMAKE_SOURCE_DIR}/src/test
  ${CMAKE_CURRENT_BINARY_DIR}
  
)

if(IS_MULTI_CONFIG_GENERATOR)
    include_directories(
        ${CMAKE_BINARY_DIR}/src/app/${NG_PREFIX}qgis_app_autogen/include_${CMAKE_BUILD_TYPE}
    )
else()
    include_directories(
        ${CMAKE_BINARY_DIR}/src/app/${NG_PREFIX}qgis_app_autogen/include
    )
endif()

set(TESTS
  testqgisapp.cpp
  testqgsappbrowserproviders.cpp
  #testqgisappclipboard.cpp
  testqgisappdockwidgets.cpp
  #testqgsattributetable.cpp
  #testqgsapplocatorfilters.cpp
  #testqgsdecorationscalebar.cpp
  #testqgsfieldcalculator.cpp
  #testqgsgeoreferencer.cpp
  testqgsmaptooleditannotation.cpp
  #testqgsmaptoolidentifyaction.cpp
  testqgsmaptoollabel.cpp
  testqgsmaptoolselect.cpp
  #testqgsmaptoolreshape.cpp
  testqgsmaptoolrotatefeature.cpp
  #testqgsmaptoolscalefeature.cpp
  testqgsmaptoolcircularstring.cpp
  #testqgsmaptooleditmesh.cpp
  testqgsmaptoolmovefeature.cpp
  testqgsmaptoolellipse.cpp
  testqgsmaptoolcircle.cpp
  testqgsmaptoolrectangle.cpp
  testqgsmaptoolregularpolygon.cpp
  testqgsmaptoolsplitparts.cpp
  #testqgsmaptoolsplitfeatures.cpp
  #testqgsmeasuretool.cpp
  #testqgsmeasurebearingtool.cpp
  #testqgsvertextool.cpp
  testqgsvectorlayersaveasdialog.cpp
  testqgsmaptoolreverseline.cpp
  testqgsmaptooltrimextendfeature.cpp
  #testqgsprojectproperties.cpp
  testqgsapplayoutvaliditychecks.cpp
  #testqgsmeshcalculatordialog.cpp
  #testqgsgpsinformationwidget.cpp
  testqgslabelpropertydialog.cpp
)
if (WITH_BINDINGS)
  #set(TESTS ${TESTS} testqgisapppython.cpp)
endif()

foreach(TESTSRC ${TESTS})
  add_qgis_test(${TESTSRC} MODULE app LINKEDLIBRARIES ${NG_PREFIX}qgis_app)
endforeach(TESTSRC)

add_subdirectory(maptooladdfeaturepoint)
add_subdirectory(maptooladdfeatureline)