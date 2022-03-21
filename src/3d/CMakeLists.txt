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

# sources

SET(QGIS_3D_SRCS
  qgsaabb.cpp
  qgsabstract3dengine.cpp
  qgsabstractvectorlayer3drenderer.cpp
  qgs3danimationsettings.cpp
  qgs3dmapscene.cpp
  qgs3dmapsettings.cpp
  qgs3dutils.cpp
  qgscameracontroller.cpp
  qgscamerapose.cpp
  qgsfeature3dhandler_p.cpp
  qgslayoutitem3dmap.cpp
  qgsoffscreen3dengine.cpp
  qgsphongmaterialsettings.cpp
  qgspointlightsettings.cpp
  qgsraycastingutils_p.cpp
  qgsrulebased3drenderer.cpp
  qgsrulebasedchunkloader_p.cpp
  qgstessellatedpolygongeometry.cpp
  qgstilingscheme.cpp
  qgsvectorlayer3drenderer.cpp
  qgsvectorlayerchunkloader_p.cpp
  qgsmeshlayer3drenderer.cpp
  qgswindow3dengine.cpp

  chunks/qgschunkboundsentity_p.cpp
  chunks/qgschunkedentity_p.cpp
  chunks/qgschunklist_p.cpp
  chunks/qgschunknode_p.cpp
  chunks/qgschunkqueuejob_p.cpp

  processing/qgs3dalgorithms.cpp
  processing/qgsalgorithmtessellate.cpp

  symbols/qgsabstract3dsymbol.cpp
  symbols/qgsbillboardgeometry.cpp
  symbols/qgsline3dsymbol.cpp
  symbols/qgsline3dsymbol_p.cpp
  symbols/qgslinematerial_p.cpp
  symbols/qgslinevertexdata_p.cpp
  symbols/qgsmesh3dsymbol.cpp
  symbols/qgsmesh3dsymbol_p.cpp
  symbols/qgspoint3dbillboardmaterial.cpp
  symbols/qgspoint3dsymbol.cpp
  symbols/qgspoint3dsymbol_p.cpp
  symbols/qgspolygon3dsymbol.cpp
  symbols/qgspolygon3dsymbol_p.cpp

  terrain/qgsdemterraingenerator.cpp
  terrain/qgsdemterraintilegeometry_p.cpp
  terrain/qgsdemterraintileloader_p.cpp
  terrain/qgsflatterraingenerator.cpp
  terrain/qgsonlineterraingenerator.cpp
  terrain/qgsterraindownloader.cpp
  terrain/qgsterrainentity_p.cpp
  terrain/qgsterraingenerator.cpp
  terrain/qgsterraintexturegenerator_p.cpp
  terrain/qgsterraintextureimage_p.cpp
  terrain/qgsterraintileloader_p.cpp
  #terrain/quantizedmeshgeometry.cpp
  #terrain/quantizedmeshterraingenerator.cpp

  mesh/qgsmesh3dgeometry_p.cpp
  mesh/qgsmesh3dentity_p.cpp
  mesh/qgsmesh3dmaterial_p.cpp
  mesh/qgsmeshterraingenerator.cpp

)

SET(QGIS_3D_HDRS
  processing/qgs3dalgorithms.h
  qgs3danimationsettings.h
  qgs3dmapscene.h
  qgs3dmapsettings.h
  qgs3dtypes.h
  qgs3dutils.h
  qgsaabb.h
  qgsabstract3dengine.h
  qgsabstractvectorlayer3drenderer.h
  qgscameracontroller.h
  qgscamerapose.h
  qgslayoutitem3dmap.h
  qgsmeshlayer3drenderer.h
  qgsoffscreen3dengine.h
  qgsphongmaterialsettings.h
  qgspointlightsettings.h
  qgsrulebased3drenderer.h
  qgstessellatedpolygongeometry.h
  qgstilingscheme.h
  qgsvectorlayer3drenderer.h
  qgswindow3dengine.h
  symbols/qgsabstract3dsymbol.h
  symbols/qgsbillboardgeometry.h
  symbols/qgsline3dsymbol.h
  symbols/qgsmesh3dsymbol.h
  symbols/qgspoint3dbillboardmaterial.h
  symbols/qgspoint3dsymbol.h
  symbols/qgspolygon3dsymbol.h
  terrain/qgsdemterraingenerator.h
  terrain/qgsflatterraingenerator.h
  terrain/qgsonlineterraingenerator.h
  terrain/qgsterraindownloader.h
  terrain/qgsterraingenerator.h
  terrain/qgsterraintileloader_p.h
  chunks/qgschunkloader_p.h
  chunks/qgschunkqueuejob_p.h
  mesh/qgsmeshterraingenerator.h
)

SET(QGIS_3D_PRIVATE_HDRS
  qgsrulebasedchunkloader_p.h
  qgsvectorlayerchunkloader_p.h
  chunks/qgschunkboundsentity_p.h
  chunks/qgschunkedentity_p.h
  chunks/qgschunklist_p.h
  chunks/qgschunknode_p.h
  symbols/qgsline3dsymbol_p.h
  symbols/qgslinematerial_p.h
  symbols/qgslinevertexdata_p.h
  symbols/qgsmesh3dsymbol_p.h
  symbols/qgspoint3dsymbol_p.h
  symbols/qgspolygon3dsymbol_p.h
  terrain/qgsdemterraintilegeometry_p.h
  terrain/qgsdemterraintileloader_p.h
  terrain/qgsterrainentity_p.h
  terrain/qgsterraintexturegenerator_p.h
  terrain/qgsterraintextureimage_p.h
  terrain/qgsterraintileentity_p.h
  mesh/qgsmesh3dentity_p.h
  mesh/qgsmesh3dgeometry_p.h
  mesh/qgsmesh3dmaterial_p.h
)

