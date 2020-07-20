################################################################################
# Copyright (C) 2020, NextGIS <info@nextgis.com>
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

INCLUDE_DIRECTORIES(
  ${CMAKE_SOURCE_DIR}/src/headlessrender

  ${CMAKE_SOURCE_DIR}/src/core
  ${CMAKE_SOURCE_DIR}/src/core/annotations
  ${CMAKE_SOURCE_DIR}/src/core/auth
  ${CMAKE_SOURCE_DIR}/src/core/expression
  ${CMAKE_SOURCE_DIR}/src/core/gps
  ${CMAKE_SOURCE_DIR}/src/core/dxf
  ${CMAKE_SOURCE_DIR}/src/core/geometry
  ${CMAKE_SOURCE_DIR}/src/core/geocms/geonode
  ${CMAKE_SOURCE_DIR}/src/core/metadata
  ${CMAKE_SOURCE_DIR}/src/core/mesh
  ${CMAKE_SOURCE_DIR}/src/core/numericformats
  ${CMAKE_SOURCE_DIR}/src/core/labeling
  ${CMAKE_SOURCE_DIR}/src/core/layertree
  ${CMAKE_SOURCE_DIR}/src/core/locator
  ${CMAKE_SOURCE_DIR}/src/core/numericformats
  ${CMAKE_SOURCE_DIR}/src/core/pal
  ${CMAKE_SOURCE_DIR}/src/core/providers/memory
  ${CMAKE_SOURCE_DIR}/src/core/raster
  ${CMAKE_SOURCE_DIR}/src/core/scalebar
  ${CMAKE_SOURCE_DIR}/src/core/symbology
  ${CMAKE_SOURCE_DIR}/src/core/effects
  ${CMAKE_SOURCE_DIR}/src/core/validity
  ${CMAKE_SOURCE_DIR}/src/core/vectortile

  ${CMAKE_BINARY_DIR}/src/core
)

INCLUDE_DIRECTORIES(
  ${CMAKE_SOURCE_DIR}/external/nlohmann
)

if (NOT PREPARE_ONLY)

  set(LIB_NAME ${NG_PREFIX}qgis_hrlib)
  set(APP_NAME ${NG_PREFIX}qgis_hrapp)

  ADD_LIBRARY(${LIB_NAME} lib.cpp)
  TARGET_LINK_LIBRARIES(${LIB_NAME} ${NG_PREFIX}qgis_core)

  target_compile_definitions (${LIB_NAME} PRIVATE "HEADLESSRENDER_EXPORT=${DLLEXPORT}")
  target_compile_definitions (${LIB_NAME} INTERFACE "HEADLESSRENDER_EXPORT=${DLLIMPORT}")

  ADD_EXECUTABLE(${APP_NAME} app.cpp)
  TARGET_LINK_LIBRARIES(${APP_NAME} ${LIB_NAME})

  if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${LIB_NAME}
      EXPORT ${PACKAGE_UPPER_NAME}Targets
      LIBRARY DESTINATION ${INSTALL_LIB_DIR}
      INCLUDES DESTINATION ${INSTALL_INC_DIR}
    )
  endif()

  if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)
    install(TARGETS ${APP_NAME} RUNTIME DESTINATION ${INSTALL_BIN_DIR})
  endif()

endif()


