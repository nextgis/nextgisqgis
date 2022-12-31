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

set(QGIS_3D_SRCS
  qgs3d.cpp
  qgsaabb.cpp
  qgsabstract3dengine.cpp
  qgsabstractvectorlayer3drenderer.cpp
  qgs3danimationsettings.cpp
  qgs3dexportobject.cpp
  qgs3dmapexportsettings.cpp
  qgs3dmapscene.cpp
  qgs3dmapsettings.cpp
  qgs3dsceneexporter.cpp
  qgs3dutils.cpp
  qgscameracontroller.cpp
  qgscamerapose.cpp
  qgsfeature3dhandler_p.cpp
  qgsimagetexture.cpp
  qgslayoutitem3dmap.cpp
  qgsoffscreen3dengine.cpp
  qgspointlightsettings.cpp
  qgsdirectionallightsettings.cpp
  qgsraycastingutils_p.cpp
  qgsrulebased3drenderer.cpp
  qgsrulebasedchunkloader_p.cpp
  qgstessellatedpolygongeometry.cpp
  qgstilingscheme.cpp
  qgsvectorlayer3drenderer.cpp
  qgsvectorlayerchunkloader_p.cpp
  qgsmeshlayer3drenderer.cpp
  qgswindow3dengine.cpp
  qgsskyboxentity.cpp
  qgsskyboxsettings.cpp
  qgsshadowrenderingframegraph.cpp
  qgspostprocessingentity.cpp
  qgspreviewquad.cpp
  qgsshadowsettings.cpp
  qgscolorramptexture.cpp
  qgsrubberband3d.cpp

  qgspointcloudlayer3drenderer.cpp
  qgspointcloudlayerchunkloader_p.cpp

  chunks/qgschunkboundsentity_p.cpp
  chunks/qgschunkedentity_p.cpp
  chunks/qgschunklist_p.cpp
  chunks/qgschunkloader_p.cpp
  chunks/qgschunknode_p.cpp
  chunks/qgschunkqueuejob_p.cpp

  materials/qgsabstractmaterialsettings.cpp
  materials/qgsgoochmaterialsettings.cpp
  materials/qgsmaterialregistry.cpp
  materials/qgsnullmaterialsettings.cpp
  materials/qgsphongmaterialsettings.cpp
  materials/qgsphongtexturedmaterialsettings.cpp
  materials/qgssimplelinematerialsettings.cpp

  processing/qgs3dalgorithms.cpp
  processing/qgsalgorithmtessellate.cpp

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
  symbols/qgspointcloud3dsymbol.cpp
  symbols/qgspointcloud3dsymbol_p.cpp

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

set(QGIS_3D_HDRS
  processing/qgs3dalgorithms.h
  qgs3d.h
  qgs3danimationsettings.h
  qgs3dmapscene.h
  qgs3dmapsettings.h
  qgs3dsceneexporter.h
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
  qgspointlightsettings.h
  qgsdirectionallightsettings.h
  qgsrulebased3drenderer.h
  qgstessellatedpolygongeometry.h
  qgstilingscheme.h
  qgsvectorlayer3drenderer.h
  qgswindow3dengine.h
  qgsskyboxentity.h
  qgsskyboxsettings.h
  qgsshadowrenderingframegraph.h
  qgspostprocessingentity.h
  qgspreviewquad.h
  qgsshadowsettings.h
  qgspointcloudlayer3drenderer.h

  materials/qgsabstractmaterialsettings.h
  materials/qgsgoochmaterialsettings.h
  materials/qgsmaterialregistry.h
  materials/qgsnullmaterialsettings.h
  materials/qgsphongmaterialsettings.h
  materials/qgsphongtexturedmaterialsettings.h
  materials/qgssimplelinematerialsettings.h

  symbols/qgsbillboardgeometry.h
  symbols/qgsline3dsymbol.h
  symbols/qgsmesh3dsymbol.h
  symbols/qgspoint3dbillboardmaterial.h
  symbols/qgspoint3dsymbol.h
  symbols/qgspolygon3dsymbol.h
  symbols/qgspointcloud3dsymbol.h

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

set(QGIS_3D_PRIVATE_HDRS
  qgsrulebasedchunkloader_p.h
  qgsvectorlayerchunkloader_p.h
  qgspointcloudlayerchunkloader_p.h
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
  symbols/qgspointcloud3dsymbol_p.h
  terrain/qgsdemterraintilegeometry_p.h
  terrain/qgsdemterraintileloader_p.h
  terrain/qgsterrainentity_p.h
  terrain/qgsterraintexturegenerator_p.h
  terrain/qgsterraintextureimage_p.h
  terrain/qgsterraintileentity_p.h
  mesh/qgsmesh3dentity_p.h
  mesh/qgsmesh3dgeometry_p.h
  mesh/qgsmesh3dmaterial_p.h
  qgscolorramptexture.h
)

set (QGIS_3D_RCCS  shaders.qrc  ../../resources/3d/textures/textures.qrc)


SET(LIB_NAME ${NG_PREFIX}qgis_3d)
SET(TARGETS ${TARGETS} ${LIB_NAME} PARENT_SCOPE)

add_library(${LIB_NAME} SHARED ${QGIS_3D_SRCS} ${QGIS_3D_HDRS} ${QGIS_3D_RCCS} ${QGIS_3D_PRIVATE_HDRS})

# require c++17
target_compile_features(${LIB_NAME} PRIVATE cxx_std_17)

if (WITH_QT6)
  target_include_directories(${LIB_NAME} SYSTEM PUBLIC
    ${QT6_3DEXTRA_INCLUDE_DIR}
  )
else()
  target_include_directories(${LIB_NAME} SYSTEM PUBLIC
    ${QT5_3DEXTRA_INCLUDE_DIR}
  )
endif()

target_include_directories(${LIB_NAME} PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}
  ${CMAKE_CURRENT_SOURCE_DIR}/chunks
  ${CMAKE_CURRENT_SOURCE_DIR}/materials
  ${CMAKE_CURRENT_SOURCE_DIR}/mesh
  ${CMAKE_CURRENT_SOURCE_DIR}/processing
  ${CMAKE_CURRENT_SOURCE_DIR}/shaders
  ${CMAKE_CURRENT_SOURCE_DIR}/symbols
  ${CMAKE_CURRENT_SOURCE_DIR}/terrain

  ${CMAKE_BINARY_DIR}/src/3d
)

if (WITH_QT6)
  target_link_libraries(${LIB_NAME} Qt6::3DCore Qt6::3DRender Qt6::3DInput Qt6::3DLogic Qt6::3DExtras)
else()
  target_link_libraries(${LIB_NAME} Qt5::3DCore Qt5::3DRender Qt5::3DInput Qt5::3DLogic Qt5::3DExtras)
endif()

GENERATE_EXPORT_HEADER(
   ${LIB_NAME}
   BASE_NAME 3D
   EXPORT_FILE_NAME qgis_3d.h
)

set(QGIS_3D_HDRS ${QGIS_3D_HDRS} ${CMAKE_CURRENT_BINARY_DIR}/qgis_3d.h)

#generate unversioned libs for android
if (NOT ANDROID)
  set_target_properties(${LIB_NAME} PROPERTIES VERSION ${QGIS_VERSION} SOVERSION ${CPACK_PACKAGE_VERSION_MAJOR})
endif()

target_link_libraries(${LIB_NAME} ${NG_PREFIX}qgis_core)

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
