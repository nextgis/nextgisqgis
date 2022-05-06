################################################################################
# Project:  NextGIS GIS libraries
# Purpose:  CMake build scripts
# Copyright (C) 2022, NextGIS <info@nextgis.com>
#
# This script is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This script is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this script.  If not, see <http://www.gnu.org/licenses/>.
################################################################################

IF(EXISTS PYQT5_VERSION_STR)
  # Already in cache, be silent
  SET(PYQT5_FOUND TRUE)
ELSE(EXISTS PYQT5_VERSION_STR)

  FIND_FILE(_find_pyqt5_py FindPyQt5.py PATHS ${CMAKE_MODULE_PATH} NO_CMAKE_FIND_ROOT_PATH)

  EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} ${_find_pyqt5_py} OUTPUT_VARIABLE pyqt_config)
  IF(pyqt_config)
    STRING(REGEX REPLACE ".*\npyqt_version_str:([^\n]+).*$" "\\1" PYQT5_VERSION_STR ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_mod_dir:([^\n]+).*$" "\\1" PYQT5_MOD_DIR ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_sip_dir:([^\n]+).*$" "\\1" PYQT5_SIP_DIR ${pyqt_config})
    IF(EXISTS ${PYQT5_SIP_DIR}/Qt5)
      SET(PYQT5_SIP_DIR ${PYQT5_SIP_DIR}/Qt5)
    ENDIF(EXISTS ${PYQT5_SIP_DIR}/Qt5)
    STRING(REGEX REPLACE ".*\npyqt_sip_flags:([^\n]+).*$" "\\1" PYQT5_SIP_FLAGS ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_bin_dir:([^\n]+).*$" "\\1" PYQT5_BIN_DIR ${pyqt_config})
    STRING(REGEX REPLACE ".*\npyqt_sip_module:([^\n]+).*$" "\\1" PYQT5_SIP_IMPORT ${pyqt_config})
    SET(PYQT5_FOUND TRUE)
  ENDIF(pyqt_config)

  IF(PYQT5_FOUND)
    IF(NOT PyQt5_FIND_QUIETLY)
      MESSAGE(STATUS "Found PyQt5 version: ${PYQT5_VERSION_STR}")
    ENDIF(NOT PyQt5_FIND_QUIETLY)
  ELSE(PYQT5_FOUND)
    IF(PyQt5_FIND_REQUIRED)
      MESSAGE(FATAL_ERROR "Could not find PyQt5")
    ENDIF(PyQt5_FIND_REQUIRED)
  ENDIF(PYQT5_FOUND)

ENDIF(EXISTS PYQT5_VERSION_STR)
