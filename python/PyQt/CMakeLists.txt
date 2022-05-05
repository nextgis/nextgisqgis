################################################################################
# Project:  NextGIS QGIS
# Purpose:  CMake build scripts
################################################################################
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

set (QGIS_PYQT_DIR ${QGIS_PYTHON_DIR}/PyQt)

set(PYQT_COMPAT_FILES
  __init__.py
  QtWidgets.py
  QtCore.py
  QtGui.py
  QtPrintSupport.py
  QtWebKit.py
  QtWebKitWidgets.py
  QtNetwork.py
  QtXml.py
  QtSql.py
  QtTest.py
  QtSvg.py
  Qsci.py
  Qt.py
  sip.py
  uic/__init__.py
  uic/pyuic.py
  uic/properties.py
)

add_custom_target(pyqtcompat ALL)
add_dependencies(pyqtcompat pyutils)

set(PYQT_PREFIX PyQt5)

foreach(pyfile ${PYQT_COMPAT_FILES})
  get_filename_component(_dir ${pyfile} PATH)
  set(pyfile ${PYQT_PREFIX}/${pyfile})
  add_custom_command(TARGET pyqtcompat
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E make_directory ${QGIS_PYTHON_OUTPUT_DIRECTORY}/PyQt/${_dir}
    COMMAND ${CMAKE_COMMAND} -E copy ${pyfile} ${QGIS_PYTHON_OUTPUT_DIRECTORY}/PyQt/${_dir}
    WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
    DEPENDS ${pyfile}
  )
  install(FILES ${pyfile} DESTINATION "${QGIS_PYQT_DIR}/${_dir}")
endforeach(pyfile)

PY_COMPILE(pyqtcompat "${PYTHON_OUTPUT_DIRECTORY}")
