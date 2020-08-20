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

# locate native libs

IF (IOS)
  # No native library for IOS
  RETURN()
ENDIF(IOS)


SET(NATIVE_LINK_LIBS)

IF(UNIX AND NOT APPLE AND NOT ANDROID)
  FIND_PACKAGE(Qt5DBus REQUIRED)
ENDIF(UNIX AND NOT APPLE AND NOT ANDROID)

IF(APPLE)
  SET(APPLE_LIB_LIST ApplicationServices CoreFoundation IOKit AppKit)
  FOREACH(_lib ${APPLE_LIB_LIST})
    STRING(TOUPPER ${_lib} _lib_var)
    # prefer /System/Library/Frameworks, in case CMAKE_FIND_FRAMEWORK=LAST, etc.
    FIND_LIBRARY(APPLE_${_lib_var}_LIBRARY
      NAMES ${_lib}
      PATHS /System/Library/Frameworks
      NO_DEFAULT_PATH
    )
    # if not found, drop back to standard find paths
    FIND_LIBRARY(APPLE_${_lib_var}_LIBRARY ${_lib})

    IF(NOT APPLE_${_lib_var}_LIBRARY)
      MESSAGE(FATAL_ERROR "Couldn't find Apple's '${_lib}' framework or library")
    ENDIF(NOT APPLE_${_lib_var}_LIBRARY)

    LIST(APPEND NATIVE_LINK_LIBS "-weak_framework ${_lib}")
  ENDFOREACH(_lib ${APPLE_LIB_LIST})
ENDIF(APPLE)


#############################################################
# sources

SET(QGIS_NATIVE_SRCS
  qgsnative.cpp
)

SET(QGIS_NATIVE_HDRS
  qgsnative.h
)

IF(APPLE)
  SET(QGIS_APP_OBJC_SRCS
    mac/cocoainitializer.mm
    mac/qgsmacnative.mm
  )

  SET_SOURCE_FILES_PROPERTIES(${QGIS_APP_OBJC_SRCS} PROPERTIES COMPILE_FLAGS "-x objective-c++")

  SET(QGIS_NATIVE_SRCS ${QGIS_NATIVE_SRCS}
    ${QGIS_APP_OBJC_SRCS}
  )
  SET (QGIS_NATIVE_HDRS ${QGIS_NATIVE_HDRS}
    mac/qgsmacnative.h
    mac/cocoainitializer.h
  )
ENDIF(APPLE)

IF(MSVC)
  SET(QGIS_NATIVE_SRCS ${QGIS_NATIVE_SRCS}
    ../../external/wintoast/src/wintoastlib.cpp
    win/qgswinnative.cpp
  )
  SET (QGIS_NATIVE_HDRS ${QGIS_NATIVE_HDRS}
     win/qgswinnative.h
  )
ENDIF(MSVC)

IF(UNIX AND NOT APPLE AND NOT ANDROID)
  SET(QGIS_NATIVE_SRCS ${QGIS_NATIVE_SRCS}
    linux/qgslinuxnative.cpp
  )
  SET (QGIS_NATIVE_HDRS ${QGIS_NATIVE_HDRS}
     linux/qgslinuxnative.h
  )
ENDIF(UNIX AND NOT APPLE AND NOT ANDROID)

INCLUDE_DIRECTORIES(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_BINARY_DIR}
)

IF(MSVC)
  INCLUDE_DIRECTORIES(SYSTEM
      ../../external/wintoast/src
  )
ENDIF(MSVC)

#############################################################
# qgis_native library
if (NOT PREPARE_ONLY)

    SET(LIB_NAME ${NG_PREFIX}qgis_native)
    SET(TARGETS ${TARGETS} ${LIB_NAME} PARENT_SCOPE)
    
    ADD_LIBRARY(${LIB_NAME} SHARED ${QGIS_NATIVE_SRCS} ${QGIS_NATIVE_HDRS})
    SET_PROPERTY(TARGET ${LIB_NAME} PROPERTY POSITION_INDEPENDENT_CODE ON)

    GENERATE_EXPORT_HEADER(
       ${LIB_NAME}
       BASE_NAME NATIVE
       EXPORT_FILE_NAME qgis_native.h
    )

    SET(QGIS_NATIVE_HDRS ${QGIS_NATIVE_HDRS} ${CMAKE_CURRENT_BINARY_DIR}/qgis_native.h)

    IF(APPLE)
      SET_TARGET_PROPERTIES(${LIB_NAME} PROPERTIES
        CLEAN_DIRECT_OUTPUT 1
        FRAMEWORK 1
        FRAMEWORK_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}"
        MACOSX_FRAMEWORK_INFO_PLIST "${CMAKE_SOURCE_DIR}/mac/framework.info.plist.in"
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${COMPLETE_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER org.qgis.qgis3_native
        BUILD_WITH_INSTALL_RPATH TRUE
        PUBLIC_HEADER "${QGIS_NATIVE_HDRS}"
        LINK_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}"
      )
    ENDIF(APPLE)

    #generate unversioned libs for android
    IF(NOT ANDROID)
      SET_TARGET_PROPERTIES(${LIB_NAME} PROPERTIES
        VERSION ${COMPLETE_VERSION}
        SOVERSION ${COMPLETE_VERSION}
      )
    ENDIF(NOT ANDROID)

    TARGET_LINK_LIBRARIES(${LIB_NAME}
        ${Qt5Core_LIBRARIES}
        ${Qt5Gui_LIBRARIES}
        "${NATIVE_LINK_LIBS}"
        )

    IF (UNIX AND NOT APPLE AND NOT ANDROID)
      TARGET_LINK_LIBRARIES(${LIB_NAME} Qt5::DBus)
    ENDIF (UNIX AND NOT APPLE AND NOT ANDROID)

    IF (APPLE)
      FIND_PACKAGE(Qt5MacExtras)

      TARGET_LINK_LIBRARIES(${LIB_NAME} Qt5::MacExtras)
    ENDIF (APPLE)

    IF (MSVC)
      TARGET_LINK_LIBRARIES(${LIB_NAME} shell32)
      TARGET_LINK_LIBRARIES(${LIB_NAME} ${Qt5Widget_LIBRARIES} ${QT_QTMAIN_LIBRARY})
      TARGET_LINK_LIBRARIES(${LIB_NAME} Qt5::WinExtras)
    ENDIF (MSVC)

    # install
    if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)     
        install(TARGETS ${LIB_NAME} 
            EXPORT ${PACKAGE_UPPER_NAME}Targets
            RUNTIME DESTINATION ${INSTALL_BIN_DIR}
            ARCHIVE DESTINATION ${INSTALL_LIB_DIR}
            LIBRARY DESTINATION ${INSTALL_LIB_DIR}
            INCLUDES DESTINATION ${INSTALL_INC_DIR}
            FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        )
        
        install(FILES ${QGIS_NATIVE_HDRS} DESTINATION ${INSTALL_INC_DIR})
    endif()

endif(NOT PREPARE_ONLY)