#QT5_ADD_RESOURCES(QGIS_3D_RCC_SRCS shaders.qrc)

# install headers

INCLUDE_DIRECTORIES(
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/chunks
  ${CMAKE_CURRENT_SOURCE_DIR}/mesh
  ${CMAKE_CURRENT_SOURCE_DIR}/symbols
  ${CMAKE_CURRENT_SOURCE_DIR}/terrain
  ${CMAKE_SOURCE_DIR}/src/core/
  ${CMAKE_SOURCE_DIR}/src/core/geometry
  ${CMAKE_SOURCE_DIR}/src/core/labeling
  ${CMAKE_SOURCE_DIR}/src/core/raster
  ${CMAKE_SOURCE_DIR}/src/core/mesh
  ${CMAKE_SOURCE_DIR}/src/core/symbology
  ${CMAKE_SOURCE_DIR}/src/core/effects
  ${CMAKE_SOURCE_DIR}/src/core/metadata
  ${CMAKE_SOURCE_DIR}/src/core/expression
  ${CMAKE_SOURCE_DIR}/src/core/layout
  ${CMAKE_SOURCE_DIR}/src/core/3d
#   ${CMAKE_SOURCE_DIR}/external
#   ${CMAKE_SOURCE_DIR}/external/nlohmann

  ${CMAKE_BINARY_DIR}/src/core
  ${CMAKE_BINARY_DIR}/src/3d
)
INCLUDE_DIRECTORIES(SYSTEM
  ${GEOS_INCLUDE_DIR}
  ${GDAL_INCLUDE_DIR}
  ${SQLITE3_INCLUDE_DIR}
  ${QT5_3DEXTRA_INCLUDE_DIR}
)

#############################################################
# qgis_3d library

if (NOT PREPARE_ONLY)

    SET(LIB_NAME ${NG_PREFIX}qgis_3d)
    SET(TARGETS ${TARGETS} ${LIB_NAME} PARENT_SCOPE)

    ADD_LIBRARY(${LIB_NAME} SHARED ${QGIS_3D_SRCS} ${QGIS_3D_HDRS} ${QGIS_3D_RCC_SRCS} ${QGIS_3D_PRIVATE_HDRS})

    TARGET_LINK_LIBRARIES(${LIB_NAME} 
        Qt5::3DCore 
        Qt5::3DRender 
        Qt5::3DInput 
        Qt5::3DLogic 
	    Qt5::3DExtras 
        Qt5::Xml
        Qt5::Widgets
        Qt5::Concurrent
        Qt5::PrintSupport
    )

    GENERATE_EXPORT_HEADER(
       ${LIB_NAME}
       BASE_NAME 3D
       EXPORT_FILE_NAME qgis_3d.h
    )
    IF(MSVC)
      SET_TARGET_PROPERTIES(${LIB_NAME} PROPERTIES LINK_FLAGS "/FORCE:MULTIPLE")
    ENDIF(MSVC)

    SET(QGIS_3D_HDRS ${QGIS_3D_HDRS} ${CMAKE_CURRENT_BINARY_DIR}/qgis_3d.h)

    IF(APPLE)
      SET_TARGET_PROPERTIES(${LIB_NAME} PROPERTIES
        # no moc headers, messes up PROPERTIES syntax
        CLEAN_DIRECT_OUTPUT 1
        FRAMEWORK 1
        FRAMEWORK_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}"
        MACOSX_FRAMEWORK_INFO_PLIST "${CMAKE_SOURCE_DIR}/mac/framework.info.plist.in"
        MACOSX_FRAMEWORK_SHORT_VERSION_STRING ${COMPLETE_VERSION}
        MACOSX_FRAMEWORK_IDENTIFIER org.qgis.qgis3_3d
        BUILD_WITH_INSTALL_RPATH TRUE
        PUBLIC_HEADER "${QGIS_3D_HDRS}"
        LINK_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}"
      )
      # generated export header does not get copied with PUBLIC_HEADER files
      ADD_CUSTOM_COMMAND(TARGET ${LIB_NAME}
        POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy qgis_3d.h
                "${QGIS_OUTPUT_DIRECTORY}/${QGIS_LIB_SUBDIR}/qgis_3d.framework/Headers"
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        DEPENDS qgis_3d.h
      )
    ENDIF(APPLE)

    #generate unversioned libs for android
    IF (NOT ANDROID)
      SET_TARGET_PROPERTIES(${LIB_NAME} PROPERTIES
        VERSION ${COMPLETE_VERSION}
        SOVERSION ${COMPLETE_VERSION}
        )
    ENDIF (NOT ANDROID)

    TARGET_LINK_LIBRARIES(${LIB_NAME} ${NG_PREFIX}qgis_core)

    # clang-tidy
    IF(CLANG_TIDY_EXE)
      SET_TARGET_PROPERTIES(
        ${LIB_NAME} PROPERTIES
        CXX_CLANG_TIDY "${DO_CLANG_TIDY}"
      )
    ENDIF(CLANG_TIDY_EXE)

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
        
        INSTALL(FILES ${QGIS_3D_HDRS} DESTINATION ${INSTALL_INC_DIR})
    endif()

endif(NOT PREPARE_ONLY)
