################################################################################
# Copyright (C) 2020-2022, NextGIS <info@nextgis.com>
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

# IF (IOS)
#   # No native library for IOS
#   RETURN()
# ENDIF(IOS)


SET(NATIVE_LINK_LIBS)

# IF(UNIX AND NOT APPLE AND NOT ANDROID)
#   FIND_PACKAGE(Qt5DBus REQUIRED)
# ENDIF(UNIX AND NOT APPLE AND NOT ANDROID)

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

    SET(LIB_NAME ${NG_PREFIX}qgis_native)
    SET(TARGETS ${TARGETS} ${LIB_NAME} PARENT_SCOPE)
    
    add_library(${LIB_NAME} SHARED ${QGIS_NATIVE_SRCS} ${QGIS_NATIVE_HDRS})
    SET_PROPERTY(TARGET ${LIB_NAME} PROPERTY POSITION_INDEPENDENT_CODE ON)

    generate_export_header(
       ${LIB_NAME}
       BASE_NAME NATIVE
       EXPORT_FILE_NAME qgis_native.h
    )

    SET(QGIS_NATIVE_HDRS ${QGIS_NATIVE_HDRS} ${CMAKE_CURRENT_BINARY_DIR}/qgis_native.h)

    if(OSX_FRAMEWORK)
      SET_TARGET_PROPERTIES(${LIB_NAME} PROPERTIES
        CLEAN_DIRECT_OUTPUT 1
        FRAMEWORK TRUE
        FRAMEWORK_VERSION ${FRAMEWORK_VERSION}
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${QGIS_VERSION}
        MACOSX_FRAMEWORK_BUNDLE_VERSION ${QGIS_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER "org.qgis.qgis${FRAMEWORK_VERSION}_native"
        XCODE_ATTRIBUTE_INSTALL_PATH "@rpath"
        PUBLIC_HEADER "${QGIS_NATIVE_HDRS}"
        LINK_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}"
      )
    endif()

    set_target_properties(${LIB_NAME} PROPERTIES VERSION ${QGIS_VERSION} SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR})

    target_link_libraries(${LIB_NAME}
        Qt5::Core
        Qt5::Gui
        "${NATIVE_LINK_LIBS}"
        )

    IF (UNIX AND NOT APPLE AND NOT ANDROID)
      TARGET_LINK_LIBRARIES(${LIB_NAME} Qt5::DBus)
    ENDIF (UNIX AND NOT APPLE AND NOT ANDROID)

    IF (APPLE)
    #   FIND_PACKAGE(Qt5MacExtras)

      TARGET_LINK_LIBRARIES(${LIB_NAME} Qt5::MacExtras)
    ENDIF (APPLE)

    IF (MSVC)
      TARGET_LINK_LIBRARIES(${LIB_NAME} 
        shell32
        Qt5::Widgets
        Qt5::WinExtras)
    ENDIF (MSVC)

    # install
    if(OSX_FRAMEWORK)
        add_custom_command(TARGET ${LIB_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E create_symlink ../../Applications/${QGIS_APP_NAME}.app/Contents/Frameworks/${LIB_NAME}.framework ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework
            VERBATIM
        )
    endif()

    if(NOT SKIP_INSTALL_LIBRARIES AND NOT SKIP_INSTALL_ALL)     
        install(TARGETS ${LIB_NAME} 
            RUNTIME DESTINATION ${INSTALL_BIN_DIR} COMPONENT libraries
            LIBRARY DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
            ARCHIVE DESTINATION ${INSTALL_LIB_DIR} COMPONENT libraries
            FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
            PUBLIC_HEADER DESTINATION ${INSTALL_INC_DIR} COMPONENT headers
            # EXPORT ${PACKAGE_UPPER_NAME}Targets
            # RUNTIME DESTINATION ${INSTALL_BIN_DIR}
            # ARCHIVE DESTINATION ${INSTALL_LIB_DIR}
            # LIBRARY DESTINATION ${INSTALL_LIB_DIR}
            # INCLUDES DESTINATION ${INSTALL_INC_DIR}
            # FRAMEWORK DESTINATION ${INSTALL_LIB_DIR}
        )
        if(OSX_FRAMEWORK)
            install(FILES ${PROJECT_BINARY_DIR}/symlinks/${LIB_NAME}.framework DESTINATION ${INSTALL_LIB_DIR2})
        endif()
        
    endif()

    if(NOT SKIP_INSTALL_HEADERS AND NOT SKIP_INSTALL_ALL)
        install(FILES ${QGIS_NATIVE_HDRS} DESTINATION ${INSTALL_INC_DIR})
    endif()

