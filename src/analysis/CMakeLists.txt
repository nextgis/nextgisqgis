################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Author:   Dmitry Baryshnikov, dmitry.baryshnikov@nexgis.com
################################################################################
# Copyright (C) 2017-2018, NextGIS <info@nextgis.com>
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

# Prepare_parser targets
add_flex_files_prefix(raster raster/qgsrastercalclexer.ll)
# Disable warnings
if(MSVC)
    if(PEDANTIC)
        # 4127 expression is constant
        # 4702 unreachable code
        set_source_files_properties(qgsrastercalcparser.cpp PROPERTIES COMPILE_FLAGS "-wd4127 -wd4702")
    endif()
else()
  set_source_files_properties(qgsrastercalcparser.cpp PROPERTIES COMPILE_FLAGS -w)
endif()

add_bison_files_prefix(raster raster/qgsrastercalcparser.yy)

set(QGIS_ANALYSIS_SRCS
  interpolation/qgsgridfilewriter.cpp
  interpolation/qgsidwinterpolator.cpp
  interpolation/qgsinterpolator.cpp
  interpolation/qgstininterpolator.cpp
  interpolation/Bezier3D.cc
  interpolation/CloughTocherInterpolator.cc
  interpolation/DualEdgeTriangulation.cc
  interpolation/HalfEdge.cc
  interpolation/Line3D.cc
  interpolation/LinTriangleInterpolator.cc
  interpolation/MathUtils.cc
  interpolation/NormVecDecorator.cc
  interpolation/Node.cc
  interpolation/ParametricLine.cc
  interpolation/Point3D.cc
  interpolation/TriangleInterpolator.cc
  interpolation/Triangulation.cc
  interpolation/TriDecorator.cc
  interpolation/Vector3D.cc

  raster/qgsalignraster.cpp
  raster/qgsninecellfilter.cpp
  raster/qgsruggednessfilter.cpp
  raster/qgsderivativefilter.cpp
  raster/qgshillshadefilter.cpp
  raster/qgsslopefilter.cpp
  raster/qgsaspectfilter.cpp
  raster/qgstotalcurvaturefilter.cpp
  raster/qgsrelief.cpp
  raster/qgsrastercalcnode.cpp
  raster/qgsrastercalculator.cpp
  raster/qgsrastermatrix.cpp
  vector/mersenne-twister.cpp
  vector/qgsgeometryanalyzer.cpp
  vector/qgspointsample.cpp
  vector/qgstransectsample.cpp
  vector/qgszonalstatistics.cpp
  vector/qgsoverlayanalyzer.cpp

  # openstreetmap/qgsosmbase.cpp
  # openstreetmap/qgsosmdatabase.cpp
  # openstreetmap/qgsosmdownload.cpp
  # openstreetmap/qgsosmimport.cpp
)

set(QGIS_ANALYSIS_SRCS ${QGIS_ANALYSIS_SRCS}
    qgsrastercalcparser.cpp
    flex_qgsrastercalclexer.cpp
)

include_directories(BEFORE raster)

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
    set_source_files_properties(
        interpolation/qgstininterpolator.cpp
        interpolation/NormVecDecorator.cc
        interpolation/CloughTocherInterpolator.cc
        PROPERTIES COMPILE_FLAGS "-Wno-overloaded-virtual"
    )
endif()

if(NOT PREPARE_ONLY)
    QT4_WRAP_CPP(QGIS_ANALYSIS_MOC_SRCS ${QGIS_ANALYSIS_MOC_HDRS})
endif()

# install headers

set(QGIS_ANALYSIS_HDRS
  raster/qgsalignraster.h
  raster/qgsaspectfilter.h
  raster/qgsderivativefilter.h
  raster/qgshillshadefilter.h
  raster/qgsninecellfilter.h
  raster/qgsrastercalculator.h
  raster/qgsrelief.h
  raster/qgsruggednessfilter.h
  raster/qgsslopefilter.h
  raster/qgsrastermatrix.h
  raster/qgsrastercalcnode.h
  raster/qgstotalcurvaturefilter.h

  vector/qgsgeometryanalyzer.h
  vector/qgszonalstatistics.h
  vector/qgsoverlayanalyzer.h

  interpolation/qgsinterpolator.h
  interpolation/qgsgridfilewriter.h
  interpolation/qgsidwinterpolator.h
  interpolation/qgstininterpolator.h
  interpolation/Bezier3D.h
  interpolation/ParametricLine.h
  interpolation/CloughTocherInterpolator.h
  interpolation/TriangleInterpolator.h
  interpolation/Point3D.h
  interpolation/Vector3D.h
  interpolation/DualEdgeTriangulation.h
  interpolation/Node.h
  interpolation/TriDecorator.h
  interpolation/Triangulation.h
  interpolation/HalfEdge.h
  interpolation/LinTriangleInterpolator.h
  interpolation/NormVecDecorator.h
  interpolation/Line3D.h

  # openstreetmap/qgsosmbase.h
  # openstreetmap/qgsosmdatabase.h
  # openstreetmap/qgsosmdownload.h
  # openstreetmap/qgsosmimport.h
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../core/
    ${CMAKE_CURRENT_SOURCE_DIR}/../core/geometry
    ${CMAKE_CURRENT_SOURCE_DIR}/../core/raster
    ${CMAKE_CURRENT_SOURCE_DIR}/../core/symbology-ng
    interpolation
)

if(NOT PREPARE_ONLY)
set(LIB_NAME ${NG_PREFIX}qgis_analysis)

add_library(${LIB_NAME} SHARED ${QGIS_ANALYSIS_SRCS} ${QGIS_ANALYSIS_MOC_SRCS} ${QGIS_ANALYSIS_HDRS})

target_compile_definitions (${LIB_NAME} PRIVATE "ANALYSIS_EXPORT=${DLLEXPORT}")
target_compile_definitions (${LIB_NAME} INTERFACE "ANALYSIS_EXPORT=${DLLIMPORT}")
# set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 11)

target_link_libraries(${LIB_NAME} PRIVATE ${NG_PREFIX}qgis_core)
# target_link_extlibraries(${LIB_NAME})
# set(TARGET_LINK_LIB ${TARGET_LINK_LIB} ${LIB_NAME} PARENT_SCOPE)

if(OSX_FRAMEWORK)
    set_target_properties(${LIB_NAME} PROPERTIES
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER org.qgis.qgis2_analysis
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        PUBLIC_HEADER "${QGIS_ANALYSIS_HDRS}"
        LINK_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}"
    )
endif()

set_target_properties(${LIB_NAME} PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#generate unversioned libs for android
set_target_properties(${LIB_NAME} PROPERTIES
    VERSION ${QGIS_VERSION}
    SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR}
)

# install
if(OSX_FRAMEWORK)
    execute_process(
        COMMAND ${CMAKE_COMMAND} -E create_symlink ../../Applications/${QGIS_APP_NAME}.app/Contents/Frameworks/${LIB_NAME}.framework ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework
    )
endif()

if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
        RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
        LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
        FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
    )

    if(OSX_FRAMEWORK)
        install(FILES ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework DESTINATION ${INSTALL_LIB_DIR2})
    endif()
endif()

if(NOT SKIP_INSTALL_HEADERS AND NOT SKIP_INSTALL_ALL)
    install(FILES ${QGIS_ANALYSIS_HDRS} DESTINATION ${INSTALL_INC_DIR})
endif()

endif(NOT PREPARE_ONLY)
