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

INCLUDE_DIRECTORIES(SYSTEM
  ${CMAKE_CURRENT_BINARY_DIR}
)

QT5_WRAP_UI(CRASH_UIS_H qgscrashdialog.ui)

SET(IMAGE_RCCS ../../images/images.qrc)
QT5_ADD_RESOURCES(IMAGE_RCC_SRCS ${IMAGE_RCCS})

# -wd4091 Avoid 'typedef' ignored on left of '' when no variable is declared warning in dbghelp.h
SET_SOURCE_FILES_PROPERTIES(qgsstacktrace.cpp PROPERTIES COMPILE_FLAGS -wd4091)

if (NOT PREPARE_ONLY)
    SET(APP_NAME ${NG_PREFIX}qgiscrashhandler)
    
    ADD_EXECUTABLE(${APP_NAME} WIN32
      main.cpp
      ${CRASH_UIS_H}
      ${CRASH_HDR_MOC}
      ${IMAGE_RCC_SRCS}
      qgscrashdialog.cpp
      qgsstacktrace.cpp
      qgscrashreport.cpp
      #${CMAKE_CURRENT_SOURCE_DIR}/../app/qgis_win32.rc
    )

    TARGET_LINK_LIBRARIES(${APP_NAME}
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        dbghelp
    )
    
    # install
    if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)     
        install(TARGETS ${APP_NAME} 
            RUNTIME DESTINATION ${INSTALL_BIN_DIR}
        )
    endif()

endif(NOT PREPARE_ONLY)