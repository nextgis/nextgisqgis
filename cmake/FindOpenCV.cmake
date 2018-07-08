###############################################################################
# - Try to find OpenCV
# Once done this will define
#
#  OPENCV_FOUND - system has opencv
#  OPENCV_INCLUDE_DIRS - the opencv include directory
#  OPENCV_LIBRARIES - Link these to use opencv
#  OPENCV_VERSION - opencv version
#
#  Copyright (c) 2018, NextGIS <info@nextgis.com>
#
#  Redistribution and use is allowed according to the terms of the New
#  BSD license.
#  For details see the accompanying COPYING-CMAKE-SCRIPTS file.
###############################################################################

#Find OpenCV version by looking at cvver.h or core/version.hpp
find_path(OPENCV_INCLUDE_DIR "version.hpp" PATHS "${OpenCV_DIR}" PATH_SUFFIXES "include" "include/opencv" "include/opencv2" "include/opencv2/core" DOC "")
if(NOT EXISTS ${OPENCV_INCLUDE_DIR})
	find_path(OPENCV_INCLUDE_DIR "cvver.h" PATHS "${OpenCV_DIR}" PATH_SUFFIXES "include" "include/opencv" DOC "")
	if(NOT EXISTS ${OPENCV_INCLUDE_DIR})
        message(FATAL_ERROR "OpenCV version file not found")
	else()
        set(VERSION_FILE ${OPENCV_INCLUDE_DIR}/cvver.h)
	endif()
else()
	set(VERSION_FILE ${OPENCV_INCLUDE_DIR}/version.hpp)
endif()

file(STRINGS "${VERSION_FILE}" OPENCV_VERSION_PARTS REGEX "#define CV_VERSION_[A-Z]+[ ]+" )

string(REGEX MATCH "CV_VERSION_EPOCH[ \t]+([0-9]+)" OPENCV_VERSION_EPOCH "${OPENCV_VERSION_PARTS}")
string(REGEX MATCH "([0-9]+)" OPENCV_VERSION_EPOCH "${OPENCV_VERSION_EPOCH}")
string(REGEX MATCH "CV_VERSION_MAJOR[ \t]+([0-9]+)" OPENCV_VERSION_MAJOR "${OPENCV_VERSION_PARTS}")
string(REGEX MATCH "([0-9]+)" OPENCV_VERSION_MAJOR "${OPENCV_VERSION_MAJOR}")
string(REGEX MATCH "CV_VERSION_MINOR[ \t]+([0-9]+)" OPENCV_VERSION_MINOR "${OPENCV_VERSION_PARTS}")
string(REGEX MATCH "([0-9]+)" OPENCV_VERSION_MINOR "${OPENCV_VERSION_MINOR}")
string(REGEX MATCH "CV_VERSION_REVISION[ \t]+([0-9]+)" OPENCV_VERSION_PATCH "${OPENCV_VERSION_PARTS}")
string(REGEX MATCH "([0-9]+)" OPENCV_VERSION_PATCH "${OPENCV_VERSION_PATCH}")

if(OPENCV_VERSION_EPOCH)
	set(OPENCV_VERSION_PATCH ${OPENCV_VERSION_MINOR})
	set(OPENCV_VERSION_MINOR ${OPENCV_VERSION_MAJOR})
	set(OPENCV_VERSION_MAJOR ${OPENCV_VERSION_EPOCH})
endif()

set(OPENCV_VERSION ${OPENCV_VERSION_MAJOR}.${OPENCV_VERSION_MINOR}.${OPENCV_VERSION_PATCH} CACHE STRING "" FORCE)

if(NOT OPENCV_LIB_COMPONENTS)
    set(OPENCV_LIB_COMPONENTS core imgproc ml highgui)
endif()

if(OPENCV_VERSION VERSION_GREATER 3)
    set(OPENCV_LIB_COMPONENTS ${OPENCV_LIB_COMPONENTS} imgcodecs)
endif()

set(OPENCV_LIBRARY "")
set(OPENCV_FOUND true)

foreach(__CVLIB ${OPENCV_LIB_COMPONENTS})

    find_library(OpenCV_${__CVLIB}_LIBRARY_DEBUG NAMES "${__CVLIB}${CVLIB_SUFFIX}d" "lib${__CVLIB}${CVLIB_SUFFIX}d")
    find_library(OpenCV_${__CVLIB}_LIBRARY_RELEASE NAMES "${__CVLIB}${CVLIB_SUFFIX}" "lib${__CVLIB}${CVLIB_SUFFIX}" "opencv_${__CVLIB}${CVLIB_SUFFIX}" "opencv_${__CVLIB}" "${__CVLIB}")

    if(OpenCV_${__CVLIB}_LIBRARY_DEBUG AND OpenCV_${__CVLIB}_LIBRARY_RELEASE)
        set(OpenCV_${__CVLIB}_LIBRARY debug ${OpenCV_${__CVLIB}_LIBRARY_DEBUG} optimized ${OpenCV_${__CVLIB}_LIBRARY_RELEASE}  CACHE STRING "" FORCE)
    elseif(OpenCV_${__CVLIB}_LIBRARY_DEBUG)
        set(OpenCV_${__CVLIB}_LIBRARY ${OpenCV_${__CVLIB}_LIBRARY_DEBUG}  CACHE STRING "" FORCE)
    elseif(OpenCV_${__CVLIB}_LIBRARY_RELEASE)
        set(OpenCV_${__CVLIB}_LIBRARY ${OpenCV_${__CVLIB}_LIBRARY_RELEASE}  CACHE STRING "" FORCE)
    else()
        set(OPENCV_FOUND false)
    endif()

    if(OpenCV_${__CVLIB}_LIBRARY)
        set(OPENCV_LIBRARY ${OPENCV_LIBRARY} ${OpenCV_${__CVLIB}_LIBRARY})
    endif()
endforeach()

if(NOT OPENCV_FOUND)
    if(NOT OpenCV_FIND_QUIETLY)
        if(OpenCV_FIND_REQUIRED)
            message(FATAL_ERROR "OpenCV required but some headers or libs not found. ${ERR_MSG}")
        else()
            message(STATUS "WARNING: OpenCV was not found. ${ERR_MSG}")
        endif()
    endif()
endif()

set(OPENCV_LIBRARIES ${OPENCV_LIBRARY})
set(OPENCV_INCLUDE_DIRS ${OPENCV_INCLUDE_DIR})

