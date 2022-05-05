################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
# Copyright (C) 2022, NextGIS <info@nextgis.com>
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

set(QGISPYTHON_SRCS qgispython.cpp qgspythonutilsimpl.cpp)

add_library (${NG_PREFIX}qgispython SHARED ${QGISPYTHON_SRCS})

# require c++17
target_compile_features(${NG_PREFIX}qgispython PRIVATE cxx_std_17)

target_include_directories(${NG_PREFIX}qgispython PUBLIC
  ${CMAKE_SOURCE_DIR}/src/python
  ${CMAKE_BINARY_DIR}/src/python
)
target_include_directories(${NG_PREFIX}qgispython SYSTEM PRIVATE
  ${Python3_INCLUDE_DIRS}
)

set_target_properties(${NG_PREFIX}qgispython PROPERTIES
  CLEAN_DIRECT_OUTPUT 1
)

#generate unversioned libs for android
if (NOT ANDROID)
  set_target_properties(${NG_PREFIX}qgispython PROPERTIES
    VERSION ${COMPLETE_VERSION}
    SOVERSION ${COMPLETE_VERSION}
  )
endif()

target_link_libraries(${NG_PREFIX}qgispython
  ${NG_PREFIX}qgis_core
  ${Python3_LIBRARIES}
  ${OPENPTY_LIBRARY}
)

GENERATE_EXPORT_HEADER(
   ${NG_PREFIX}qgispython
   BASE_NAME PYTHON
   EXPORT_FILE_NAME qgis_python.h
 )

if (APPLE)
  set_target_properties(${NG_PREFIX}qgispython PROPERTIES BUILD_WITH_INSTALL_RPATH TRUE)
endif()

install(TARGETS ${NG_PREFIX}qgispython
  RUNTIME DESTINATION ${INSTALL_BIN_DIR}
  LIBRARY DESTINATION ${INSTALL_LIB_DIR}
)
